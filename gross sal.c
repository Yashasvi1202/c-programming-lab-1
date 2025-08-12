#include <stdio.h>
int main(){
int gsal,nsal;
printf("Enter your gross salary in rupees-");
scanf("%d",&gsal);
if(gsal>10000){
    int all=gsal/10;
    int ded=(3*gsal)/100;
    nsal=(gsal+all)-ded;
    printf("The net salary is %d",nsal);
}
if((gsal>5000)&&(gsal<=10000)){
    int all=(7*gsal)/100;
    int ded=(2*gsal)/100;
    nsal=(gsal+all)-ded;
     printf("The net salary is %d",nsal);
}
}
