#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<inttypes.h>
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

    printf("��������������(�������Ϊ20����)��");
    scanf("%s", user_name);
    if (strlen(user_name) > 20) {
        printf("���棡���������Ѿ������˳��������������ƣ����������룡\n\n\a");
        Sleep(5000);
        system("cls");
        goto R;
    }
    printf("���� %s ��ӭʹ�ñ�����By������ 2021.11.22  Support��Windows10 SDK & Windows 11 SDK \n\n", user_name);
    X:
    printf("�������˵���\n");
    printf("1.�رռ����\n");
    printf("2.���������\n");
    printf("3.ע����Windows�Ự\n");
    printf("4.����Windows�Ự\n");
    printf("5.����Windows�����в�������.\n");
    printf("6.����Windows���������������ӣ�BETA�汾�����ʹ�ô˹��ܣ�������\n");
    printf("7.�鿴Windowsϵͳ�汾\n");
    printf("8.����Windows�������\n");
    printf("9.����Windows����ǽ����\n");
    printf("10.�鿴������Ϣ������������ģ����Ҫ���뿪������Կ��\n");
    printf("11����������ģ��\n");
    printf("\n");
    printf("��������ţ�");
    int user_input_data_check = scanf("%d", &user_input_data);
    if (user_input_data_check != 1) {


        printf("���棡��Ч������ܵ��³������������3s���������룡\n\n\a");
        Sleep(3000);
        system("cls");
        goto X;
    }

    if (user_input_data == 1) {
        printf("����ִ�гɹ����������룺%d\n", ERROR_LAST_ADMIN);
        system("shutdown.exe -s -t 10");
    }
    if (user_input_data == 2) {
        printf("����ִ�гɹ����������룺%d\n", ERROR_LAST_ADMIN);
        system("shutdown.exe -r -t 10");

    }
    if (user_input_data == 3) {
        printf("����ִ�гɹ����������룺%d\n", ERROR_LAST_ADMIN);
        system("logoff.exe");

    }


    if (user_input_data == 4) {
        printf("����ִ�гɹ����������룺%d\n", ERROR_LAST_ADMIN);
        system("rundll32.exe user32.dll LockWorkStation");
    }

    if (user_input_data == 5) {
        printf("����ִ�гɹ����������룺%d\n", ERROR_LAST_ADMIN);
        printf("��C:\\windows\\system32\\��ȡ���л���....\n");
        system("cmd.exe");
    }
    if (user_input_data == 6) {
        printf("����ִ�гɹ����������룺%d\n", ERROR_LAST_ADMIN);
        printf("���棡�˲�����Ͽ�Windows�������ӣ�\n\a");
        printf("����1����ִ�У�����2�˳���\a");
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
        printf("����ִ�гɹ����������룺%d\n", ERROR_LAST_ADMIN);
        system("winver.exe");
        Sleep(3000);
        goto X;
    }
    if (user_input_data == 8) {
        printf("����ִ�гɹ����������룺%d\n", ERROR_LAST_ADMIN);
        system("services.msc");
        Sleep(3000);
        goto X;
    }



    if(user_input_data==9) {
        printf("����ִ�гɹ����������룺%d\n", ERROR_LAST_ADMIN);
        printf("��ȡ������Ϣ....\n");
        system("firewall.cpl");
        Sleep(3000);
        goto X;
    }
    if(user_input_data==11)
    {
        int user_D;
printf("����������ģ��....");
printf("\n\n");
printf("��ǰϵͳʱ��:");
system("time /T");
printf("�������м�齫������whileѭ������Ƿ������Լ�������ʼ�������Ƿ�������\n");
printf("����1ִ�г��������������ַ������˵���ͬʱ����CTRL+Cǿ���˳�����\n");
printf("�����룺");
scanf("%d",&user_D);
if(user_D==1)
{
    int test =1 ;
    int user_input_test_1_ERROR;
    int user_input_test_2_ERROR;
    while(test <100) {
        test++;
        printf("ִ��do...while...����飬���ȣ�%d%\n", test);
    }

    printf("����ɣ�״̬���룺%d\n",ERROR_LAST_ADMIN);
    printf("\n");
    printf("����ִ�г��溯�����....\n");
    printf("Hello World\n");
    printf("�����Կ�����Ļ�ϳ��ֵ�Hello World�ַ�������������1������������2\n");
    printf("�����룺");
    scanf("%d",&user_input_test_1_ERROR);
    if(user_input_test_1_ERROR == 1){
        printf("״̬��stdio.hͷ�ļ�-------->I/O OK�������룺%d\n\n",ERROR_LAST_ADMIN);

    }
    if(user_input_test_1_ERROR ==2 ){

        printf("״̬����������Ϣ������������־....done....\n");
    }
    printf("���ڼ��system��������ָ���Ƿ�����쳣....\n");
    system("cmd.exe /c control");
    Sleep(1000);
printf("���Ƿ񿴵��˿�����壨control.exe������������������1������������2��\n");
printf("\n");
printf("�����룺");
scanf("%d",&user_input_test_2_ERROR);
if(user_input_test_2_ERROR ==1 ){
    printf("״̬��windows.hͷ�ļ�---------->command OK�������룺%d\n",user_input_test_2_ERROR);

}
if(user_input_test_2_ERROR ==2 ){

    printf("״̬����������Ϣ������������־...done...\n");
}
printf("���ڼ���ʼ��ֵ....Please wait....\n");
if(sizeof(user_name) !=21 && PI !=3.14)

{
printf("���棡����ܿ��ܱ��޸Ĺ���Ϊ�����ĵ��԰�ȫ���˳����Ѿ�ͣ�ã�\n\n\a");
Sleep(1000);
    exit(0);

}else{
    printf("All done! TEST PASSED! \n\n");
    printf("���ɳ�������־��....Please wait...\n\n");
    printf("Program Logs:\n");
    if(user_input_test_1_ERROR==2){
        printf("����ͷ�ļ�stdio.h�����ĵ������޷��������У�I/O ERROR\n\a");
    }
    if(user_input_test_2_ERROR ==2){
        printf("����ͷ�ļ�windows.h�����ĵ������޷��������У�Command ERROR\n\a");
    }
    printf("do...while....��䣺������\n");
printf("���������ʼ����������\n");
printf("\n");
printf("��������ʱ�䣺");
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
    int key = 81611874321;
    int C;
    C =3;
    int ERROR_MAX = 0;
printf("Program Information��\n");
printf("����ƽ̨��Windows 10 & Windows11\n");
printf("���мܹ���x64\n");
printf("֧��Support��Windows 10 SDK & Windows 11 SDK\n");
printf("Bug������QQ Mail��1300726011@qq.com ��Outlook Mail��wangqizhou061211@outolook.com\n");
printf("\n");
printf("����������������1�����뿪���ߵ���ģ��������2��");
scanf("%d",&user_DEV_MODE);
if(user_DEV_MODE == 1){
    goto X;
}
if(user_DEV_MODE ==2 ){
D:

    printf("�����뿪�������ṩ����Կ��");
    scanf("%ld",&user_input_key);
    if(user_input_key = key){
printf("������֤...\n");
Sleep(1000);
printf("��֤�ɹ���Code:%d\n",ERROR_LAST_ADMIN);
printf("�ɹ����뿪���ߵ���ģ�飡\n");
printf("\n");
printf("��Ҫ����ͷ�ļ�Ϊ��stdio.h , windows.h , string.h����ƽ̨������ͷ�ļ���inttypes.h ��stdint.h\n");
printf("��Ҫ���ù��̣�system(""command:"");\n");
printf("Դ�����ַ:https://github.com/WindowsXPsp3/Code/blob/main/main.cpp\n");
 printf("���棡�˳���Ϊ��Դ�����Դ������ѭGNUͨ�ù������֤3.0Э�飬�����ز�ʹ��ǰ����ϸ�Ķ����������\n\a\n");
system("pause");
return;
    }else{
        if(ERROR_MAX >=3 ){
            printf("��������������˴������Կ�������Ѿ������Զ������������˳���������ԣ�\n\n\a");
            Sleep(3000);
            exit(0);
        }
            printf("���棡��Կ�������\n");
            Sleep(1000);
            system("cls");
            ERROR_MAX++;
            goto D;

    }
}

}

}