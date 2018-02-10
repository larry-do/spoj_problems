#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool check(string str){
	for(int i = 0; i < str.length(); i++){
		if(str[i] != '2' && str[i] != '3' && str[i] != '5' && str[i] != '7')
			return false;
	}
	string tmp = str;
	reverse(tmp.begin(), tmp.end());
	return tmp == str;
}
int main(){
	int n; cin>>n;
	for(int i = 0; i < n; i++){
		string str; cin>>str;
		if(check(str)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}