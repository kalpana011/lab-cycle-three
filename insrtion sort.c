CodezClub
Welcome to Coding World | C C++ Java DS ProgramsSkip to contentHOME C C++ JAVA DATA STRUCTURE TRICKY Q EXTRA CONTACT US

 

 
C Program to implement Insertion Sort Using Arrays
By admin | 27.11.20160 Comment
Insertion Sort Using Arrays
Write a C Program to implement Insertion Sort Using Arrays. Here’s simple C Program to implement Insertion Sort Using Arrays in C Programming Language.

Below is the source code for C Program to implement Insertion Sort Using Arrays which is successfully compiled and run on Windows System to produce desired output as shown below :


 

 

SOURCE CODE : :
/*  C Program to implement Insertion Sort Using Arrays  */

#include <stdio.h>

int main()
{
        int A[20], N, Temp, i, j;
        printf("\nENTER THE NUMBER OF TERMS...: ");
        scanf("%d",&N);
        printf("\nENTER THE ELEMENTS OF THE ARRAY...: \n");
        for(i=1; i<=N; i++)
        {
            printf("\nENTER THE ELEMENT [ %d ]...: ",i);
            scanf("%d", &A[i]);
        }

        for(i=1; i<N; i++)
        {
            Temp = A[i];
            j = i-1;
            while(Temp<A[j] && j>0)
            {
                A[j+1] = A[j];
                j = j-1;
            }
            A[j+1] = Temp;
        }

        printf("\nTHE SORTED LIST IS...: \n\n");
        for(i=1; i<=N; i++)
                printf(" %d ",A[i]);

        printf("\n");

        return 0;
}