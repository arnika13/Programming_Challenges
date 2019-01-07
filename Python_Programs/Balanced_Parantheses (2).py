#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Dec 17 22:35:20 2018

@author: arnikavishwakarma
"""
from pythonds.basic.stack import Stack

def isBalancedParantheses(symbolstring):
    s = Stack()
    balanced = True
    pos = 0
    
    while pos < len(symbolstring) and balanced:
        if symbolstring[pos] == "(":
            s.push(symbolstring[pos])
        else:
            if s.isEmpty():
                balanced = False
            else:
                s.pop()
        pos += 1
    if balanced and s.isEmpty():
        return True
    else:
        return False

print(isBalancedParantheses("(((())))"))
print(isBalancedParantheses("(((("))

            
    