/*猜年龄
美国数学家维纳(N.Wiener)智力早熟，11岁就上了大学。他曾在1935~1936年应邀来中国清华大学讲学。
一次，他参加某个重要会议，年轻的脸孔引人注目。于是有人询问他的年龄，他回答说：“我年龄的立方是个4位数。
 我年龄的4次方是个6位数。这10个数字正好包含了从0到9这10个数字，每个都恰好出现1次。”
请你推算一下，他当时到底有多年轻。
提示：
先用/10和%10把各个位上的数取出来，然后判断是否相等*/

#include<iostream>
#include<cmath>

using namespace std;

pair<int, int *> check_num(int num, int *a) {
    int i = 0;
    while (num) {
        *(a + num % 10) = 1;
        num /= 10;
        i++;
    }
    pair<int, int *> mypair = {i, a};
    return mypair;
}

int main() {
    int flg,a[10],i,j;
    for (i = 10; i <= 50; i++) {
        for(j = 0;j <10;j++) a[j]=0;
        pair<int, int *> mypair1 = check_num(pow(i, 3), a);
        pair<int, int *> mypair2 = check_num(pow(i, 4), a);
        if (mypair1.first == 4 && mypair2.first == 6) {
            flg = 1;
            for (int j = 0; j < 10; j++) {
                if (mypair2.second[j] == 0) {
                    flg = 0;
                    break;
                }
            }
            if (flg) cout << i;
        }
    }
    return 0;
}