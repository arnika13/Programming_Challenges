# -*- coding: utf-8 -*-
"""
Created on Fri Apr 27 15:30:59 2018

@author: arnik
"""



def beautifulBinaryString(b):
    # Complete this function
    count =0
    n=len(b)
    
    for i in range(2,n):
        if b[i-2]== 0 and b[i-1]== 1 and b[i]== 0:
            b[i]=1 
            count+=1
    
    return count       




if __name__ == "__main__":
    #n = int(input().strip())
    b = list(input("enter the string: ").strip())
    result = beautifulBinaryString(b)
    print(result)
