#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    cout << "단어를 입력하세요:  ";

    vector<string> words;
    string input;

    // 문자열 계속 입력
    while (getline(cin, input)) {
        words.push_back(input);
    }

    // 입력 확인
    if (words.size() == 0) {
        cout << "입력된 단어가 없습니다." << endl;
        return 1;
    }

    // 가장 긴 / 짧은 길이 찾기
    int longstr = words[0].length();
    int shortstr = words[0].length();

    for (int i = 0; i < words.size(); i++) {
        int len = words[i].length();

        if (len > longstr)
            longstr = len;

        if (len < shortstr)
            shortstr = len;
    }

    cout << "Longest length : " << longstr << endl;
    cout << "Shortest length: " << shortstr << endl;

    return 0;
}