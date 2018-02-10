#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	while(a != 0 && b != 0 && c != 0 && d != 0){
		int k = 0;
		while(!(a == b && b == c && c == d)){
			int aa = a, bb = b, cc = c, dd = d;
			a = abs(a-bb);
			b = abs(b-cc);
			c = abs(c-dd);
			d = abs(d-aa);
			k++;
		}
		cout<<k<<endl;
		cin>>a>>b>>c>>d;
	}
	return 0;
}