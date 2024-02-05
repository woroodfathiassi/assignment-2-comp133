//Worood Fathi Assi #1210412

#include <stdio.h>
#include <stdlib.h>

int hasEqualDigitSum(int);
int hasEqualDigitCount(int);
int isBalanced(int);

int main()
{
    int x,y,i;
    printf("enter any two different positive integers x and y : \n ");
    scanf("%d%d",&x,&y);
     printf("The balanced numbers from %d to %d are:\n",x,y);
     for(i=x;i<=y;i++){

        if(isBalanced(i)==1)
            printf("%d\n",i);

     }
    return 0;
}

int hasEqualDigitSum(int x)
{
    int odd=0 ,even=0;
    while(x!=0)
    {
            int m=x%10;
        if(m%2==0)
        even++;

        else
            odd++;

            x=x/10;
    }
        if(even==odd)
            return 1;
        else
            return 0;

}

int hasEqualDigitCount(int x)
{
    int odd=0 ,even=0;
    while(x!=0)
    {
            int a=x%10;
        if(a%2==0)
        even+=a;

        else
            odd+=a;

            x=x/10;
    }
    if(even==odd)
    return 1;
    else
    return 0;

}

int isBalanced(int x)
{
    if(hasEqualDigitSum(x)==1&&hasEqualDigitCount(x)==1)
        return 1;

}
