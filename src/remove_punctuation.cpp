#include <iostream>
#include <string>
#include <cctype>  // 用于判断标点符号

int main() {
    std::string s, result;
    std::getline(std::cin, s);  // 读入整行字符串

    for (char c : s) {
        if (!ispunct(c)) {  // 判断字符是否是标点符号
            result += c;    // 如果不是标点符号，加入结果字符串
        }
    }
    
    std::cout << result << std::endl;  // 输出去除标点符号的字符串
    return 0;
}
