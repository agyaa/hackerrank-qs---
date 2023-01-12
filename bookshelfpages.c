#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int i;
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    total_number_of_books = (int*)malloc(1100*sizeof(int));
    total_number_of_pages = (int**)malloc((pow(10, 5))*sizeof(int*));
    
    for(i=0;i<total_number_of_shelves;i++)
    {
        *(total_number_of_books + i) = 0;
    }
    
    while (total_number_of_queries--) 
    {
        int type_of_query, x, y;
        scanf("%d %d ", &type_of_query, &x);
        
        if (type_of_query == 1) 
        {
            /*
             * Process the query of first type here.
             */
            int y;
            scanf("%d", &y);
            printf("%d\n", *(total_number_of_books + x));
            *(total_number_of_books+x) = (*(total_number_of_books+x)) + 1;
            int k = *(total_number_of_books + x);
            *(*(total_number_of_pages+x)+ (k-1) ) = y;
        
        } 
        else if (type_of_query == 2) 
        {
            int y;
            scanf("%d", &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } 
        else 
        {
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) 
    {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) 
    {
        if (*(total_number_of_pages + i)) 
        {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) 
    {
        free(total_number_of_pages);
    }
    
    return 0;
}
