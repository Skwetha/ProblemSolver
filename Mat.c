#include<stdio.h>
 
int main()
{
    int i, j, rows, columns, a[10][10], Sum;//declare i,j for nested loop
    
    printf(" Enter Number of rows and columns  :  ");// print the enter rows and column
    scanf("%d %d", &i, &j);//store the value of rows and columns in i,j
    
    printf(" Enter the Matrix Row and Column Elements \n");
    for(rows = 0; rows < i; rows++) //Initialize rows is 0 and increament
    {
        for(columns = 0; columns < j; columns++)//inner for loop for incrementing the column
        {
            scanf("%d", &a[rows][columns]);//store the rows and columns value
        }
    }
    
    for(rows = 0; rows < i; rows++)
    {
        Sum = 0;
        for(columns = 0; columns < j; columns++)
        {
            Sum = Sum + a[columns][rows];//sum the columns and rows
        }
        printf("The Sum of Column Elements in a Matrix =  %d \n", Sum );//printf the Sum of the element in a matrix
    }
    
    return 0;
}
