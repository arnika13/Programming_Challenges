# -*- coding: utf-8 -*-
"""
Created on Tue Jun 19 16:27:05 2018

@author: arnik
"""
"""
Create a function called repeatify that takes in two arguments as the input - a string and a number. 
The function should return the string repeated the given numberof times. 
If the first argument is not a string or the second argument is not a number, 
return false.

Example: repeatify('hello',3) should return 'hellohellohello'.
"""
def repeatify(s,num):
    if(type(s)!= str or type(num) != int):
        return False
    
    
    list1= list(s)
    result= list1 * num
    result1= "".join(result)
    return result1


print(repeatify("hello", 3));
    
    
    
    
