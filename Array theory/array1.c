#include <stdio.h>

int main()
{
    int i,num;
    printf("\n Input number of data= ");
    scanf("%d",&num);
    int score[num];
    int sum=0;
    for(i=0;i<num;i++)
    {
        //num[i]=(i+1)*5;
        printf("\n Data [%d] = ",i);
        scanf("%d",&score[i]);
        sum+=score[i];
    }
    printf("\nSUM = %d",sum);
}
