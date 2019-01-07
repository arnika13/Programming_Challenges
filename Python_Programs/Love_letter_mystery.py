# -*- coding: utf-8 -*-
"""
Created on Fri Apr 27 14:38:27 2018

@author: arnik
"""
"""
James found a love letter that his friend Harry has written to his girlfriend. James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into palindromes.

To do this, he follows two rules:

He can only reduce the value of a letter by 1, i.e. he can change d to c, but he cannot change c to d or d to b.
The letter a may not be reduced any further.
Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations required to convert a given string into a palindrome.

Input Format

The first line contains an integer q, the number of queries. 
The next q lines will each contain a string s.

Constraints
 1. 1<= q<= 10
 2. 1<=length of string <= 10^4
 
 
All characters are lower case English letters, no spaces.

Output Format

A single line containing the number of minimum operations corresponding to each test case.

Sample Input

4
abc
abcba
abcd
cba
Sample Output

2
0
4
2
Explanation

For the first test case, abc -> abb -> aba.
For the second test case, abcba is already a palindromic string.
For the third test case, abcd -> abcc -> abcb -> abca = abca -> abba.
For the fourth test case, cba -> bba -> aba.

"""



def theLoveLetterMystery(s):
    # Complete this function
    count =0
    length= len(s)
    #print(length)
   
    for i in range(0,length//2):
        left =ord( s[i])
        right = ord(s[(length-1)-i])
        print(left)
        print(right)
        if left != right:
            if left > right:
                count += left-right
            else:
                count += right - left
    return count


s = str(input("Enter the string : ").strip())
result = theLoveLetterMystery(s)
print(result)
