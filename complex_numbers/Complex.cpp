#include <iostream>
class ComplexNumber {
	private: 
		int realPart;
		int imaginaryPart;
	public:
		ComplexNumber(int r = 0, int i = 0) {
			realPart = r;
			imaginaryPart = i;
		}
		ComplexNumber operator+(ComplexNumber val) {
			ComplexNumber temp;
			temp.realPart = realPart + val.realPart;
			temp.imaginaryPart = imaginaryPart + val.imaginaryPart;
			return temp;
		}
		void print() {
			std::cout << realPart << " + " << imaginaryPart << "i" << std::endl;
		}
};

int main() {
	ComplexNumber x = ComplexNumber(3, 8);
	ComplexNumber y = ComplexNumber(9, 5);
	ComplexNumber z = x + y;
	z.print();
	return 0;
}