#include <iostream>
#include <string>
using namespace std;
string a;
int n;
void swap(char &a, char &b){
	char tmp = a; a = b; b = tmp;
}
bool next_permunation(){
	int j = n - 2;
	while(j >= 0 && a[j] >= a[j+1]) j--;
	if(j >= 0){
		int k = n-1;
		while(a[j] >= a[k]) k--;
		swap(a[j], a[k]);
		int r = j + 1, s = n-1;
		while(r <= s){
			swap(a[r], a[s]);
			r++; s--;
		}
	}
	else return false;
	return true;
}
int main(){
	int k; cin>>k;
	for(int i = 0; i < k; i++){
		int m;
		cin>>m>>a; 
		n = a.length();
		if(next_permunation()) cout<<i+1<<" "<<a<<endl;
		else cout<<i+1<<" "<<"BIGGEST"<<endl;
	}
	return 0;
}