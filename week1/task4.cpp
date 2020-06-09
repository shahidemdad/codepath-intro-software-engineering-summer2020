/*
Task:
    -> Given an integer, write a function to determine if it is a power of three.
    -> Return 1 if the integer is a power of three or 0 if it is not.
*/
#include <iostream>
using namespace std;
    /*
     * Complete the 'isPowerOfThree' function below.
     *
     * This function checks if n is a power of 3 and 
     * returns true if it is and false if it is not. 
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER n as parameter.
     *
     */

bool isPowerOfThree(int n) {
    if (n < 1) return false;
    while ( n % 3 == 0) {
        n = n/3;
    }
    return n == 1;
return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    bool result = isPowerOfThree(n);

    fout << result << "\n";

    fout.close();

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
