# -*- coding: utf-8 -*-
"""
Created on Thu Mar  8 21:56:48 2018

@author: LocalUser
"""

#write a function which finds an integer that appears more than once(duplicate) in a list


def duplicate(a):
    print(a)
    x= set(a)
    print("No duplicates : ",x)
  
    for i in x:
        a.remove(i) # removing all the elements of set(a) from a

    return set(a) # remaining elements in a={2,2,2,3,3,3}

a = [2,2,2,2,3,3,3,3,5,1]
print(duplicate(a))

