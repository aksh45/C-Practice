#include<stdio.h>
int ls(int arr[],int num,int index){
for(int x=0;x<index;x++){
if(arr[x]==num){
 return 1;
}
}
return 0;
}
int main(){
int n;
printf("Enter size of array");
scanf("%d",&n);
int array[n];
for(int x=0;x<n;x++){
scanf("%d",&array[x]);
}
int index=0;
int dnum[n];
for(int z=0;z<n;z++){

 if(ls(dnum,array[z],index)!=1){
dnum[index]=array[z];
index++;

}
}
for(int i=0;i<index;i++){
printf("%d ",dnum[i]);
}
}

