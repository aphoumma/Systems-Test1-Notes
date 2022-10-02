#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{


int *a;
int size = 6;
int i;
int j;
int z;

a = (int*)calloc(size, (sizeof(int)));

a[0] = 92; 
a[1] = 14;
a[2] = 67;
a[3] = 42;
a[4] = 64;
a[5] = 75;


// Printing Array Forwards w/ For Loop
printf("This is the array forwards: \n");
    for (i=0; i<size; i++)
    printf("%d \n", a[i]);

// Printing Array Backwards w/ For Loop
printf("This is the array backwards: \n");
    for (i=size-1; i>=0; i--)
    printf("%d \n", a[i]);








// Printing Array Forwards w/ While Loop
printf("This is array forwards again: \n");
i=0;
while (i<size)
{
    printf("%d \n", a[i]);
    i++;
}

// Printing Array Backwards w/ While Loop
printf("This is array backwards again \n");
i=size-1;
while (i >=0)
{
    printf("%d \n", a[i]);
    i--;
}










// Loops that Don't Print
for(i=0; i != 0; i++)
printf("TESTING \n");

for(i=size; i<size; i++)
printf("TESTING \n");

for(i=0; i>size; i++)
printf("TESTING \n");

for(i=0; i>0; i--)
printf("TESTING \n");







// Bubble Sorting Array
for (j=0; j<size-1; j++) //remember j<size-1 because nothing to compare last element to in this sort
for (i=0; i<size-1; i++)
    if (a[i] > a[i+1])
    {
        z = a[i];
        a[i] = a[i+1];
        a[i+1] = z;
    }

printf("This is the sorted array: \n");
for(i=0; i<size; i++)
printf("%d \n", a[i]);



// Free Memory and Prove It
free(a);
printf("After freeing memory: \n");
for(i=0; i<size; i++)
printf("%d \n", a[i]);






/*      INFINITE LOOPS EXAMPLES

for(i=0, i<size, i++)
printf("TEST \n");
i--;


for(i=0, i>=0; i++)
printf("condition i>=0 will always be true \n");


i=0
while(i<size)
{
    printf("TEST \n");
    i--;
}
*/


}