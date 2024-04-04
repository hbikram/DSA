#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int s,c;
    printf("Enter the size of the list:");
    scanf("\n%d",&s);

    ptr=(int *)malloc(s*sizeof(int));
    do
    {
        /* code */
         printf("\nPress 1 for creation:Press 2 for display:Press 3 for insert:Press 4 for deletion:Press 5 for reversing:Press 0 for exit:");
        scanf("\n%d",&c);

        switch (c)
        {
          case 1:
            printf("\n Enter the list elements:");
            for(int i=0;i<s;i++)
            scanf("\n%d",&ptr[i]);

              break;
          case 2:
             printf("\n Displaying the list:");
             for(int i=0;i<s;i++)
              printf("\n%d",ptr[i]);
              break;

          case 3:
          int p,v,i;
             printf("\nEnter the position to be inserted:");
             scanf("%d",&p);
             
             printf("\n Enter the value to be inserted:");
             scanf("%d",&v);
             s=s+1;
             for(i=s-1;i>=p;i--)
              ptr[i]=ptr[i-1];
            
            ptr[i]=v;
            break;
          case 4:
            int k;
            printf("\n Enter the position to be deleted:");
             scanf("%d",&k);

             for(int i=k-1;i<s;i++)
              ptr[i]=ptr[i+1];
             
             s--;
             break;
          case 5:
            // Reversing the list
            for(int i=s-1;i>=0;i--)
             printf("\n%d",ptr[i]);
             break;
          
          case 6:
          //Index of a given element
          int index;
           printf("\n Enter the element whose index is to be found:");
            scanf("%d",&index);
            for(int i=0;i<s;i++)
             {
               if(ptr[i]==index)
               printf("%d, ",i);
             }
             break;
            case 0:
            printf("Exiting.....");
            break;
          default:
            printf("Invalid Choice,try again!");
        }
    } while (c!=0);
    
   

}
