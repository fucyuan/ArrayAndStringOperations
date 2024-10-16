#include <iostream>
#include <string>
using namespace std;

int main() {
    string result, word;
    cout << "请输入多个字符串（Ctrl+Z 结束输入）: ";
    while (cin >> word) {
        result += word;  // 直接将字符串连接
    }
    cout << "连接后的字符串是: " << result << endl;

    return 0;
}
