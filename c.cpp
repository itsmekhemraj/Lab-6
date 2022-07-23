// WAP to calculate the transpose of a matrix using a member function and 
// finally check if a matrix is equal to its transpose or not by 
// overloading '==' operator

#include <iostream>
#define row 2
#define cols 2
using namespace std;
class matrix
{
    int arr[row][cols], i, j;
    public:
    matrix() {}
    void get_data()
    {
        cout<<"Enter the elements of 2*2 matrix:"<<endl;
        for(i=0; i<row; i++)
        {
            for(j=0; j<cols; j++)
            {
                cin>>arr[i][j];
            }
        }
    }
    void display()
    {   
        for(i=0; i<row; i++)
        {
            for(j=0; j<cols; j++)
            {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    matrix transpose()
    {
        matrix temp;
        for(i=0; i<row; i++)
        {
            for(j=0; j<cols; j++)
            {
                temp.arr[j][i] = arr[i][j];
            }
        }
        return temp;
    }
    bool operator ==(matrix M)
    {
        bool flag= true;
        for(i=0; i<row; i++)
        {
            for(j=0; j<cols; j++)
            {
                if(arr[i][j]!=M.arr[i][j])
                {
                    flag= false;
                    break;
                }
            }
        }
        return flag;
    }
};
int main()
{
    matrix M1, T;
    M1.get_data();
    T= M1.transpose();
    cout<<"The entered matrix is:"<<endl;
    M1.display();
    cout<<"The transpose of this matrix is:"<<endl;
    T.display();
    if(M1==T)
    {
        cout<<endl<<"The matrix and its transpose are equal."<<endl<<endl;
    }
    else
    {
        cout<<endl<<"The matrix and its transpose are not equal."<<endl<<endl;
    }
    return 0;
}