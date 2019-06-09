i#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Mar 15 10:06:07 2019

@author: arnikavishwakarma
"""

def canFindZero(arr):
    #n = len(arr)
    # if the 0 is present the index position zero
    """
    if arr[0] == 0:
        return True
    for i in range(0,n):
        i += arr[i]
        
        if arr[i] == 0:
            return True
        
        
        i -= arr[i]
        
        if arr[i] == 0:
            return True
        
        
    return False   
    """
    arr_sorted = sorted(arr)
d    print(arr_sorted)
    

arr= [3,7,0,2,8,3,0,6]
canFindZero(arr)