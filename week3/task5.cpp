/*
Task:
Given two strings str1 and str2,
    determine if str1 is a substring of str2.
    Return true if str1 is a substring of str2 and false if str1 is not a substring of str2.
*/
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isSubstring' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts following parameters:
 *  1. STRING str1
 *  2. STRING str2
 * The function will check if str1 is a substring 
 * of str2 and return true or false accordingly. 
 *
 */

bool isSubstring(string str1, string str2) {
    int i,j;
    int m = str1.length();
    int n = str2.length();
    //first need to check that str1.length is smaller than str2.length
    if (m > n){
        return false;
    }
    else{ 
        //first for loop to go over all my indexs of the str2
        for (i = 0; str2[i]; i++){
            // this for loop to check my all indexes of str1 to str2.
            for(j = 0; j <= m - 1; j++){
                //if there is no match, break it
                if (str2[i] != str1[j]){
                    break;
                }
                //if there is a match keep going
                else{
                    i++;
                }
            }
            //finally, if we have a the same value for j and m. return true
            if ( j == m){
                return true;
            }
        }
        // else false
        return false;
    }
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string str1;
    getline(cin, str1);

    string str2;
    getline(cin, str2);

    bool result = isSubstring(str1, str2);

    fout << result << "\n";

    fout.close();

    return 0;
}
