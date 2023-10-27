#include <iostream>
using namespace std;

int main(){
    int computer, player, result, a;
    do
    {
        computer = rand () % 3;
        cout << "电脑已经出手" << endl;

        do{
            cout << "现在轮到你出手,0代表石头,1代表剪刀,2代表布";
            cin >> player;
        } while (player != 0 && player != 1 && player != 2);

        (result) = (player) - (computer);

        switch (result)
        {
        case 0:
            cout << "平手";
            break;

        case 1:
        case -2:
            cout << "你输了";
            break;
            
        case -1:
        case 2:
            cout << "你赢了";
            break;
        }
        if (result == 0)
        {
            a = 1;
        }
        else
        {
            cout << "是否继续玩？" << endl << "继续请输入1,退出请输入0";
            cin >> a;
        }
        
    } while (a == 1);

    return 0;
}