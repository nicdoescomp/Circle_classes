//
//  main.cpp
//  A6
//
//  Created by Nicholas Brown on 3/30/25.
//

#include <iostream>
using std:: cout, std:: cin, std:: endl;

class Circle{
    //member variables
private:
    double radius;
    const double pi = 3.14159;
public:

    // Default constructor
    Circle() : radius(0.0) {}
    
    // Parameterized constructor
    Circle(double r) : radius(r) {}
    
    // Setter for radius
    void setRadius(double r) { radius = r; }
    
    // Getter for radius
    double getRadius() const { return radius; }
    //gets our Area
    double getarea()
    {
        double area = pi * radius * radius;
        
        return area;
        
    }
    //gets our Diameter
    double getDiameter (){
        double diameter = radius * 2;
        return diameter;
    }
    //gets our Circumference
    double getCircumference (){
        double circumference = 2 * pi * radius;
        return circumference;
    }
    
};

int main() {
    // insert code here...
    Circle circ;
    double input;

    cout << "Please enter your circle's radius: ";
    cin >> input;
    
    circ.setRadius(input);
    
    cout << endl;
    cout << "Area: " << circ.getarea() << " "<<"Diameter: " << circ.getDiameter() << " " << "Circumference: " <<circ.getCircumference() << endl;
    return 0;
}
