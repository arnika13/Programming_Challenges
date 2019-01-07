# -*- coding: utf-8 -*-
"""
Created on Mon Mar 12 13:10:34 2018

@author: LocalUser
"""

def table(n):
     for i in range(1,n+1):
         for j in range(1,n+1):
             print (j*i)
         print()    
        
n= int(input("Enter the number to create table of"))
table(n)        