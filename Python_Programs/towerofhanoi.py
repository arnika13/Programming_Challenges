# -*- coding: utf-8 -*-
"""
Created on Mon Jul  9 16:05:14 2018

@author: arnik
"""

def TowerOfHanoi(n,From,To,Aux):
    #base condition
    if(n == 1):
        print("Move disk ",n,"from ",From,"tower to",To,"tower")
     
    else:
        TowerOfHanoi(n-1,From,Aux,To)
        print("Move disk ",n,"from ",From,"tower to",To,"tower")
        TowerOfHanoi(n-1,To,Aux,From)
    
def main():
    n=int(input("Enter the number of disk: "))
    print("The moves are : \n")
    TowerOfHanoi(n,"A","B","C")
    
main()