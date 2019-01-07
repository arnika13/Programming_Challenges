#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jan  3 18:36:04 2019

@author: arnikavishwakarma
"""

def selectionSort(mylist):
    for i in range(0,len(mylist)):
        min_element = i
        
        for j in range(i+1, len(mylist)):
            if mylist[min_element] > mylist[j]:
                min_element = j
                
                
        mylist[i],mylist[min_element] = mylist[min_element],mylist[i]
        
        
mylist = [26,54,93,17,77,31,44,55,20]
selectionSort(mylist)
print(mylist)