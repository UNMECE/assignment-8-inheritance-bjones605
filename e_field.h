#ifndef E_FIELD_H
#define E_FIELD_H

#include "field.h"

class ElectricField : public Field {
private:
    double electricFieldMagnitude;

public:
    ElectricField();
    ElectricField(double x, double y, double z);
    void calculateElectricField(double Q, double r);
    ElectricField operator+(const ElectricField &other) const; 
    friend std::ostream& operator<<(std::ostream &os, const ElectricField &ef);
};

#endif
