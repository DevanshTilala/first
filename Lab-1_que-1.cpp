#include<bits/stdc++.h>

using namespace std;

class Car
{
    private:
        string engine, model, brand;
        int horsepower, max_speed;
    public:
        void input_details(string brand_1, string model_1, string engine_1, int horsepower_1, int max_speed_1)
        {
            brand=brand_1;
            model=model_1;
            engine=engine_1;
            horsepower=horsepower_1;
            max_speed=max_speed_1;
        }
        void display_details()
        {
            cout<<"Your car is "<<brand<<" "<<model<<endl;
            cout<<"It has "<<engine<<endl;
            cout<<"Its horsepower is "<<horsepower<<endl;
            cout<<"Its maximum speed is "<<max_speed<<" kmph"<<endl;
        }
        void display_number_plate()
        {
            string number;
            cout<<"Enter the number of your car: ";
            cin>>number;
            cout<<"Number plate of your car is "<<number;
        }
        void colour();
        void paint_type();
};

void Car::colour()
{
    string c;
    cout<<"\nEnter the colour you like for your car: ";
    cin>>c;
    cout<<"Colour of your car is "<<c;
}

void Car::paint_type()
{
    string p;
    cout<<"\nEnter the type of paint you want for your car: ";
    cin>>p;
    cout<<"Paint type of your car is "<<p;
}

int main()
{
    Car c;
    string engine, model, brand;
    int horsepower, max_speed;
    cout<<"Enter the brand of car: ";
    cin>>brand;
    cout<<"Enter the name of model of " << brand << ": ";
    cin>>model;
    cout<<"Enter the type of engine: ";
    cin>>engine;
    cout<<"Enter the horsepower: ";
    cin>>horsepower;
    cout <<"Enter the maximum speed of your car: ";
    cin>>max_speed;
    c.input_details(brand, model, engine, horsepower, max_speed);
    c.display_details();
    c.display_number_plate();
    c.colour();
    c.paint_type();
    return 0;
}