#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 比较两个数组是否相等
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 5, 3, 4, 5};

    bool arrays_equal = true;
    for (int i = 0; i < 5; ++i) {
        if (arr1[i] != arr2[i]) {
            arrays_equal = false;
            break;
        }
    }

    if (arrays_equal) {
        cout << "数组相等" << endl;
    } else {
        cout << "数组不相等" << endl;
    }

    // 比较两个 vector 对象是否相等
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4, 5};

    if (vec1 == vec2) {
        cout << "vector 相等" << endl;
    } else {
        cout << "vector 不相等" << endl;
    }

    return 0;
}
