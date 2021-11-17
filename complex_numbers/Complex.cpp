#include <iostream>
class ComplexNumber {
	private: 
		int real_component;
		int imaginary_component;
	public:
		ComplexNumber(int r = 0, int i = 0) {
			real_component = r;
			imaginary_component = i;
		}
};
