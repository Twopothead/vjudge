// A.质数的最大乘积
// 根据简单的数学原理，两个数的和为S，二者之差越小，则乘积越大。所以要找两个和为S的数字的最大乘积，我们从S/2附近开始找。
// 如果S/2恰能整除，并且S/2是个质数，S/2*S/2就是结果。如果不是，我们再试(S/2)+1与(S/2)-1是否为质数，
// 以此直到试验到一个数最小为2（题目保证有解），或者可以试验到3为止，由于2是质数当中唯一的偶数，可以拿出来单独判断它。
// 总结此题思路，就是从S/2开始向两边顺序搜索，假设下界lowerbound记为lwbd,上界upperbound叫作upbd,则lwbd=S/2（lwbd是S/2的整除）,
// upbd=S-lwbd,这样lwbd+upbd==s，再定义一个距离S/2距离的变量d，
// 我们希望尽快找到解，对可能的d，从0开始，遍历到S/2，一旦发现lwbd-d与upbd+d同为质数时，就找到了结果，输出(lwbd-d)*(upbd+d).
// 如果一个输入S是偶数，就不需要遍历求解，直接输出2*(S-2)就是结果.
// 此题需要反复判断数字是否为质数，如果写一个函数用以判断数字是否为质数，假设有M个数字待判断，那么M次判断都要花费判断质数的函数开销。
// 在参考代码中初始用一个bool数组isPrime[]表示数字i是否为质数，若是质数则isPrime[i]=1,否则isPrime[i]=0，
// 而初始化isPrime[]数组的函数只运行了1次，后续每次判断一个数字是否为质数只需要O(1)的时间，仅需要取得isPrime[]的值就可以了. 
#include<cstdio>

const int MAXN=10009;
bool isPrime[MAXN];
void initPrime()
{
    int i,j;
    for(i=0;i<MAXN;i++)
        isPrime[i]=true;
    isPrime[0]=false;
    isPrime[1]=0;
    for(i=2;i<MAXN;i++)
    {
        if(isPrime[i]==true)
        for(j=i*i;j<MAXN;j+=i)
        {
            isPrime[j]=false;
        }
    }
}

int main(void)
{
    initPrime();
    int S,x,y;
    scanf("%d",&S);
    if(S%2==0)
    {
        x=S/2;
        y=S/2;
        while(isPrime[x]==false || isPrime[y]==false)
        {
            x+=1;
            y-=1;
        }
        printf("%d\n",x*y);
    }
    else
        printf("%d\n",2*(S-2));
    return 0;
}
    
