#include <iostream>
using namespace std;

int main(){
    int a;
    for (int i = 200; i <= 300; i ++)
    {
        a = 2;
        for (; ((a <= sqrt(i)) && ((i % a) != 0));)
        {
            a++;
        }
        if (a > (sqrt(i)))
        {
            cout << i << "  ";
        }
    }
    return 0;
}