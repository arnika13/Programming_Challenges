# -*- coding: utf-8 -*-
"""
Created on Mon Feb 12 17:49:01 2018

@author: LocalUser
"""
"""
#Problem: Given a list of integers and a single sum value, 
return the first two values (starting from the left) in order of appearance that add up to the sum.
"""
n=10
prime=[True for i in range(0,n+1)]


for i in range(2,n+1):
    p=2
    while(p*i<=n):
        prime[p*i]= False
        p+=1
    print(prime[i])
    sum=0
    for i in range(2,n+1):
       if prime[i] == True:
           sum+=i

print(sum)
        

