O# -*- coding: utf-8 -*-
"""
Created on Sun Apr 29 18:45:39 2018

@author: arnik
"""
import string

s_lower = set(string.ascii_lowercase)
print(s_lower)

s_upper = set(string.ascii_uppercase)

def pangrams(s):
    
    
    if s_lower <= set(s.lower()) and s_upper <= set(s.upper()):
        return "pangram"
    else:
        return "not pangram"
    
   


s = input("Enter the string : ")
result = pangrams(s)
print(result)