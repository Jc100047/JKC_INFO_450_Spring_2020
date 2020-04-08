#include <iostream>

using namespace std;

const int PI = 3; // for simplicity, we'll pretend PI is 3

class shape
{
    public:
        virtual int get_perimeter_length()
        { return -1; }
        virtual int get_area()
        { return -1; }
};
class circle : public shape
{
    private:
        int circumference;
        int area;

    public:
        circle(int radius){circumference = 2*PI*radius; area = PI * (radius*radius);  }
        int get_perimeter_length(){ return circumference; }
        int get_area(){             return area; }
};
class rectangle : public shape
{
    private:
        int perimeter;
        int area;

    public:
        rectangle(int height, int width){perimeter = (2*height) + (2*width); area = height * width; }
        int get_perimeter_length(){ return perimeter; }
        int get_area(){ return area; }
};
class square : public shape
{
    private:
        int perimeter;
        int area;

    public:
        square(int side) {perimeter = side * 4; area = side * side; }
        int get_perimeter_length(){ return perimeter; }
        int get_area(){ return area; }

};

int main()
{
  shape *s1;
  circle c(3);
  s1 = &c;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  square s(3);
  s1 = &s;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  rectangle r(5,4);
  s1 = &r;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
}
