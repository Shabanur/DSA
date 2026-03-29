#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter letter: ";
    cin >> ch;
    if(ch>=65 && ch<=90) {
    //if(ch>='a' && ch<='z') {
       cout << "Uppercase\n"; 
    } else {
        cout << "Lowercase\n";
    }
    return 0;
   
}