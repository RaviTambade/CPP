#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
	private:
		 int real, imag;
	public:
		static int count;
		Complex();
		Complex(int r, int i);
		void display();
		~Complex();
		int static getCount();
		//Operator overloading	
		Complex& operator+ (Complex &c2);
		Complex& operator- (Complex &c2);
		
		friend Complex operator *(Complex,Complex);
	protected:
};

#endif
