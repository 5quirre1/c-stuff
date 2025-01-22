#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
   char *strings[] = {"greg","greg1","greg2", "greg3", "greg4"};
   char choice[66];
   
   

   printf("what number (zero-five) ALSO lowercase plz ");
  
   scanf("%s", choice);
   
   if (strcmp(choice, "zero") == 0) {
      printf("%s", strings[0]);
   }
   else if (strcmp(choice, "one") == 0) {
      printf("%s", strings[1]);
   }
   else if (strcmp(choice, "two") == 0) {
      printf("%s", strings[2]);
   }
   else if (strcmp(choice, "three") == 0) {
      printf("%s", strings[3]);
   }
   else if (strcmp(choice, "four") == 0) {
      printf("%s", strings[4]);
   }
   else {
       printf("that not real. restarting ahhahahahaha\n\n");
       main();
   }

  
}
