
#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int imag;
    complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void display()
    {
        cout << real << " + " << imag << "i";
    }
};
complex add(complex x, complex y)
{
    complex temp((x.real + y.real), (x.imag + y.imag));
    return temp;
}
complex sub(complex x, complex y)
{
    complex temp((x.real - y.real), (x.imag - y.imag));
    return temp;
}
int main()
{
    complex num1(1, 2);
    complex num2(3, 4);
    num1.display();
    complex num = add(num1, num2);
    

    return 0;
}