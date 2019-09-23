// Rearrange the input array(sorted) in such a way that the 
// First element is max, second is min, third is second Max, forth is second min etc.
// i;e Max, min, max, min....

#include<iostream>
using namespace std;

void rearrange(int *arr, int n) 
{ 

	int max_elm = arr[n - 1] + 1;
	
	int max_idx, min_idx;
	max_idx = n - 1;
	min_idx = 0;
	for(int i = 0; i < n; i++){
	    if( i % 2 == 0 ){
	        arr[i] += ( arr[max_idx] % max_elm ) * max_elm;
	        max_idx--;
	    }
	    else{
	        arr[i] += ( arr[min_idx] % max_elm ) * max_elm;
	        min_idx ++;
	    }
	}
	
		for(int i = 0; i < n; i++)
	    arr[i] = arr[i] / max_elm;
	
}

int main(){
    int t;
    cin>>t;
    while(t --){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        
        rearrange(arr, n);
        for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}