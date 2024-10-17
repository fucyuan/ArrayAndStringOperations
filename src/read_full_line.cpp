#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "请输入一行文字: ";
    getline(cin, line);  // 读取一整行
    cout << "你输入的是: " << line << endl;
    return 0;
}
