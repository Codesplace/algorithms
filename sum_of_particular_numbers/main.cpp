/*题目描述
小明对数位中含有 2、0、1、9 的数字很感兴趣（不包括前导 0），在 1 到 40 中这样的数包括 1、2、9、10 至 32、39 和 40，共 28 个，他们的和是 574。
请问，在 1 到 n 中，所有这样的数的和是多少？
输入格式
共一行，包含一个整数 n。
输出格式
共一行，包含一个整数，表示满足条件的数的和。*/
#include<iostream>
using namespace std;

int main(){
    int n,i=1,j,sum=0;
    cin>>n;
    for(;i<=n;i++) {
        j=i;
        while(j) {
            int tmp=j/10;
            if(tmp==2||tmp==0||tmp==1||tmp==9){
                sum+=i;
                break;
            }
            j/=10;
        }
    }
    cout<<sum;
}