//
// Created by JiaMing Xu on 24-11-5.
//

#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }
    }
}
