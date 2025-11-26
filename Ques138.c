#include <stdio.h>
typedef enum{
    RED,GREEN,BLUE,BLACK,WHITE
} color;
int main(){
    char colour[5][10]={"RED","GREEN","BLUE","BLACK","WHITE"};
    for (int i = 0; i < 5; i++)
    {
        printf("%s=%d\n",colour[i],i);
    }
    

    return 0;
}