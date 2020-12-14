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
    printf("\t\t\t|      小树的食品商店     |\n");
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
        printf("请输入您的会员码：\n");
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
                printf("您还有%d次机会输入.\n",the3);
            }
            else
            {
                printf("建议您自行更换会员码.\n");
                printf("请输入您的新会员码；\n");
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

            "小树汉堡",
            "香辣鸡腿堡",
            "多汁牛肉堡",
            "双层鲜虾堡",

        },
        {

            "小树饭团",
            "咸蛋饭团",
            "海苔饭团",
            "蟹煲饭团",

        },
        {

            "小树泡面",
            "红烧牛肉面",
            "红烧排骨面",
            "小鸡蘑菇面",

        },
        {

            "小树粥品",
            "小米粥",
            "皮蛋瘦肉粥",
            "豆浆",

        },
        {

            "小树面包",
            "草莓爆浆面包",
            "巧克力面包",
            "牛奶面包",

        },
//分割线
        {

            "小树瓜子",
            "原味瓜子",
            "五香瓜子",
            "蟹黄瓜子",

        },
        {

            "小树干脆面",
            "五香干脆面",
            "蜜汁干脆面",
            "巴西烤肉干脆面",

        },
        {

            "小树棒棒糖",
            "草莓爆浆棒棒糖",
            "巧克力棒棒糖",
            "牛奶棒棒糖",

        },
        {

            "小树薯片",
            "原味薯片",
            "麻辣香锅味薯片",
            "番茄味薯片",

        },
        {

            "小树辣条",
            "卫龙",
            "豆腐皮",
            "豆干",

        },
//分割线
        {

            "小树之小鸡三件套",
            "鸡肉肠",
            "鸡爪",
            "鸡肝",

        },
        {

            "小树之小鸭三件套",
            "鸭脖",
            "鸭爪",
            "鸭翅",

        },
        {

            "小树之休闲果干",
            "草莓干",
            "芒果干",
            "黄桃干",

        },
        {

            "小树之神奇坚果",
            "板栗仁",
            "巴旦木",
            "核桃仁",

        },
        {
            "小树之绝美肉肉",
            "猪肉铺",
            "牛肉粒",
            "山椒脆肚",
        },
//分割线
        {

            "爱上小树之咔咔冰糕",
            "经典冰棍",
            "咔咔菠萝冰",
            "咔咔蜜桃冰",

        },
        {

            "爱上小树之嘎嘎奶糕",
            "经典奶棒",
            "嘎嘎巧克力脆皮",
            "嘎嘎哈密糕",

        },
        {

            "爱上小树之羞羞奶饮",
            "羞羞牛奶饮",
            "羞羞酸奶杯",
            "羞羞奶盖茶",

        },
        {

            "爱上小树之噗噜气泡",
            "噗噜柠檬气泡水",
            "噗噜荔枝气泡水",
            "噗噜橙子气泡水",

        },
        {

            "爱上小树之呐呐果汁",
            "呐呐蜜桃汁",
            "呐呐葡萄汁",
            "呐呐西柚汁",

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
    printf("\t\t  欢迎来到小树的自助下单系统.\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t\t请选择你想购买的商品种类\n");
    printf("\t\t\t(1)美味速食\n");
    printf("\t\t\t(2)馋嘴零食\n");
    printf("\t\t\t(3)销魂果肉\n");
    printf("\t\t\t(4)清凉冰饮\n");
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

        printf("该食品%d元.\n",theone[a2]);
        *p+=theone[a2];
        a1=theone[a2];

    }if(a3==2){

        printf("该食品%d元.\n",thetwo[a2]);
        *p+=thetwo[a2];
        a1=thetwo[a2];

    }if(a3==3){

        printf("该食品%d元.\n",thethree[a2]);
        *p+=thethree[a2];
        a1=thethree[a2];}

    printf("请确认购买.\n");
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

        printf("该零食%d元.\n",theone[b2+4]);
        *p+=theone[b2+4];
        b1=theone[b2+4];

    }if(b3==2){

        printf("该零食%d元.\n",thetwo[b2+4]);
        *p+=thetwo[b2+4];
        b1=thetwo[b2+4];

    }if(b3==3){

        printf("该零食%d元.\n",thethree[b2+4]);
        *p+=thethree[b2+4];
        b1=thethree[b2+4];}

    printf("请确认购买.\n");
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

        printf("该零食%d元.\n",theone[c2+9]);
        *p+=theone[c2+9];

    }if(c3==2){

        printf("该零食%d元.\n",thetwo[c2+9]);
        *p+=thetwo[c2+9];

    }if(c3==3){

        printf("该零食%d元.\n",thethree[c2+9]);
        *p+=thethree[c2+9];}


    printf("请确认购买.\n");
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

        printf("该冰饮%d元.\n",theone[d2+14]);
        *p+=theone[d2+14];

    }if(d3==2){

        printf("该冰饮%d元.\n",thetwo[d2+14]);
        *p+=thetwo[d2+14];

    }if(d3==3){

        printf("该冰饮%d元.\n",thethree[d2+14]);
        *p+=thethree[d2+14];}

    printf("请确认购买.\n");
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
    printf("\t\t  您本次一共消费%d元.\n",accounts);
    printf("\t\t已为您准备好商品，请到服务区取得商品.\n");
    printf("\t\t本次购物积分%d为分已自动为您积分到账号.\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t---------------------------------\n");
    printf("\t\t  期待您的下次光临.\n");
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
        printf("\t\t   目前已选购%d元.\n",accounts);
        printf("\t\t   继续选择请按1.\n");
        printf("\t\t   重新选择请按2.\n");
        printf("\t\t   结束选购请按3.\n");
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
