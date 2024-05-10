#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int taozi(int x)
{
if(x==1) {
return 1;}
if(x>=2)  
{return (taozi(x-1)+1)*2;}
}
int main(int argc, char *argv[]) {
	int taozi(int x);
printf("%d",taozi(10));
}

