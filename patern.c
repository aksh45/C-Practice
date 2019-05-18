#include<stdio.h>
int main(){
int x,c=0,i,ss,z;

for(x=0;x<=4;x++){
ss=4-x;	
for(z=ss;z>0;z--)
{
printf(" ");
}	
for(i=0;i<x;i++){
c+=1;
printf("%d ",c);
}
printf("\n");
}

}
