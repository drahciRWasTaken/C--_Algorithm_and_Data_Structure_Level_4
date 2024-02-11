#include "stdio.h"

class Rectangle {
private:
    double width;
    double height;
public:
    //constructor
    Rectangle(int w, int h) {
        width = w;
        height = h;
        printf("Constructor running");
    }
    //decstructor
    ~Rectangle() {
        printf("Destructor running");
    }
};

int main() {
    Rectangle r(5, 3);
    return 0;
}