#include <iostream>
using namespace std;
class complex{
   public:
   int real;
   float imaginary;
  complex(){   //default con
      real=5;
      imaginary=3.3;
  } 
  complex(int x,float y){ //para con
      real=x;
      imaginary=y;
  }
  /*complex(const complex&z);//copy con*/
  void display(){
      cout<<"\n real number is:"<<real;
      cout<<"\n imaginary number is:"<<imaginary;
  }
  
};
   complex operator+(complex c1,complex c2){
       complex result;
       result.real=c1.real+c2.real;
       result.imaginary=c1.imaginary+c2.imaginary;
       return result;
   }
int main(){
     complex def1; //invoke default
    def1.display();
    complex par1(2,4.4);//invoke para
    par1.display();
    complex co1(par1);//invoke copy
    co1.display();
      cout << endl  
         << endl;
    complex c3(4,5.5);//add first complex number
    cout << "Complex number 1 : " << c3.real  
         << " + i" << c3.imaginary << endl;
    complex c4(5,6.7);//add secon complex num
         cout << "Complex number 2 : " << c4.real  
         << " + i" << c4.imaginary << endl; 
    complex add;
    add=c3+c4;
    add.display();
    return 0;




}