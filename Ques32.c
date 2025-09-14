// Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

int main()  
{  
  int n, r, sum=0, temp;    
  printf("Enter the Number");    
  scanf("%d", &n);    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
printf("Number is Palindrome.");    
else    
printf("Number is not Palindrome.");   
  return 0;  
} 