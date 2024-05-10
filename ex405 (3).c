#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int wanshu(int x)
{
int i,j;
j=0;
	for(i=1;i<x;i++)
	{if(x%i==0)
		{j=j+i;}
	}
	
	if(j==x)
	{
	return 1;}
	else
	{
	return 0;}
}
int main(int argc, char *argv[]) {
int wanshu(int x);
int i,j,k,p=0;
int str[100];
    if (scanf("%d,%d", &i, &j )!= 2|| i < 1 || i > 9999 || j< 1 || j > 9999) {  
        printf("error\n");  
        return 1;  
    }  
for(k=i;k<j;k++)
{
if(wanshu(k)==1)
{str[p]=k;
p++;}
}
for(k=0;k<p-1;k++)
{printf("%d,",str[k]);
}
printf("%d",str[p-1]);
	return 0;
}




