/*
Task: 
    Given a non-negative number, N, return the last digit of the factorial of N.
*/

#include <iostream>
using namespace std;

/*
 * Complete the 'last_factorial_digit' function below that
 * computes the factorial of n and returns the last digit
 * of the factorial n.
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int last_factorial_digit(int n) {
    
    long long int factorial = n; // now the value is 20
    while (n >= 2) { // it is bigger than 2, because 1! = 1
        n--; // keep decreasing from 20 then untill 2 
        factorial = factorial * n; // this times all my output number. 20 * 19 * 18....
    }
    return factorial % 10; //return the last digit
    
}

int main()
{
    cin >> n;
    int result = last_factorial_digit(n);
    cout << result << "\n";
    return 0;
}