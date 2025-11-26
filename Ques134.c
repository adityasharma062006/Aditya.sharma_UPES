#include <stdio.h>

typedef enum{
    SUCCESS, FAILURE, TIMEOUT
} STATUS;
void prints(STATUS s){
    switch (s)
    {
    case SUCCESS:
     printf("SUCCESS");
        break;
    case FAILURE:
     printf("FAILURE");
        break;
    case TIMEOUT:
     printf("TIMEOUT");
        break;
    
    default:
        break;
    }
}
int main(){
    STATUS s = SUCCESS;
    prints(s);

    return 0;
}