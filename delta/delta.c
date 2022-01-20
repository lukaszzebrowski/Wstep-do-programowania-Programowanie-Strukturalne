#include <stdio.h>
#include <math.h>

int main()
{

float a, b, c;
float delta;
float x;
float x1;
float x2;

printf("Wpisz liczby a, b i c w celu rowziazania rownania: ax^2+bx+c=0\n");
printf("Wpisz a:\n");
scanf("%f",&a);
printf("Wpisz b:\n");
scanf("%f",&b);
printf("Wpisz c:\n");
scanf("%f",&c);

if (a==0)
{
    x=-c/b;
    printf("%f",delta);
}
if (a!=0)
{   
    delta=(b*b)-(4*a*c);
    if (delta<0)
    {
        printf("Delta = %.2f jest wiec mniejsza od zera, zatem rownanie nie ma rozwiazan.\n",delta);
    }
    if (delta==0)
    {
        x=-b/(2*a);
        printf("Delta = %.2f, zatem rozwiazaniem rownania jest liczba: x = %.2f\n",delta, x);
    }
    if (delta>0)
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("Delta = %.2f, jest wieksza od zera, zatem rownanie ma dwa rozwiazania: x1 = %.2f, x2 = %.2f\n",delta, x1, x2);
    }
    
}

    return 0;
}