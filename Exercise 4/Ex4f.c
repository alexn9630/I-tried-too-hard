#include <stdio.h>
int main(int i){
  printf("Enter an integer: ");
  scanf("%d", &i);
  for (int a=0;a<=i;a++){
    if (a<i){
      printf("# ");
    }
    else{
      printf("\n");
    }
  }
  for (int b=0;b<(i-1);b++){
    if(b==(i-2)){
      for (int d=0;d<=i;d++){
        if (d<i){
          printf("# ");
        }
        else{
          printf("\n");
        }
      }
    }
    else{
      for (int c=0;c<i-1;c++){
        if (c==0){
          printf("#");
        }
        if (c==(i-2)){
          printf(" #\n");
        }
        else{
          printf("  ");
        }
      }
    }
  }
  return 0;
}
