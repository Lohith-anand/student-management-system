#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

int main() {

    struct Student s;

    s.id = 101;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("\nStudent Details\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);

    return 0;
}
