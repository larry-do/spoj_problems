#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n; cin>>n;
	vector<int> arr; arr.resize(n+1);
	for(int i = 1; i <= n; i++){
		cin>>arr[i];
	}
	int lo = 1, hi = n;
	for(int i = 1; i <= n; i++){
		if(i%2){
			int j;
			for(j = lo; j <= hi; j++){
				if(arr[j] == lo){
					arr.erase(arr.begin() + j);
					arr.insert(arr.begin() + lo, lo);
					break;
				}
			}
			cout<<j-lo<<endl; lo++;
		}
		else{
			int j;
			for(j = lo; j <= hi; j++){
				if(arr[j] == hi){
					arr.erase(arr.begin() + j);
					arr.insert(arr.begin() + hi, hi);
					break;
				}
			}
			cout<<hi-j<<endl; hi--;
		}
	}
	return 0;
}