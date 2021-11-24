#include<stdio.h>
#include<windows.h>
#define ONE_KM 1000
#define Gold_T 1000
void other(void);
void Gold(void);
void pro(void);
void while_test(void);
void rush(void);
int main(void)
{
    rush();
    other();
    Gold();
    while_test();
    pro();
    char name[50];

    printf("请输入您的姓名(限制在50个字内):");
    scanf("%s",name);
    if(strlen(name)>50){
        printf("警告！您的输入超过了程序最大输入限制！");
        Sleep(2000);
        return 0;
    }
    printf("你好 %s",name);
    int user_run=0;
while(user_run<=ONE_KM){

    printf("Program is running....%d\n",user_run);
user_run ++;
}
Sleep(2000);
int timeout = 0;
do{
timeout++;
printf("timeout:%d\n",timeout);
}while
(
timeout <= 1000);
system("cls");
int Gold;
for (Gold=0;Gold<=100;Gold++)
{
    printf("挖矿中...Working please wait.... 已完成：%d\n",Gold);


}
printf("完成！");
getchar();
    return 0;
}
void pro(void)
{
    printf("执行循环中...\n");
int X=0;
do{
    X++;
    printf("执行中，循环条件X>1000 已完成：%d\n",X);
}while(X<1000);
printf("循环已经成功完成！当前X的值为：%d\n\a",X);
}
void while_test(void) {
    printf("while语句基本测试程序，By王起舟\n");
    int A = 0;
    const int A_T = 1000;
    if (A <= 1000) {
        printf("测试条件满足，A=0！\n");

    } else {
        printf("警告！测试条件不满足，A>0 or A<0\n");
        printf("\n");
        printf("程序将在5s后自动退出！\n\a");
        Sleep(5000);
        return;
    }
    while (A < A_T) {
        A++;
        printf("正在执行循环检查！请稍后....已完成：%d/1000\n", A);

    }
    printf("循环检测成功完成！\n\a");
    Sleep(1000);
    getchar();
    system("cls");
    printf("do...while...语句测试程序，By王起舟\n");
    int B=0;
    const int B_T = 100;
    if(B<0&&B>0&&B_T!=100)
    {

        printf("警告！测试条件不足！\n\a");
        exit(0);


    }else{
        do{
            B++;
            printf("正在执行do...while...语句检查，已完成：%d\n",B);

        }while(B<B_T);

        printf("检查结束....\n\a");
getchar();
    }
}
void Gold(void){
printf("按下回车开始挖矿！\n\a");
getchar();
int user_gold = 0;
while(user_gold <=Gold_T){

    if(user_gold==600)
    {
        printf("警告！挖到无效金矿！code:%x\n",user_gold);
        system("pause");
        user_gold++;
        continue;

    }
    user_gold++;
    printf("挖金中....Please wait.... finish:%d/1000\n",user_gold);
}

}

void other(void)
{
    //for循环
    int CA;
for(CA=0;CA<1000;CA++){
    printf("CA=%d\n",CA);



}
}

void rush(void)
{
    int rush;
    for(rush=1;rush<=1000;rush++){

        printf("rush=%d\n",rush);
    }
    printf("finish!\n\a");
system("pause");

}