#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan 11 13:19:09 2019

@author: arnikavishwakarma
"""

"""
Given an unsorted array of integers, find a pair with given sum in it, return the index of the integers
"""
def pairSum(arr,n, sum_arr):
    alist = []
    for i in range(0,n-1):
        for j in range(i+1, n):
            if arr[i] + arr[j] == sum_arr:
                myindex = [i, j]
                alist.append(myindex)
    return alist
    
    
arr = [8,7,2,5,3,1]
n = len(arr)
sum_arr = 10
print(pairSum(arr,n, sum_arr))