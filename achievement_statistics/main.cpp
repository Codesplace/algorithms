/*问题描述
编写一个程序，建立了一条单向链表，每个结点包含姓名、学号、英语成绩、数学成绩和C++成绩，并通过链表操作平均最高的学生和平均分最低的学生并且输出。
输入格式
输入n+1行，第一行输入一个正整数n，表示学生数量；接下来的n行每行输入5个数据，分别表示姓名、学号、英语成绩、数学成绩和C++成绩。注意成绩有可能会有小数。
输出格式
输出两行，第一行输出平均成绩最高的学生姓名。第二行输出平均成绩最低的学生姓名。*/

#include<iostream>
using namespace std;
class info{
    public:
        info(string stu_name,int stu_id,int stu_english_grade,int stu_mate_grade,int stu_cplus_grade,info* next) {
            name=stu_name;
            id=stu_id;
            english_grade=stu_english_grade;
            mate_grade=stu_mate_grade;
            cplus_grade=stu_cplus_grade;
        }

        string name;
        int id;
        int english_grade;
        int mate_grade;
        int cplus_grade;
        info* next = NULL;
};

int main() {
    cout << "please input:" << endl;
    int stu_num, i;
    string stu_name;
    int stu_id;
    int stu_english_grade;
    int stu_mate_grade;
    int stu_cplus_grade;
    cin >> stu_num;
    info *head;
    info *tail;
    for (i = 0; i < stu_num; i++) {
        cin >> stu_name >> stu_id >> stu_english_grade >> stu_mate_grade >> stu_cplus_grade;
        info *node=new info(stu_name, stu_id, stu_english_grade, stu_mate_grade, stu_cplus_grade,NULL);
        if (i == 0) {
            tail = node;
            head = tail;
        } else{
            if(i == 1){
                head->next=node;
                tail = head->next;
            }
            else{
                tail->next=node;
                tail=tail->next;
            }
        }
    }

    int max=0;
    int min=200;
    int avg;
    string max_name;
    string min_name;
    info*p=head;
    while(p){
        avg=(p->english_grade+p->mate_grade+p->cplus_grade)/3;
        if(avg<min){
            min_name=p->name;
            min=avg;
        }
        if(avg>max){
            max_name=p->name;
            max=avg;
        }
        p=p->next;
    }
    cout << max_name << endl;
    cout << min_name;
    return 0;
}