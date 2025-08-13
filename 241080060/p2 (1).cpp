#include <iostream>
using namespace std;
int main() {
char grade;
cout << "Enter a grade (A to F): ";
cin >> grade;
switch (grade) {
case 'A':
cout << "Excellent" << endl;
break;
case 'B':
cout << "Very Good" << endl;
break;
case 'C':
cout << "Good" << endl;
break;
case 'D':
cout << "Average" << endl;
break;
case 'E':
cout << "Poor" << endl;
break;
case 'F':
cout << "Failed" << endl;
break;
default:
cout << "Invalid grade" << endl;
}
return 0;
}
