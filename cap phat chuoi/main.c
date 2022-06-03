#include<stdio.h>
#include<string.h>
int size_ki_tu (char a[]);
void cap_phat_bo_nho(int m,char a[]);
int main( int argc , char const *agrv [])
{
    char a[100];
    int d;
    while(1)
    {
    	printf("\nnhap ki tu: ");
        scanf ("%s",&a);
        d=size_ki_tu(a);
        cap_phat_bo_nho(d,a);
        printf("\n sl: %d", d);
	} 
}
int size_ki_tu (char a[])
{
    int i=0;
    while (a[i]!= NULL)
    {
        i++;
    }
    return i;
}
void cap_phat_bo_nho(int m ,char a[])
{
    char b[m];
    strcpy(b,a);
	printf("%s",b);
}