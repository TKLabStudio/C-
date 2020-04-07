#include <stdio.h>
#include <stdlib.h>

int main()
{
    char map[3][3];
    int i,j,row,col;
    int count=0;

    for(i=0;i<3;i++)
       for(j=0;j<3;j++)
          map[i][j]='.';

    printf("first people:\n");
    while(1)
    {
            printf("input row:->");
            scanf("%d",&row);
            if (row-1<0 || row-1>2)
            {
               printf("out of range!\n");
               continue;
            }

            printf("input col:->");
            scanf("%d",&col);
            if (col-1<0 || col-1>2)
            {
               printf("out of range!\n");
               continue;
            }

            if(map[row-1][col-1] != '.')
            {
               printf("position has been used\n");
               continue;
            }

            if (count%2==0)
               map[row-1][col-1]=178;
            else
               map[row-1][col-1]=219;

            for(i=0;i<3;i++)
            {
             	for(j=0;j<3;j++)
                   printf("%c",map[i][j]);
              	printf("\n");
            }
            count++;

            if(count == 9)
               break;
            if((count%2)!=1)
               printf("first people:\n");
            else
               printf("second people:\n");
    }
    printf("game is over!\n");
    system("PAUSE");
    return 0;               
}
