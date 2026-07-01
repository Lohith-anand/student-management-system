#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

void addStudent() {

    struct Student s;

    printf("Enter ID: ");
    scanf("%d",&s.id);

    printf("Enter Name: ");
    scanf("%s",s.name);

    printf("\nStudent Added\n");

    printf("ID: %d\n",s.id);
    printf("Name: %s\n",s.name);
}

int main() {

    addStudent();

    return 0;
}
