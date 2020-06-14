/*
Task:
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
Return the resulting integer as an array.
The digits are stored such that the most significant digit is at the head of the list, and
each element in the array contain a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/* Steps:
 * Complete the 'plusOne' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY digits as parameter.
 * This function will take the value represented by the 
 * array digits, add 1 to it, and return the resulting 
 * array. 
 *
 */

 /*
 Plan:
 1. if we have an number which is less than 9, then we just do +1 with the last element means 128 + 1 = 129. 
    for example, V[n-1] += 1; so this is will just add 1
2. however, if this is not the case and if we have something 129 or 999 then the value will change and we might need to resize our array based on the value we have.
 */

vector<int> plusOne(vector<int> &digits) {
    //my array
    int i = digits.size();

    // now we need to make a for loop which will pass if we can solve the porblem with plan 1 (just add 1)
    for (int i = digits.size() - 1; i >= 0; i--){ // i-- because we will go in the array from the beack to the front
        if ( digits[i] != 9) {
            digits[i]++; // if the last element of our array is not equal to 9, then we just add 1 to it.
            return digits; // then we are done
        }
        else { // otherwise just make it to 0
            digits[i] = 0;
        }
    }
    //But now: if we have 99 then we would get 00 but it is wrong, we need to return 100 which means we need to add 1 in the front
    //we need to resize our array
    if (digits[0] == 0) { 
        digits.insert(digits.begin(),1); // this means if the "if statement" passes we will just add 1 in the front of my array
    }
    //finally we just return our array now
    return digits;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string digits_count_temp;
    getline(cin, digits_count_temp);

    int digits_count = stoi(ltrim(rtrim(digits_count_temp)));

    vector<int> digits(digits_count);

    for (int i = 0; i < digits_count; i++) {
        string digits_item_temp;
        getline(cin, digits_item_temp);

        int digits_item = stoi(ltrim(rtrim(digits_item_temp)));

        digits[i] = digits_item;
    }

    vector<int> result = plusOne(digits);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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

