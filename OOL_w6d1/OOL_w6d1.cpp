#include <iostream>
#include <string>
using namespace std;
class Square {
protected:
    int side;
public:
    Square() = default;
    Square(int a) { side = a; }
    void Show() { cout << "Square Side: " << side << endl; }
    void Input() {
        int a = 0;
        cin >> a;
        side= a;
    }
};
class Circle {
protected:
    int rad;
public:
    Circle() = default;
    Circle(int r) { rad = r; }
    void Show() { cout << "Circle radius : " << rad << endl; }
    void Input() {
        int r = 0;
        cin >> r;
        rad = r;
    }
};
class CircleInSquare : public Square, public Circle {
protected:
    bool IsSimple;
public:
    CircleInSquare() = default;
    CircleInSquare(int s, int c) : Square(s), Circle(c) { c <= s ? IsSimple = true : IsSimple = false; }
    void Show() {
        Square::Show();
        Circle::Show();
        if (IsSimple)
            cout << "Simple CircleInSquare\n";
        else
            cout << "Circle is too big\n";
    }
    void Input() {
        Square::Input();
        Circle::Input();
        Circle::rad <= Square::side ? IsSimple = true : IsSimple = false;
    }
};
int main()
{
    CircleInSquare cins(50, 25);
    cins.Square::Show();
    cins.Show();
}