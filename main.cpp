#include <iostream>
using namespace std; 
class Circle
{                                     //declared circle
    private:
    double Pi;
    double Radius;
    public:
    void setRadius(double);
    void setPi(double);
    double getRadius() const;
    double getPi() const;
    double getArea() const;
};
void Circle::setPi(double p)     //setPi assigns value to Pi member
{
    Pi=p;
}
void Circle:: setRadius (double r)     //same but for Radius
{
    Radius=r;
}
double Circle::getPi() const    //getPi returns vale in the Pi member
{
    return Pi;
}
double Circle::getRadius() const
{
    return Radius;
}
double Circle::getArea() const    //returns area, Radius time Pi over 2
{
    return Pi*Radius*Radius;
}
int main()
{
    double totalArea;
    double pi=3.14;
    double cirRadius1=4.5;
    double cirRadius2=7.4;
    Circle shape1;  //first circle
    Circle shape2; //second circle
     cout<<"The following are the areas of two circles\n";
    shape1.setPi(pi);      //plug in local variables to the global
    shape1.setRadius(cirRadius1);    
    shape2.setPi(pi);
    shape2.setRadius(cirRadius2);
    cout<<"\n\nIf the circle's radius is 4.5, the area is: ";
    cout<<shape1.getArea()<<endl;  //retrives area value
    cout<<"If the circle's radius is 7.4, the area is: ";
    cout<<shape2.getArea()<<endl;
        system ("pause");
    return 0;
}