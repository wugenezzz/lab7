istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    cout<<fixed<<setprecision(3);
    cout<<"Circumference: "<<cldr.Circumference()<<endl;
    cout<<"Volume: "<<cldr.Volume();
    return out;
}

# endif

