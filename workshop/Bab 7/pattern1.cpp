#include<iostream>
using namespace std;
int main()
{
	int x, y;
	for (x=5;x<=9;x+=2)
	{
		for (y=9;y>=x;y--)
		{
			cout << x << " ";
		}
		cout<<endl;
	}
	return 0;
}
