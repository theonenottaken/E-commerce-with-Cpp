
/*******************************************************************************************
 * Student Name: Caleb Shere
 * Exercise Name: Targil 5
 * File Description: Writer.cpp
 *******************************************************************************************/

#include "Writer.hpp"

/**********************************************************************************************
 * Returns the name and specific job description of this writer.
 **********************************************************************************************/
std::string Writer :: print() {
    return name + " " + specificJob + "\n";
}
