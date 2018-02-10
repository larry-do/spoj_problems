#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
struct Pair
{
	int dem;
	char kitu;
};
char s[6][9];
//-------------------
int checkRow(){
	// đếm chữ cái và sắp xếp giảm dần
	map<char, int> tmp[3];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 9; j++){
			tmp[0][s[i][j]]++;
			tmp[1][s[i+2][j]]++;
			tmp[2][s[i+4][j]]++;
		}
	}
	vector<Pair> kount[3];
	for(int i = 0; i < 3; i++){
		for(auto x : tmp[i]){
			Pair a;
			a.dem = x.second;
			a.kitu = x.first;
			kount[i].push_back(a);
		}
		sort(kount[i].begin(), kount[i].end(), [](Pair a, Pair b){return a.dem > b.dem;});
	}
	// gán mốc bằng 0 hết. Sau đó cứ trùng nhau chữ cái thì ưu tiên cái nào có số lượng 
	// lớn hơn thì giữ nguyên, không thì ++ đền chuyển sang cái ít hơn
	int a = 0, b = 0, c = 0;
	while(kount[0][a].kitu == kount[1][b].kitu || kount[1][b].kitu == kount[2][c].kitu){
		if(kount[0][a].kitu == kount[1][b].kitu){
			if(kount[0][a].dem >= kount[1][b].dem) b++;
			else a++;
		}
		if(kount[1][b].kitu == kount[2][c].kitu){
			if(kount[1][b].dem >= kount[2][c].dem) c++;
			else b++;
		}
	}
	// cộng số lượng chữ cái khác mốc
	int sum = 0;
	for(auto x : kount[0]){
		if(x.kitu != kount[0][a].kitu) sum+=x.dem;
	}
	for(auto x : kount[1]){
		if(x.kitu != kount[1][b].kitu) sum+=x.dem;
	}
	for(auto x : kount[2]){
		if(x.kitu != kount[2][c].kitu) sum+=x.dem;
	}
	return sum;
}
int checkCol(){
	map<char, int> tmp[3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 6; j++){
			tmp[0][s[j][i]]++;
			tmp[1][s[j][i+3]]++;
			tmp[2][s[j][i+6]]++;
		}
	}
	vector<Pair> kount[3];
	for(int i = 0; i < 3; i++){
		for(auto x : tmp[i]){
			Pair a;
			a.dem = x.second;
			a.kitu = x.first;
			kount[i].push_back(a);
		}
		sort(kount[i].begin(), kount[i].end(), [](Pair a, Pair b){return a.dem > b.dem;});
	}
	int a = 0, b = 0, c = 0;
	while(kount[0][a].kitu == kount[1][b].kitu || kount[1][b].kitu == kount[2][c].kitu){
		if(kount[0][a].kitu == kount[1][b].kitu){
			if(kount[0][a].dem >= kount[1][b].dem) b++;
			else a++;
		}
		if(kount[1][b].kitu == kount[2][c].kitu){
			if(kount[1][b].dem >= kount[2][c].dem) c++;
			else b++;
		}
	}
	int sum = 0;
	for(auto x : kount[0]){
		if(x.kitu != kount[0][a].kitu) sum+=x.dem;
	}
	for(auto x : kount[1]){
		if(x.kitu != kount[1][b].kitu) sum+=x.dem;
	}
	for(auto x : kount[2]){
		if(x.kitu != kount[2][c].kitu) sum+=x.dem;
	}
	return sum;
}
int main()
{
	for(int i = 0; i < 6; i++){
		cin>>s[i];
	}
	cout<<min(checkCol(), checkRow());
    return 0;
}