/*
在X星系的广袤空间中漂浮着许多X星人造“炸弹”，用来作为宇宙中的路标。
每个炸弹都可以设定多少天之后爆炸。
比如：阿尔法炸弹2015年1月1日放置，定时为15天，则它在2015年1月16日爆炸。
有一个贝塔炸弹，2014年11月9日放置，定时为1000天，请你计算它爆炸的准确日期。
以下程序实现了这一功能，请你填补空白处内容：
*/
#include <stdio.h>

int main()
{
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 1000;
    int year = 2014, month = 11, day = 9;
    int i;

    for (i = 0; i < days; i++)
    {
        day++;
        if (day > monthDays[month - 1])
        {
            day = 1;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                    monthDays[1] = 29;
                else
                    monthDays[1] = 28;
            }
        }
    }

    printf("%d-%d-%d\n", year, month, day);
    getchar();
    return 0;
}
