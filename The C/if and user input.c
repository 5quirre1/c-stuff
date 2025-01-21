#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    printf("what is your fav food? (no capital geeg)\n");
    
    char input[30];

    scanf("%s",input);

    if (strcmp(input, "cheese") == 0) {
        printf("You like cheese.. so peak... :333");
    }
    else if (strcmp(input, "pizza") == 0) {
        printf("Pizza is so goated...");
    }
    else {
        printf("your fav food is %s!!!", input);
    }

    return 0;
}
