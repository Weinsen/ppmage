#include <iostream>
#include "ppm.hpp"

int main() 
{
	PPM_Data data = {
		{{99,  0,  0}, {99, 99,  0}, {99,  0, 99}},
		{{ 0, 99,  0}, { 0, 99, 99}, {99, 99,  0}},
		{{ 0,  0, 99}, {99,  0, 99}, { 0, 99, 99}}
	};

	PPM ppm(&data);
	ppm.write("local.ppm");

	return 0;
}