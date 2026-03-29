#include <iostream>
using namespace std;
//int main() {
    //int n = -42;
    //if(n>=0) {
        //cout << "n is positive\n";
   // } else {
       // cout << "Neg\n";
  //  }

  //Age
  //int age;
  //cout << "Enter your age: ";
  //cin >> age;
  //if(age>=18) {
    //cout << "You can vote\n";

  //} else {
    //cout << "You cant vote\n";
    
  //}
  //return 0;
//}

//Even - odd number
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     if(n%2==0) {
//         cout << "This Number is Even\n";

//     } else {
//         cout << "This Number is Odd\n";
//     }
//     return 0;
// }

//Grading system
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade A+\n";
    } 
    else if (marks >= 80) {
        cout << "Grade A\n";
    } 
    else if (marks >= 70) {
        cout << "Grade A-\n";
    } 
    else if (marks >= 60) {
        cout << "Grade B\n";
    } 
    else {
        cout << "Fail\n";
    }

    return 0;
}
