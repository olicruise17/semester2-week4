
#include <stdio.h>

int main( void ) {
    int i = 1;
    int j = 2;
    int k = 3;


    int count = scanf("%d %d %d",&i,&j,&k);

    printf("Read %d values\n",count);
    printf("Values: %d %d %d\n",i,j,k);

    return 0;
}
