#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct mc
{
    char name[50];
    int health=100;
    int at;
};
struct me
{
    int hp=100;
    int at;
};


int main(void)
{
    int a,b;
    struct mc mc;
    struct me me;
    

    printf("캐릭터 이름을 선택하세요(영어로)");
    scanf("%s",&mc.name);
    while (1)
    {
        srand(time(NULL));
        printf("%s의 현재 체력:%d\n",mc.name,mc.health);
        printf("공격하시겠습니까?회복하시겠습니까?(1/2):");
        scanf("%d",&a);
        mc.at=rand()%25;
        if(a==1)
       {
            
            me.hp=me.hp-mc.at;
            if(mc.at==0)
            {
                printf("적이 방어에 성공했습니다....\n");
            }
            if(me.hp<=0)
            {
                printf("당신의 승리!\n");
                system("PAUSE");
                break;
            }
       }
       else if(a==2)
       {
           mc.health=mc.health+mc.at;
           printf("%s의 현재 체력:%d,%d 회복되었습니다.\n",mc.name,mc.health,mc.at);
       }
       b=rand()%2;
       
       printf("적의 현재 체력:%d\n",me.hp);
        me.at=rand()%25;
        if(b==0)
       {
            
            mc.health=mc.health-me.at;
            if(me.at==0)
            {
                printf("적이 공격에 실패했습니다...\n");
            }
            if(mc.health<=0)
            {
                printf("당신의 패배...\n");
                system("PAUSE");
                break;
            }
       }
       else if(b==1)
       {
           me.hp=me.hp+me.at;
           printf("적의 현재 체력:%d,%d 회복\n",me.hp,me.at);
       }
    }
    
    
}