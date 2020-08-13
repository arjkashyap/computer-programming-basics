// Given items such that
// We have the weights of the items
// We have the values of the items

// You have to maximize the value by picking 
// up the items within a weight limit


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool compItems(Item a, Item b)
{
    double vwr_A = (double) a.value / a.weight;
    double vwr_B = (double) b.value / b.weight;
    
    return vwr_A >= vwr_B; 
}

double fractionalKnapsack(int W, Item arr[], int n)
{

    sort(arr, arr + n, compItems);
    double res = 0;
    int capacity = W;
    for(int i = 0; i < n; i++){
        Item item = arr[i];
        if(item.weight <= capacity){
            res += item.value;
            capacity -= item.weight;
        }
        else{
            res += item.value * ( (double) capacity / item.weight);
            return res;
        }
    }
    
    return res;
    
}

int main()
{
	int t;
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		cout<<fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
} 