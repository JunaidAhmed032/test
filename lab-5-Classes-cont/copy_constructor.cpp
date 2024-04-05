#include<iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    // Constructor
    Point(int x1, int y1) : x(x1), y(y1) {}

    // Copy constructor
    Point(const Point &p2) : x(p2.x), y(p2.y) {}
    //setter functions
    void setXY(){
        cout << "Value of X : " << endl;
        cin >> x;
        cout << "Value of Y : " << endl;
        cin >> y;
    }
    // Getter functions
    int getX() const { return x; }
    int getY() const { return y; }
};

int main() {
    Point p1(10, 15);  // Normal constructor is called here
    Point p2 = p1;     // Copy constructor is called here
    
    // Let us access values assigned by constructors
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY()<< endl;
    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY()<< endl;
    p1.setXY();
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY()<< endl;
    p2.setXY();
    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY()<< endl;
    return 0;
}
