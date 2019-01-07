# -*- coding: utf-8 -*-
"""
Created on Wed Jul 18 17:13:50 2018

@author: arnik
"""

def binarySearch(seq,number):
    lower=0
    upper= len(seq)-1
    found= False

    while lower<=upper and not found:
        middle = (lower + upper)//2
        if seq[middle] == number:
            found = True
        else:
            if number < seq[middle]:
                upper = middle-1
            else:
                lower = middle+1

    return found
    
          
   
seq= [12,2,3,5,14,23,6]
seq.sort()
print(seq)

result=binarySearch(seq,5)
print(result)