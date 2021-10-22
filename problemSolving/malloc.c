#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Memory management function
//malloc / calloc / realloc / free

int main()
{
    char str[20] = "Subarna";
    char *str2;

    str2 = malloc(20 * sizeof(char));

    if(str2 == NULL)
    {
        printf("No Memory");
    }
    else
    {
        strcpy(str, str);
    }
    printf("%s\n", str);
    printf("%s", str2);

    str2 = realloc(str2, 100*sizeof(char));

    strcpy(str2, "My name is subarna");
    printf("%s", str2);

    free(str2);

}
