/*
	IMPLEMENTATION OF TRIE
	SEARCH 
	INSERT
	Delete
*/

#include<iostream>
#include<string>

using namespace std;

class TrieNode
{
	public: 
		bool isEnd;
		TrieNode* child[26];
		
		TrieNode()
		{
			isEnd = false;
			for(int i = 0; i < 26; i++)
				child[i] = nullptr;
		}
		
};


class Trie
{
	public:
		TrieNode* root;
		
		Trie()
		{
			root = new TrieNode();
		}
		
		void Insert(string);
		bool Search(string);
		
};

void Trie::Insert(string str)
{
	TrieNode* curr = this -> root;
	for(int i = 0; i < str.length(); i++){
		char currChar = str[i];
		int idx = currChar - 'a';
		
		if(curr -> child[idx] == nullptr)
			curr -> child[idx] = new TrieNode();
		
		curr = curr -> child[idx];
		
	}
	curr -> isEnd = true;
}


bool Trie::Search(string str)
{
	TrieNode* currNode = this -> root;
	for(int i =0; i < str.length(); i++){
		char currChar = str[i];
		int idx = currChar - 'a';
		if(currNode -> child[idx] == nullptr){
			return false;
		}
		
		currNode = currNode -> child[idx];
	}
	
	return currNode -> isEnd;
	
}


int main()
{
	
	return 0;
}