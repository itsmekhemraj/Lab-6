//Modifying using friend function of 1st qst


#include <iostream>
using namespace std;
class matrix
{
    int mat[2][2], i, j;
    public:
    void get_data();
    void display();
    friend matrix operator -(matrix, matrix);
};
void matrix::get_data()
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
matrix operator -(matrix mat1, matrix mat2)
{
        matrix res;
        for (int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                res.mat[i][j]= mat1.mat[i][j] - mat2.mat[i][j];
            }
        }
        return res;
}
void matrix::display()
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
int main()
{
    matrix M1, M2, M3;
    M1.get_data();
    M2.get_data();
    cout<<"The 1st matrix is:"<<endl;
    M1.display();
    cout<<"The 2nd matrix is:"<<endl;
    M2.display();
    cout<<"The differences of given matrix is:"<<endl;
    M3= M1- M2;
    M3.display();
    return 0;
}