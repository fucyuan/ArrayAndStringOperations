#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    // 初始化数组，令每个元素的值等于其下标
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }

    // 输出数组的值
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
