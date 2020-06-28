#include <stdio.h>
#include <stdlib.h>

int main(){
    //part 1
    int *List = malloc(sizeof(int)*100);
    srand((unsigned) time(NULL));
    for (int i=0;i<100;i++){
        List[i] =  rand() %100;
        printf("List[%d] is %d\n",i, List[i]);
    }

    //part 2
    int *pList;
    pList = List;
    for (int i=0;i<=100;i++){
        printf("Location of List[%d] is %x\n",i,pList);
        printf("Value of List[%d] %d\n",i, *pList);
        pList++;
    }

    //part 3
    pList = pList-1; //cannot access (on windows?)
    *pList = 45; //therefore cannot write
    //professor said that UNIX/LINUX can access and write but is dangerous
    printf("%d",*pList);

    //part 4
    free(List); //freed List
    printf("%d",List[0]); //unpredictable

    return 0;
}
