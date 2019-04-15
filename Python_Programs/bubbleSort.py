#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Apr 14 17:49:22 2019

@author: arnikavishwakarma
"""

def bubbleSort(arr):
    
    for i in range(0,len(mylist)-1):
        for j in range(0,len(mylist)-i-1):
            if mylist[j] > mylist[j+1]:
                mylist[j], mylist[j+1] = mylist[j+1],mylist[j]
            
mylist = [1,33,27,10,35,12,44,55,3,6]

bubbleSort(mylist)
print(mylist)