#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";
    int n = -1;  // 这是一个有符号整数，值为负数

    // 比较str.size() (返回无符号类型) 和 n (有符号类型)
    if (str.size() < n) {
        cout << "str.size() 小于 n" << endl;
    } else {
        cout << "str.size() 大于或等于 n" << endl;
    }

    return 0;
}
