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

    cout << "你输入的整数是：" << endl;
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
