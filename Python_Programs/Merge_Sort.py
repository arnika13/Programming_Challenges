#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan  4 11:58:36 2019

@author: arnikavishwakarma
"""

def mergeSort(mylist):
    print("splitting the list", mylist)
    if len(mylist) > 1:
        mid = len(mylist)//2
        left = mylist[:mid]
        right = mylist[mid:]
        
        mergeSort(left)
        mergeSort(right)
        
        i=j=k=0
        while i< len(left) and j < len(right):
            if left[i] < right[j]:
                mylist[k] = left[i]
                i += 1
                
            else:
                mylist[k] = right[j]
                j += 1
                
            k += 1
            
        while i < len(left):
            mylist[k] = left[i]
            i += 1
            k +=1
            
        while j < len(right):
            mylist[k] = right[j]
            j += 1
            k +=1
            
    print("merging list", mylist)
    
mylist = [54,26,93,17,77,31,44,55,20]

mergeSort(mylist)
print(mylist)