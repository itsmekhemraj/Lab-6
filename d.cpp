// WAP to convert the number in string format to double format. (Your program
//  should be able to convert "123.54 to 123.54, "123.0 to 123 etc)


#include <iostream>
#include<string.h>
#include <math.h>
using namespace std;
class String
{
    char str[20];
    public:
    String(){
        cout<<"Enter a string: ";
        cin >> str;
    }
    operator double()
    {
        double result=0;
        int dot= 0, len= strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]=='.')
            {
                dot= len - i - 1;
            }
            else
            {
                result = result * 10 + (str[i]-'0');
            }
        }
        result /= pow(10,dot);
        return result;
    }
};
int main(){
    String s;
    double c1 = s;
    cout <<"Double format from implicit conversion:- "<< c1<<endl;
    double c2;
    c2= double(s);
    cout<<"Double format from explicit conversion:- "<<c2;
    return 0;
}