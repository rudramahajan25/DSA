#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    private:
    int real;
    int imag;
    public:
    ComplexNumbers(int real,int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void print()
    {
     cout<<real<<" + "<<"i"<<imag<<endl;
    }
    void plus(ComplexNumbers &c2)
    {
        real = real+c2.real;
        imag = imag + c2.imag;
    }
    void multiply(ComplexNumbers &c2){
        int first = real*c2.real;
        int inner = real*c2.imag;
        int inner2 = imag*c2.real;
        int outer = (-1)*(imag*c2.imag);
        real = first+outer;
        imag = inner+inner2;
    }
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}