#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    struct student s1, s2;

    // Taking input for Student 1
    printf("Enter name of Student 1: ");
    scanf("%s", s1.name);

    printf("Enter roll number of Student 1: ");
    scanf("%d", &s1.roll);

    printf("Enter marks of Student 1: ");
    scanf("%d", &s1.marks);

    // Taking input for Student 2
    printf("Enter name of Student 2: ");
    scanf("%s", s2.name);

    printf("Enter roll number of Student 2: ");
    scanf("%d", &s2.roll);

    printf("Enter marks of Student 2: ");
    scanf("%d", &s2.marks);

    // Checking if both are same
    if(strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks)
    {
        printf("Same\n");
    }
    else
    {
        printf("Not Same\n");
    }

    return 0;
}
