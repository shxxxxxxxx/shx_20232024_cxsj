#include <iostream>
using namespace std;

int main(){
    int i, a;
    cout << "请输入一个正整数：";
    cin >> i;
    a = i%7;
    switch (a)
    {
        case 0 :
            cout << "星期日";
            break;
        case 1 :
            cout << "星期一";
            break;
        case 2 :
            cout << "星期二";
            break;
        case 3 :
            cout << "星期三";
            break;
        case 4 :
            cout << "星期四";
            break;
        case 5 :
            cout << "星期五";
            break;
        case 6 :
            cout << "星期六";
            break;
        default :
            cout << "您输入的数字无效";
    }

    return 0;
}