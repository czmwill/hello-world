#include "stdio.h"

void CaculateWeekDay(int y,int m, int d)
{
    if(m==1||m==2) {
        m+=12;
        y--;
    }
    int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    switch(iWeek)
    {
    case 0: printf("����һ\n"); break;
    case 1: printf("���ڶ�\n"); break;
    case 2: printf("������\n"); break;
    case 3: printf("������\n"); break;
    case 4: printf("������\n"); break;
    case 5: printf("������\n"); break;
    case 6: printf("������\n"); break;
    }
} 
main(void)
{
    int year=0,month=0,day=0;
    printf("���������ڣ�\n��ʽΪ��1900,1,1\n");
    char temp = '1';
    while (temp != '0')
    {
        scanf("%d,%d,%d",&year,&month,&day);
        scanf("%c",&temp);
        CaculateWeekDay(year,month,day);
        printf("����0�˳�,��������:");
        scanf("%c",&temp);
    }
}
