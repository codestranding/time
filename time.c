#include <stdio.h>

int main (void) {
   int seconds;
   int minutes;
   int hours; 
   
printf("Enter seconds: ");
scanf("%d", &seconds);

printf("Enter minutes: ");
scanf("%d", &minutes);

printf("Enter hours: ");
scanf("%d", &hours);





int total_seconds = hours *3600 + minutes * 60 + seconds;

printf("Total time in seconds: %d\n", total_seconds);
   
   return 0;
   
}
