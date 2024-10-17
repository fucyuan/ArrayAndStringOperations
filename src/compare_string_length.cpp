#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "请输入第一个字符串: ";
    cin >> str1;
    cout << "请输入第二个字符串: ";
    cin >> str2;

    if (str1.size() == str2.size()) {
        cout << "两个字符串长度相等。" << endl;
    } else {
        if (str1.size() > str2.size()) {
            cout << "长度较大的字符串是: " << str1 << endl;
        } else {
            cout << "长度较大的字符串是: " << str2 << endl;
        }
    }

    return 0;
}
