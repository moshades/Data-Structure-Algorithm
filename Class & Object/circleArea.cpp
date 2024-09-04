#include<iostream>
using namespace std;
class Circle
{
    private:
    int radius;

    public:
    Circle(int r)
    {
        radius = r;
    }
    void setRadius(int radius)
    {
        this->radius = radius;
    }
    int getRadius()
    {
        return radius;
    }
};
class Utility
{
    public:
    double calculatedArea(Circle c)
    {
        int r = c.getRadius();
        return 3.14*r*r;
    }
};
int main()
{
    int radius = 0;
    cout<<"Enter the radius (in cm)"<<endl;
    cin>>radius;

    Circle circle(radius);
    Utility area;

    cout<<"Circle area ="<<area.calculatedArea(circle)<<"cm2"<<endl;
    
    return 0;
}