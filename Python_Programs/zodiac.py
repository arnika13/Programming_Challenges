# -*- coding: utf-8 -*-
"""
Created on Thu Sep 29 15:13:41 2016

@author: Purshottam
"""
def zodiac(birth_year):
   if(birth_year==0):
     print("Year %d is the Monkey!",year)
   elif(birth_year==1):
     print("Year %d is the Rooster!",year)    
   elif(birth_year==2):
     print("Year %d is the Dog!",year)
   elif(birth_year==3):
     print("Year %d is the Pig!",year)    
   elif(birth_year==4):
     print("Year %d is the Rat!",year)
   elif(birth_year==5):
     print("Year %d is the Ox!",year)    
   elif(birth_year==6):
     print("Year %d is the Tiger!",year)
   elif(birth_year==7):
     print("Year is the Rabbit!",year)    
   elif(birth_year==8):
     print("Year %d is the Dragon!",year)
   elif(birth_year==9):
     print("Year %d is the Snake!",year)    
   elif(birth_year==10):
     print("Year %d is the Horse!",year)
   else:
     print("Year %d is the Sheep!",year)  
    
year= int(input("Enter the year:  "))
birth_year= year % 12
zodiac(birth_year)   