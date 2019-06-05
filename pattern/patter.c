#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=1;i<n+1;i++){
   for(int z=1;z<=n-i;z++){
      printf("%s"," ");
   }
   for(int k=i;k>0;k--){
      printf("%d",k);
   }
   for(int w=2;w<i+1;w++){
      printf("%d",w);
   }
   printf("\n");
}
}
