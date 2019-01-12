// Accepted 
// Frank Curie 2018.1.12
// https://vjudge.net/contest/277361#problem/E
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int N,M;
    
    scanf("%d %d",&N,&M);
    int *food_fucker= new int[N];
    for(int i=0;i<N;i++)
        scanf("%d",&food_fucker[i]);
    for(int g=0;g<N;g++){
        int gayfriend = 0;
        int favorite_food = food_fucker[g];
        for(int i=0;i<N;i++)
            if( (food_fucker[i]==favorite_food) && (i!=g)) 
                gayfriend++;
        if(gayfriend==0) printf("BeiJu\n");
        else printf("%d\n",gayfriend);
    }

    return 0;
}