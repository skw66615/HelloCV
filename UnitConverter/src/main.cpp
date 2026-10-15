#include<iostream>
#include<cstdio>
#include<limits>
#include"unitlib.h"
using namespace std;

void Menu()
{
    printf("\n=====单位转换器=====\n");
    printf("1.摄氏度->华氏度\n");
    printf("2.华氏度->摄氏度\n");
    printf("3.米->英尺\n");
    printf("4.英尺->米\n");
    printf("5.磅->千克\n");
    printf("6.千克->磅\n");
    printf("0.退出\n");
    printf("请选择转换类型(0-6)\n");
}

int n;
double val,ans;

int main()
{
    while(1)
    {
        Menu();

        if(scanf("%d",&n)!=1)
        {
            printf("输入错误，请重新输入。\n");
            while(getchar()!='\n');
            continue;
        }


        if(n==0)
        {
            printf("退出程序。\n");
            break;
        }


        printf("请输入要转换的数值：");

        if(scanf("%lf",&val)!=1)
        {
            printf("输入错误，请重新输入。\n");
            while(getchar()!='\n');
            continue;
        }

        //scanf("%lf",&val);
        switch (n)
        {
            case 1:
                ans=C_TO_F(val);
                printf("%lf摄氏度=%lf华氏度\n",val,ans);
                break;
            case 2:
                ans=F_TO_C(val);
                printf("%lf华氏度=%lf摄氏度\n",val,ans);
                break;
            case 3:
                ans=M_TO_FT(val);
                printf("%lf米=%lf英尺\n",val,ans);
                break;
            case 4:
                ans=FT_TO_M(val);
                printf("%lf英尺=%lf米\n",val,ans);
                break;
            case 5:
                ans=LB_TO_KG(val);
                printf("%lf磅=%lf千克\n",val,ans);
                break;
            case 6:
                ans=KG_TO_LB(val);
                printf("%lf千克=%lf磅\n",val,ans);
                break;
            default:
                break;
        }
    }
    return 0;
}