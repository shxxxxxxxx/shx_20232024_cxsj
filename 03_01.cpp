#include <iostream>
using namespace std;

int main()
{
    int a,b; //定义两个需要被比较的整形变量
    cout << "请依次输入两个整数";
    cin >> a >> b; //输入两个变量的值
    if (a>b){
        cout << a << ">" << b;
    }
    else if (a==b){
        cout << a << "=" << b;
    }
    else {
        cout << a << "<" << b;
    }
    return 0;
}