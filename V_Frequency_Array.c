#include <stdio.h>
int main ()
{
int n;
int m;
scanf("%d %d",&n,&m);
int a [n];

int c [m+1];
 for (int i = 1; i <= m; i++) {
        c[i] = 0;}
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);

    c[a[i]]++;
    
}
for (int i = 1; i <= m; i++)
{
  
  
     printf("%d\n",c[i]);
  
  
}




    return 0;
}