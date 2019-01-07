# -*- coding: utf-8 -*-
"""
Created on Mon Apr 16 13:07:01 2018

@author: LocalUser
"""

import numpy

# Complete the averageOfTopEmployees function below.
def averageOfTopEmployees(rating):
    total =0
    count=0
    for i in rating:
        if i>=90:
            total += i
            count += 1
    avg= numpy.mean(total/count)
    #avg= float(sum(total/count))
    print((avg))

if __name__ == '__main__':
    n = int(input("Enter the number of employees :"))

    rating = []

    for _ in range(n):
        rating_item = int(input("Enter the ratings :"))
        rating.append(rating_item)

    averageOfTopEmployees(rating)
