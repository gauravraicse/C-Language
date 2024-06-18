#include<stdio.h>
int main(){
int mul[6]={7,4,9,2,1,12};
int p=1;
for(int i=0; i<=5; i++){
p=p*mul[i]+10;
}
printf("product of all element of array is %d",p);
}