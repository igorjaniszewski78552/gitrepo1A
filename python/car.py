#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py

#  zdefiniuj klasę samochod z nast. atrybutami i metodami:
# marka np Fiat
# model np tipo
# rok produkcji, np 2002
# metoda wiek(), która zwróci wiek samochodu w latach
from datetime import date
from osoba_obj import Osoba 

class Kierowca(Osoba:
    
    def __init__(self, imie, nazwisko, kategoria):
    super().__init__(imie, nazwisko)
    self.kategoria = kategoria
    
class Samochod:
    
    def __init__(self, marka, model, rocznik):
        self.marka = marka
        self.model = model
        self.rok = rocznik
        self.kierowca = kierowca
    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rok
        
    



def main(args):
    s1= Samochod('Fiat', 'Tipo', 2000)
    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
