#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex() : real(0), img(0) {}
    Complex(int r, int i) : real(r), img(i) {}

    const Complex operator+(const Complex &c) const {
        // Complex res;
        // res.real = real + c.real;
        // res.img  = img + c.img;
        // return res;
        // Directly using Param constructor
        return Complex(real + c.real, img + c.img);
    }

    const Complex operator-(const Complex &c) const {
        // Complex res;
        // res.real = real - c.real;
        // res.img  = img - c.img;
        // return res;
        return Complex(real - c.real, img - c.img);
    }

    const Complex operator*(Complex &c) const {
        Complex res;
        res.real = real * c.real - img * c.img;
        res.img  = 2 * real * img;
        return res;
    }

    void display() const
    {
        cout << real << " + " << img << "i" << endl;
    }

    // Pre-Increment Operator Overloading (++i)
    const Complex& operator++(){
        real++;
        //img++;
        return *this;        
    }
    
    // Post-Increment Operator Overloading (i++)
    Complex operator++(int){
        Complex c = *this;
        real++;
        //img++;
        return c;
    }

    // + operator to just add real part
    const Complex operator+(int r) const {
        return Complex(real + r, img);
    }

    // Checking if 2 Complex Numbers are equal
    bool operator==(const Complex& c) const {
        return (real == c.real) && (img == c.img);
    }

    void accept()
    {
        cout << "Enter Real Part: ";
        cin >> real;
        cout << "Enter Imaginery Part: ";
        cin >> img;
        cout << endl;
    }

    friend ostream &operator<<(ostream &os, const Complex &c);
    friend istream &operator>>(istream &is, Complex &c);
};

ostream &operator<<(ostream &os, const Complex &c){
   return os << c.real << " + " << c.img << "i" << endl;
}

istream &operator>>(istream &is, Complex &c){
	cout << "\n Enter real and imaginary";
	is >> c.real;
	is >> c.img;
	return is;    
}

int main()
{
    Complex a(1,2);
   // a.display();

    Complex b(1,2);
  //  b.display();

    Complex c;
    c = a + b;
    c.display();
  //  c = c - a;
   // c.display();

  //  c = a * b;
  //  c.display();
    // ++c = a; // error because of const this wouldn't happen
    ++c; 
    c.display();
    c = c + 2;
    c.display();

    b = c++;
    b.display();
    c.display();

    return 0;
}