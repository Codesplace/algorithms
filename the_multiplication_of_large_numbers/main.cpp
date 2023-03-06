/*对于32位字长的机器，大约超过20亿，用int类型就无法表示了，我们可以选择int64类型，
 * 但无论怎样扩展，固定的整数类型总是有表达的极限！如果对超级大整数进行精确运算呢？一个简单的办法是：
 * 仅仅使用现有类型，但是把大整数的运算化解为若干小整数的运算，即所谓：“分块法”。*/

#include<iostream>
using namespace std;
int multiplication_of_large_numbers(long long x,long long y){
    int base=10000;
    int x1=x%base;
    int x2=x/base;
    int y1=y%base;
    int y2=y/base;
    int r1=(x1*y1)%base;
    int r2=((x1*y1)/base+y1+x1)%base;
    int r3=((x1*y1)/base+y1+x1)/base+x2+y2+x2*y2;
    cout<<r3<<r2<<r1;
    return 0;
}

int main(){
    long long x;
    long long y;
    cin>>x;
    cin>>y;
    multiplication_of_large_numbers(x,y);
    return 0;
}