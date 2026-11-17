//Structure with user input
#include <stdio.h>

struct Student
{
    int age;
    float marks;
};

int main()
{
    struct Student s1;

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f", s1.marks);

    return 0;
}