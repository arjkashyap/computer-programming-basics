// Implementing sets from STL
// Sets make use of binary search trees

#include<bits/stdc++.h>

int main()
{
    std::set<int> s;
    s.insert(12);
    s.insert(10);
    s.insert(4);
    s.insert(5);
    s.insert(10); // Set ignores duplicate items
    for( auto x : s )
        std::cout << x << " ";
    std::cout << std::endl;

    if(s.find(5) != s.end())
        std::cout << "5 is present" << std::endl;

    // Lower bound returns an element which is just greater than the
    // given number
    auto it = s.lower_bound(9);
    if(it != s.end())
        std::cout << "Element just greater than 9 " << *it << std::endl;
    else
        std::cout << "Does not exist\n";

    // Upper bound return the element which is next greater element to the 
    // given
    // If k is present, it will return the next element to k
    it = s.upper_bound(5);
    if(it != s.end())
        std::cout << "Element just greater than 5 " << *it << std::endl;
    else
        std::cout << "Does not exist\n";

    // clear all elements
    s.clear();
    std::cout << s.size() << std::endl;
    return 0;
}
