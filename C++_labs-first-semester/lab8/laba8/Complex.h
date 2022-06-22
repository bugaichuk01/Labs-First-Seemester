#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class Complex {
private:
	double re;
	double im;
public:
	
	Complex(double re, double im) {
		this->re = re;
		this->im = im;
	}

	friend ostream& operator<<(ostream& out, Complex& c) {
		out << c.re << " " << c.im << ";" << " ";
		return out;
	}

	bool operator==(Complex right)
	{
		return this->re == right.re && this->im == right.im;
	}

};

#endif // !COMPLEX_H
	