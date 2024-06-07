#include <iostream>
using namespace std;
//
//class Point
//{
//  int x;
//  int y;
//public:
//  Point(){}
//  Point(int a, int b);
//  void Print();
//  Point Sum(Point& b);
//
//  Point operator+ (Point& b)
//  {
//    return Point(x + b.x, y + b.y);
//  }
//  Point operator+ (int b)
//  {
//    Point obj;
//    obj.x = this->x + b;
//    obj.y = this->y + b;
//    return obj;
//  }
//  Point operator- (Point& b)
//  {
//    Point c;
//    c.x = this->x - c.x;
//    c.y = this->y - c.y;
//    return c;
//  }
//  Point operator- (double b)
//  {
//    Point c;
//    c.x = this->x - b;
//    c.y = this->y - b;
//    return c;
//  }
//  Point operator* (Point& b)
//  {
//    return Point(x * b.x, y * b.y);
//  }
//  Point operator/ (Point& b) // a/b
//  {
//    return Point(x / b.x, y / b.y);
//  }
//  Point operator* (int b)
//  {
//    Point c;
//    c.x = this->x * b;
//    c.y = this->y * b;
//    return c;
//  }
//  Point operator/ (int b)
//  {
//    Point c;
//    c.x = this->x / b;
//    c.y = this->y / b;
//    return c;
//  }
//  Point operator* (double b)
//  {
//    Point c;
//    c.x = this->x * b;
//    c.y = this->y * b;
//    return c;
//  }
//  Point operator/ (double b)
//  {
//    Point c;
//    c.x = this->x / b;
//    c.y = this->y / b;
//    return c;
//  }
//};
//Point::Point(int a, int b)
//{
//  x = a;
//  y = b;
//}
//void Point::Print()
//{
//  cout << "X: " << x << "\tY: " << y << endl;
//}
//
//Point Point::Sum(Point& b)
//{
//  return Point(x + b.x, y + b.y);
//}
//
//int main()
//{
//  Point a(2, 3), b(1, 5);
//
//
//  Point c = a - b;
//  c = a - 5.6;
//  c.Print();
//  c.Print();
//
//  c = a * b;
//  c.Print();
//  c = a / b;
//  c.Print();
//  c = a * 2.4;
//  c.Print();
//  c = a / 1.3;
//  c.Print();
//  c = a * 5;
//  c.Print();
//  c = a / 2;
//  c.Print();
//}







//задание 2
//class Point
//{
//    int verh;
//    int niz;
//    int znm(int a, int b)
//    {
//        while (b != 0)
//        {
//            int temp = b;
//            b = a % b;
//            a = temp;
//        }
//        return a;
//    }
//public:
//    Point(int ver , int nizh) : verh(ver), niz(nizh)
//    {
//        if (nizh == 0)
//        {
//            cout << "Знаменатель = 0" << endl;
//        }
//
//    }
//    void Print()
//    {
//        cout << verh << "/" << niz << endl;
//    }
//    Point operator+(const Point)
//    {
//        int ver = verh * niz + verh * niz;
//        int nizh = niz * niz;
//        return Point(ver, nizh);
//    }
//    Point operator-(const Point)
//    {
//        int ver =verh *niz - verh * niz;
//        int nizh = niz * niz;
//        return Point(ver, nizh);
//    }
//    Point operator*(const Point)
//    {
//        int ver = verh * verh;
//        int nizh = niz * niz;
//        return Point(ver, nizh);
//    }
//    Point operator/(const Point)
//    {
//        int ver = verh * niz;
//        int nizh = niz * verh;
//        return Point(ver, nizh);
//    }
//};
//
//int main()
//{
//    Point a(21, 43), b(56, 44);
//    Point c = a + b;
//    c.Print();
//    c = a - b;
//    c.Print();
//    c = a * b;
//    c.Print();
//    c = a / b;
//    c.Print();
//}