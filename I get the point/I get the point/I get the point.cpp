#include <iostream>
#include <cmath>

using namespace std;

class point {
public:
	point(int, int);
	double distance(point *, point *);

	bool operator==(const point&) const;
	bool equal(point *, point *);

	int notEqual(point *, point *);
	int midPoint(point *, point *);
	int getX() const;
	int getY() const;
private:
	int x;
	int y;
};
point::point(int x, int y) {
	this->x = x;
	this->y = y;
}
int point::getX() const {
	return x;
}
int point::getY() const {
	return y;
}
double point::distance(point *p1, point *p2) {
	int distanceX = (p2->getX() - p1->getX());
	int distanceY = (p2->getY() - p1->getY());
	return sqrt(pow(distanceX,2) + pow(distanceY,2));
}
bool point::operator==(const point& otherP) const {
	return this->getX() == otherP.getX() && this->getY() == otherP.getY();
}

bool point::equal(point* p1, point* p2) {
	bool sameX = p1->getX() == p2->getX();
	bool sameY = p1->getY() == p2->getY();

	return sameX && sameY;
}

int main() {
	point* worker = new point(0, 0);
	point* p1 = new point(1, 2);
	point* p2 = new point(3, 4);
	point* p3 = new point(6, 6);
	point* p3Also = new point(6, 6);
	
	cout << worker->distance(p1, p2) << endl;

	cout << worker->equal(p3, p3Also) << endl;

	cout << (*p3 == *p3Also) << endl;

	delete worker;
	delete p1;
	delete p2;
	delete p3;
	delete p3Also;
}
