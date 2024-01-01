//Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;    // a and b are real and imiginary parts.
    void input(string s)
    {
        int v1=0;   //v1 is the real part of the complex number 
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')  // checking condition weather next number is space,+ or integer.
        {
            i++;
        }
        int v2=0;     // v2 is the imiganary part of complex number 
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;    // storing v1 real part of complex number into a.
        b=v2;    // storing v2 imaginary part of complex number into b.      
    }
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator+(const Complex & X, const Complex & Y) {        //function for + overloading.
    Complex Z {X.a + Y.a, X.b + Y.b};     // adding both complex number.
    return Z;
}
ostream & operator<< (ostream & out, const Complex & X) {   //function for << overloading.
    if (X.b < 0) {
        out << X.a << "-i" << -X.b;
    } else if(X.b > 0) {
        out << X.a << "+i" << X.b;
    } else {
        out << X.a;
    }
    return out;
}

int main()
{
    Complex x,y;   // here we are creating two object of Complex class.
    string s1,s2;    // s1 and s2 are two string used to store two complex number.
    cout<<"enter first complex number:\n";
    cin>>s1;
    cout<<"enter second complex number:\n";
    cin>>s2;
    x.input(s1);  // calling input function and passing s1 with the help of object x.
    y.input(s2);     // calling input function and passing s2 with the help of object y.
    Complex z=x+y;
    cout<<"sum of two complex nuber is:\n";
    cout<<z<<endl;
    return 0;
}
