# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <math.h>
#include <iomanip>

#define _USE_MATH_DEFINES
# define pi 3.1415926535897932384626433
double Cylinder :: SurfaceArea(){
    double ans=0;
    ans=pi*radius*2*(radius+height);//pi*2*pow(radius, 2)+pi*2*radius*height;
    return ans;
}

double Cylinder :: Volume(){
    double ans=0;
    ans=pi*radius*radius*height;
    return ans;
}

double Cylinder :: Circumference(){
    double ans=0;
    ans=pi*radius*2;
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    cout<<fixed<<setprecision(3);
    cout<<"Circumference: "<<cldr.Circumference()<<endl;
    cout<<"SurfaceArea: "<<cldr.SurfaceArea()<<endl;
    cout<<"Volume: "<<cldr.Volume();
    return out;
}

# endif
