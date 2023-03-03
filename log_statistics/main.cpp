/*小明维护着一个程序员论坛。现在他收集了一份”点赞”日志，日志共有 N 行。
其中每一行的格式是：time id
表示在 time 时刻编号 id 的帖子收到一个”赞”。
现在小明想统计有哪些帖子曾经是”热帖”。
如果一个帖子曾在任意一个长度为 D 的时间段内收到不少于 K 个赞，小明就认为这个帖子曾是”热帖”。
具体来说，如果存在某个时刻 T 满足该帖在 [T,T+D) 这段时间内(注意是左闭右开区间)收到不少于 K 个赞，该帖就曾是”热帖”。
给定日志，请你帮助小明统计出所有曾是”热帖”的帖子编号。
一行包含三个整数 N,D,K。
以下 N 行每行一条日志，包含两个整数 time 和 id。
按从小到大的顺序输出热帖 id。
每个 id 占一行。
数据范围
1≤K≤N≤10E5,
0≤time,id≤10E5,
1≤D≤10000
 */
#include<iostream>
#include<algorithm>
using namespace std;

const int N =1e5 + 10;
pair<int,int> logs[N];
bool st[N];
int cnt[N];

int main(){
    int n,d,k;
    cin>>n>>d>>k;
    for(int i=0;i<n;i++)
        cin>>logs[i].x>>logs[i].y;

    sort(logs,logs+n);

    for(int i=0,j=0;i<n;i++){
        cnt[logs[i].y]++;
        while (logs[i].x - logs[j].x >= d){

        }
        
        if(cnt[logs[i].y]>=k)
            st[logs[i].y] = true;
    }
    for(int i=0;i<N;i++)
        if(st[i])
            cout<<i<<endl;
    return 0;
}





/*失败案例
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct post{
    int time;
    int id;
    int num;
};

bool compare(struct post a,struct post b)
{
    return a.time<b.time;
}

int main(){
    int N,scale,hotpot,i,time,id,j,k,over;
    cin>>N>>scale>>hotpot;
    struct post a[1000];
    for(;i<N;i++){
      cin>>time>>id;
      a[i].time=time;
      a[i].id=id;
      a[i].num=0;
    }

    //对每个帖子做排序
    sort(a,a+N,compare);

    //遍历每个时间片、
    for(i=0;i<N;i++){
        for(j=i;j<N;j++)
            if(j>=i&&j<i+scale) over=j;
        for(j=i;j<=over;j++){
            cout<<a[j].id<<endl;
        }
    }

    return 0;
}*/