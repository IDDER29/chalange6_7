#include <stdio.h>
#include <stdlib.h>
void deleteElement(int targetIn, int length, int arr[])
{

    for(int i = targetIn ; i < (length - 1) ; i++)
    {

        arr[i] = arr[i+1];
        printf("length : %d\n", i);
    }



}



int main()
{

    int tableau[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i< sizeof(tableau)/4 ; i++)
    {
        if(tableau[i]%2 == 0)
        {
            deleteElement(i, sizeof(tableau)/4, tableau);
        }



        printf("\n");
    }

    int i = 0;
    while(i< 10)
    {
        printf("%d", tableau[i]);
        i++;
    }

    return 0;
}
