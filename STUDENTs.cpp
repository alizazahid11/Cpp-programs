#include<iostream>
using namespace std;
class student{
   
    string courses[6];
    int count;
public:
    student(){
        string courses[6]={"BSCS 401","BSCS 403","BSCS 409","BSCS 411,BSCS 413","BSCS 405"};
    }
    student(const student & t){
        courses[6]=t.courses[6];
        count =t.count;


    }
    int getCount(){return count;}
    string getCourse(){return courses[6];}
   
~student(){
        cout<<"calling destructor";
    }
   friend ostream& operator<<(ostream &out, student &obj) ; 
  
   void operator = (const student &D );
     
};

int main(){
         student  Salman;      
         student Akbar(Salman);        
         //Salman.addCourse("BSCS 413");      
         cout<< Akbar.getCourse();            
         Akbar = Salman; 
 
     cout<< Akbar;      
     cout  << Salman; 
}