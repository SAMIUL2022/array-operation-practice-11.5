#include <stdio.h>
#include<string.h>
int main ()
{
int a;
scanf("%d",&a);
char b [a];
int sum=0;
for (int i = 0; i <a ; i++)
{
    scanf("%s",b);
    sum=sum+b[i]-'0';

    
}
printf("%d",sum);



    return 0;
}