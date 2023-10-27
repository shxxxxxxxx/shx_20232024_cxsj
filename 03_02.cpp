#include <iostream>
using namespace std;

int main()
{
    int i, a, b, c, d, e; //定义变量i,a,b，i：输入的整数， a：1，10，100的递增， b：i除以a， c：用来判断位数， d：用来判断反向输出的进行， e：用来反向输出
    c = -1, a = 1;
    cout << "请输入一个整数：";
    cin >> i;

    cout << "这个数的反向输出是：";

    if (i < 0){
        i = 0 - i;
        cout << "-";
    }

    d = i;

    do //反向输出
    {
        e = d % 10;
        cout << e;
        d /= 10;
    } while (d != 0);
    cout << endl;

    do //判断位数
    {
        b = i/a;
        a *= 10;
        c ++;
    }while(b != 0);
    
    cout << "这个数的位数是：" << c;

    return 0;
}