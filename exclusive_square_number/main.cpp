/*203879 * 203879 = 41566646641
这有什么神奇呢？仔细观察，203879 是个6位数，并且它的每个数位上的数字都是不同的，并且它平方后的所有数位上都不出现组成它自身的数字。
具有这样特点的6位数还有一个，请你找出它！
再归纳一下筛选要求：
6位正整数
每个数位上的数字不同
其平方数的每个数位不含原数字的任何组成数位*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[10],j=0;
    long long iSqure=0;
    for(int i=100000;i<999999;i++) {
        int flg=1,k=i;
        for(j=0;j<10;j++){
            a[j]=0;
        }
        while (k) {
            if(a[k % 10]>0)
                flg=0;
            else a[k % 10] = 1;
            k /= 10;
        }
        iSqure=pow(i, 2);
        while (iSqure) {
            if(a[iSqure % 10]>0)
                flg=0;
            iSqure /= 10;
        }
        if(flg) cout<<i<<endl;
    }
    return 0;
}
