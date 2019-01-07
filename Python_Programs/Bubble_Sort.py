#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jan  3 18:18:30 2019

@author: arnikavishwakarma
"""

def bubbleSort(mylist):
    for i in range(0,len(mylist)-1):
        if mylist[i] > mylist[i+1]:
            mylist[i], mylist[i+1] = mylist[i+1],mylist[i]
            
mylist = [2,1,5,9,6,10]

bubbleSort(mylist)
print(mylist)