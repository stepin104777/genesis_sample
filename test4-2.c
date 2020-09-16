#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n,i,j,count=0;
  scanf("%d",&n);
  if(n==0||n==1){
    printf("\nNeither prime nor composite");
      }
  else{
    for(i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
if(count==2){
  printf("\nPrime");
}
else printf("\nComposite");}
    return 0;
}
