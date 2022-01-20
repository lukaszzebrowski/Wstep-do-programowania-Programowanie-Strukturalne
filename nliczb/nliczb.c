#include <stdio.h>
 
int main()
{
    int num;
    int res=0;
    int x;

    printf("Ile liczb chcesz zsumowac?\n");
	scanf("%d",&num);
    printf("Wpisz kolejno swoje liczby:\n");    
    while (num--)
    {
        scanf("%d",&x);
        res+=x;
    }
    printf("Suma twoich licz wynosi:\n");
    printf("%d",res);
    return 0;
}
