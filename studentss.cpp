
using namespace std;

class student
{
 public:
     string courses;
     int count;

    student()// null constructor
    {

    }
    student(const student &con)  //copy constructor
    {
        count = con.count;
        courses = con.courses;
    }

    
    void SetCount(int count) //setter&getter
    {
        this->count = count;
    }

    int GetCount()
    {
        return count;
    }

    void SetCourses(string courses)
    {
        this->courses = courses;
    }

    string GetCourses(int count)
    {
        return courses;
    }
    

   
     string addcourses(string courses) //addcourse
    {
        this->courses = courses;
        return courses;

    }
  ~student() //destructor
    {
     cout<<"destructor is called"<<endl;
    }
    friend  ostream &operator << (ostream &out, student &cc) //overloading for <<
    {
        out << "Count: " << cc.count << endl;
        out << "Courses: " << cc.courses << endl;
        return out;
    }
    
};

   


int main() 
{
 student Salman;
 student Akbar(Salman);
 Salman.addcourses("BSCS 413");
 cout<< Akbar.GetCourses(0) << endl;
 Akbar = Salman;
 cout<< Akbar;
 cout<< Salman;
}