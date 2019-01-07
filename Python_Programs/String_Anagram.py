# -*- coding: utf-8 -*-
"""
Created on Fri Apr  6 20:39:56 2018

@author: arnik
"""
# counting the number of characters deleted inorder to make a tsring anagram

def number_needed(a, b):
    for i in a:
        if i in b:
            b=b.replace(i,"")
            a=a.replace(i,"")
    return len(a)+len(b)

a = input("enter the first string :").strip()
b = input("enter the second string : ").strip()

print(number_needed(a, b))	

     


