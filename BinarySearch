#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jan  2 20:00:09 2019

@author: arnikavishwakarma
"""

def binarySearch(mylist,item):
    low = 0
    high = len(mylist) - 1
    
    while low <= high:
        mid = (low+high)//2
        if mylist[mid] == item:
            return True
        else:
            if item < mylist[mid]:
                high = mid - 1
            else:
                low = mid + 1
    return False

mylist = [2,4,7,8,9,12,14,16]
print(binarySearch(mylist,12))