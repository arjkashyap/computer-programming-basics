// For a given amount, the task is to choose 
// the minimum number of coins to pay using 
// 5, 10, 2, 1 rupee coin

#include<bits/stdc++.h>

int main()
{
    int n = 4;
    int coins[n] = {5, 10, 2, -1};
    int amount;
    std::cin >> amount;

    int total = 0;

    // Generally in greedy algorithms we sort the items
    std::sort(coins, coins + n, std::greater<>());
    for(int i = 0; i < n; i++){
        int coin = coins[i];
        if( coin <= amount ){
            int req = floor(amount / req);
            total += req;
            amount -= ( coin * req );
        }
        if( amount <= 0 ) 
            break;
    }
    std::cout << total << "\n";

    return 0;
}
