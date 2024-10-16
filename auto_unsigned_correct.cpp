#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";
    
    // 使用auto自动推断len的类型，这里len会是string::size_type
    auto len = str.size();  
    
    // 正确的比较，使用len和str.size()同为无符号类型的值进行比较
    if (len < 100) {  
        cout << "str.size() 小于 100" << endl;
    } else {
        cout << "str.size() 大于或等于 100" << endl;
    }

    return 0;
}
