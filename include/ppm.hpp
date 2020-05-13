/*******************************************************************
* This file is part of ppmage.
* 
* ppmage is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* 
* ppmage is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with ppmage.  If not, see <https://www.gnu.org/licenses/>
* 
* file:    ppm.hpp
* created: 2020/05/12
* 
/******************************************************************/

#ifndef PPMAGE_PPM_HPP
#define PPMAGE_PPM_HPP

#include <vector>
#include <iostream>
#include <fstream>

typedef std::vector<std::vector<std::vector<uint8_t>>> PPM_Data;

class PPM 
{
	private:
		int width;
		int height;
		PPM_Data *data;

	public:
		PPM(PPM_Data *data);
		PPM& write(std::string file);
};

#endif
