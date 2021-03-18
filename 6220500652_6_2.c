#include<stdio.h>
int main()
{
    int x=0,y=0,n,i;
    scanf("%d",&n);
    char a[n],b[n];
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<n;i++)
    {
		if(b[i]==a[i])
        {
            x++;
        }
        else 
        {
            y++;
        }
    }
	printf("%d %d",x,y);
    
}

