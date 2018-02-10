#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n, k;
string a;
vector<string> b;
void init(){
	for(int i = 1; i <= n; i++){
		a.push_back('0');
	}
}
bool next_bit(){
	int j = a.length()-1;
	while(j >= 0 && a[j] == '1'){
		a[j] = '0';
		j--;
	}
	if(j >= 0) a[j] = '1';
	else return false;
	return true;
}
bool check(){
	string tmp; tmp.assign(k, '0');
	int q = 0;
	for(int i = 0; i < a.length(); i++){
		if(a.substr(i, k) == tmp){
			q++;
		}
	}
	if(q == 1) {
		return true;
	}
	else return false;
}
void show(){
	b.push_back(a);
}
void in(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '0') cout<<'A';
		else cout<<'B';
	}
}
int main(){
	cin>>n>>k;
	init();
	if(check()) show();
	while(next_bit()){
		if(check()) show();
	}
	cout<<b.size()<<endl;
	for(int i = 0; i < b.size(); i++){
		in(b[i]);
		cout<<endl;
	}
	return 0;
}