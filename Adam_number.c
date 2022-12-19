#include<stdio.h>
int main()
{
    int n,n1,sq,sq1,r,q,s=0,r1,q1,s1=0,rsq;
    scanf("%d",&n);
    q=n;    //12
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    n1=s;    //21
    sq=n*n;  //144
    sq1=n1*n1;//441
    q1=sq1;   //441
    while(q1!=0)
    {
        r1=q1%10;    //1 4 4
        q1=q1/10;    //44 4 0
        s1=s1*10+r1;   //
        
    }
    rsq=s1;
    if(sq==rsq)
    {
        printf("True");
    }
    else
    {
        printf("False"); 
    }
}