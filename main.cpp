#include <stdio.h>
#include<iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include <string.h>
#include <string.h>
#define M 100005
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define mem(a) memset(a, 0, sizeof(a))
int vip,accounts;
int *p;
void jiemian(void)
{


    printf("\t\t\t--------------------------- \n");
    printf(" \t\t\t|                         |\n");
    printf("\t\t\t|      С����ʳƷ�̵�     |\n");
    printf(" \t\t\t|                         |\n");
    printf("\t\t\t---------------------------\n");
    system("color 2");


}
int huiyuan()
{
    int the1,the2;
    int the3=3;
    int vip=12356;
    while(the3--)
    {
        printf("���������Ļ�Ա�룺\n");
        scanf("%d",&the1);
        if(the1==vip)
        {
            return 1;
            break;
        }
        else
        {
            if(the3>=1)
            {
                printf("������%d�λ�������.\n",the3);
            }
            else
            {
                printf("���������и�����Ա��.\n");
                printf("�����������»�Ա�룻\n");
                scanf("%d",&the2);
                vip=the2;
                the3=3;
            }
        }
    }
    return 0;
}
struct node
    {

        char name[999];
        char ltem1[999];
        char ltem2[999];
        char ltem3[999];


    };
    struct node shangdian[999]=
    {
        {

            "С������",
            "�������ȱ�",
            "��֭ţ�Ɽ",
            "˫����Ϻ��",

        },
        {

            "С������",
            "�̵�����",
            "��̦����",
            "з�ҷ���",

        },
        {

            "С������",
            "����ţ����",
            "�����Ź���",
            "С��Ģ����",

        },
        {

            "С����Ʒ",
            "С����",
            "Ƥ��������",
            "����",

        },
        {

            "С�����",
            "��ݮ�������",
            "�ɿ������",
            "ţ�����",

        },
//�ָ���
        {

            "С������",
            "ԭζ����",
            "�������",
            "з�ƹ���",

        },
        {

            "С���ɴ���",
            "����ɴ���",
            "��֭�ɴ���",
            "��������ɴ���",

        },
        {

            "С��������",
            "��ݮ����������",
            "�ɿ���������",
            "ţ�̰�����",

        },
        {

            "С����Ƭ",
            "ԭζ��Ƭ",
            "�������ζ��Ƭ",
            "����ζ��Ƭ",

        },
        {

            "С������",
            "����",
            "����Ƥ",
            "����",

        },
//�ָ���
        {

            "С��֮С��������",
            "���⳦",
            "��צ",
            "����",

        },
        {

            "С��֮СѼ������",
            "Ѽ��",
            "Ѽצ",
            "Ѽ��",

        },
        {

            "С��֮���й���",
            "��ݮ��",
            "â����",
            "���Ҹ�",

        },
        {

            "С��֮������",
            "������",
            "�͵�ľ",
            "������",

        },
        {
            "С��֮��������",
            "������",
            "ţ����",
            "ɽ�����",
        },
//�ָ���
        {

            "����С��֮���Ǳ���",
            "�������",
            "���ǲ��ܱ�",
            "�������ұ�",

        },
        {

            "����С��֮�¸��̸�",
            "�����̰�",
            "�¸��ɿ�����Ƥ",
            "�¸¹��ܸ�",

        },
        {

            "����С��֮��������",
            "����ţ����",
            "�������̱�",
            "�����̸ǲ�",

        },
        {

            "����С��֮��������",
            "������������ˮ",
            "������֦����ˮ",
            "�����������ˮ",

        },
        {

            "����С��֮���Ź�֭",
            "��������֭",
            "��������֭",
            "��������֭",

        },
    };
            int theone[99]= {9,6,4,2,6,6,1,1,6,1,2,3,9,13,21,1,2,3,5,5,9,9};
            int thetwo[99]= {10,5,4,3,6,6,1,1,6,1,3,3,9,14,22,3,2,5,5,5,9,9};
            int thethree[99]= {11,7,4,2,6,6,1,1,6,1,3,3,9,11,15,3,2,8,5,5,9,9};

void xuangou(void)
{

    system("cls");
    printf("\t\t---------------------------------\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t  ��ӭ����С���������µ�ϵͳ.\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t\t��ѡ�����빺�����Ʒ����\n");
    printf("\t\t\t(1)��ζ��ʳ\n");
    printf("\t\t\t(2)������ʳ\n");
    printf("\t\t\t(3)�������\n");
    printf("\t\t\t(4)��������\n");
    system("color 11");

}

void sushi(int *p)
{
    int a1,a2,a3,a4;
    int i;
    for(i=0; i<5; i++){

        printf("(%d):%s.\n",i+1,shangdian[i].name);}

    scanf("%d",&a2);
    system("cls");
    printf("(1):%s\n",shangdian[a2-1].ltem1);
    printf("(2):%s\n",shangdian[a2-1].ltem2);
    printf("(3):%s\n",shangdian[a2-1].ltem3);
    scanf("%d",&a3);
    system("cls");

    if(a3==1){

        printf("��ʳƷ%dԪ.\n",theone[a2]);
        *p+=theone[a2];
        a1=theone[a2];

    }if(a3==2){

        printf("��ʳƷ%dԪ.\n",thetwo[a2]);
        *p+=thetwo[a2];
        a1=thetwo[a2];

    }if(a3==3){

        printf("��ʳƷ%dԪ.\n",thethree[a2]);
        *p+=thethree[a2];
        a1=thethree[a2];}

    printf("��ȷ�Ϲ���.\n");
    printf("(1):YES\n");
    printf("(2):NO\n");

    scanf("%d",&a4);
    if(a4==1)
        return ;
    else{

        *p-=a1;}


}

