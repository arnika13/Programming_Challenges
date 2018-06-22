# -*- coding: utf-8 -*-
"""
Created on Mon Apr 16 17:29:08 2018

@author: LocalUser
"""

# Complete the averageOfTopEmployees function below.
def averageOfTopEmployees(rating):
    total=0
    count=0
   
    for i in rating:
        if i >= 90:
            total+= i
            count += 1
        
    avg=total/count
    num = avg * 100
    frac = num - int(num)
    if frac >= 0.5:
        num = int(num) + 1
    else:
        num = int(num)
    
    avg = num /100
    
    print("{0:.2f}".format(avg))

if __name__ == '__main__':
    n = int(input("Enter the number of employees : "))

    rating = []

    for _ in range(n):
        rating_item = int(input("Enter the ratings : "))
        rating.append(rating_item)

    averageOfTopEmployees(rating)
