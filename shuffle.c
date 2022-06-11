#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void shuffle(int a[], int n)
{
    srand(time(NULL));
    
    for(int i=0;i<n;i++)
    {
        int rnd = rand() % (n-1);
        int temp = a[i];
        a[i] = a[rnd];
        a[rnd] = temp;
    }
    
    
}

int main(void)
{
    int* arry = calloc(10, sizeof(int));
    int arry_size = (_msize(arry)/sizeof(int));

    for (int i = 0; i < arry_size; i++)
        arry[i] = i + 1;

    printf("Before : ");
    printArr(arry, arry_size);
    shuffle(arry, arry_size);
    printf("After : ");
    printArr(arry, arry_size);


    free(arry);

    return 0;
}