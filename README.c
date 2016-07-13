#include <stdio.h>
#include<string.h>
void pks(char p[], int k)
{
	int i,b[26]={0};
    for(i=0;i<k;i++)
    	b[p[i]%97]++;
    for(i=0;i<k;i++)
    {
    	if(b[p[i]%97]>0)
    	{
    		printf("Count of %c is:%d\n",p[i],b[p[i]%97]);
    		b[p[i]%97]=0;
    	}
    }
}
 
 int main()
{
    char p[1000];
    int k;
	scanf("%s",p);
	k=strlen(p);
	pks(p,k);
	return 0;
}
