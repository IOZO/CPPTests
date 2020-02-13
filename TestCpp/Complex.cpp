//
//  Complex.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 12/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include "Complex.hpp"

namespace iozocpp{

ostream &operator<<(ostream &out, const Complex &c){
    out << "(" << c.getReal() << "," << c.getImaginary() << ")";
    return out;
}

Complex operator+(const Complex &c1, const Complex &c2){
    return Complex(c1.getReal() + c2.getReal(),c1.getImaginary()+c2.getImaginary());
}
Complex operator+(const Complex &c1, double d){
    return Complex(c1.getReal() + d,c1.getImaginary());
}
Complex operator+(double d, const Complex &c1){
    return Complex(c1.getReal() + d,c1.getImaginary());
}

bool Complex::operator==(const Complex &other) const {
    return((real == other.real) && (imaginary == other.imaginary));
}

Complex::Complex(): real(0), imaginary(0){
    
}

Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){
    
}

Complex::Complex(const Complex &other){
    real = other.real;
    imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other){
      real = other.real;
      imaginary = other.imaginary;
      return *this;
}

}
