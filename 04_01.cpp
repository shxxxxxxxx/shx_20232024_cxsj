#include<iostream>
using namespace std;
void hanoi(int a1,char A1,char B1,char C1)
{
	void move(char A2,int a2,char B2);
	if(a1==1)
	{
		move(A1,a1,C1);
	}
	else
	{
		hanoi(a1-1,A1,C1,B1);
		move(A1,a1,C1);
		hanoi(a1-1,B1,A1,C1);
	}
}
void move(char A2,int a2,char B2)
{
	cout<<a2<<":"<<A2<<"->"<<B2<<endl;
}
int main()
{
	char a,b,c;
	int n;
	cout << "圆盘个数:";
	cin >> n;
	cout << "依次输入三根柱子的名称";
	cin >> a >> b >> c;
	hanoi(n,a,b,c);
	
	return 0;
}
