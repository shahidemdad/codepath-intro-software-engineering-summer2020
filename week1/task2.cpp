/* 
Task:
    Given an input, print all numbers up to and including that input,
    unless they are divisible by 3, then print "fizz" instead,
    or if they are divisible by 5, print "buzz".
    If the number is divisible by both, print "fizzbuzz".
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'FizzBuzz' function below.
 * 
 * This function takes in integer n as a parameter
 * and prints out its value, fizz if n is divisible
 * by 3, buzz if n divisible by 5, and fizzbuzz 
 * if n is divisible by 3 and 5. 
 *
 */

void FizzBuzz(int n) { 
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0 && i % 5 == 0){
            cout << "fizzbuzz" << endl;
        }
        else if (i % 3 == 0){
            cout << "fizz" << endl;
        }
        else if (i % 5 == 0){
            cout << "buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    FizzBuzz(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
