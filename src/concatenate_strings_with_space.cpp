#include <iostream>
#include <string>
using namespace std;

int main() {
    string result, word;
    cout << "请输入多个字符串（Ctrl+Z 结束输入）: ";//Linux上是Ctrl+D 结束输入
    while (cin >> word) {
        if (!result.empty()) {
            result += " ";  // 在每个单词之间加空格
        }
        result += word;
    }
    cout << "连接后的字符串是: " << result << endl;

    return 0;
}
