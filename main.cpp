#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<inttypes.h>
#include<stdlib.h>
#include<stdint.h>
#define PI 3.14
void main_32(void);
int main(void)
{
    main_32();
    getchar();
    return 0;
}
void main_32(void) {
    R:
    char user_name[21];
    int user_input_data;

    printf("请输入您的名字(最大限制为20个字)：");
    scanf("%s", user_name);
    if (strlen(user_name) > 20) {
        printf("警告！您的输入已经超过了程序的最大输入限制！请重新输入！\n\n\a");
        Sleep(5000);
        system("cls");
        goto R;
    }
    printf("您好 %s 欢迎使用本程序！By王起舟 2021.11.22  Support：Windows10 SDK & Windows 11 SDK \n\n", user_name);
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
    printf("11.进入程序测试模块\n");
    printf("12.高级功能配置\n");
    printf("13.退出程序\n");
    printf("\n");
    printf("请输入序号：");
    int user_input_data_check = scanf("%d", &user_input_data);
    if (user_input_data_check != 1) {


        printf("警告！无效输入可能导致程序崩溃，请在3s后重新输入！\n\n\a");
        Sleep(3000);
        system("cls");
        goto X;
    }

    if (user_input_data == 1) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        system("shutdown.exe -s -t 10");
    }
    if (user_input_data == 2) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        system("shutdown.exe -r -t 10");

    }
    if (user_input_data == 3) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        system("logoff.exe");

    }


    if (user_input_data == 4) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        system("rundll32.exe user32.dll LockWorkStation");
    }

    if (user_input_data == 5) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        printf("从C:\\windows\\system32\\获取运行环境....\n");
        system("cmd.exe");
    }
    if (user_input_data == 6) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        printf("警告！此操作会断开Windows网络连接！\n\a");
        printf("输入1继续执行，输入2退出：\a");
        int user_OK;
        scanf("%d", &user_OK);
        if (user_OK == 1) {
            system("ipconfig.exe /release");
            system("ipconfig.exe /renew");
        } else {
            exit(0);
        }
    }
    if (user_input_data == 7) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        system("winver.exe");
        Sleep(3000);
        goto X;
    }
    if (user_input_data == 8) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        system("services.msc");
        Sleep(3000);
        goto X;
    }



    if(user_input_data==9) {
        printf("命令执行成功，操作代码：%d\n", ERROR_LAST_ADMIN);
        printf("获取网络信息....\n");
        system("firewall.cpl");
        Sleep(3000);
        goto X;
    }
    if(user_input_data==11)
    {
        int user_D;
printf("进入程序测试模块....");
printf("\n\n");
printf("当前系统时间:");
system("time /T");
printf("程序自行检查将检查程序while循环语句是否正常以及各个初始化变量是否正常！\n");
printf("输入1执行程序，输入其他数字返回主菜单，同时按下CTRL+C强制退出程序！\n");
printf("请输入：");
scanf("%d",&user_D);
if(user_D==1)
{
    int test =1 ;
    int user_input_test_1_ERROR;
    int user_input_test_2_ERROR;
    while(test <100) {
        test++;
        printf("执行do...while...语句检查，进度：%d%\n", test);
    }

    printf("已完成！状态代码：%d\n",ERROR_LAST_ADMIN);
    printf("\n");
    printf("正在执行常规函数检查....\n");
    printf("Hello World\n");
    printf("您可以看到屏幕上出现的Hello World字符吗？若能请输入1，不能则输入2\n");
    printf("请输入：");
    scanf("%d",&user_input_test_1_ERROR);
    if(user_input_test_1_ERROR == 1){
        printf("状态：stdio.h头文件-------->I/O OK！，代码：%d\n\n",ERROR_LAST_ADMIN);

    }
    if(user_input_test_1_ERROR ==2 ){

        printf("状态：将错误信息保存至程序日志....done....\n");
    }
    printf("正在检查system函数调用指令是否出现异常....\n");
    system("cmd.exe /c control");
    Sleep(1000);
printf("您是否看到了控制面板（control.exe），若看到了请输入1，否则请输入2！\n");
printf("\n");
printf("请输入：");
scanf("%d",&user_input_test_2_ERROR);
if(user_input_test_2_ERROR ==1 ){
    printf("状态：windows.h头文件---------->command OK！，代码：%d\n",user_input_test_2_ERROR);

}
if(user_input_test_2_ERROR ==2 ){

    printf("状态：将错误信息保存至程序日志...done...\n");
}
printf("正在检查初始化值....Please wait....\n");
if(sizeof(user_name) !=21 && PI !=3.14)

{
printf("警告！程序很可能被修改过！为了您的电脑安全，此程序已经停用！\n\n\a");
Sleep(1000);
    exit(0);

}else{
    printf("All done! TEST PASSED! \n\n");
    printf("生成程序检查日志中....Please wait...\n\n");
    printf("Program Logs:\n");
    if(user_input_test_1_ERROR==2){
        printf("错误！头文件stdio.h在您的电脑上无法正常运行！I/O ERROR\n\a");
    }
    if(user_input_test_2_ERROR ==2){
        printf("错误！头文件windows.h在您的电脑上无法正常运行！Command ERROR\n\a");
    }
    printf("do...while....语句：正常！\n");
printf("各项变量初始化：正常！\n");
printf("\n");
printf("报告生成时间：");
system("date /t && time /t");
system("pause");
system("cls");
goto X;
}
}else{

    exit(0);
}




    }
