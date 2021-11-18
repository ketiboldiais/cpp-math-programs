#include <iostream>

class Coordinate2d {
	double x, y;
	public:
		Coordinate2d(double val1=0.0, double val2=0.0) {
			x = val1;
			y = val2;
		}
		friend std::ostream& operator<<(std::ostream &stream, Coordinate2d &point);
};

std::ostream& operator<<(std::ostream &stream, Coordinate2d &point) {
	stream << "(" << point.x << ", " << point.y << ")";
	return stream;
}



int main() {
	Coordinate2d p1 = Coordinate2d(3.3, 8.2);
	std::cout << p1 << std::endl;
	return 0;
}