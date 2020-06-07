// Implementing maps from standard template library
// Maps are implemented using Red black binary search trees

#include<bits/stdc++.h>

#define PRINT(x) std::cout << x << " ";
#define PRINTLN(x) std::cout << x << std:: endl; 

int main()
{
    std::map<int, char> mp;
    mp.insert({1, 'a'});
    mp.insert({2, 'b'});
    mp.insert({3, 'c'});
    mp.insert({4, 'd'});
    mp.insert({4, 'f'}); // This will be ignored

    std::cout << "Size before sqare op " << mp.size() << "\n";
    std::cout << mp[5] << "\n";    // The square operator will insert the value to map


    std::cout << "Size after square op " << mp.size() << "\n";

    // the at operator is used to access the value at key 
    // but unlike square bracket, it does not insert new value
    std::cout << "Val at 4 " << mp.at(4) << "\n";

    for(auto it : mp)
        std::cout << it.first << " " << it.second << "\n";
    std::cout << "\n";

    // find
    if(mp.find(7) == mp.end())
        std::cout << "Not found";
    else
        std::cout << "found";
    std::cout << "\n";

    return 0;    
}


