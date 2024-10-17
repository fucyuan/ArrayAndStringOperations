#include <iostream>
#include <string>

int main() {
    std::string s = "hello, world!";
    for (char c : s) {  // 注意，这里我们只使用值传递，而非引用
        c = 'X';  // 这里对c的修改不会影响原字符串
    }
    std::cout << s << std::endl;  // 输出仍然是 "hello, world!"
    return 0;
}
