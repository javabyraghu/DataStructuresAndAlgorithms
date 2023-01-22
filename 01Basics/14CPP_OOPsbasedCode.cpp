#include <iostream>
using namespace std;

class Rectangle {
private:
    int len;
    int wid;
public:
    Rectangle() {
        len = 0;
        wid = 0;
    }
    Rectangle(int l ,int w) {
        len = l;
        wid = w;
    }
    int area() {
        return len*wid;
    }
    int perimeter() {
        return 2*(len+wid);
    }
    ~Rectangle() {
        cout<<"From Destuructor"<<endl;
    }
};

int main()
{
    Rectangle r(10,20);
    cout<<"Area is "<<r.area()<<" perimeter is "<<r.perimeter()<<endl;
    return 0;
}