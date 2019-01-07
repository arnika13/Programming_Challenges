#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jan  3 18:57:22 2019

@author: arnikavishwakarma
"""

def insertionSort(mylist):
    for i in range(1,len(mylist)):
        key = mylist[i]
        j = i - 1
        
        while j>=0 and key < mylist[j]:
            mylist[j+1] = mylist[j]
            j -= 1
            
        mylist[j+1] = key

mylist = [4,3,2,10,12,1,5,6]

insertionSort(mylist)
print(mylist)