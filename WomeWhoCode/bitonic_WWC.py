# -*- coding: utf-8 -*-
"""
Created on Tue Jun 19 16:56:00 2018

@author: arnik
"""
"""
Bitonic Point Detection
Given an array of integers that is initially increasing and then decreasing 
(a bitonic sequence), find the index of the peak (the bitonic point).

Hint: There's a solution that is O(n) and one that is O(log(n))!

Example:

Input: [2, 3, 4, 5, 2, 1]

Output: 3


"""
def bitonic(list1,low,high):
    max = list1[low]
    
    for i in range(low,high):
        if list1[i] > max:
            max = list1[i]
            result= list1.index(max)
    return result
 

list1 = [2,3,4,5,2,1]
n = len(list1)
#print(n)
print ("The index of the peak element is: ",bitonic(list1, 0, n))