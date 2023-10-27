#include <iostream>
using namespace std;

int main(){
    double a, b, c, x1, x2;
    cout << "请依次输入二元一次方程”ax² + bx + c = 0“中a,b,c的值" << endl;
    cout << "a:"; cin >> a;
    cout << "b:"; cin >> b;
    cout << "c:"; cin >> c;
    if (a == 0)
    {
        cout << "a的值不能为0";
    }
    else{
        double delta = pow (b, 2) - 4 * a * c;
        if (delta > 0)
        {
            x1=(- b + pow (delta, 0.5)) / 2 * a;
            x2=(- b - pow (delta, 0.5)) / 2 * a;
            cout << "x1=" << x1 << "  " << "x2=" << x2;
        }
        else if (delta < 0)
        {
            cout << "方程无根";
        }
        else
        {
            x1 = x2 = (- b) / 2 * a;
            cout << "x1=x2=" << x1;
        }
        
    }
    
    return 0;
}