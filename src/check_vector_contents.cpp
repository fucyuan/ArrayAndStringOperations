#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v2(10);  // 默认初始化为10个0
    vector<int> v3(10, 42);  // 10个42
    vector<int> v4{10};  // 一个元素10
    vector<int> v5{10, 42};  // 两个元素，10 和 42
    vector<string> v7(10, "hi");  // 10个字符串"hi"

    // 输出各个vector的容量和内容
    cout << "v2 容量：" << v2.size() << ", 内容：";
    for (int n : v2) cout << n << " ";
    cout << endl;

    cout << "v3 容量：" << v3.size() << ", 内容：";
    for (int n : v3) cout << n << " ";
    cout << endl;

    cout << "v4 容量：" << v4.size() << ", 内容：";
    for (int n : v4) cout << n << " ";
    cout << endl;

    cout << "v5 容量：" << v5.size() << ", 内容：";
    for (int n : v5) cout << n << " ";
    cout << endl;

    cout << "v7 容量：" << v7.size() << ", 内容：";
    for (const string& s : v7) cout << s << " ";
    cout << endl;

    return 0;
}
