#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter the number of elements: ";
cin >> n;
float arr[n];
cout << "Enter " << n << " numbers:" << endl;
for (int i = 0; i < n; i++) {
cout << "Element " << i + 1 << ": ";
cin >> arr[i];
}
float sum = 0;
for (int i = 0; i < n; i++) {
sum += arr[i];
}
float average = sum / n;
cout << "Sum = " << sum << endl;
cout << "Average = " << average << endl;
return 0;
}
