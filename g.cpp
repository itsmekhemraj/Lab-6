#include <iostream>
using namespace std;

class Design1{
    char code;
    int qty, price;
    public:
    Design1(){};
    void setCode(char c){
        code = c;
    }
    void setQntyAndPrice(int q, int p){
        qty = q;
        price = p;
    }
    char getCode(){
        return code;
    }
    int getQty(){
        return qty;
    }
    int getPrice(){
        return price;
    }
};

class Design2{
    char code;
    int value;
    public:
    void setCode(char c){
        code = c;
    }
    Design2(){};
    Design2(Design1 obj){
        code = obj.getCode();
        value = obj.getPrice() * obj.getQty();
    }

    char getCode(){
        return code;
    }

    int getValue(){
        return value;
    }

};

int main(){
    Design1 D1;
    Design2 D2;
    char code;
    int quantity, price;
    cout<<"Enter code (Single character):- ";
    cin>>code;
    D1.setCode(code);
    cout<<"Enter quantity:- ";
    cin>>quantity;
    cout<<"Enter price of each:- ";
    cin>>price;
    D1.setQntyAndPrice(quantity, price);
    D2 = D1;
    cout<< "\nCode: " << D2.getCode() << "\nValue:" << D2.getValue() <<endl;
    return 0;
}