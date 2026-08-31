#include <iostream>
using namespace std;
class Counter
{
    private:
    int number;
    public:
    void increment()
    {
        number++;
    }
    void reset()
    {
        number=0;
    }
    int get()
    {
        return number;
    }
};
int main()
{
    Counter c[3];
    for(int i=0;i<3;i++)
    {
        c[i].reset();
    }
    c[0].increment();
    c[0].increment();
    c[1].increment();
    c[2].increment();
    c[1].increment();
    c[1].increment();
    c[0].increment();
    c[1].increment();
    for(int i=0;i<3;i++)
    cout<<"c["<<i<<"] = "<<c[i].get()<<endl;
    return 0;
}