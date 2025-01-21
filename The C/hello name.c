#include <stdio.h>
#include <string.h>

int main() {
  printf("what is name?\n");
  char name[60];

  scanf("%s", name);
  
  if (strcmp(name, "trump") == 0) {
      printf("Kys.");
  } else {
      printf("hai %s!!!", name);
  }
}
