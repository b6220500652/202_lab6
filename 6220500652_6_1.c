#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,b;
    scanf("%d",&n);
    char s[n][50],x[50];
    for(i=0;i<n;i++)
    {   
        scanf("%s",s[i]);
    }

   for(i=0;i<=n;i++)
   {
    	for(j=i+1;j<n;j++)
	  	{
        	if(strcmp(s[i],s[j])>0)
         	{
            	strcpy(x,s[i]);
            	strcpy(s[i],s[j]);
            	strcpy(s[j],x);
         	}
    	}
	}
    for(i=0;i<n;i++)
    {
        printf("%s\n",s[i]);
    }
}
