# -*- coding: utf-8 -*-
"""
Created on Mon Apr 30 20:48:15 2018

@author: LocalUser
"""
def gradingStudents(grades):
    #
    # Write your code here.
    #
    mod5=0
    n = int(input().strip())
    for a0 in range(n):
        grade = int(input().strip())

        if grade >= 38:
        # Here, we are only ever calculating 'grade mod 5' once:
            mod5 = grade % 5
        
        if mod5 >= 3:
            grade = grade + (5 - mod5)
        
    print(grade)
n= input("Enter the grades")
gradingStudents(n)
