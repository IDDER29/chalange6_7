#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[] = {3,1,7,9,4,5};

    for(int t = 0 ; t < sizeof(numbers)/4 ; t++)
    {
        for(int i = 0 ; i< sizeof(numbers)/4 ; i++)
        {
            for(int j = i+1 ; j < sizeof(numbers)/4 ; j++)
            {
                if(numbers[i] > numbers[j])
                {

                    int temp = numbers[i];

                    numbers[i] = numbers[j];

                    numbers[j] = temp;
                    break;

                }
            }
        }
    }


    printf("num : %d\n", numbers[3]);
    return 0;
}
