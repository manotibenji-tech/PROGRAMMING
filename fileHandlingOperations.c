
#include <stdio.h>

// Function declarations
void writeToFile();
void readFromFile();
void appendToFile();

int main()
{
    printf("Writing First Sentence\n");
    writeToFile();

    printf("\nReading File Contents\n");
    readFromFile();

    printf("\nAppending Another Sentence\n");
    appendToFile();

    printf("\nUpdated File Contents\n");
    readFromFile();

    return 0;
}

// Function to write a sentence into the file
void writeToFile()
{
    FILE *fp;
    char sentence[200];

    fp = fopen("sample.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    printf("Enter a sentence: ");
    scanf(" %199[^\n]", sentence);

    fprintf(fp, "%s\n", sentence);

    fclose(fp);
}

// Function to read the file character by character
void readFromFile()
{
    FILE *fp;
    int ch;

    fp = fopen("sample.txt", "r");

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

// Function to append another sentence
void appendToFile()
{
    FILE *fp;
    char sentence[200];

    fp = fopen("sample.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return;
    }

    printf("Enter another sentence: ");
    scanf(" %199[^\n]", sentence);

    fprintf(fp, "%s\n", sentence);

    fclose(fp);
}
