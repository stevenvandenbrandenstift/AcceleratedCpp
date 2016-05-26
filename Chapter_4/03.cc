#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	cout << "give me a sentence:" << endl;

	vector<string> words;
	vector<int> counts;

	string word;

	while(cin >> word){
		bool found = false;
		for(int i= 0; i < words.size();i++)
		{
			if (words[i] == word)
			{ me
				found = true;
				counts[i]++;
			}
		}
		if (!found){
			words.push_back(word);
			counts.push_back(1);
		}

	}
	for(int i=0; i <words.size(); i++){
		cout << words[i] << " : " << counts[i] <<endl;
	}
}
