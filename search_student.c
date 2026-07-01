#include <stdio.h>
#include <string.h>

int main() {

    char name[20];

    printf("Enter Student Name: ");

    scanf("%s", name);

    if(strcmp(name,"Lohith")==0)
        printf("Student Found");

    else
        printf("Student Not Found");

    return 0;
}
