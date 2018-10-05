#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char * arr[3];

   /* Initial memory allocation */
   arr[0] = (char*) calloc(1, 5);
   arr[1] = (char*) calloc(1, 5);
   arr[2] = (char*) calloc(1, 5);
   strcpy(arr[0], "four");
   strcpy(arr[1], "II");
   
   int i;
   
   for(i = 0 ; i < 3 ; i++){
    printf("String = %s  Address = %u\n", arr[i], arr[i]);
   }
   
   /* Reallocating memory */
   arr[0] = (char*) realloc(arr[0], 6);
   strcat(arr[0], "-");
   printf("String = %s,  Address = %u\n", arr[0], arr[0]);

   free(arr[0]);
   free(arr[1]);
   free(arr[2]);
   
   return(0);
}
