#include <stdio.h>

main() {
    int i,j;
   srand(time(0));
   for(i=0;i<5;i++) 
   {
       for(j=0;j<20;j++) 
            printf(" %d",rand()%100);
        printf("\n");
   }
   return 0;

}
