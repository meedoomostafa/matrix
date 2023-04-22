#include "Matrix.h"
#include<windows.h>
#include<iomanip>

Matrix::Matrix()
{
    //ctor
}

Matrix::~Matrix()
{
    //dtor
}
void Matrix::setdata()
{
    cout<<"enter number of rows : ";cin>>row_num;
    cout<<"enter number of columns : ";cin>>column_num;
    cout<<endl<<endl;
}
void Matrix::matrixsum()
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
void Matrix::matrixmult()
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

    for(int row=0;row<row_num;row++)
    {
        int c=0;
        int r2=0;
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

}
void Matrix::matrixinverse()
{

}
void Matrix::display_sum()
{
    cout<<endl<<endl<<" the sum of two matrix is : "<<endl<<endl;
    for(int row=0;row<row_num;row++)
        {
            for(int column=0;column<column_num;column++)
            {
                cout<<" "<<arr1[row][column]+arr2[row][column]<<" ";
            }
            cout<<endl;
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

}
void Matrix::display_transpose()
{

}
void Matrix::display_inverse()
{

}
