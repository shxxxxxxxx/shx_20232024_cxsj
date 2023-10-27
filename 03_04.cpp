#include <iostream>
using namespace std;

int main(){
    int i, a, b, c, d, e, f; //i：金字塔的行数 a：正在输入的行数 b：空格数量 c：星号数量 d：空格计数器1 e：空格计数器2 f：星号计数器
    cout << "请输入金字塔的行数";
    cin >> i;
    a = 1;
    b = i - 1;
    c = 1;
    d = b;
    e = b;
    f = c;
    while (a <= i)
    {
        while (d != 0)
        {
            cout << " ";
            d --;
        }
        while (f != 0)
        {
            cout << "*";
            f --;
        }
        while (e != 0)
        {
            cout << " ";
            e --;
        }
        cout << endl;
        a ++;
        b --;
        c += 2;
        d = b;
        e = b;
        f = c;
    }
    

    return 0;
}