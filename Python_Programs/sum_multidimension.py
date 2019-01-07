# -*- coding: utf-8 -*-
"""
Created on Fri Oct 21 16:22:28 2016

@author: Dell780
"""
'''
matrix = [2,3,1],[1,2,2]
total= 0
for row in matrix:
    for value in row:
        total+= value
print(total)    

'''    
matrix= [1,2],[2,2]

for column in range(len(matrix[0])):
    total=0
    for row in range(len(matrix)):
        total += matrix[row][column]
print("sum for column ",column, "is:",total)        