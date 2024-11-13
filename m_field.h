#ifndef M_FIELD_H
#define M_FIELD_H

#include "field.h"

class MagneticField : public Field {
private:
    double magneticFieldMagnitude;

public:
    MagneticField();
    MagneticField(double x, double y, double z);
    void calculateMagneticField(double I, double r);

    MagneticField operator+(const MagneticField &other) const;
    friend std::ostream& operator<<(std::ostream &os, const MagneticField &mf);
};

#endif
