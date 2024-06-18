#include<stdio.h>
int main(){
int add[7]={5,9,12,56,45,23,41};
int sum=0;
for(int i=0; i<=6; i++){
sum=sum+add[i];
}
printf("sum of all element of array is %d",sum);
}