void lingshi(int *p)
{
    int b1,b2,b3,b4;
    int i;
    for(i=5; i<10; i++){

        printf("(%d):%s.\n",i-4,shangdian[i].name);}

    scanf("%d",&b2);
    system("cls");
    printf("(1):%s\n",shangdian[b2+4].ltem1);
    printf("(2):%s\n",shangdian[b2+4].ltem2);
    printf("(3):%s\n",shangdian[b2+4].ltem3);
    scanf("%d",&b3);
    system("cls");

    if(b3==1){

        printf("����ʳ%dԪ.\n",theone[b2+4]);
        *p+=theone[b2+4];
        b1=theone[b2+4];

    }if(b3==2){

        printf("����ʳ%dԪ.\n",thetwo[b2+4]);
        *p+=thetwo[b2+4];
        b1=thetwo[b2+4];

    }if(b3==3){

        printf("����ʳ%dԪ.\n",thethree[b2+4]);
        *p+=thethree[b2+4];
        b1=thethree[b2+4];}

    printf("��ȷ�Ϲ���.\n");
    printf("(1):YES\n");
    printf("(2):NO\n");

    scanf("%d",&b4);
    if(b4==1)
        return ;

    else{

        *p-=b1;}

    return ;
}

void guorou (int *p)
{
    int c1,c2,c3,c4;
    int i;
    for(i=10; i<15; i++){

        printf("(%d):%s.\n",i-9,shangdian[i].name);}

    scanf("%d",&c2);
    system("cls");
    printf("(1):%s\n",shangdian[c2+9].ltem1);
    printf("(2):%s\n",shangdian[c2+9].ltem2);
    printf("(3):%s\n",shangdian[c2+9].ltem3);
    scanf("%d",&c3);
    system("cls");

    if(c3==1){

        printf("����ʳ%dԪ.\n",theone[c2+9]);
        *p+=theone[c2+9];

    }if(c3==2){

        printf("����ʳ%dԪ.\n",thetwo[c2+9]);
        *p+=thetwo[c2+9];

    }if(c3==3){

        printf("����ʳ%dԪ.\n",thethree[c2+9]);
        *p+=thethree[c2+9];}


    printf("��ȷ�Ϲ���.\n");
    printf("(1):YES\n");
    printf("(2):NO\n");

    scanf("%d",&c4);
    if(c4==1)
        return ;
    else{

        *p-=c1;}

    return ;
}

void bingyin (int *p)
{
    int d1,d2,d3,d4;
    int i;
    for(i=15; i<20; i++){

        printf("(%d):%s.\n",i-14,shangdian[i].name);}

    scanf("%d",&d2);
    system("cls");
    printf("(1):%s\n",shangdian[d2+14].ltem1);
    printf("(2):%s\n",shangdian[d2+14].ltem2);
    printf("(3):%s\n",shangdian[d2+14].ltem3);
    scanf("%d",&d3);
    system("cls");

    if(d3==1){

        printf("�ñ���%dԪ.\n",theone[d2+14]);
        *p+=theone[d2+14];

    }if(d3==2){

        printf("�ñ���%dԪ.\n",thetwo[d2+14]);
        *p+=thetwo[d2+14];

    }if(d3==3){

        printf("�ñ���%dԪ.\n",thethree[d2+14]);
        *p+=thethree[d2+14];}

    printf("��ȷ�Ϲ���.\n");
    printf("(1):YES\n");
    printf("(2):NO\n");

    scanf("%d",&d4);
    if(d4==1)
        return ;

    else{

        *p-=d1;}

    return ;
}

void baybay(void)
{

    system("cls");
    printf("\t\t                                 \n");
    printf("\t\t                                 \n");
    printf("\t\t  ������һ������%dԪ.\n",accounts);
    printf("\t\t��Ϊ��׼������Ʒ���뵽������ȡ����Ʒ.\n");
    printf("\t\t���ι������%dΪ�����Զ�Ϊ�����ֵ��˺�.\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t  �ڴ������´ι���.\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t---------------------------------\n");
    system("color 35");

}

int main()
{
    p=&accounts;
    vip=12356;
    int choose;
    jiemian();
    system("pause");
    system("cls");
    if(huiyuan())
        while(1)
        {

            xuangou();
            scanf("%d",&choose);
            system("cls");
            int choose2;
                switch(choose)
                {

                case 1 :
                    sushi(&accounts);
                    break;

                case 2 :
                    lingshi(&accounts);
                    break;

                case 3 :
                    guorou(&accounts);
                    break;

                case 4 :
                    bingyin(&accounts);
                    break;

                }
        printf("\t\t------------------------\n");
        printf("\t\t------------------------\n");
        printf("\t\t   Ŀǰ��ѡ��%dԪ.\n",accounts);
        printf("\t\t   ����ѡ���밴1.\n");
        printf("\t\t   ����ѡ���밴2.\n");
        printf("\t\t   ����ѡ���밴3.\n");
        printf("\t\t------------------------\n");
        printf("\t\t------------------------\n");
            scanf("%d",&choose2);
            if(choose2==1){

                system("cls");
                continue;

            }else if(choose2==2){

                accounts=0;
                system("cls");
                continue;

            }else{

                if (accounts>=20)
                system("pause");
                baybay();
                system("pause");
                break;}

        }
    return 0;
}
