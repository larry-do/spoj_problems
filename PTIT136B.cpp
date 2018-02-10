#include <iostream>
using namespace std;
char card[200][200];
int main()
{
	int row, col; cin>>row>>col;
	for(int i = 0; i < row; i++){
		cin>>card[i];
	}
	int x, y; cin>>x>>y;
	//
	for(int i = 0; i < row; i++){
		for(int j = 2*col-1; j >= col; j--){
			card[i][j] = card[i][2*col-1 - j];
		}
	}
	for(int i = row; i < 2*row; i++){
		for(int j = 0; j < 2*col; j++){
			card[i][j] = card[2*row - 1 - i][j];
		}
	}
	if(card[x-1][y-1] == '.') card[x-1][y-1] = '#';
	else card[x-1][y-1] = '.';
	for(int i = 0; i < 2*row; i++){
		for(int j = 0; j < 2*col; j++){
			cout<<card[i][j];
		}
		cout<<endl;
	}
	return 0;
}