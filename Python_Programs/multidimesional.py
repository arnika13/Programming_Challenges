# -*- coding: utf-8 -*-
"""
Created on Fri Oct 21 15:37:49 2016

@author: Dell780
"""
matrix=[]
no_rows= int(input("Enter the number of rows: "))
no_column = int(input("Enter the number of columns: "))
for row in range(no_rows):
    matrix.append([])
    for column in range(no_column):
        value= int(input("Enter the element :"))
        matrix[row].append(value)
        
print(matrix)      
