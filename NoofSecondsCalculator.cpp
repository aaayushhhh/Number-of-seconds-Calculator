#include <iostream>
 
using namespace std;
 
class Time
{
    private:
        int seconds;
        int h,m,s;
    public:
    
        void convertIntoSeconds();
    
};
 void Time::convertIntoSeconds()
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> h;
    cout << "Minutes? ";          cin >> m;
    cout << "Seconds? ";          cin >> s;
    seconds = h*3600 + m*60 + s;
    cout<<"The number of seconds is "<<seconds;
}
 
 
int main()
{
    Time T; 
    T.convertIntoSeconds();
    return 0;
}
