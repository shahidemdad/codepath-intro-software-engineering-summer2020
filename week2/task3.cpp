/*
***********NOTE: NOT DONE********
Task:
First Missing Integer Given an unsorted integer array, 
return the first missing positive integer.
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'first_missing_positive_integer' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY integers as parameter.
 * It will check the integer array and return the first 
 * missing positive integer. 
 *
 */

int first_missing_positive_integer(vector<int> integers) {
    int n = integers.size();
    int i;
    for (i = 0; i < n; i++){
        if (abs(integers[i]) - 1 < n && integers[abs(integers[i]) - 1 ] > 0 ){
            integers[abs(integers[i]) - 1 ] = -integers[abs(integers[i]) - 1];
        }
    }
    for (i = 0; i < n ; i++){
        if (integers[i] > 0 ){
            return i + 1;
        }
    }
return n ;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string integers_count_temp;
    getline(cin, integers_count_temp);

    int integers_count = stoi(ltrim(rtrim(integers_count_temp)));

    vector<int> integers(integers_count);

    for (int i = 0; i < integers_count; i++) {
        string integers_item_temp;
        getline(cin, integers_item_temp);

        int integers_item = stoi(ltrim(rtrim(integers_item_temp)));

        integers[i] = integers_item;
    }

    int result = first_missing_positive_integer(integers);

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


