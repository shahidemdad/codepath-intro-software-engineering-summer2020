/*
Task:
Implement a solution that checks if a sentence is valid
    For a sentence to be valid, it must meet the following two criteria: Does the sentence start with a capital letter?
    Does the sentence end with sentence-ending punctuation?
    Return true if the sentence is valid and false if the sentence is not valid.
*/
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts STRING sentence as parameter.
 * The function will check if the sentence is valid 
 * and return true or false accordingly. 
 *
 */

bool isValid(string sentence) {
    
    //calculate the length of the string
    int length = sentence.length();

    //check if the first the character in between A-Z
    if (sentence[0] < 'A' || sentence[0] > 'Z') {
        return false;
    }

    //check if the punctuation is there
    if(sentence[length - 1] != '.' && sentence[length - 1] != '!' && sentence[length - 1] != '?' ){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string sentence;
    getline(cin, sentence);

    bool result = isValid(sentence);

    fout << result << "\n";

    fout.close();

    return 0;
}
