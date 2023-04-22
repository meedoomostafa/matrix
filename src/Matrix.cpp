#include "Matrix.h"


Matrix::Matrix(int N)
{
    n=N;
}

Matrix::~Matrix()
{
    //dtor
}
void Matrix::setdata()
{
    if(n==1)
    {
        cout<<"enter number of rows matrix[1] : ";cin>>row_num;
        cout<<"enter number of columns matrix[1] : ";cin>>column_num;
        cout<<endl<<endl;
        cout<<"enter number of rows matrix[2] : ";cin>>row_num2;
        cout<<"enter number of columns matrix[2] : ";cin>>column_num2;
        cout<<endl<<endl;
    }
    else
    {
        cout<<"enter number of rows : ";cin>>row_num;
        cout<<"enter number of columns : ";cin>>column_num;
        cout<<endl<<endl;
    }
}
void Matrix::matrixsum()
{
    if(row_num==row_num2 && column_num==column_num2)
    {
        for(int row=0;row<row_num;row++)
        {
            for(int column=0;column<column_num;column++)
            {
                arr[row][column]=arr1[row][column]+arr2[row][column];
            }
        }
    }
    else
    {
        cout<<setw(50)<<"-----------"<<endl;
        cout<<setw(50)<<" can't sum "<<endl;
        cout<<setw(50)<<"-----------"<<endl;

    }
}
void Matrix::getarr()
{
    if(n==1)
    {

        for(int row=0;row<row_num;row++)
        {
            cout<<setw(20)<<" enter elements of array[1] and row"<<"["<<row+1<<"]"<<endl;
            for(int column=0;column<column_num;column++)
            {
                cin>>arr1[row][column];
            }
        }
        for(int row=0;row<row_num2;row++)
        {
            cout<<setw(20)<<" enter elements of array[2] and row"<<"["<<row+1<<"]"<<endl;
            for(int column=0;column<column_num2;column++)
            {
                cin>>arr2[row][column];
            }
        }
    }
    else if(n==2)
    {
        for(int row=0;row<row_num;row++)
        {
            cout<<setw(20)<<" enter elements of array[1] and row"<<"["<<row+1<<"]"<<endl;
            for(int column=0;column<column_num;column++)
            {
                cin>>arr1[row][column];
            }
        }
        for(int row=0;row<row_num;row++)
        {
            cout<<setw(20)<<" enter elements of array[2] and row"<<"["<<row+1<<"]"<<endl;
            for(int column=0;column<column_num;column++)
            {
                cin>>arr2[row][column];
            }
        }
    }
    else
    {
        for(int row=0;row<row_num;row++)
        {
            cout<<setw(20)<<" enter elements of array and row"<<"["<<row+1<<"]"<<endl;
            for(int column=0;column<column_num;column++)
            {
                cin>>arr1[row][column];
            }
        }
    }
}
void Matrix::matrixmult()
{
    int r2=0;
    for(int row=0;row<row_num;row++)
    {
        int c=0;
        for(int column=0;column<column_num;column++)
        {
            int r=0;
            int c2=0;
            if(row_num==3&&column_num==3)
            {
                arr[row][column]=((arr1[r2][c2]*arr2[r][c])+(arr1[r2][++c2]*arr2[++r][c])+(arr1[r2][++c2]*arr2[++r][c]));
                ++c;
            }
            else if(row_num==2&&column_num==2)
            {
                arr[row][column]=((arr1[r2][c2]*arr2[r][c])+(arr1[r2][++c2]*arr2[++r][c]));
                ++c;
            }
            else
            {
                cout<<endl<<"can't multiplication"<<endl;
            }

        }
        ++r2;
    }


}
void Matrix::matrixtranspose()
{
    for(int row=0;row<row_num;row++)
    {
        for(int column=0;column<column_num;column++)
        {
            arr[row][column]=arr1[column][row];
        }

    }
}
void Matrix::matrixinverse()
{
    if(row_num==2 && column_num==2)
    {
        float y,x=1/((arr1[0][0]*arr1[1][1])-(arr1[0][1]*arr1[1][0]));
        y=arr1[0][0];
        arr1[0][0]=arr1[1][1];
        arr1[1][1]=y;
        arr1[0][1]=-arr1[0][1];
        arr1[1][0]=-arr1[1][0];
        for(int row=0;row<row_num;row++)
        {
            for(int column=0;column<column_num;column++)
            {
                arr[row][column]=( x * arr1[row][column] );
            }
        }
    }
    else if(row_num==3 && column_num2==3)
    {
        cout<<setw(40)<<" sorry I can't do it :) "<<endl;
    }
    else
        cout<<setw(40)<<" can't inverse "<<endl;
}
void Matrix::display_sum()
{
    if(row_num==row_num2 && column_num==column_num2)
    {
        cout<<endl<<endl<<" the sum of two matrix is : "<<endl<<endl;
        for(int row=0;row<row_num;row++)
            {
                for(int column=0;column<column_num;column++)
                {
                    cout<<" "<<arr[row][column]<<" ";
                }
                cout<<endl;
            }
            cout<<endl<<endl;
    }
}
void Matrix::display_mult()
{
    cout<<endl<<endl<<"the multiplication of two matrix is : "<<endl<<endl;
    for(int row=0;row<row_num;row++)
    {
        for(int column=0;column<column_num;column++)
        {
            cout<<" "<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

}
void Matrix::display_transpose()
{
    cout<<endl<<endl<<"the transpose of two matrix is : "<<endl<<endl;
    for(int row=0;row<row_num;row++)
    {
        for(int column=0;column<column_num;column++)
        {
            cout<<" "<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
void Matrix::display_inverse()
{
    cout<<endl<<endl<<"the inverse of two matrix is : "<<endl<<endl;
    for(int row=0;row<row_num;row++)
    {
        for(int column=0;column<column_num;column++)
        {
            cout<<" "<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
