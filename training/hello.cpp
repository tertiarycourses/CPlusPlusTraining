#include <iostream>
#include <string>
using namespace std;

int main(){
    
    cout << "Hello World" << endl(<#basic_ostream<_CharT, _Traits> &__os#>) ;

}

//using namespace std;
//
//class Employee {
//    
//protected:
//    char* emp_name;
//    int emp_salary;
//    
//    Employee(char* name, int salary) {
//        
//        emp_name = name;
//        emp_salary = salary;
//    }
//    
//    void dispEmpDetails() {
//        
//        cout << emp_name << "\'s salary is $" << emp_salary << endl;
//    }
//    
//};
//
//class FTStaff : public Employee {
//
//public:
//    
//    int emp_leave;
//    
//    FTStaff(char *name, int salary, int leave) : Employee(name, salary) {
//        
//        emp_leave = leave;
//    
//    };
//    
//    ~FTStaff() {
//        
//        cout << emp_name << " left the company" << endl;
//    }
//    
//    void dispEmpDetails() {
//        
//        cout << emp_name << " salary is $" << emp_salary << " and leave is " << emp_leave << endl;
//    }
//
//
//};
//
//int main() {
//    
//    string a,b,c;
//    
//    a = "Hello ";
//    
//    b = "World";
//    
//    c = a + b;
//    
//    cout << c << endl;
//    
////    FTStaff emp1("Ally",4000,21);
////    FTStaff emp2("Belinda",3000,18);
////    FTStaff emp3("Jane",3300,14);
////    
////    FTStaff * emp4;
////    
////    emp4 = new FTStaff("Alfred",8000,28);
////
////    emp1.dispEmpDetails();
////    emp2.dispEmpDetails();
////    emp3.dispEmpDetails();
////    emp4->dispEmpDetails();
////    
////    delete emp4;
////    
////    
////    char *bb;
////    cin >> bb;
//    
//}
//
//
//
//class Circle {
//    
//public:
//    double radius;
//    
//    double getArea() {
//       
//        return 3.1417*radius*radius;
//    }
//    Circle(double r) {
//        
//        radius = r;
//    }
//};
//
//
//class Box {
//public:
//    double length;
//    double width;
//    double height;
//    
//    Box(double l, double w, double h) {
//        
//        length = l;
//        width = w;
//        height = h;
//    }
//    
//    virtual  void getVolume(void) {
//        // cout << "The volumn is " << length * width * height << endl;
//    }
//    
//};
//
//class SquareBox : public Box {
//    
//public:
//    SquareBox(double l ) : Box(l, l, l) {};
//    
//    void getVolume(void) {
//        cout << "The volumn is " << length * width * height << endl;
//    }
//    
//};




