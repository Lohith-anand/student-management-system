#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

void viewStudent() {

    struct Student s = {101, "Lohith"};

    printf("\nStudent Details\n");

    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
}

int main() {

    viewStudent();

    return 0;
}
