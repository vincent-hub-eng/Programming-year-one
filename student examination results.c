/*
Name :Vincent mutua 
reg:CT100/G/26230/25
des: student examination results 
*/

    #include <stdio.h>

struct Student {
    char name[50];
    char reg[20];
    int marks;
};

int main() {
    FILE *fp;
    struct Student s;

    
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening results.dat\n");
        return 1;
    }

    printf("STUDENT RESULTS\n");
    printf("==============================\n");
    printf("%-20s %-15s %s\n", "Name", "Reg No", "Marks");
    printf("----------------------------------------\n");

    while (fread(&s, sizeof(s), 1, fp) == 1) {
        printf("%-20s %-15s %d\n", s.name, s.reg, s.marks);
    }
    
    fclose(fp);

    return 0;
}