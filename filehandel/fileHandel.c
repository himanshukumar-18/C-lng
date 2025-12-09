// file handling in c.

// 1. Opening a file in c.
/*
#include <stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("example.txt", "r");

    if(fptr == NULL) {
        printf("Error!\n");
    } else {
        printf("File open.\n");
        fclose(fptr);
    }

    return 0;
}*/

// 2. Create a file.
/*
#include <stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("NewFile.txt", "w");

    if(fptr == NULL) {
        printf("File was not created.");
    } else {
        printf("File created successfully.");
        fclose(fptr);
    }

    return 0;
}*/

// 3. Read file.
// a: getc()
// b: gets()
// c: fscanf()

#include <stdio.h>
int main()
{
    FILE *fptr;
    char ch;

    fptr = fopen("NewFile.txt", "r");

    if(fptr == NULL) {
        printf("File was not found.");
    }

    printf("File Content.\n");

    while((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    return 0;
}


// 4. file write.
// a: fputc()
// b: fputs()
// c: fprintf()
/*
#include <stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("NewFile.txt", "w");

    if(fptr == NULL) {
        printf("File was not found.");
    }

    fprintf(fptr,"Hello World");
    
    printf("Data writen a file in successfully.");

    fclose(fptr);

    return 0;
}*/