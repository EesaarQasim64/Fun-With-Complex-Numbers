//***************************************************************************
//
// complex.h
// CSCI 241 Complex Number Class
//
// Created by Eesaar Qasim (Z1886147)
//
//***************************************************************************
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <tuple>

/********************************************************************************
 * class complex
 *
 * A class to represent complex numbers with real and imaginary components.
 *
 * This class provides constructors, accessor and mutator methods, and overloaded 
 * operators for arithmetic and comparison. It also supports input and output 
 * operations through stream operators.
 ********************************************************************************/
class complex {
private:
    double real;        // The real part of the complex number
    double imaginary;   // The imaginary part of the complex number

public:
    /********************************************************************************
     * complex (Constructor)
     *
     * Initializes a complex number with the given real and imaginary parts. 
     * Default values of 0.0 are used if no arguments are provided.
     *
     * @param r The real part of the complex number (default is 0.0).
     * @param i The imaginary part of the complex number (default is 0.0).
     ********************************************************************************/
    complex(double r = 0.0, double i = 0.0);

    /********************************************************************************
     * set_complex
     *
     * Sets the real and imaginary parts of the complex number.
     *
     * @param r The new real part of the complex number.
     * @param i The new imaginary part of the complex number.
     * @return None
     ********************************************************************************/
    void set_complex(double r, double i);

    /********************************************************************************
     * get_complex
     *
     * Retrieves the real and imaginary parts as a tuple.
     *
     * @return A tuple containing the real and imaginary parts.
     ********************************************************************************/
    std::tuple<double, double> get_complex() const;

    /********************************************************************************
     * set_real
     *
     * Sets the real part of the complex number.
     *
     * @param r The new real part.
     * @return None
     ********************************************************************************/
    void set_real(double r);

    /********************************************************************************
     * get_real
     *
     * Retrieves the real part of the complex number.
     *
     * @return The real part.
     ********************************************************************************/
    double get_real() const;

    /********************************************************************************
     * set_imaginary
     *
     * Sets the imaginary part of the complex number.
     *
     * @param i The new imaginary part.
     * @return None
     ********************************************************************************/
    void set_imaginary(double i);

    /********************************************************************************
     * get_imaginary
     *
     * Retrieves the imaginary part of the complex number.
     *
     * @return The imaginary part.
     ********************************************************************************/
    double get_imaginary() const;

    /********************************************************************************
     * operator+
     *
     * Adds two complex numbers and returns the result.
     *
     * @param other The complex number to add.
     * @return A new complex number representing the sum.
     ********************************************************************************/
    complex operator+(const complex& other) const;

    /********************************************************************************
     * operator*
     *
     * Multiplies two complex numbers and returns the result.
     *
     * @param other The complex number to multiply by.
     * @return A new complex number representing the product.
     ********************************************************************************/
    complex operator*(const complex& other) const;

    /********************************************************************************
     * operator==
     *
     * Compares two complex numbers for equality.
     *
     * @param other The complex number to compare with.
     * @return True if the numbers are equal, false otherwise.
     ********************************************************************************/
    bool operator==(const complex& other) const;

    /********************************************************************************
     * operator<<
     *
     * Overloads the stream insertion operator to print the complex number in 
     * the format (real, imaginary).
     *
     * @param os The output stream.
     * @param c The complex number to print.
     * @return The modified output stream.
     ********************************************************************************/
    friend std::ostream& operator<<(std::ostream& os, const complex& c);

    /********************************************************************************
     * operator>>
     *
     * Overloads the stream extraction operator to read a complex number from 
     * the input stream in the format (real, imaginary).
     *
     * @param is The input stream.
     * @param c The complex number to read.
     * @return The modified input stream.
     ********************************************************************************/
    friend std::istream& operator>>(std::istream& is, complex& c);
};

#endif // COMPLEX_H

