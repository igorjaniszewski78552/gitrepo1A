#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py
#  


def pobierz_liczbe(komunikat='pobierz liczbę: '):
    a = input(kounikat)
    if a.isdigit():
        return int(a)
    return False
def dziel(a, b):
    if b != 0:
        return a / b
    else:
        print('błąd dzielenia przez 0')
    return False
        



def pokaz_liste():
    print('''Lista działań:
          +  – dodawanie
          -  – odejmowanie
          *  – mnożenie
          /  – dzielenie
          // – dzielenie całkowite
          %  – dzielenie modulo
          ^  – potęgowanie
          !  – silnia
          sin – sinus
          cos – cosinus
          koniec – wyjście z programu
          ''')

def main(args):
    
    
    pokaz_liste()
    while True:
        d = input("wybierz działanie")
        if d == '+':
            pass
        elif d == '-':
            pass 
        elif d == '*':
            pass
        elif d == '/':
            a = pobierz_liczbe("podaj dzielną")
            b = pobierz_liczbe("podaj dzielnik")
            if a and b:
                wynik = dziel(a, b)
                if wynik:
                    print(' {} / {} = {}'.format(a, b, wynik))
        elif d == '//':
            pass
        elif d == '%':
            pass
        elif d == '^':
            pass
        elif d == 'l':
            pokaz_liste()
        elif d == 'koniec':
            return 0
        elif d == '!':
            pass
        elif d == 'sin':
            pass
        elif d == 'cos':
            pass
        
        
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
