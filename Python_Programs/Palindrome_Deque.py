#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Dec 26 12:34:43 2018

@author: arnikavishwakarma
"""
from pythonds.basic.deque import Deque

def palindrome(string):
    d = Deque()
    
    for i in string:
        d.addRear(i)
        
    while d.size() > 1:
        front = d.removeFront()
        rear = d.removeRear()
        
        if front != rear:
            return False
    return True

print(palindrome('radar'))
print(palindrome('abcdef'))


