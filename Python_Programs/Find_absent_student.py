# -*- coding: utf-8 -*-
"""
Created on Fri May 25 14:22:08 2018

@author: LocalUser
"""

def findAbsentStudent(a):
   
   
    original_list=[i for i in range(a[0],a[-1]+1)]
    print(original_list)
    a = set(a)
    return(list(a ^ set(original_list)))

result=findAbsentStudent([2,2,2,2,2,2,2,2,2,2])   
print(result)
