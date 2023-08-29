include<stdio.h>
#include<math.h>
int main(){
int num, count=0, x,no;
printf("Enter a number\n");
scanf("%d",&num);
no=num;
printf("The number you entered is:\n %d\n",num);
while(num){
 num=num/10;
count++;}
for(;count>1;count--){
x=pow(10,count-1);
printf("%d\n",no%x);}
return 0;
    }

