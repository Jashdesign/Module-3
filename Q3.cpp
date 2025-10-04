#include<iostream>
using namespace std;

class rectangle{
        int length,width;
    public:
        rectangle(int l,int w){
            length = l,width = w;
        }
        int area(){
            return length*width;
        }
};

int calculateArea(int l,int w){
    return l*w;
}

int main(){
    int length, width;
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter width:";
    cin>>width;
    cout<<"Calculate area using POP: "<<calculateArea(length,width)<<endl;
    rectangle rect(length,width);
    cout<<"Calculated area using OOP: "<<rect.area();
    return 0;
}