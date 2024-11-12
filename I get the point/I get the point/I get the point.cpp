#include <iostream>
#include <cmath>

using namespace std;

class point {
public:
	point(int, int);
	double distance(point, point);
	int equal(point, point);
	int notEqual(point, point);
	int midPoint(point, point);
	int getX();
	int getY();
private:
	int x;
	int y;
};
point::point(int x, int y) {
	this->x = x;
	this->y = y;
}
int point::getX() {
	return x;
}
int point::getY() {
	return y;
}
double point::distance(point p1, point p2) {
	int distanceX = (p2.getX() - p1.getX());
	int distanceY = (p2.getY() - p1.getY());
	return sqrt(pow(distanceX,2) + pow(distanceY,2));
}

int main() {
	point *worker = new point(0, 0);
	point* p1 = new point(1, 2);
	point* p2 = new point(3, 4);
	
	cout << worker->distance(p1, p2);
}
