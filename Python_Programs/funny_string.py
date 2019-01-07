# -*- coding: utf-8 -*-
"""
Created on Fri Apr 27 16:39:10 2018

@author: arnik
"""

def funnyString(s):
    # Complete this function
    rev_s = s[::-1]
    #print(rev_s)
    n= len(s)
    #print(n)
    for i in range(0,n-1):
        diff= abs(int(ord(s[i+1]) - ord((s[i]))))
        diff1= abs(int(ord(rev_s[i+1]) - ord(rev_s[i])))
        if diff != diff1:
            return "Not Funny"
    
    return "Funny"
           
    


#s = input("Enter the string : ").strip()
s = "acxz"
result = funnyString(s)
print(result)
