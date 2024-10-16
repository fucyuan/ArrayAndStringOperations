#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";
    int n = -1;  // 这是一个有符号整数

    // 先检查 n 是否为负数，避免和无符号数比较
    if (n < 0) {
        cout << "n 是负数，无法与 str.size() 进行比较" << endl;
    } else if (str.size() < static_cast<size_t>(n)) {  // 强制转换 n 为 size_t 进行比较
        cout << "str.size() 小于 n" << endl;
    } else {
        cout << "str.size() 大于或等于 n" << endl;
    }

    return 0;
}
