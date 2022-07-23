//subtraction of 2*2 matrix using - operator overloading


#include <iostream>
using namespace std;
class matrix
{
    int mat[2][2], i, j;
    public: 
    matrix() {}
    matrix(int n)
    {
        for (i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                mat[i][j]= n++;
            }
        }
    }
    matrix operator -(matrix mat1)
    {
        matrix res;
        for (i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                res.mat[i][j]= mat[i][j] - mat1.mat[i][j];
            }
        }
        return res;
    }
    void get_data()
    {
        cout<<"Enter 2*2 matrix:"<<endl;
        for (i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                cin>>mat[i][j];
            }
        }
    }
    void display()
    {
        for (i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix M1(3), M2, M3;
    M2.get_data();
    M3= M1 - M2;
    cout<<"Predefined matrix M1:"<<endl;
    M1.display();
    cout<<"Matrix M2:"<<endl;
    M2.display();
    cout<<"The subtraction i.e M1 - M2 is:"<<endl;
    M3.display();
    return 0;
}