#include <stdio.h>
#include <math.h>
int arms(int num);
int arms(int num){
    int  sum = 0,rem,n = num , count = 0;
    while(n!=0){
       n= n /10;
        count++;
    }
   while(num!=0){
    rem = num %10;
    sum += pow(rem,count);
    num /=10;
   }
   return sum;
  }
 
int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
if( num == arms(num)){
    printf("it is armstrong number");
}else{
    printf("it is not a armstrong number");
}
  return 0;
}