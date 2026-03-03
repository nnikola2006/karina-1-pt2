#include "ucitavanje.h"

long long* niz = NULL;
int n = 0;

void ucitavanje()
{
    do
        scanf("%d", &n); 
    while (n < 1);
    niz = malloc(sizeof(long long)*n);
    
    for (int i = 0; i < n; ++i)
        scanf("%ld", niz + i);
}