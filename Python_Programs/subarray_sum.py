#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan 11 14:33:42 2019

@author: arnikavishwakarma
"""

def subarraySum(arr,n):
    
    s = 0
    alist =[]
    for i in range(0, n):
        for j in range(i+1,n):
            s = arr[j]
            
            if s == 0:
                add_list = [arr[i],arr[j]]
                alist.append(add_list)

    return alist


arr = [-1,1,0,2,-3]
n = len(arr)

print(subarraySum(arr,n))