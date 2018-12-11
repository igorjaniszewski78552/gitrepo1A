#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py

# zdefiniuj klasę Samochod z nast. atrybutami i metodami:
# marka, np. Fiat
# model, np. Tipo
# rok produkcji, np. 2002
# metoda wiek(), która zwróci wiek samochodu w latach
from datetime import date
from osoba_obj import Osoba

class Kierowca(Osoba):
    
    __licznik = 0 #atrybut klas, współdzielony przez wszystkie obiekty
    
    def __init__(self, imie, nazwisko, kategoria):
        super().__init__(imie, nazwisko)
        self.kategoria = kategoria
        Kierowca.__licznik += 1
        
    def __del__(self):
        Kierowca.licznik -= 1
        
    @staticmethod # metoda statyczna
    def KierowcaLicz():
        return Kierowca.__licznik

class Samochod:
    
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rok = rocznik
        self.Kierowca = Kierowca

    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rok

def main(args):
    s1 = Samochod('Fiat', 'Tipo', 2000)
    s2 = Samochod('Peugeot', '308', 2007)
    print(s1.model, s1.wiek())
    print(s2.model, s2.wiek())
    
    k1 = Kierowca('Adam', 'Słodowy', 'B')
    print(k1.KierowcaLicz())
    print (k1.imie, k1.kategoria)
    print(k1.licznik)
    
    k2 = Kierowca('Ewa', 'Bąk', 'BC')
    print(k2.licznik)
    k3 = Kierowca('Bartek', 'Dąb', 'BC')
    print(k1.licznik)
    print(k2.licznik)
    print(k3.licznik)
    
    k3.licznik = 10
    del(k2)
    del(k3)
    print(k1.kierowca.Licz())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
