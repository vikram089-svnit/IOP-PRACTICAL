#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    int marks;
};

void read(struct student s[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
}

void display(struct student s[], int n)
{
    int i;

    printf("\nStudents having marks greater than 500:\n");

    for (i = 0; i < n; i++)
    {
        if (s[i].marks > 500)
        {
            printf("\nName: %s", s[i].name);
            printf("\nRoll Number: %d", s[i].roll);
            printf("\nMarks: %d\n", s[i].marks);
        }
    }
}

int main()
{
    struct student s[10];

    read(s, 10);
    display(s, 10);

    return 0;
}