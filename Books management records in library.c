/*
Name :Vincent mutua 
reg:CT100/G/26230/25
des: keeping records for books borrowed 
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fp, "%s", title);

    printf("Book stored successfully!\n");

    fclose(fp);

    return 0;
}