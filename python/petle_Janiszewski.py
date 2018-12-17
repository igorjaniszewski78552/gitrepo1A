#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle_Janiszewski.py

def cw1():
    suma = 0
    liczba = int(input('podaj liczbę: '))
    while suma<75:
        suma += liczba
        print (suma)
        liczba = int(input('podaj liczbę: '))
    print('suma liczb :', suma)

def cw2():
    x = int(input('podaj dolny zakres'))
    y = int(input('podaj górny zakres'))
    liczba = 0
    for i in range(x, y+1):
        liczba = liczba + 1
        print (i)
        
def main(args):
    cw2()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
