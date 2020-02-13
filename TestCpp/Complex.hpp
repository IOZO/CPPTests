//
//  Complex.hpp
//  TestCpp
//
//  Created by Dominique Pavlin on 12/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <iostream>
using namespace std;

namespace iozocpp {

    class Complex{
    private:
        double real;
        double imaginary;

    public:
        Complex();
        Complex(double real, double imaginary);
        Complex(const Complex &other);
        
        const Complex &operator=(const Complex &other);
        
        
        double getReal() const {
            return real;
        }
        
        double getImaginary() const {
            return imaginary;
        };
        
    };

    ostream &operator<<(ostream &out, const Complex &c);
}

#endif /* Complex_hpp */
