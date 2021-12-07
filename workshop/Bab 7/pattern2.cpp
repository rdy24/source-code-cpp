#include <iostream>
using namespace std;

int main() {
  int a,b,c,jml;
  c,jml = 0;
  cin >> a;
  while(c < a) {
  	cin >> b;
  	jml += b;
  	c++;
  }
  cout << jml;

}
