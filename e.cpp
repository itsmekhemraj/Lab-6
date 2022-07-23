// WAP to convert polar coordinate system to rectangular coordinate 
// system and vice versa.


#include<iostream>
#include<math.h>
using namespace std;
class Rect;
class Polar
{   
    public :
    float r, t;
        Polar(float a, float b)
        {
            r=a;
            t=b;
        }
        operator Rect();
        Polar(Rect);     
        void displayP()
        {
            cout << "( " << r << ", " << t << " )" << endl;
        }
};
class Rect
{   public:
    float x , y; 
        Rect()
        {
        };
        Rect(float a, float b)
        {
            x=a;
            y=b;
        }
         void displayR()
        {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};
Polar::operator Rect()
{
    Rect a;
    float x=0, y=0;
    a.x= r*cos(t*3.1415/180);
    a.y= r*sin(t*3.1415/180);
    return a;
}
Polar:: Polar(Rect c) {
    r = sqrt(c.x*c.x + c.y*c.y);
    t = atan(c.y/c.x) *180/3.1415;
}
int main()
{
    int r, t;
    cout<<"Entre the value in polar format:"<<endl;
    cout<<"Enter r:- ";
    cin>>r;
    cout<<"Enter theta in degree:- ";
    cin>>t;
    Polar p1(r, t);
    cout<<"The given polar format is: ("<<r<<", "<<t<<")"<<endl;
    Rect r1 = p1;
    cout<<"The value in rectangular format is: ";
    r1.displayR();
    int x, y;
    cout<<endl<<"Enter the value in rectangular format:"<<endl;
    cout<<"Enter x:- ";
    cin>>x;
    cout<<"Enter y:- ";
    cin>>y;
    Rect r2(x, y);
    cout<<"The given value in rectangular format is: ("<<x<<", "<<y<<")"<<endl;
    Polar p2=r2;
    cout<<"The value in polar format is: ";
    p2.displayP();
    return 0;
}