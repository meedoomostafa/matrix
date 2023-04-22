#include <iostream>
#include<Matrix.h>
#include<windows.h>
#include<iomanip>


using namespace std;

int main()
{
    char k;
    do
    {
        cout<<"|-------------------------|"<<endl;
        cout<<"|[1] sum matrix           |"<<endl;
        cout<<"|[2] multplication matrix |"<<endl;
        cout<<"|[3] transpose matrix     |"<<endl;
        cout<<"|[4] inverse matrix       |"<<endl;
        cout<<"|-------------------------|"<<endl<<endl<<endl;

        int n;
        cout<<" enter number of progress you want : "; cin>>n;
        cout<<endl<<endl;
        Matrix b(n);

        switch(n)
        {
            case 1:
                b.setdata();
                b.getarr();
                system("cls");
                b.matrixsum();
                b.display_sum();
                break;
            case 2:
                b.setdata();
                b.getarr();
                system("cls");
                b.matrixmult();
                b.display_mult();
                break;
            case 3:
                b.setdata();
                b.getarr();
                system("cls");
                b.matrixtranspose();
                b.display_transpose();
                break;
            case 4:
                b.setdata();
                b.getarr();
                system("cls");
                b.matrixinverse();
                b.display_inverse();
                break;
        }
        cout<<"-----------------------------------"<<endl;
        cout<<"do you want another progress ?(y/n) : ";cin>>k;
        cout<<"-----------------------------------"<<endl;
        cout<<endl<<endl;
        if(k=='y')
            system("cls");

    }while(k!='n');
}
