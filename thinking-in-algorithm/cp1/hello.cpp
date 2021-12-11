//
// Created by cyg on 2021/12/11.
//
#include<iostream>

using namespace std;

int main() {
    std::cout << "hello world!" << endl;
    int a;

    cin >> a;
    cout << a << " int input " << endl;

    string s;
    float f;

    cin >> s >> f;
    cout << " input s:" << s << " ;input f: " << f << endl;

    int *p;
    p = &a;
    cout << p << endl;
    string *ps = &s;
    cout << ps << endl;

    return 0;
}
