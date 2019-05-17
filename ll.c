#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
char a;
struct node* ptr;
};
int main(){
char name[10];
scanf("%s",name);
int len;
len=strlen(name);
struct node* array[len+1];
for(int x=0;x<len;x++){
array[x]=NULL;
array[x]=(struct node*) malloc(sizeof(struct node));
}
array[len]=array[0];
for(int z=0;z<len;z++){
array[z]->a=name[z];
array[z]->ptr=array[z+1];
}
struct node* pt;
pt=array[0];
for(int x=0;x<len;x++){	
printf("%c",pt->a);	
pt=pt->ptr;	
}

}

