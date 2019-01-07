# -*- coding: utf-8 -*-
"""
Created on Thu Mar  8 21:14:34 2018

@author: LocalUser
"""
# write a program which finds the greatest difference in the list

def max_difference(a):
   max= a[0]
   min= a[0]
   for i in a:
        if i  > max:
            max = i
        elif i < min:
            min=i
   return max-min
         
a=[2,8,16,4,22]

difference=max_difference(a)
print(difference)