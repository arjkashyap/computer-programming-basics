#include<bits/stdc++.h>
using namespace std;

int steps(int n, int s = 0){
   if(n == 1)
        return s;
    if(n%2 == 0)
        s = steps(n/2, s + 1);
    
    if(n%2 != 0){
        s = min(steps(n+1, s + 1), steps(n-1, s + 1));
    }
    return s;
}

int main(){
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        cout << steps(num) << endl;
    }
       
    return 0;
}
