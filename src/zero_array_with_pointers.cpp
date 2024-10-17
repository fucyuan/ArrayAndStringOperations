#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // 初始化数组

    // 使用指针将数组中的元素置为 0
    for (int* p = arr; p != arr + 10; ++p) {
        *p = 0;
    }

    // 输出修改后的数组
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
