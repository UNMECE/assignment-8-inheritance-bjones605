#include "field.h"
#include <iostream>

Field::Field() {
    value = new double[3]{0.0, 0.0, 0.0};
}

Field::Field(double x, double y, double z) {
    value = new double[3]{x, y, z};
}

Field::~Field() {
    delete[] value;
}

void Field::printMagnitude() const {
    std::cout << "field Components: (" << value[0] << ", " << value[1] << ", " << value[2] << ")" << std::endl;
}
