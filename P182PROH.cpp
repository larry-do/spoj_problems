#include <iostream>
#include <sstream>
using namespace std;
int main(){
	string s; cin>>s;
	bool isAM = s[8] == 'A' ? true:false;
	int hours;
	istringstream (s.substr(0, 2)) >> hours;
	if(!isAM && hours != 12){
		hours+=12;
		ostringstream os; os<<hours;
		string b = os.str() + s.substr(2, 6);
		cout<<b; return 0;
	}
	else if(isAM && hours == 12){
		cout<< "00" + s.substr(2, 6); return 0;
	}
	cout<<s.substr(0, 8);
	return 0;
}