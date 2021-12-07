#include<iostream>
using namespace std;
int main()
{
	int x, y, z=1;
	for (x=1;x<=3;x++)
	{
		for (y=1;y<=3;y++)
		{
			cout << z << " ";
			z+=2;
		}
		cout<<endl;
	}
	return 0;
}
