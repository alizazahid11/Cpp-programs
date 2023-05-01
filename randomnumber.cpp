

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    //srand(time(0)); //generation of random numbers by seeding rand with a starting value
 
    for(int i = 0; i<=10; i++){
        cout << (rand()%10) +1 <<" "; 
    }
   
    return 0;
}