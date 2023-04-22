#ifndef MATRIX_H
#define MATRIX_H
 #include<iostream>
 #include<string>
 using namespace std;


class Matrix
{
    public:
        Matrix();
        virtual ~Matrix();
        void setdata();
        void matrixsum();
        void matrixmult();
        void matrixtranspose();
        void matrixinverse();
        void display_sum();
        void display_mult();
        void display_transpose();
        void display_inverse();

    private:
        int row_num=0;
        int column_num=0;
        int arr1[10][10];
        int arr2[10][10];
        int arr[10][10];
};

#endif // MATRIX_H
