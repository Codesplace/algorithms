/*假设有两种微生物 X 和 Y
X出生后每隔3分钟分裂一次（数目加倍），Y出生后每隔2分钟分裂一次（数目加倍）。
一个新出生的X，半分钟之后吃掉1个Y，并且，从此开始，每隔1分钟吃1个Y。
现在已知有新出生的 X=10, Y=89，求60分钟后Y的数目。
如果X=10，Y=90呢？
本题的要求就是写出这两种初始条件下，60分钟后Y的数目。
以下程序实现了这一功能，请你补全空白处内容：
提示：
分析可知，Y分别会在0.5,1.5,2.5······时被吃，所以，把60分钟分成120份，则在除以2余数为1时，Y的数目减少X个*/

#include<iostream>
using namespace std;

int remain_num(int x,int y,int time){
    int i;
    for(i=1;i<=2*time;i++){
        if(i%2==0) y-=x;
        if(i%6==0) x*=2;
        if(i%4==0) y*=2;
    }
    return y;
}

int main(){
    int x,y;
    int time;
    cin>>x>>y>>time;
    cout<<remain_num(x,y,time);
    return 0;
}
