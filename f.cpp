// WAP to convert a measurement of (distance, mass and time) in CGS 
//system to the FPS system. 

#include <iostream>
using namespace std;
class fps;
class cgs{
    float c,g,s;
    public:
    cgs(float d,float m,float t)
    {
        c =d ;
        g = m;
        s = t;
    }
    void display()
    {
            cout << "\nThe given data in CGS system is : " << endl;
            cout << c << " centimeters  " << g << " grams  " << s << " seconds" << endl;
    }
    float getC(){
        return c;
    }
    float getG(){
        return g;
    }

    float getS(){
        return s;
    }
};

class fps
{
    float f, p, s;
    public :
        fps(float d, float m, float t){
            f = d;
            p = m;
            s = t;
        }

        fps(cgs x){
            f=(x.getC())*0.0328084;
            p=(x.getG())*0.00220462;
            s=x.getS();
        }

        void displayFPS(){
            cout << "\nThe converted data in FPS system is : " << endl;
            cout << f << " foot  " << p << " pounds  " << s << " seconds" << endl;
        }
};

int main(){
    int c, g, s;
    cout<<"Enter centimeters:- ";
    cin>>c;
    cout<<"Enter grams:- ";
    cin>>g;
    cout<<"Enter seconds:- ";
    cin>>s;
    cgs X(c, g, s);
    fps Y = X;
    X.display();
    Y.displayFPS();
}