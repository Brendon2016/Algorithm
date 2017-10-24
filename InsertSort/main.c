#include <stdio.h>
#include <stdlib.h>
#include "InsertSort.h"
#include <string.h>
int main()
{
    int buf[7] = {6,3,2,5,9,1,0};
    InsertSort(buf , 7);
    int i = 0;
    for(i = 0; i<7;i++)
        printf("%d ",buf[i]);
    return 0;
}
