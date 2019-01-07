# -*- coding: utf-8 -*-
"""
Created on Fri Apr  6 20:39:56 2018

@author: arnik
"""


def number_needed(a, b):
    for c in a:
        if c in b:
            b=b.replace(c,'',1)
            a=a.replace(c,'',1)
    return len(a)+len(b)

    

a = input("enter the first string :").strip()
b = input("enter the second string : ").strip()

print(number_needed(a, b))	

     


