#include<stdio.h>
int main(){
int n=5;
  for(int i=1;i<=n;i+=2){
    for(int j=1;j<=i;j++){
      printf("*");
      }
    printf("\n");
  }
  for(int i=n-2;i>=1;i-=2){
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}