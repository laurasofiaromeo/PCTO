#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;

    printf ("inserisci le tre lunghezze del trinagolo");
    scanf ("%d, %d,%d", &a, &b, &c);
    
    if(a==b&&b==c)
    {
        printf ("triangolo equilatero");
        
    }
    else if (a!=b&&b!=c&&c!=a)
    {
        printf ("triangolo scaleno");
       
    
    }
    else 
{
    printf ("triangolo isoscele");
    
}
    

}