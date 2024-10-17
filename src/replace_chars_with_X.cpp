#include <iostream>
#include <string>

int main() {
    std::string s = "hello, world!";
    for (char &c : s) {
        c = 'X';
    }
    std::cout << s << std::endl;  // 输出 "XXXXXXXXXXXXX"
    return 0;
}
