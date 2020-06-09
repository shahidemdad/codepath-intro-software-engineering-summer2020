/*
Task:
    -> Write a program that prints out the nth value of the Fibonacci sequence without using recursion.
    -> The Fibonacci sequence is as follows: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …….. 
        where each value is the result of adding the previous two integers.
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'fibonacci' function below.
 *
 * The function accepts INTEGER n as parameter.
 * and prints out the nth value of the fibonacci
 * sequence
 *
 */

void fibonacci(int n) {
    int T1 = 0;
    int T2 = 1;
    int Tnext;
    
    
    if (n == 0){
        cout << T1 << endl;
        return;
    }
    
    else if (n == 1){
        cout << T2 <<endl;
        return;
    }

    else if (n > 1 ) {
        for (int i = 2; i <= n; i++){
            Tnext = T1 + T2;
            T1 = T2;
            T2 = Tnext;
            
        }
        cout << Tnext << endl; 
    }
}
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    fibonacci(n);

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
