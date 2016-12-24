#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&a[arr_i]);
    }
    int s,l,v,r;
    l=a[0];
    for(int t=0;t<n;t++){
		if(l<a[t]){l=a[t];}
		}
	for(int t=0;t<n;t++){
		if(l==a[t]){v=t;}
		}
	a[v]=a[0];
	a[0]=l;
	
	/*for(int t=0;t<n;t++){
		printf("\t%d",a[t]);
		}*/
	for(int k=0;a[0]!=0;k++){
		r=0;
		s=l;
			for(int j=0;j<n;j++){
				if(a[j]>0){
					if(s>a[j]){s=a[j];
						//printf("\nthis is small %d",s);
						}
					}
				}
				for(int i=0;i<n;i++){
				//printf("\nthis is %d of %d",a[i],i);
				if(a[i]>0){
					a[i]=a[i]-s;
					r=r+1;
					
					}
					//printf("\nthis is new %d of %d",a[i],i);
					}
			printf("\n%d",r);
		}
	
	
    return 0;
}
