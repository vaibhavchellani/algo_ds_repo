#include<stdio.h>

int main(){
int n,m;
scanf("%d %d",&n,&m);
int i,s,r,n;
for(i=n ;i<=m;i++){
s=i*i;
r=s;
for(int j=0;r!=0;j=j*10){
  r = r/10;
  n=j+1; 
}
}


}
