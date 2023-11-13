#include<iostream>
using namespace std;
int main()
{
	int i=0;
	long double a,b;
	cin>>a>>b;
	while(b>=a)
	{
		b/=a;
		i++;
	}
	cout<<i<<endl;
	return 0;
	
}
