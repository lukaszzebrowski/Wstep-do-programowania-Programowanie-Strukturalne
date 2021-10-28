#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int psy;
    int koty;

    printf("Ile masz psow?\n");
    scanf("%d",&psy);
    if (psy>0)
    {
        printf("A wiec masz %d psow!\n",psy);
    }
    printf("Ile masz kotow?\n");
    scanf("%d",&koty);
    int suma=koty+psy;
    if (suma>0)
    {
    printf("A wiec masz %d koty i %d psow razem %d zwierzat\n",koty,psy,suma);
    }
    else
    printf("to smutne, ze nie masz zwierzaczkow\n");
    system("PAUSE");
    return 0;

}
