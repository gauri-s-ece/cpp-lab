#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int width;
    public:
    void setlength()
    {
        int l;
        cout<<"enter the length: "<<endl;
        cin>>l;
        if(l>=0)
        {
            length=l;
        }
        else
        {
            cout<<"negative length cannot be used"<<endl;
            exit(0);
        }
    }
    void setwidth()
    {
        int w;
        cout<<"enter the width: "<<endl;
        cin>>w;
        if(w>=0)
        {
            width=w;
        }
        else
        {
            cout<<"negative width cannot be used"<<endl;
            exit(0);
        }
    }
    int perimeter()
    {
        return 2*(length+width);
    }
    int area()
    {
        return length*width;
    }
};
int main()
{
    rectangle r;
    r.setlength();
    r.setwidth();
    cout<<"the perimeter:"<<r.perimeter()<<endl;
    cout<<"the area:"<<r.area()<<endl;
    return 0;

}