#include <stdio.h>

int main(){
    FILE* fptr = fopen("numbers.txt","r");
    int num,count=0;
    float sum=0;
    while (fscanf(fptr,"%d",&num)>0)
    {
        sum+=(float)num;
        count++;
    }
    printf("\n\tSum = %.f\n\tAverage = %f",sum,(sum/count));

    return 0;
}