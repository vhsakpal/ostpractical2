#include <iostream>
using namespace std;
int main(){
int n = 4;
int num = 1; 
cout << "Floyd's Triangle with " << n << " rows:\n";
for (int i = 1; i <= n; i++){       
for (int j = 1; j <= i; j++){    
cout << num << " ";
num++;
}
cout << endl;
}
return 0;
}
