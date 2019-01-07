# -*- coding: utf-8 -*-
"""
Created on Thu Jul  5 12:15:15 2018

@author: LocalUser
"""

def calcProductArray(arr):
       n = len(arr)
       leftproductArr=
       p=1
       
       for i in range (0,n):
          leftproductArr[i] *= arr[i]
        
       right_product = 1
       for i in range (n-1, 0):
          
          right_product *= arr[i]
          leftproductArr[i]*=right_product
       return leftproductArr
arr = [1,2,3,4,5]
   
print(calcProductArray(arr))