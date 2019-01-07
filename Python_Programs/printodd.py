# -*- coding: utf-8 -*-
"""
Created on Mon Mar 12 13:17:42 2018

@author: LocalUser
"""

def printodd(lower,upper):
    for i in range(lower,upper+1):
      if(i%2!=0):
        print(i)



lower = int(input("enter the  lower limit of numbers to start:  ")) 
upper = int(input("enter the  upper limit of numbers:  "))       
printodd(lower,upper)        