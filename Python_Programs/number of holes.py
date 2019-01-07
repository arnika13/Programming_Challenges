# -*- coding: utf-8 -*-
"""
Created on Fri Nov 11 18:00:10 2016

@author: Dell780
"""
"""
one_hole=[0,4,6,9]
two_holes=[8]
"""
import sys
count=0
inputstr = input("Enter the number:")

try:
   val = int(inputstr)
except ValueError:
   print("That's not an integer")
   sys.exit()
   

for i in inputstr:
    if (i=='0' or i=='4' or i=='6' or i=='9'):
        count+=1
    elif (i=='8'):
        count+=2
print("The number of holes are:",count)        
