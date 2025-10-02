/*
name:Vincent mutua 
Reg:CT100/G/26230/25
des:showing data bundles selection 
*/

int main() {
    int choice;
printf("select data bundles\n");
    printf("1. 100mb @ 50\n");
    printf("2. 500mb @ 200\n");
    printf("3. 1gb @ 350\n");
    printf("4. 2gb @ 600\n");

    printf("Enter option (1-4): ");
    scanf("%d", &choice);

    if (choice== 1) {
        printf("You selected 100mb @ 50\n");
    }
    else if (choice== 2) {
        printf("You selected 500mb @ 200\n");
    }
    else if (choice ==3) {
        printf("You selected 1gb @ 350\n");
    }
    else if (choice ==4) {
        printf("You selected 2gb @ 600\n");
    }
    else {
        printf("Invalid option\n");
    }

    return 0;
}