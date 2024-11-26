//***************************************************************************
//
// complex.cpp
// CSCI 241 Complex Number Class Implementation
//
// Created by Eesaar Qasim (Z1886147)
//
//***************************************************************************
#include "complex.h"

/********************************************************************************
 * complex (Constructor)
 *
 * Initializes a complex number with the given real and imaginary parts. 
 * Default values of 0.0 are used if no arguments are provided.
 ********************************************************************************/
complex::complex(double r, double i) : real(r), imaginary(i) {}

/********************************************************************************
 * set_complex
 *
 * Sets the real and imaginary parts of the complex number.
 ********************************************************************************/
void complex::set_complex(double r, double i) {
    real = r;
    imaginary = i;
}

/********************************************************************************
 * get_complex
 *
 * Retrieves the real and imaginary parts as a tuple.
 ********************************************************************************/
std::tuple<double, double> complex::get_complex() const {
    return std::make_tuple(real, imaginary);
}

/********************************************************************************
 * set_real
 *
 * Sets the real part of the complex number.
 ********************************************************************************/
void complex::set_real(double r) {
    real = r;
}

/********************************************************************************
 * get_real
 *
 * Retrieves the real part of the complex number.
 ********************************************************************************/
double complex::get_real() const {
    return real;
}

/********************************************************************************
 * set_imaginary
 *
 * Sets the imaginary part of the complex number.
 ********************************************************************************/
void complex::set_imaginary(double i) {
    imaginary = i;
}

/********************************************************************************
 * get_imaginary
 *
 * Retrieves the imaginary part of the complex number.
 ********************************************************************************/
double complex::get_imaginary() const {
    return imaginary;
}

/********************************************************************************
 * operator+
 *
 * Adds two complex numbers and returns the result.
 ********************************************************************************/
complex complex::operator+(const complex& other) const {
    return complex(real + other.real, imaginary + other.imaginary);
}

/********************************************************************************
 * operator*
 *
 * Multiplies two complex numbers and returns the result.
 ********************************************************************************/
complex complex::operator*(const complex& other) const {
    double new_real = real * other.real - imaginary * other.imaginary;
    double new_imaginary = real * other.imaginary + imaginary * other.real;
    return complex(new_real, new_imaginary);
}

/********************************************************************************
 * operator==
 *
 * Compares two complex numbers for equality.
 ********************************************************************************/
bool complex::operator==(const complex& other) const {
    return real == other.real && imaginary == other.imaginary;
}

/********************************************************************************
 * operator<<
 *
 * Prints the complex number in the format (real, imaginary).
 ********************************************************************************/
std::ostream& operator<<(std::ostream& os, const complex& c) {
    os << '(' << c.real << ", " << c.imaginary << ')';
    return os;
}

/********************************************************************************
 * operator>>
 *
 * Reads a complex number from the input stream in the format (real, imaginary).
 ********************************************************************************/
std::istream& operator>>(std::istream& is, complex& c) {
    char ch;
    is >> ch >> c.real >> ch >> c.imaginary >> ch;
    return is;
}

