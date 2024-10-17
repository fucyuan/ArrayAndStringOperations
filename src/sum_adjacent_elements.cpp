#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;
    cout << "请输入一组整数（输入非数字结束）：" << endl;
    while (cin >> num) {
        numbers.push_back(num);
    }

    cout << "相邻整数的和：" << endl;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        cout << numbers[i] + numbers[i + 1] << " ";
    }
    cout << endl;

    if (!numbers.empty()) {
        cout << "第1个和最后1个元素的和：" << numbers.front() + numbers.back() << endl;
    }

    return 0;
}
