#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Apr 17 12:34:35 2019

@author: arnikavishwakarma
"""

def reverse_string(string):
    new_string = ''
    n = len(string)
    while n:
        n -= 1
        new_string += string[n]
    return new_string
string = 'Hello World'
print(reverse_string(string))