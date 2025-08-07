// EXPERIMENT 9
// NAME: PALAK SONI
// PRN: 24070123069
// Class: ENTC A3
// Problem statement:- Write a code to take input from user of string and print its characters using pointers..

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string:" << endl;
    cin >> s;

    char* ptr = &s[0];

    cout << "Characters os string entered are:" << endl;
    while (*ptr != '\0') {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}


/*Output:-

Enter a string:
palak
Characters using pointer (while loop):
p
a
l
a
k
*/
