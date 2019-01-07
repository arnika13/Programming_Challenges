# -*- coding: utf-8 -*-
"""
Created on Wed Jun 20 14:11:22 2018

@author: arnik
"""

"""
Given an even number ( greater than 2 ), 
return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture

Example:


Input : 4
Output: 2 + 2 = 4
"""


def primesum(n):
    prime=[True for i in range(0,n+1)]
    for i in range(2,n+1):
        p=2
        while(p*i<=n):
            prime[p*i]= False
            p+=1
        print(i,prime[i])
    
    for i in range(2,n+1):
        if prime[i] == True and prime[n-i]== True and (n-i) != 1:
            print("The prime sum is : ",i, "+" ,(n-i), "=", n)
               
primesum(14)          

        


        
            
    
    
    
    