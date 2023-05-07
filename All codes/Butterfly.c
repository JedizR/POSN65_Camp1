#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<2*n-1;i++)
    {

        for(j=0;j<2*n-1;j++)
        {
            if(i<n-1&&(j<=i||2*n-j-2<=i)||i==n-1||(i>n-1&&(j>=i||2*n-j-2>=i)))
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
    return 0;
}
