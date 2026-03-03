#include <stdio.h>
#include <stdlib.h>
long long* niz;
int n;

long long faktorijel(int n)
{
    long long temp = 1;
    for (int i = 2; i <= n; ++i)
       temp *= i;
    
       return temp;
}
long long suma(long long* niz, int n)
{
    long long s = niz[0];
    for (int i = 1; i < n; ++i)
        s += niz[i];
    
    return s;
}
void ucitavanje()
{
    do 
        scanf("%d", &n);
    while (n < 1);
    niz = malloc(sizeof(long long)*n);
    
    for (int i = 0; i < n; ++i)
        scanf("%ld", niz + i);
}

int main()
{
    ucitavanje();
    for (int i = 0; i < n; ++i)
        niz[i] = faktorijel((int)niz[i]);
    
    printf("%ld", suma(niz, n));
    
    free(niz);
    return 0;
}