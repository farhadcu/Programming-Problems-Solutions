#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, i;
        long long ltr[400]={},num,sum=0;
        char str[10001],temp;
        scanf("%d ", &n);
        while(n--)
            {
            gets(str);
            sscanf(str,"%c %lld",&temp,&num);
            ltr[temp+128]=num;
            }
            scanf("%d ", &n);
        while(n--)
        {
            gets(str);
            for(i=0;str[i]; i++)
                sum+=ltr[str[i]+128];
        }
        printf("%lld.%02lld$\n",sum/100,sum%100);
    }
    return 0;
}
