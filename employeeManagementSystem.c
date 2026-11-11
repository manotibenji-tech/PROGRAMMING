

#include <stdio.h>

// Function declarations
void writeEmployee();
void readEmployee();
void appendEmployee();

int main()
{
    printf("Enter First Employee Details\n");
    writeEmployee();

    printf("\nEmployee Records:\n");
    readEmployee();

    printf("\nEnter Another Employee Details\n");
    appendEmployee();

    printf("\nAll Employee Records:\n");
    readEmployee();

    return 0;
}

// Function to write employee details
void writeEmployee()
{
    FILE *fp;
    char id[20], name[50], department[50];

    fp = fopen("employees.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%19s", id);

    printf("Enter Full Name: ");
    scanf(" %49[^\n]", name);

    printf("Enter Department: ");
    scanf(" %49[^\n]", department);

    fprintf(fp, "ID: %s\nName: %s\nDepartment: %s\n\n",
            id, name, department);

    fclose(fp);
}

// Function to read employee records
void readEmployee()
{
    FILE *fp;
    int ch;

    fp = fopen("employees.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
}

// Function to append another employee
void appendEmployee()
{
    FILE *fp;
    char id[20], name[50], department[50];

    fp = fopen("employees.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%19s", id);

    printf("Enter Full Name: ");
    scanf(" %49[^\n]", name);

    printf("Enter Department: ");
    scanf(" %49[^\n]", department);

    fprintf(fp, "ID: %s\nName: %s\nDepartment: %s\n\n",
            id, name, department);

    fclose(fp);
}

