#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Apr 12 14:49:35 2019

@author: arnikavishwakarma
"""

def countstr(n, bcount, Ccount):
    if bcount < 0 or Ccount < 0:
        return 0
    if n == 0:
        return 1
    if bcount == 0 and Ccount == 0:
        return 1
    
    res = 0
    
    res = countstr(n-1, bcount, Ccount)
    res += countstr(n-1, bcount -1, Ccount)
    res += countstr(n-1, bcount, Ccount-1)
    
    return res
    
n = 4
result = countstr(n, 1, 2)
print(result)