#include <bits/stdc++.h>
using namespace std;
int sub(int a[],int n){
    int sum=0,count=0;
    unordered_map<int,int>ump;
    ump[0]++;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(ump.find(sum)!=ump.end()){
                count+=ump[sum];
            }
        ump[sum]++;
    }
    return count;
}
int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    cout<<sub(a,n)<<"\n";
	}
	return 0;
}
