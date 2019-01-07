# -*- coding: utf-8 -*-
"""
Created on Wed Apr 25 12:48:08 2018

@author: LocalUser
"""
"""
You are given a string containing characters A  and B only.
 Your task is to change it into a string such that every two consecutive characters are different. 
 To do this, you are allowed to delete one or more characters in the string.

Your task is to find the minimum number of required deletions.

Input Format

The first line contains an integer t , the number of test cases. 
The next  lines contain a string s.

Constraints:
    1 <= t<=10
    1<= s <= 10^5
    Each string s will consist only of characters A and B
    
Output Format

For each test case, print the minimum number of deletions required in a new line.

Sample Input

5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB

Sample Output

3
4
0
0
4
"""



def alternatingCharacters(s):
    count =0
    # Complete this function
    s1= len(s)
    for i in range(s1-1):
        if s[i]==s[i+1]:
           
            count += 1
    return count

s= input("enter the string : ")
print(alternatingCharacters(s))