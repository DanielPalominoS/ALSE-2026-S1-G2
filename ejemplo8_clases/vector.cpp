#include <iostream>
using namespace std;

class Vector2D {
public:
    double x_, y_;

    Vector2D(double x_val, double y_val)
        : x_(x_val), y_(y_val) {}
    
    Vector2D(){
        x_=0;
        y_=0;
    }

    // Overloading the '+' operator
    Vector2D operator+(const Vector2D& other) {
        return Vector2D(x_ + other.x_, y_ + other.y_);
    }

    void setX(double new_x) {
        x_ = new_x;
    }

    void display() {
        cout << "(" << x_ << ", " << y_ << ")" << endl;
    }
};

int main() {
    Vector2D v1(3, 4), v2(1, 2);
    Vector2D *v_ptr;
    v1.display();
    v2.display();
    v2.setX(10);
    v_ptr=&v2;
    v_ptr->setX(3);

    Vector2D sum = v1 + v2;
    sum.display();

    return 0;
}
