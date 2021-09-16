#include<iostream>

using namespace std;

/*
		You are given N identical eggs and you have access to a K-floored building from 1 to K.

		There exists a floor f where 0 <= f <= K such that any egg dropped at a floor higher than f will break, 
		and any egg dropped at or below floor f will not break. There are few rules given below. 

			An egg that survives a fall can be used again.
			A broken egg must be discarded.
			The effect of a fall is the same for all eggs.
			If the egg doesn't break at a certain floor, it will not break at any floor below.
			If the eggs breaks at a certain floor, it will break at any floor above.
			
		Return the minimum number of moves that you need to determine with certainty what the value of f is.

		i/p: eggs=2, floors=10
		o/p: 4
*/


int eggDrop(int eggs, int floors)
{
	if(eggs == 0 || floors == 0)
		return 0;
	if(eggs == 1)
		return floors;
	
	int minDrops = INT_MAX;
	for(int floor = 1; floor <= floors; floor++){
		
		// drops required if we're on the floor
		// 						Egg does not break          Egg breaks
		int drops = max(eggDrop(eggs, floors - floor), eggDrop(eggs - 1, floor - 1));
		
		if(drops < minDrops)
			minDrops = drops;
		
	}
	return 1 + minDrops;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int eggs, floors;
		cin >> eggs >> floors;
		cout << eggDrop(eggs, floors) << endl;
		
	}
	
	return 0;
}