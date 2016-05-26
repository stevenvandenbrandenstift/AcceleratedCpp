#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	cout << "give me a sentence:" << endl;

	vector<string> words;
	vector<int> lengths;
	string word_found;
	string smallest;
	string biggest;

	while(cin >> word_found){
		bool found = false;
		int max_length = 0;
		for(string word : words)
		{
			if (word_found == word)
			{
				found = true;
			}
		}
		if (!found){
			words.push_back(word_found);
		}

	}

	size_t max = 0;
	size_t min = (size_t) - 1;
    for (string word : words) {
        if (word.size() > max) {
            max = word.size();
            biggest = word;
        }else if(word.size() < min){
        	min = word.size();
        	smallest = word;
        }
    }
	cout << "the longest word is " << biggest << endl;
	cout << "the shortest word is " << smallest << endl;
	exit(0);
}
