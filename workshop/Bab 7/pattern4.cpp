#include<iostream>
using namespace std;
int main()
{
	int x, y, z = 10;
	for (x=1;x<=5;x++)
	{
		for (y=1;y<=x;y++)
		{
			cout << z << " ";
		}
		z-=2;
		cout<<endl;
	}
	return 0;
}
