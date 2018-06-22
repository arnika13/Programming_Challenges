# -*- coding: utf-8 -*-
"""
Created on Tue Apr 17 12:40:41 2018

@author: LocalUser
"""
"""
You are given a program written on Simple Language. There's only one variable called  in this programming language. Initially, . The program consists of  lines. Each line is one of the following:

 add y(y is an integer) — add y to x .
 set y(y is an integer) — set the value of x to y.
Here's an example program and also illustrates what happens to  after running each line:

        x = 0
add 5
        x = 5
add -3
        x = 2
set 1
        x = 1
add -2
        x = -1
add 5
        x = 4
Given a program, your task is to remove some lines (possibly none or all of them) in such a way that the value of after running the resulting program will be the maximum. Find this maximum value.

Complete the function maximumProgramValue which takes in an integer  denoting the number of lines of the program and returns the maximum value. You will need to take the program's lines from the standard input.

Input Format

The first line contains a single integer .

The next  lines describe the program. Each of these lines contains a string  and an integer  separated by a space, where t=add or t= set .

Constraints

. 1 <= n <= 2.10^5
. -10^9 <= y <= 10^9
Output Format

Print a single integer denoting the answer.

Sample Input 0

3
add 26878
set 1
add -1

Sample Output 0

2
"""


#
# Complete the maximumProgramValue function below.
#
def maximumProgramValue(n):
    #
    # Write your code here.
    #
   
    x=0
    for i in range(0,n):
      t= str(input())
      y = int(t[4:])
      if t[0:3]=='add' and y > 0:
          x += y
      if t[0:3]=='set' and y > x:
          x = y
    return x


if __name__ == '__main__':
    
   # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    result = maximumProgramValue(n)
    print(result)

    #fptr.write(str(result) + '\n')

    #fptr.close()
