#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  wykres02.py
#  
import matplotlib.pyplot as plt
from matplotlib.mlab import frange


def main(args):

    #x = frange(-1, 2, 0.15)
    #print(x)
    #y = [a * i + b for i in x]
    
    x = frange(-1, 2, 0.15)
    # f(x) = x / (x+2) d;a x >= 1
    y = []
    for el in x:
        if el <= 0:
            y.append(el / -3)
        elif el < 1:
            y.append(el * el/3)
        else:
            y.append(el /(el+2))
    
    
    plt.plot(x, y)
    plt.title('wykres f(x)')
    plt.grid(True)
    plt.show()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
