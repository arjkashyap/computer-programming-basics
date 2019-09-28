#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int nearPs(int n){
   int a, b;
   a = pow(sqrt(n) + 1, 2);
   b = pow(sqrt(n) - 1, 2);
   cout << "a: " << a << endl;
   cout << "b: " << b << endl;
   if(abs(a - b) < abs( b - n) )
       return a;
   return b;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        cout << nearPs(num) << endl;
    }
    return 0;
}
