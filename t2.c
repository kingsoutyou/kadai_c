#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String agestr;
    printf("‚ ‚È‚½‚ÍA‰½Î‚Å‚·‚©H\n");
    scanf("%s", agestr);
    
    int age = atoi(agestr);

    printf("‚ ‚È‚½‚Í%dÎ‚Å‚·\n", age);
    return 0;
}
