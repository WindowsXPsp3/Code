#include<stdio.h>
#include<windows.h>
#include<string.h>
#define PI 3.14
void main_32(void);
int main(void)
{
    main_32();


getchar();
    return 0;
}
void main_32(void)
{
    R:
    char user_name[21];
    int user_input_data;

    printf("请输入您的名字(最大限制为20个字)：");
    scanf("%s",user_name);
    if(strlen(user_name)>20)
    {
        printf("警告！您的输入已经超过了程序的最大输入限制！请重新输入！\n\n\a");
        Sleep(5000);
        system("cls");
        goto R;
    }
    printf("您好 %s 欢迎使用本程序！By王起舟 2021.11.22  Support：Windows10 SDK & Windows 11 SDK \n\n",user_name);
    X:
printf("控制栏菜单：\n");
printf("1.关闭计算机\n");
printf("2.重启计算机\n");
printf("3.注销此Windows会话\n");
printf("4.锁定Windows会话\n");
printf("5.进入Windows命令行操作环境.\n");
printf("6.重置Windows网络适配器的连接（BETA版本请谨慎使用此功能！！！）\n");
printf("7.查看Windows系统版本\n");
printf("8.启动Windows服务管理\n");
printf("9.配置Windows防火墙设置\n");
printf("10.查看程序信息（进入程序调试模块需要输入开发者密钥）\n");
printf("\n");
printf("请输入序号：");
    int user_input_data_check= scanf("%d",&user_input_data);
    if(user_input_data_check !=1 ){


        printf("警告！无效输入可能导致程序崩溃，请在3s后重新输入！\n\n\a");
        Sleep(3000);
        system("cls");
        goto X;
    }

if(user_input_data==1){
    printf("命令执行成功，操作代码：%d\n",ERROR_LAST_ADMIN);
    system("shutdown.exe -s -t 10");
}
if(user_input_data==2){
    printf("命令执行成功，操作代码：%d\n",ERROR_LAST_ADMIN);
    system("shutdown.exe -r -t 10");

}
    if(user_input_data==3){
        printf("命令执行成功，操作代码：%d\n",ERROR_LAST_ADMIN);
        system("logoff.exe");

    }


        if(user_input_data==4){
            printf("命令执行成功，操作代码：%d\n",ERROR_LAST_ADMIN);
            system("rundll32.exe user32.dll LockWorkStation");
    }

    if(user_input_data==5) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        printf("从C:\\windows\\system32\\获取运行环境....\n");
        system("cmd.exe");
    }
    if(user_input_data==6){
        printf("命令执行成功，操作代码：%d\n",ERROR_LAST_ADMIN);
       printf("警告！此操作会断开Windows网络连接！\n\a");
       printf("输入1继续执行，输入2退出：\a");
       int user_OK ;
       scanf("%d",&user_OK);
       if(user_OK == 1) {
           system("ipconfig.exe /release");
           system("ipconfig.exe /renew");
       }else{
       exit(0);}
    }
    if(user_input_data==7) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        system("winver.exe");
    }
    if(user_input_data==8){
        printf("命令执行成功，操作代码：%d\n",ERROR_LAST_ADMIN);
        system("services.msc");}


    if(user_input_data==9) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        printf("获取网络信息....\n");
        system("firewall.cpl");
    }
if(user_input_data==10) {
    int user_DEV_MODE;
    long user_input_key;
    int key = 81611874321;
    int C;
    C =3;
    int ERROR_MAX = 0;
printf("Program Information：\n");
printf("运行平台：Windows 10 & Windows11\n");
printf("运行架构：x64\n");
printf("支持Support：Windows 10 SDK & Windows 11 SDK\n");
printf("Bug反馈：QQ Mail：1300726011@qq.com ，Outlook Mail：wangqizhou061211@outolook.com\n");
printf("\n");
printf("返回主程序请输入1，进入开发者调试模块请输入2：");
scanf("%d",&user_DEV_MODE);
if(user_DEV_MODE == 1){
    goto X;
}
if(user_DEV_MODE ==2 ){
D:

    printf("请输入开发者所提供的密钥：");
    scanf("%ld",&user_input_key);
    if(user_input_key = key){
printf("正在验证...\n");
Sleep(1000);
printf("验证成功！Code:%d\n",ERROR_LAST_ADMIN);
printf("成功进入开发者调试模块！\n");
printf("\n");
printf("主要调用头文件为：stdio.h , windows.h , string.h\n");
printf("主要调用过程：system(""command:"");\n");
printf("源代码地址:https://github.com/WindowsXPsp3/Code/blob/main/main.cpp\n");
 printf("警告！此程序为开源软件但源代码遵循GNU通用公共许可证3.0协议，在下载并使用前请仔细阅读相关条例！\n\a\n");
system("pause");
return;
    }else{
        if(ERROR_MAX >=3 ){
            printf("由于您多次输入了错误的密钥，程序已经启动自动保护！请在退出程序后重试！\n\n\a");
            Sleep(3000);
            exit(0);
        }
            printf("警告！密钥输入错误！\n");
            Sleep(1000);
            system("cls");
            ERROR_MAX++;
            goto D;

    }
}

}

}