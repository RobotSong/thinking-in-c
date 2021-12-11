//
// Created by cyg on 2021/12/11.
// 输入圆的半径，输出其周长
//

#include <iostream>

using namespace std;

int main() {
    const double pi = 3.14159;
    double r, c, s;
    cout << "输入圆的半径:";
    cin >> r;

    c = 2.0 * pi * r;
    s = pi * r * r;

    cout << "圆的周长为:" << c << endl;
    cout << "圆的面积为:" << s << endl;

    return 0;
}
