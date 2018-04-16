#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; getline(cin, s);
	while(s != "."){
		int len = s.length();
		stack<char> k;
		bool check = true;
		for(int i = 0; i < len; i++){
			if(s[i] == '(') k.push('(');
			if(s[i] == '[') k.push('[');
			if(s[i] == ')'){
				if(k.empty() || k.top() != '('){check = false; break;}
				else k.pop();
			}
			if(s[i] == ']'){
				if(k.empty() || k.top() != '['){check = false; break;}
				else k.pop();
			}
		}
		if(check && !k.empty()) check = false;
		if(check) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		getline(cin, s);
	}
	return 0;
}