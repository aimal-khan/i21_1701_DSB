#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    double x;
    double y;

public:
    // Constructor to create a point with specified coordinates
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Method to get the x-coordinate
    double getX() const {
        return x;
    }

    // Method to set the x-coordinate
    void setX(double newX) {
        x = newX;
    }

    // Method to get the y-coordinate
    double getY() const {
        return y;
    }

    // Method to set the y-coordinate
    void setY(double newY) {
        y = newY;
    }

    // Method to calculate the distance between two points
    double distance(const Point& otherPoint) const {
        double dx = x - otherPoint.x;
        double dy = y - otherPoint.y;
        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    // Creating two points
    Point point1(3.0, 4.0);
    Point point2(6.0, 8.0);

    // Displaying the coordinates of the points first
    cout << "Point 1 coordinates: (" << point1.getX() << ", " << point1.getY() << ")" << endl;
    cout << "Point 2 coordinates: (" << point2.getX() << ", " << point2.getY() << ")" << endl;

    // Calculating and displaying the distance between the points
    double distance = point1.distance(point2);
    cout << "Distance between the points: " << distance << endl;

    return 0;
}
