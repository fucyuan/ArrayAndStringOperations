#include <iostream>
#include <string>

int main() {
    const std::string hexdigits = "0123456789ABCDEF";  // 可能的十六进制数字
    std::cout << "Enter a series of numbers between 0 and 15\n"
              << "separated by spaces. Hit ENTER when finished: " << std::endl;

    std::string result;          // 用于保存十六进制的字符串
    std::string::size_type n;    // 用于保存从输入流读取的数

    // 读取用户输入的数字，直到输入结束
    while (std::cin >> n) {
        // 如果输入的数字在hexdigits字符串范围内
        if (n < hexdigits.size()) {
            result += hexdigits[n];  // 得到对应的十六进制数字
        } else {
            // 忽略无效输入（大于15的数字）
            std::cout << "Ignoring invalid input: " << n << std::endl;
        }
    }

    std::cout << "Your hex number is: " << result << std::endl;

    return 0;
}
