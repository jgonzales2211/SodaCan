#include <iostream>  
#include <cmath>      
 

using namespace std; // no need for std::

class SodaCan {
public:
    // Constructors that start the SodaCan object with specified radius and height.
    // In which 'r' and 'h' are initialized directly
    SodaCan(double radius, double height) : r(radius), h(height) {}

    // Accessor method that calculates the volume of the soda can.
    // Formula given for volume of cylinder: V = πr²h
    double getVolume() const {
        return M_PI * r * r * h;  // Calculates using the area of the base (πr²) multiplying the height (h)
    }

    // Accessor method to calculate surface area of the soda can.
    // Formula for surface area of a cylinder: A = 2πrh + 2πr²
    // Including the area of the two circular ends (2πr²) and the side (2πrh)
    double getSurfaceArea() const {
        return 2 * M_PI * r * h + 2 * M_PI * r * r;  
    }

private:
    double r;  // Radius of the soda can, stored as a double
    double h;  // Height of the soda can, stored as a double
};

int main() {
    // Creates an instance of SodaCan with a radius of 4.0 units and a height of 6.0 units.
    SodaCan myCan(4.0, 6.0);

    // Outputs the volume of the soda can to the standard output stream.
    cout << "Volume of the soda can: " << myCan.getVolume() << " cubic units" << endl;

    // Outputs the surface area of the soda can to the standard output stream.
    cout << "Surface Area of the soda can: " << myCan.getSurfaceArea() << " square units" << endl;

    return 0; 
}
