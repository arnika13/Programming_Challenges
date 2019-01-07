# -*- coding: utf-8 -*-
"""
Created on Mon Feb 12 17:49:01 2018

@author: LocalUser
"""
# sieve of Eretosthenes 

"""
Write a program that uses the Sieve of Eratosthenes to find the sum of all the primes from 2 up to a given number

Background
The Sieve of Eratosthenes is a simple, ancient algorithm for finding all prime numbers up to any given limit. It does so by iteratively marking as composite (i.e. not prime) the multiples of each prime, starting with the multiples of 2. Create your range, starting at two and continuing up to and including the given limit. (i.e. [2, limit]) The algorithm consists of repeating the following over and over: take the next available unmarked number in your list (it is prime) mark all the multiples of that number (they are not prime) Repeat until you have processed each number in your range. When the algorithm terminates, all the numbers in the list that have not been marked are prime.
"""

n=10
prime=[True for i in range(0,n+1)]


for i in range(2,n+1):
    p=2
    while(p*i<=n):
        prime[p*i]= False
        p+=1
    print(i,prime[i])
    sum=0
    for i in range(2,n+1):
       if prime[i] == True:
           sum+=i

print("The total sum of all the prime numbers is : ",sum)
        

