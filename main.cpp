#include "e_field.h"
#include "m_field.h"

int main() {
    ElectricField eField(1.0, 2.0, 3.0); 
    MagneticField mField(0.1, 0.2, 0.3); 

    eField.printMagnitude(); 
    mField.printMagnitude(); 

    eField.calculateElectricField(1e-6, 0.05); // Example Q and r 
    mField.calculateMagneticField(10, 0.05); // Example I and r 

    ElectricField eField2(2.0, 3.0, 4.0); 
    ElectricField eSum = eField + eField2; 
    std::cout << eSum << std::endl; 

    MagneticField mField2(0.2, 0.3, 0.4); 
    MagneticField mSum = mField + mField2; 
    std::cout << mSum << std::endl;

    return 0;
}