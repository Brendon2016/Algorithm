#include "InsertSort.h"


void InsertSort(int *buf , int n )
{
    int i;
    for(i = 1 ; i < n ;i++)
    {
        int j = i-1;
        int itmp = buf[i];
        while((j >= 0) && (buf[j] > itmp))
        {
            buf[j+1] = buf[j];
            j--;
        }
        buf[j+1] = itmp;
    }
}
