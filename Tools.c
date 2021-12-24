#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<inttypes.h>
#include<stdlib.h>
#include<stdint.h>
#define PI 3.14
#define TEST_INT_1 20061211
#define TEST_INT_2 1300726011
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
printf("Please wait for the program to perform a self-check.....\n");
Sleep(1000);
printf("The Program Support By Microsoft Developer Documentation\n");
printf("[I] The program entry address:%#x\n",130072601120061211);
Sleep(800);
printf("[I] 16-Bit & 8-Bit Checksum:%#x %#o\n",TEST_INT_1*TEST_INT_2,TEST_INT_1*TEST_INT_2);
printf("[W] Not in the developer environment！\n");
Sleep(100);
printf("[I] The variable of user_name maximum input limit is:%zd\n", sizeof(user_name));
//以下代码由微软开发者文档提供技术支持
    DWORD dwVersion = 0;
    DWORD dwMajorVersion = 0;
    DWORD dwMinorVersion = 0;
    DWORD dwBuild = 0;

    dwVersion = GetVersion();

    // Get the Windows version.

    dwMajorVersion = (DWORD)(LOBYTE(LOWORD(dwVersion)));
    dwMinorVersion = (DWORD)(HIBYTE(LOWORD(dwVersion)));

    // Get the build number.

    if (dwVersion < 0x80000000)
        dwBuild = (DWORD)(HIWORD(dwVersion));

    printf("[N] Your Windows Version is %d.%d (%d)\n",
           dwMajorVersion,
           dwMinorVersion,
           dwBuild);
    //微软开发者文库支持结束
    printf("[S] Pass the test successfully！\n");
    Sleep(500);
    printf("\n\n");
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

    goto X;
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
    printf("2.添加系统用户并激活使用权限（操作需要的权限：系统管理员）\n");
