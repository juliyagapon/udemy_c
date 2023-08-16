#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char str1[] = "My name is Iuliia"; 
    char temp[50];

    //copy string strncpy(dist, src, size)
    //get size sizeof in bites
    strncpy(temp, str1, sizeof(temp)-1);
    printf("copyed string: %s\n", temp);

    //get sting lenght strlen
    //printf("The lenghs is %d\n", strlen(str1));

    //concatenate strcat
    char str2[] = ". Hello, Iullia";
    strcat(str1, str2);
    printf("The conactinate is %s\n", str1);

    //concatenate strncat
    char src[50], dest[50];
    strcpy(src, "This is a source");
    strcpy(dest, "This is a destination");

    strncat(dest, src, 15);
    printf("Final destination string: [%s]\n", dest);

    //copmaring string '==' or strcmp

    printf("\nstrcmp(\"A\", \"A\") is ");
    printf("%d", strcmp("A", "A"));

    printf("\nstrcmp(\"A\", \"B\") is ");
    printf("%d", strcmp("A", "B"));

    printf("\nstrcmp(\"B\", \"A\") is ");
    printf("%d", strcmp("B", "A"));

    printf("\nstrcmp(\"C\", \"A\") is ");
    printf("%d", strcmp("C", "A"));

    printf("\nstrcmp(\"Z\", \"a\") is ");
    printf("%d", strcmp("Z", "a"));

    printf("\nstrcmp(\"apples\", \"apple\") is ");
    printf("%d", strcmp("apples", "apple"));

    printf("\nstrcmp(\"one\", \"two\") is ");
    printf("%d", strcmp("one", "two"));

    printf("\nstrcmp(\"zero\", \"one\") is ");
    printf("%d", strcmp("zero", "one"));

    printf("\nstrcmp(\"one\", \"zero\") is ");
    printf("%d", strcmp("one", "zero"));

    printf("\n");

}