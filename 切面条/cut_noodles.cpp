/*
切面条 
一根高筋拉面，中间切一刀，可以得到2根面条。
如果先对折1次，中间切一刀，可以得到3根面条。
如果连续对折2次，中间切一刀，可以得到5根面条。 
那么，连续对折10次，中间切一刀，会得到多少面条呢？
*/

#include<iostream>
#include<cmath>
using namespace std;

int cut(int n){
    if(n==1){
        return pow(2,n);
    }
    else{
        return pow(2,n)+1;
    }
}

int main(){
    cout<<cut(10);
    return 0;
}

