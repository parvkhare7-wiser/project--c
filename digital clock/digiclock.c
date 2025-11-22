#include<stdio.h>
int main(){
int h,m,s;
double i;
printf("enter hour and minute");
scanf("%d", &h);
scanf("%d", &m);
s=0;
while(1)
{
    printf("%02d:%02d:%02d\n",h,m,s);
    sleep(1);
    s++;
    if(s==60){
        s=0;
        m++;
    }
    if(m==60){
        m=0;
        h++;
    }
        if(h==24){
        h=0;
}
}
return 0;
}