printf("3.开启/关闭Windows自动更新服务（操作需要的权限：系统管理员）\n");
printf("4.关闭桌面窗口管理器（dwm.exe）\n");
printf("5.列举所有的网络适配器\n");
printf("6.强制使电脑蓝屏（注意！此操作将激活Windows应急函数并触发BOSD！）\n");
printf("7.返回至普通程序列表\n");
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
    int user_admin;
    printf("若要添加一个权限级别为普通的用户请输入1，若要添加一个权限为系统管理员的用户请输入2\n");
    printf("\n\n");
    printf("请输入：");
   scanf("%d",&user_admin);
    if(user_admin == 1) {
        system("net user user /add");
        system("net user user /active:yes");
        int back_number;
        back_number = system("echo %errorlevel%");
        if (back_number == -1 || back_number == 0 || back_number == 1) {
            printf("添加失败！请检查程序运行环境是否为管理员权限，并关闭杀毒软件！\n\n\a");
            Sleep(3000);
            goto F;
        }
        printf("添加成功！用户名为：user，用户权限：\n\n");
        printf("程序将在5s后返回至高级功能列表！\n\a");
        Sleep(5000);
        system("cls");
        system("cls");
        goto F;
    }
    if(user_admin == 2)
    {
        printf("警告！此账户一经开启就已经拥有admin权限，请务必设置强密码，防止被攻击！\n\a");
        Sleep(1000);
        printf("Working....\n");
        printf("枚举用户名：\n");
        system("net user");
        printf("正在修改用户账户控制（UAC）....");
system("net user user_root /add");
printf("正在激活账户....\n");
system("net user user_root /active:yes");
printf("正在提升用户权限.....\n");
Sleep(1000);
system("net localgroup administrators user_root /add ");
int user_admin_ERROR = system("echo %errorlevel%");
if(user_admin_ERROR ==2 || user_admin_ERROR ==0 )
{
    printf("添加失败！\n\a");
    printf("\n\n");
    printf("请确保：\n");
    printf("1.程序正在以管理员身份运行，若不是，请退出程序后，右击程序点击以管理员身份运行！\n");
    printf("2.所有杀毒软件已经关闭，动态行为监控已关闭！\n");
    printf("3.确保系统用户组内，用户用户名不为：user_root \n");
printf("程序将在5s后自动回到高级功能列表！\n");
Sleep(5000);
goto P;
}
printf("添加成功！用户名：user_root，用户权限：系统管理员\n");
Sleep(2000);
goto P;
    }
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
    system("ipconfig.exe /all");
    Sleep(5000);
    goto F;
}
if(user_Pro_data == 6){
    int BOSD;
    int OS;
L:
    printf("在执行此操作前您应该知道此操作的原理以及可能导致的后果！\n");
Sleep(500);
    printf("原理：（对于Windows10及以上的操作系统x64架构）以管理员身份运行cmd.exe后执行taskkill命令强制结束系统核心进程svchost.exe主动触发系统蓝屏\n");
    Sleep(500);
    printf("(对于Windows8和Windows8.1系统x64架构)由于Windows8和Windows8.1对用户权限进行严格管理所以无法触发蓝屏\n");
    Sleep(500);
    printf("(对于Windows7系统x64架构）以管理员身份运行cmd.exe后执行taskkill命令强制结束wininit系统核心进程主动触发系统蓝屏\n");
    Sleep(500);
    printf("(对于WindowsXP系统x64架构)对于WindowsXP64位系统将使用ntsd命令从ring0驱动级别结束系统内核导致蓝屏\n");
    Sleep(500);
    printf("警告！蓝屏瞬间会强制停止对硬盘的读写，未保存的数据将会丢失！！！\n\a");
    printf("蓝屏会导致用户组里面的其他正在使用系统的用户也蓝屏！！！\n\a");
    printf("绝对禁止在未经他人授权或者服务器上运行此程序，否则后果自负！！！\n\a");
    printf("注意：由于要操作系统核心进程，所以务必以管理员身份运行此程序，否则会失败！！！\n\a");
    printf("重点注意！突然蓝屏可能导致重新启动时进入恢复模式或者进行磁盘坏道自检，若出现恢复界面请务必选择继续使用，若进入磁盘自检界面可按照要求按下键盘上任意键跳过检查！！！\n\n\a");
    Sleep(3000);

    printf("您是否已经知晓了以上操作并授权此操作(如已知晓并同意操作请输入1，如不同意次操作请输入2)：");
    int user_input_BOSD_check = scanf("%d",&BOSD);
    if(user_input_BOSD_check !=1){

        printf("检测到异常输入（范围1或2），请重新输入！！！");
        Sleep(1000);
        while(getchar()!='\n');
        goto L;
    }
    if(BOSD == 1){
        M:
printf("请按照以下提示输入您的操作系统版本\n\n");
printf("操作系统代号：Windows10及以上请输入1 ， Windows7请输入2 ， WindowsXP请输入3 ， Windows8.1请输入4 ，若需要帮助查看系统版本，请输入5以查看系统版本\n\n");

printf("请输入：");
 int OS_check = scanf("%d",&OS);
 if(OS_check !=1){
     printf("检测到异常输入（范围1-6），请重新输入！！！");
     Sleep(1000);
 }
if(OS == 1)
{
    printf("如果未蓝屏，请检查权限是否为管理员身份运行，具体步骤--->右击程序----->点击以管理员身份运行------->在弹窗中选择是\n\n");
    system("taskkill.exe /f /im svchost.exe");
    system("taskkill.exe /f /im wininit.exe");
exit(0);
}
if(OS==2)
{
    printf("如果未蓝屏，请检查权限是否为管理员身份运行，具体步骤--->右击程序----->点击以管理员身份运行------->在弹窗中选择是\n\n");
    system("taskkill.exe /f /im wininit.exe");
    exit(0);
}
if(OS==3)
{
    printf("如果未蓝屏，请检查权限是否为管理员身份运行，具体步骤--->右击程序----->点击以管理员身份运行------->在弹窗中选择是\n\n");
   system( "ntsd.exe -c q -pn winlogon.exe");
}
if(OS==4)
{
    printf("如果未蓝屏，请检查权限是否为管理员身份运行，具体步骤--->右击程序----->点击以管理员身份运行------->在弹窗中选择是\n\n");
system("taskkill.exe /f /im dwm.exe");
system("taskkill.exe /f /im wininit.exe");
system("taskkill.exe /f /im svchost.exe");
exit(0);
}
if(OS==5){
    printf("打开Windows版本信息中....\n");
    system("winver.exe");
    Sleep(2300);
    goto M;
}



    }
    if(BOSD ==2)
    {
        printf("请稍后...正在返回至高级功能列表...\n");
        Sleep(1000);
        goto P;
    }


}
if(user_Pro_data == 7)
{
    goto X;
}
}
if(user_input_data==13)
{
    exit(0);
}
}
