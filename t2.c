#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
    String agestr;
    printf("���Ȃ��́A���΂ł����H\n");
    scanf("%s", agestr);
    
    int age = atoi(agestr);

    printf("���Ȃ���%d�΂ł�\n", age);
    return 0;
}
