#include<iostream>
#include<string>
#include<bitset>
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
         int cur = 0;
         for(int m = 0; m < r[i]; m++){
            for(int k = 0; k < c[i]; k++){
                mx[m][k] = s[i][cur++] - '0';
            }
         }
         int idx = 0;
         std::string binsq;
         for(int m = 0; m < (r[i]+1)/2; m++){
            for(int k = m; k < c[i] - m - 1; k++){
                if(idx++ < r[i]*c[i]) binsq.push_back(char(mx[m][k] + '0'));
            }
            for(int k = m; k < r[i] - m - 1; k++){
                if(idx++ < r[i]*c[i]) binsq.push_back(char(mx[k][c[i] - m - 1] + '0'));
            }
            for(int k = c[i] - m - 1; k > m; k--) {
                if(idx++ < r[i]*c[i]) binsq.push_back(char(mx[r[i] - m - 1][k] + '0'));
            }
            for(int k = r[i] - m - 1; k > m; k--){
                if(idx++ < r[i]*c[i]) binsq.push_back(char(mx[k][m] + '0'));
            }
         }
         if(r[i] == c[i] && r[i]%2 == 1) binsq.push_back(char(mx[r[i]/2][r[i]/2] + '0'));
         std::string result;
         for(int m = 0; m < binsq.length(); m+=5){
         	std::bitset<5> t(binsq.substr(m, 5));
            result.push_back((t.to_ulong()!=0)?t.to_ulong()-1+'A':' ');
         }
         std::cout<<i+1<<" "<<result<<std::endl;
    }
    return 0;
}