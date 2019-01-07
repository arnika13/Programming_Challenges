# -*- coding: utf-8 -*-
"""
Created on Sun Apr 15 19:18:26 2018

@author: arnik
"""
# mars exploration hacher rank problem

def marsExploration(s):
    count=0
    for i in range(2,len(s),3):
        if s[i-2]!= 'S':
            count+= 1
        if s[i-1]!= 'O':
            count+=1
        if s[i-0]!= 'S':
            count += 1
            
    return count

if __name__ == "__main__":
    s = input().strip()
    result = marsExploration(s)
    print(result)
