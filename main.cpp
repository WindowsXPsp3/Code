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

    printf("��������������(������50������):");
    scanf("%s",name);
    if(strlen(name)>50){
        printf("���棡�������볬���˳�������������ƣ�");
        Sleep(2000);
        return 0;
    }
    printf("��� %s",name);
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
    printf("�ڿ���...Working please wait.... ����ɣ�%d\n",Gold);


}
printf("��ɣ�");
getchar();
    return 0;
}
void pro(void)
{
    printf("ִ��ѭ����...\n");
int X=0;
do{
    X++;
    printf("ִ���У�ѭ������X>1000 ����ɣ�%d\n",X);
}while(X<1000);
printf("ѭ���Ѿ��ɹ���ɣ���ǰX��ֵΪ��%d\n\a",X);
}
void while_test(void) {
    printf("while���������Գ���By������\n");
    int A = 0;
    const int A_T = 1000;
    if (A <= 1000) {
        printf("�����������㣬A=0��\n");

    } else {
        printf("���棡�������������㣬A>0 or A<0\n");
        printf("\n");
        printf("������5s���Զ��˳���\n\a");
        Sleep(5000);
        return;
    }
    while (A < A_T) {
        A++;
        printf("����ִ��ѭ����飡���Ժ�....����ɣ�%d/1000\n", A);

    }
    printf("ѭ�����ɹ���ɣ�\n\a");
    Sleep(1000);
    getchar();
    system("cls");
    printf("do...while...�����Գ���By������\n");
    int B=0;
    const int B_T = 100;
    if(B<0&&B>0&&B_T!=100)
    {

        printf("���棡�����������㣡\n\a");
        exit(0);


    }else{
        do{
            B++;
            printf("����ִ��do...while...����飬����ɣ�%d\n",B);

        }while(B<B_T);

        printf("������....\n\a");
getchar();
    }
}
void Gold(void){
printf("���»س���ʼ�ڿ�\n\a");
getchar();
int user_gold = 0;
while(user_gold <=Gold_T){

    if(user_gold==600)
    {
        printf("���棡�ڵ���Ч���code:%x\n",user_gold);
        system("pause");
        user_gold++;
        continue;

    }
    user_gold++;
    printf("�ڽ���....Please wait.... finish:%d/1000\n",user_gold);
}

}

void other(void)
{
    //forѭ��
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