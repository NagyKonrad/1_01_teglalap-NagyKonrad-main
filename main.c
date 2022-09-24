#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    printf("Kerem az a es b oldalt szokozzel elvalasztva: ");
    scanf("%d %d",&a,&b);
    int k=2*(a+b);
    int t=a*b;
    printf("%d a kerulet es %d a terulet.",k,t);
    return 0;
}
