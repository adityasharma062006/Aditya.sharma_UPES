#include <stdio.h>

void rm_nl(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
        }
        i++;
    }
}
void add_record(char *filename)
{
    FILE *fptr = fopen(filename, "a");
    char n;
    char name[20], roll[4];
    float marks;
    int i = 1;
    do
    {
        printf("\t\tStudent no. %d\n", i);
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);
        rm_nl(name);
        printf("Enter Roll No.: ");
        fgets(roll, sizeof(roll), stdin);
        rm_nl(roll);
        printf("Enter Marks: ");
        scanf("%f", &marks);
        fflush(stdin);
        printf("Add More [y/n]: ");
        scanf("%c", &n);
        fflush(stdin);
        i++;
        fprintf(fptr, "Name: %s | Roll: %s | Marks: %.2f\n", name, roll, marks);
    } while (n == 'y' || n == 'Y');
    fclose(fptr);
}
int main()
{
    char file[20] = "stuRec.txt";
    add_record(file);

    return 0;
}