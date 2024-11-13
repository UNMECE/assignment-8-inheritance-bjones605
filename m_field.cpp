#include "m_field.h"
#include <iostream>
#include <cmath>

const double mu_0 = 4 * M_PI * 1e-7;

MagneticField::MagneticField() : Field(), magneticFieldMagnitude(0) {} 

MagneticField::MagneticField(double x, double y, double z) : Field(x, y, z), magneticFieldMagnitude(0) {} 

void MagneticField::calculateMagneticField(double I, double r) { 
    magneticFieldMagnitude = I / (2 * M_PI * r * mu_0); 
}

MagneticField MagneticField::operator+(const MagneticField &other) const { 
    return MagneticField(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]); 
}

std::ostream& operator<<(std::ostream &os, const MagneticField &mf) { 
    os << "Magnetic Field: (" << mf.value[0] << ", " << mf.value[1] << ", " << mf.value[2] << ")"; 
    return os;
}
