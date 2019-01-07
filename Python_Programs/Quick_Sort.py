#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan  4 15:43:34 2019

@author: arnikavishwakarma
"""

def partition(mylist,start,end):
    pivot = mylist[end]
    pIndex = start
    
    for i in range(start, end-1):
        if mylist[i] <= pivot:
            mylist[i],mylist[pIndex] = mylist[pIndex],mylist[i]
            pIndex += 1
            
    mylist[pIndex],mylist[end] = mylist[end], mylist[pIndex]
    return pIndex

def quickSort(mylist,start,end):
    if start < end:
        
        pi = partition(mylist,start,end)
        
        quickSort(mylist,start,pi-1)
        quickSort(mylist,pi+1, end)
        
mylist = [54,26,93,17,77,31,44,55,20]

quickSort(mylist,0,len(mylist)-1)

print(mylist)
    