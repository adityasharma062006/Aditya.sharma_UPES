// Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

int main()  
{  
int n,r,sum=0,temp;    
Printf("Enter the Number= ");    
Scanf("%d", &n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("Armstrong Number.");    
else    
Printf("Not Armstrong Number.");   
return 0;  
} 
