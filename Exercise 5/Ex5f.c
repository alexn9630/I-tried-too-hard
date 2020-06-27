#include <stdio.h>
int main(int i){
   const char * month[13];
   month[1] = "January";
   month[2] = "Febuary";
   month[3] = "March";
   month[4] = "April";
   month[5] = "May";
   month[6] = "June";
   month[7] = "July";
   month[8] = "August";
   month[9] = "September";
   month[10] = "October";
   month[11] = "November";
   month[12] = "December";
   scanf("%d", &i);
   if(i>0 && i<13){
     printf("%s\n", month[i]);
   }
   else{
     printf("Unknown month\n");
   }
   const char *ptr = month[2];

     printf("%x\n", *ptr);
  return 0;
}
