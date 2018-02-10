#include<iostream>
#include<string>
#include<bitset>
#include<sstream>
std::string changeToBinary(char a){
    if(a == ' ') return "00000";
    std::bitset<5> bin(a - 'A' + 1);
    return bin.to_string();
}
int main ()
{
    int n;
    std::cin>>n;
    int r[n], c[n];
    std::string s[n];
    for(int i = 0; i < n; i++){
        std::cin>>r[i]>>c[i]; std::cin.ignore();
        std::getline(std::cin, s[i]);
    }
    for(int i = 0; i < n; i++){
         short mx[r[i]][c[i]];
         std::string binsq = "";
         for(int j = 0; j < s[i].length(); j++){
            binsq = binsq + changeToBinary(s[i][j]);
         }
         int cur = 0;
         for(int m = 0; m < (r[i]+1)/2; m++){
            for(int k = m; k < c[i] - m - 1; k++) {
                if(cur < r[i]*c[i]) mx[m][k] = cur++;
            }
            for(int k = m; k < r[i] - m - 1; k++){
                if(cur < r[i]*c[i]) mx[k][c[i] - m - 1] = cur++;
            }
            for(int k = c[i] - m - 1; k > m; k--) {
                if(cur < r[i]*c[i]) mx[r[i] - m - 1][k] = cur++;
            }
            for(int k = r[i] - m - 1; k > m; k--){
                if(cur < r[i]*c[i]) mx[k][m] = cur++;
            }
         }
         if(r[i] == c[i] && r[i]%2 == 1) mx[r[i]/2][r[i]/2] = r[i]*r[i] - 1;
         std::cout<<i+1<<" ";
         for(int m = 0; m < r[i]; m++){
            for(int k = 0; k < c[i]; k++){
                if(mx[m][k] < binsq.length()) std::cout<<binsq[mx[m][k]];
                else std::cout<<0;
            }
         }
         std::cout<<std::endl;
    }
    return 0;
}

