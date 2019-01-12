// E.找饭友
// 可以看作并查集。也可以直接保存，因为本题M和N不大，可以直接开两个一维数组。
// 一个数组user[]用以保存用户指向哪种食品，一个数组food[]用以保存此类食品共有多少人选择。
// 最终，所有被选过的食品都是user[]数组中的值，
// food[user[i]]表示第i名用户喜欢的食品所选择的人数，若这个数值大于1，则food[user[i]]-1就是他的饭友个数，
// 若这个值是1就输出"BeiJu". 
#include <cstdio>
#include <cstring>
int main(void)
{
    int i,N,M,x;
    int *food,*user;
    scanf("%d%d",&N,&M);
    food=new int[M+2];
    user=new int[N+2];
    memset(food,0,M*sizeof(int));

    for(i=0;i<N;i++)
    {
        scanf("%d",&x);
        user[i]=x;
        food[x]++;
    }
    for(i=0;i<N;i++)
    {
        if(food[user[i]]>1)
            printf("%d\n",food[user[i]]-1);
        else
            printf("BeiJu\n");
    }
    
    return 0;
}
