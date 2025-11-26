#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int n, i;

    // Writing to file
    fp = fopen("emp.dat", "wb");
    if(fp == NULL) {
        printf("Error in opening file!");
        return 0;
    }

    printf("How many employees? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter Employee %d Details:\n", i+1);

        printf("ID: ");
        scanf("%d", &emp.id);

        printf("Name: ");
        scanf("%s", emp.name);

        printf("Salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(emp), 1, fp);
    }

    fclose(fp);
    printf("\nEmployee details stored in file successfully.\n");

    // Reading from file
    fp = fopen("emp.dat", "rb");
    if(fp == NULL) {
        printf("Error in opening file!");
        return 0;
    }

    printf("\nReading Employee details from file:\n");

    while(fread(&emp, sizeof(emp), 1, fp)) {
        printf("\nID: %d\n", emp.id);
        printf("Name: %s\n", emp.name);
        printf("Salary: %.2f\n", emp.salary);
    }

    fclose(fp);

    return 0;
}
