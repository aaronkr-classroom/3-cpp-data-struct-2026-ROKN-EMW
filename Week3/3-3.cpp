#include <iostream>
#include <string>
#include <ios>
#include <iomanip> 
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	
	vector<string> words;
	string word;

	cout << "Enter the words: " << endl;

	while (cin >> word) {
		words.push_back(word);
	}
	// 1. 입력이 비어있는 지 확인
	if (words.empty()) {
		cout << "No word entered." << endl;
		return 0;
	}

	//단어 정렬
	sort(words.begin(), words.end());

	//단어 세기
	int count = 1;
	string current_word = words[0];
	
	for (int i = 1; i < words.size(); i++) {
		if (words[i] == current_word) {
			count++;
		}
		else {
			cout << current_word << ": " << count << endl;
			current_word = words[i];
			count = 1;
		}
	}
	
	cout << current_word << ": " << count << endl;

	return 0;
}
