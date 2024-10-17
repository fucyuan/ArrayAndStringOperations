#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    while (cin >> word) {
        cout << word << endl;
    }

    // 检查cin流的状态
    if (cin.eof()) {
        cout << "输入已结束（EOF）" << endl;
    } else if (cin.fail()) {
        cout << "输入错误" << endl;
    }

    return 0;
}
