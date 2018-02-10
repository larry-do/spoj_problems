#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int mx = 0;
    int L = 0, R = 0, Lstep = 0, Rstep = 0;
    for(char step : str){
        if(step == 'L'){
            L++; Lstep++;
            if(Lstep - R > mx) mx = Lstep - R;
        }
        else if(step == 'R'){
            R++; Rstep++;
            if(Rstep - L > mx) mx = Rstep - L;
        }
        else{
            Lstep++;
            if(Lstep - R > mx) mx = Lstep - R;
            Rstep++;
            if(Rstep - L > mx) mx = Rstep - L;
        }
    }
    cout<<mx;
    return 0;
}
