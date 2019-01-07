# -*- coding: utf-8 -*-
"""
Created on Thu Jun 21 17:33:30 2018

@author: arnik
"""

"""
Remove duplicates from the string
"""

def removeDuplicates(a):
    
    result= "".join(set(a))
    
    print(result)
    
    
    

a= "arnika"
removeDuplicates(a)