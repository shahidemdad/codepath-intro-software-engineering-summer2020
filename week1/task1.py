# Task
#    Count the number of prime numbers less than a non-negative number, n and return the result.

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'CountPrimes' function below.
#
# This function will count the number of prime 
# values that occur that are less then n and return
# the result. 
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n as parameter.
#
def isPrime(n):
    # Write your code here
    for current_number in range(2,n):
        if n % current_number == 0:
            return False
    return True
def CountPrimes(n):
    # Write your code here
    count_of_primes = 0
    for current_number in range(2,n):
        if isPrime(current_number):
            count_of_primes += 1
    return count_of_primes

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    result = CountPrimes(n)

    fptr.write(str(result) + '\n')

    fptr.close()
