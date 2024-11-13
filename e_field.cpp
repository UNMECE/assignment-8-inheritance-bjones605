#include "e_field.h"
#include <iostream>
#include <cmath>

const double epsilon_0 = 8.854e-12;

ElectricField::ElectricField() : Field(), electricFieldMagnitude(0) {}

ElectricField::ElectricField(double x, double y, double z) : Field(x, y, z), electricFieldMagnitude(0) {} 

void ElectricField::calculateElectricField(double Q, double r) {
    electricFieldMagnitude = Q / (4 * M_PI * r * r * epsilon_0); 
}

ElectricField ElectricField::operator+(const ElectricField &other) const { 
    return ElectricField(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]); 
}

std::ostream& operator<<(std::ostream &os, const ElectricField &ef) { 
    os << "Electric Field: (" << ef.value[0] << ", " << ef.value[1] << ", " << ef.value[2] << ")"; 
    return os;
}
