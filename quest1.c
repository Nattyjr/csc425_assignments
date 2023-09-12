/*
Nate
Question 1: 
#include<stdio.h>
#include<sys/types.h>

int main(){
int x=100;


pid_t pid= fork():

if(pid < 0){
fprintf(stderr, "fork fail")
}else if (pid==0){
printf("child");
x=150;
printf("child modified");

x=400;
printf("parent modified")
}

return  0;
}
*/



