//
// Created by cyg on 2021/12/11.
// 一些数学函数的使用
//

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    double d = sqrt(2.0);

    cout << "精度设置" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << setprecision(i) << d << endl; // 设置不同精度
    }

    cout << "当前精度：" << cout.precision() << endl;
    cout << "当前域宽：" << cout.width() << endl;
    cout << setw(6) << d << endl; // 默认右对齐
    cout << left << setw(6) << d << endl; // 左对齐
    cout << "当前填充字符：" << endl;
    cout << setfill('*') << setw(10) << d << endl; // 通过 setfill() 函数可以直接插入流
    return 0;
}