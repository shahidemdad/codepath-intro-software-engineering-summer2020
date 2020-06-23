// Task:
// Given a column title as appears in an Excel sheet,
// return its corresponding column number.
#include <bits/stdc++.h>

using namespace std;
/*
 * Complete the 'excel_column_to_number' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING column as parameter.
 * Given a column as represented in excel, return
 * its corresponding column number. 
 *
 */

int excel_column_to_number(string column) {
    //initial value
    int col = 0;
    //need a loop to check over again
    for (int i = 0; i < column.size(); i++){ // we check from 0 to the whole array
        // if we count rom first coloumn which is A and col is 0 then answer will be 1 which means A
        // same for AA
        col = col * 26 + (column[i] - 'A'+1);
    }
    return col;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string column;
    getline(cin, column);

    int result = excel_column_to_number(column);

    fout << result << "\n";

    fout.close();

    return 0;
}
