// Задание 2. Фигуры. Стороны и углы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using std::cout;
using std::cin;
using std::string;

class Figure {
protected:
  
   string name = "Фигура";
   short a , b, c, d, A, B, C, D;
public:

   string get_name() {
      return name;
   }

   short get_a() {
      return a;
   }
   short get_b() {
      return b;
   }
   short get_c() {
      return c;
   }
   short get_A() {
      return A;
   }
   short get_B() {
      return B;
   }
   short get_C() {
      return C;
   }
   short get_d() {
      return d;
   }
   short get_D() {
      return D;
   }

   Figure(){}

};

class Triangle : public Figure {
public:
   Triangle(short a, short b, short c, short A, short B, short C) {
      name = "Треугольник";
      this->a = a; this->b = b; this->c = c; this->A = A; this->B = B; this->C = C;
   }
};

class Right_Triangle : public Triangle {
public:

   Right_Triangle() : Triangle(10, 20, 30, 50, 60, 90) {
      name = "Прямоугольный треугольник";
  
   }

};

class Isosceles_Triangle : public Triangle {
public:
   Isosceles_Triangle() : Triangle(10, 20, 10, 50, 60, 50) {
      name = "Равнобедренный треугольник";
 
   }
};

class Equilateral_Triangle : public Triangle {
public:
   Equilateral_Triangle() : Triangle(30, 30, 30, 60, 60, 60) {
      name = "Равносторонний треугольник";
     
   }
};

class Quadrilaterral : public Figure {

public:

   Quadrilaterral(short a, short b, short c, short d, short A, short B, short C, short D) {
      this->a = a; this->b = b; this->c = c; this->d = d; this->A = A; this->B = B; this->C = C; this->D = D;
      name = "Четырёхугольник";
   }
   Quadrilaterral(){}
};

class Rectangle_1 : public Quadrilaterral {
public:

   Rectangle_1() : Quadrilaterral(10,20,10,20,90,90,90,90){
      name = "Прямоугольник";
   }

};

class Square : public Quadrilaterral {
public:
   Square() : Quadrilaterral(20,20,20,20,90,90,90,90) {
      name = "Квадрат";
    
   }
};

class Parallelogram : public Quadrilaterral {
public:
   Parallelogram() : Quadrilaterral(20, 30, 20, 30, 30, 40, 30, 40) {
      name = "Параллелограмм";
   }
};

class Rhombs : public Quadrilaterral {
public:
   Rhombs() : Quadrilaterral(30, 30, 30, 30, 40, 40, 40, 40) {
      name = "Ромб";
   }
};

void print_info1(Figure* p) {

   cout << p->get_name() << "\n";
   cout << "Стороны: " << "a=" << p->get_a() << " b=" << p->get_b() << " c=" << p->get_c() << "\n";
   cout << "Углы: " << "A=" << p->get_A() << " B=" << p->get_B() << " C=" << p->get_C() << "\n\n";

}

void print_info2(Figure* p) {

   cout << p->get_name() << "\n";
   cout << "Стороны: " << "a=" << p->get_a() << " b=" << p->get_b() << " c=" << p->get_c()
      << " d=" << p->get_d() << "\n";
   cout << "Углы: " << "A=" << p->get_A() << " B=" << p->get_B() << " C=" << p->get_C()
      << " D=" << p->get_D() << "\n\n";

}

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   Triangle first_triangle(10,20,30,50,60,70);
   Right_Triangle second_triangle;
   Isosceles_Triangle third_triangle;
   Equilateral_Triangle forth_triangle;
   
   print_info1(&first_triangle);
   print_info1(&second_triangle);
   print_info1(&third_triangle);
   print_info1(&forth_triangle);


   Quadrilaterral first_q(10,20,30,40,50,60,70,80);
   Rectangle_1 second_q;
   Square third_q;
   Parallelogram forth_q;
   Rhombs fith_q;

   print_info2(&first_q);
   print_info2(&second_q);
   print_info2(&third_q);
   print_info2(&forth_q);
   print_info2(&fith_q);

}