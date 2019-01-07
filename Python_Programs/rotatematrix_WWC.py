# -*- coding: utf-8 -*-
"""
Created on Wed Jun 20 15:08:27 2018

@author: arnik
"""
"""
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Bonus: Try to do this without using an additional array!

Example:

Input:
[
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]

Output:
[
  [7, 4, 1],
  [8, 5, 2],
  [9, 6, 3]
]
"""

matrix = [1,2,3],[4,5,6],[7,8,9]

rotated = zip(*matrix[::-1])
print(list(rotated))
         
