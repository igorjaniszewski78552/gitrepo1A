<<<<<<< HEAD
#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szyfr_cezara.py

def pobierz_klucz():
    try:
        klucz = int(input('Podaj klucz:\n'))
        return klucz % 26
    except ValueError:
        print('Błędny klucz!')
        return 3

def szyfruj_1(tekst, klucz):
    szyfrogram = ''
    for znak in tekst:
        ascii = ord(znak)
        if ascii + klucz > 122 and ascii != 32:
            znak = chr(ascii + klucz - 26)
        elif ascii == 32:
            znak = chr(ascii)
        else:
            znak = chr(ascii + klucz)
        szyfrogram += znak
    print('Szyfrogram:\n', szyfrogram)


def main(args):
    tekst = input('Podaj tekst:\n').lower()
    klucz = pobierz_klucz()
    szyfruj_1(tekst, klucz)
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
=======
#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szyfr_cezara.py

def pobierz_klucz():
    try:
        klucz = int(input('Podaj klucz:\n'))
        return klucz % 26
    except ValueError:
        print('Błędny klucz!')
        return 3

def szyfruj_1(tekst, klucz):
    szyfrogram = ''
    for znak in tekst:
        ascii = ord(znak)
        if ascii + klucz > 122 and ascii != 32:
            znak = chr(ascii + klucz - 26)
        elif ascii == 32:
            znak = chr(ascii)
        else:
            znak = chr(ascii + klucz)
        szyfrogram += znak
    print('Szyfrogram:\n', szyfrogram)


def main(args):
    tekst = input('Podaj tekst:\n').lower()
    klucz = pobierz_klucz()
    szyfruj_1(tekst, klucz)
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
>>>>>>> 58cffd0a80717f5652ba31116e400725c39ba30b