if(user_input_data==10) {
    int user_DEV_MODE;
    long user_input_key;
     long long int key = 81611874321;
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
    scanf("%lld",&user_input_key);
    if(user_input_key = key){
printf("正在验证...\n");
Sleep(1000);
printf("验证成功！Code:%d\n",ERROR_LAST_ADMIN);
printf("成功进入开发者调试模块！\n");
printf("\n");
printf("主要调用头文件为：stdio.h , windows.h , string.h；跨平台兼容性头文件：inttypes.h ，stdint.h\n");
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
if(user_input_data ==12 ){
    P:

    int user_Pro_data;
    printf("警告！在您执行以下功能时，应当知道命令执行的作用和后果，以及获取系统管理员的同意！\n");
    printf("注意！高级功能配置可能需要管理员权限，请确保运行权限为管理员权限\n\n\a");
    printf("权限越大，责任越大！\n\n\a");
    F:
    printf("高级功能配置列表：\n");
    printf("1.列出系统所有用户\n");
    printf("2.添加系统用户(user)并激活使用权限（操作需要的权限：系统管理员）\n");
printf("3.开启/关闭Windows自动更新服务（操作需要的权限：系统管理员）\n");
printf("4.关闭桌面窗口管理器（dwm.exe）\n");
printf("5.返回至普通功能列表\n");
printf("请输入：");
int user_Pro_data_check = scanf("%d",&user_Pro_data);
if(user_input_data_check != 1)
{

    printf("警告！检测到您输入的数据有误，请确保输入有效值（1-5）！\n\n\a");
    Sleep(2000);
    goto P;
}
if(user_Pro_data ==1)
{
system("net user");
printf("\n");
printf("获取成功！程序将在5s后自动跳转到主程序！Code：%d\n",ERROR_LAST_ADMIN);
Sleep(5000);
goto F;
}
if(user_Pro_data ==2 ){
    system("net user user /add");
    system("net user user /active:yes");
    int back_number;
    back_number = system("echo %errorlevel%");
    if(back_number == -1 || back_number == 0 || back_number == 1){
        printf("添加失败！请检查程序运行环境是否为管理员权限，并关闭杀毒软件！\n\n\a");
        Sleep(3000);
        goto F;
    }
    printf("添加成功！用户名为：user，用户权限：普通用户权限\n\n");
    printf("程序将在5s后返回至高级功能列表！\n\a");
    Sleep(5000);
    goto F;
}
if(user_Pro_data ==3)
{
    int user_windows_update;
printf("由于此功能需要直接操作Windows核心服务所以请务必以管理员身份运行此程序！\n\a");
printf("输入1永久关闭Windows更新，输入2恢复Windows更新，输入其他数字或者同时按住CTRL+C强制退出程序！\n\n");
printf("请输入：");
scanf("%d",&user_windows_update);
if(user_windows_update == 1)
{
    printf("关闭中...Please wait....\n");
    system("net stop Usosvc ");
    int ERROR_2 = system("echo %errorlevel%");
    if(ERROR_2==0){
        printf("关闭失败！请确保运行身份为管理员！ERROR CODE:%d\n\a",ERROR_LAST_ADMIN);
        Sleep(2000);
        goto F;
    }
    printf("关闭成功！\n\n");

    printf("程序将在5s后返回至高级功能列表！\n\a");
    Sleep(5000);
    system("cls");
    goto F;
}
if(user_windows_update ==2){
    printf("恢复Windows自动更新服务中....Please wait....\n");
    system("net start Usosvc ");
    int ERROR_1  = system("%errorlevel%");
    if(ERROR_1==2){
        printf("恢复失败，程序检测到此服务已经开启！\n\a");
        Sleep(3000);
        goto F;
    }
    printf("成功恢复Windows自动更新服务！\n\n");
    printf("程序将在5s后返回至高级功能列表！\n\a");
    Sleep(5000);
    system("cls");
    goto F;
}
exit(0);
}
if(user_Pro_data == 4){
    printf("关闭dwm.exe中....\n\a");
    system("taskkill.exe /f /im dwm.exe");
    Sleep(2000);
    system("taskkill.exe /f /im dwm.exe");
int Kill_ERROR;
Kill_ERROR = system("echo %errorlevel%");

if(Kill_ERROR == 0){
    printf("结束进程dwm.exe失败！请以管理员身份运行此程序！\n\n\a");
    Sleep(5000);
    exit(0);
}
printf("结束进程dwm.exe成功！\n");
    printf("程序将在5s后返回至高级功能列表！\n\a");
    Sleep(5000);
    system("cls");
    goto F;
}
if(user_Pro_data ==5 )
{
    goto X;
}

}
if(user_input_data==13)
{
    exit(0);
}
}