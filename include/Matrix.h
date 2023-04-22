#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
#include<windows.h>
#include<iomanip>
 using namespace std;


class Matrix
{
    public:
        Matrix(int);
        virtual ~Matrix();
        void setdata();
        void getarr();
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
        int row_num2=0;
        int column_num2=0;
        int n;
        float arr1[10][10];
        float arr2[10][10];
        float arr[10][10];
};

#endif // MATRIX_H
