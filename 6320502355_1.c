#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max=0,min=2000,max1=0,min1=0,sum=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i;j<i+3;j++)
        {
            sum+=(a[j][0]*4)+(a[j][1]*2)+(a[j][2]*1);
        }
        if(max<sum)
        {
            max=sum;
            max1=i;
        }
        if(min>sum)
        {
            min=sum;
            min1=i;
        }
        sum=0;
    }
    printf("%d %d",max1+1,min1+1);
}
