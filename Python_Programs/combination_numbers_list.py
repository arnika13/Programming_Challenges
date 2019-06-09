#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue May  7 21:30:26 2019

@author: arnikavishwakarma
"""

from itertools import  permutations

#comb = combinations([1,2,3,4,5],3)
comb = permutations([1,2,3,4,5],2)

for i in list(comb):
    print(i)
    
    