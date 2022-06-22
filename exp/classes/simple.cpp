#include <vector>
#include <iostream>
#include <string>

class Shape {
public:
	// this is a 'pure virtual' function.
	virtual int Shape::GetArea() = 0;
};

class Rectangle {
public:
	Rectangle::Rectangle(int l, int w) {
		this->length = l;
		this->width = w;
	}
	int Rectangle::GetArea() {
		return this->length * this->width;
	}
private:
	int length = 0;
	int width = 0;
};

class Square : public Rectangle {
public:
	Square::Square(int w) : Rectangle(w, w) {}
};

int main(int argc, char* argv[]) {
	// create a 'Rectangle' object and a 'Square' object
	// these are stack allocated in this case (no 'new')
	Rectangle myRect = Rectangle(4, 9);
	Square mySquare = Square(4);
	
	std::cout << "wow the area of the rect(4,9) is: " << myRect.GetArea() << std::endl;
	std::cout << "wow the area of the square(4,4) is: " << mySquare.GetArea() << std::endl;

	return 0;
}