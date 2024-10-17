#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words;
    string word;
    cout << "请输入一组字符串（输入Ctrl+D或非字符串结束）：" << endl;
    while (cin >> word) {
        words.push_back(word);
    }

    cout << "你输入的字符串是：" << endl;
    for (const string& w : words) {
        cout << w << " ";
    }
    cout << endl;
    return 0;
}
