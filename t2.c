#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String agestr;
    printf("あなたは、何歳ですか？\n");
    scanf("%s", agestr);
    
    int age = atoi(agestr);

    printf("あなたは%d歳です\n", age);
    return 0;
}
