#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// a C program that reads character strings from user input
void readString( char *s);
void writeFile( char *s);
// One main function,
int main() {
    printf("Please enter a string\n"); //Get user input
    char input[100];

    //Call method to read String
    readString(input);

    printf(" (Will be written to a file)\n");
    //Call method to write it to a file.
    writeFile(input);
    printf("\n The string was written to a file\n");
    //Close program
    return 0;
}

//  one function to read the string from user input
void readString( char *s){
    scanf("%[^\n]",s);//input string with space
    if(strlen(s) > 100){ //Check length
        printf("String is too big\n");
    }
    printf("%s",s);
}

//  another function to write it to the file.
void writeFile(char *s){
FILE *fptr;
fptr = fopen("string.txt","w+");

    if(fptr == NULL){
        printf("\nfile cannot be opened\n");
        exit(1);
    }

fprintf(fptr, "%s", s);
fclose(fptr);

}