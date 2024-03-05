#include <stdio.h>
int main ()
{
    int a;
    printf ("inserisci un numero\n");
    scanf ("%d\n", &a);
    if (a==10)
    {
        printf ("è uguale a 10\n");
    }
    else if (a>5)
    {
        printf ("è maggiore di 5\n");
    }
    else if (a<5)
    {
        printf ("è minore di 5\n");
    }
    return (0);
}
