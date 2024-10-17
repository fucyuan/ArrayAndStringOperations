#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    vector<string> words;
    string word;
    cout << "请输入一组单词（输入Ctrl+D结束）：" << endl;
    while (cin >> word) {
        words.push_back(word);
    }

    cout << "转换为大写后的单词：" << endl;
    for (string& w : words) {
        for (char& c : w) {
            c = toupper(c);
        }
        cout << w << endl;
    }

    return 0;
}
