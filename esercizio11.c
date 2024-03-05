#include <stdio.h>
int main () 
{
    int a;
    int b;
    int c;

    printf ("scrivi un numero\n");
    scanf ("%d", &a);
    
    printf("scrivi un numero\n");
    scanf ("%d",&b);

    printf ("scrivi un numero\n"); 
    scanf ("%d", &c);
  
    if (a-b==b-c)
    {
        printf ("brava, sei una donna forte e indipendente\n");
    }

return (0);
}


