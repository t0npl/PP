#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
int main()
{
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    int i, i_max, i_min, m = 0, t = 1;
    float average = 0, sum = 0;
    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for (i = 0; i < SIZE; i++) {
        scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
    }

    //make sure whether data is as expected.
    /*
    printf("\nOutput : \n");
    for(i=0;i<SIZE;i++) {
        printf("%s %s %d\n",st[i].id,st[i].name,st[i].marking);
    }
    */
    // find max marking
    i_max = st[0].marking;
    for (i = 0; i < SIZE - 1; i++)
    {
        if (st[i + 1].marking > st[i].marking) {
            i_max = st[i + 1].marking;
        }
    }
    for (i = 0; i < SIZE; i++)
    {
        if (st[i].marking == i_max) {
            m++;

        }
    }

    // find min marking

    i_min = st[0].marking;
    for (i = 0; i < SIZE - 1; i++)
    {
        if (st[i + 1].marking < st[i].marking)
        {
            i_min = st[i + 1].marking;
        }
    }

    //calculate average

    sum = 0;
    for (i = 0; i < SIZE; i++)
    {
        sum = sum + st[i].marking;
    }
    average = sum / SIZE;
    printf("\n\n *** Analyzing Data ***\n");
    //   printf("Average marking = %.3f\n",average);
    printf("Max marking   = %d points, %d students.\n", i_max, m);
    for (i = 0; i < SIZE; i++)
    {
        if (i_max == st[i].marking)
        {
            printf("%d. %s %s %d\n", t, st[i].id, st[i].name, st[i].marking);
            t++;
        }
    }

    return 0;

}