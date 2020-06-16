/*
Given a non-empty array of integers, every element appears twice except for one.
Find that single one integer and return it.
Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'singleNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY nums as parameter.
 * Find the integer in the array that only occurs once 
 * and return that integer. 
 * 
 */

//Plan: use XOR to solve the problem.
int singleNumber(vector<int> nums) {
    int n = nums.size();
    int res = nums[0];
    for(int i = 1; i < n; i++){
        res = res ^ nums[i];
    }
    return res;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nums_count_temp;
    getline(cin, nums_count_temp);

    int nums_count = stoi(ltrim(rtrim(nums_count_temp)));

    vector<int> nums(nums_count);

    for (int i = 0; i < nums_count; i++) {
        string nums_item_temp;
        getline(cin, nums_item_temp);

        int nums_item = stoi(ltrim(rtrim(nums_item_temp)));

        nums[i] = nums_item;
    }

    int result = singleNumber(nums);

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
