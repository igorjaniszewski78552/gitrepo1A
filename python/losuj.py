#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  losuj.py
#  
from random import randint


def pobierz_liczbe(k='podaj liczbę'):
    a = input(k)
    if a.isdecimal():
        return int (a)
    return False


def pobierz_typy(typy, ile, zakres):
    while ile:
        a = pobierz_liczbe(' podaj typ:  ')
        if type (a) == bool or a > zakres:
            print('błędne dane')
            continue
        if a not in typy:
            typy.adda(a)
            ile -= 1



def losuj(liczby, ile, zakres):
    while ile:
        liczba = randint(0, zakres)
        if not liczby.count(liczba):
            liczby.append(liczba)
            ile -= 1

def main(args):
    ile = pobierz_liczbe("podaj ilość losowanych liczb   ")
    zakres = pobierz_liczbe("podaj górny zakres liczb   ")
    if type(ile) == bool or type(zakres) == bool:
        print ('błędne dane!')
        return 0
    
    
    liczby = [] #definicja pustej liczby
    typy = set() #definicja pustego zbioru
    
    losuj(liczby, ile, zakres)
    print(liczby)
    
    
    
    
    wynik= set(liczby) & typy
    print("Odgadnięto: {}".format(len(wynik)))
    print(liczby)
    print(typy)
    
    
    
    
    
    
    return 0
    
    
    
    
    
    
    
    
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
