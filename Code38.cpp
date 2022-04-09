#include<iostream>
using namespace std;
class Shape{
  private:
    string shapeType;
   public:
    Shape(string type){
           shapeType = type;
       }
    void printMyType(){
           cout<<this->shapeType<<endl;
       }
};
class Square : public Shape {
  private:
    int length;
   public:
    Square(int l,string s ="square"):Shape(s){
          length = l;
       }
    void printArea(){
           cout << length*length << endl;
       }
};
class Rectangle : public Shape {
  private:
    int length;
    int breadth;
   public:
    Rectangle(int l,int b,string r="rectangle"):Shape(r){
           length = l;
           breadth = b;
       }
 void printArea(){        
           cout << length*breadth << endl;
       }
};
int main() {
   Square s1(5);
   s1.printMyType();
   s1.printArea();
   Rectangle r1(5,4);
   r1.printMyType();
   r1.printArea();
   return 0;
}
