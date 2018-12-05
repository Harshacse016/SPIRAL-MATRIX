#include<stdio.h>
#include<string.h>

//This program is to print array elements in an spiral order

int main()
{
    int m,n,i=0,j=0;
    
    //This is for size of the matrix 
    
    printf("Enter the rows and columns:");   
    scanf("%d%d",&m,&n);

    int a[m][n];
    
    //Entering the matrix elements;

    printf("Enter the Matrix Elements:");
    
    for(i=0;i<m;i++)
    {    
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
       
    int v=1;

    int bi,bj1,bj2;
    int ci1,ci2,cj;
    int di,dj1,dj2;
    int ei1,ei2,ej;

    int total,count=0;

    bi=0,bj1=0,bj2=n-1;
    ci1=1,ci2=m-1,cj=n-1;
    di=m-1,dj1=n-2,dj2=0;
    ei1=m-2,ei2=1,ej=0;

    total=m*n;
    
    //This condition is for,when the matrix size is 1 x n (or) n x 1  then we print all the elements

    if(m==1 || n==1)
    {
        for(i=0;i<total;i++)
            printf("%d ",a[0][i]);
    }
    
    //This is for n x n matrix where n!=1;

    else
    {
        while(count<total)
        {
            //This for loop is used for printing the elements in 1st row
        
            for(i=bj1;i<=bj2;i++)
            {
                printf("%d ",a[bi][i]);
                count++;
            }

            bi++;
            bj1++;
            bj2--;


            //This for loop is used for printing the elements in last column

            for(i=ci1;i<=ci2;i++)
            {
                printf("%d ",a[i][cj]);
                count++;
            }

            ci1++;
            ci2--;
            cj--;
            
            //This for loop is used for printing the elements in last row

            for(i=dj1;i>=dj2;i--)
            {
                printf("%d ",a[di][i]);
                count++;
            }

            dj1--;
            dj2++;
            di--;
            
            //This for loop is used for printing the elements in 1st column

            for(i=ei1;i>=ei2;i--)
            {       
                printf("%d ",a[i][ej]);
                count++;
            }

            ei1--;
            ei2++;
            ej++;
        }

    }
   
    return 0;
}
