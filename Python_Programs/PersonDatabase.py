# -*- coding: utf-8 -*-
"""
Created on Tue Jul 10 13:34:28 2018

@author: arnik
"""
people={
        'Alice':{
                'Phone':'3451238907',
                'Addr':'12 circle St.'
                
                },
         
        'James':{
                'Phone':'3421235679',
                'Addr':'14 Hill St.'
                
                },
                
        'Becky':{
                'Phone':'5632348970',
                'Addr':'21 Brown St.'
                
                },
        
        }
        
labels={
        
        'Phone':'Phone Number',
        'Addr': 'Address'
        
        }

Name= input("Enter the Name to search in directory: ")

if Name not in people:
    print("Sorry! the person you are looking for is not in our directory")
else:
    request=input("Looking for Phone number(p) or the address(a) ?")

if request == 'p':
    key= 'Phone'
if request == 'a':
    key= 'Addr'
    
if Name in people:
    print("{}'s {} is {}.".format(Name,labels[key],people[Name][key]))

    