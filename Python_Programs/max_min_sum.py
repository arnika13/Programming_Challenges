# -*- coding: utf-8 -*-
"""
Created on Sat Mar 10 13:25:01 2018

@author: LocalUser
"""

# Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

def miniMaxSum(arr):
    x= sum(arr)
    max_num = x-(max(arr))
    min_num = x- (min(arr))
    print(max_num,min_num)




arr=[1,2,3,4,5]
miniMaxSum(arr)
   