# -*- coding: utf-8 -*-
"""
Created on Wed Feb  1 23:34:20 2017

@author: Dell780
"""

#a = 'Puru'
#b = 'Arnika'
a=input("Enter the first string :")
b=input("Enter the second string :")
count = 0
mergedString = ""
totalLength = len(a) + len (b)
a_i = 0
b_i = 0
while (count < totalLength):
    if(a_i < len(a)):
        mergedString = mergedString + a[a_i]
        count += 1
        a_i += 1
    if(b_i< len(b)):
        mergedString = mergedString + b[b_i]
        count += 1 
        b_i += 1
    
print(mergedString)  