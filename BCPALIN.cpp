#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool checkPalidrome(string str){
	string tmp = str;
	reverse(tmp.begin(), tmp.end());
	return !tmp.compare(str);
}
int main(int argc, char const *argv[])
{
	int a = 0;
	cin>>a;
	for (int i = 0; i < a; ++i)
	{
		string b;
		cin>>b;
		cout<<(checkPalidrome(b)?"YES":"NO")<<endl;
	}
	return 0;
}