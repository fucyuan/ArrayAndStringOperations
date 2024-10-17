#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 创建一个包含 10 个整数的 vector 对象，初始值为 1-10
    vector<int> vec(10);
    for (int i = 0; i < 10; ++i) {
        vec[i] = i + 1;
    }

    // 使用迭代器将所有元素的值变为原来的两倍
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it *= 2;
    }

    // 输出 vector 的内容
    cout << "vector 内容：";
    for (const int &val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
