#include<stdio.h>
int main()
{
    int W,X,Y,Z;
    scanf("%d%d%d%d",&W,&X,&Y,&Z);
    if(W==X)
    {
    printf("YES");
    }
    else if(W==Y)
    {
        printf("YES");
    }
    else if(W==Z)
    {
        printf("YES");
    }
    else if(W==(X+Y))
    {
        printf("YES");
    }
    else if(W==(Y+Z))
    {
        printf("YES");
    }
    else if(W==(X+Z))
    {
        printf("YES");
    }
    else if(W==(X+Y+Z))
    {
       printf("YES"); 
    }
    else
    {
         printf("NO");
    }
}
