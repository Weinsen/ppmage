#include "ppm.hpp"

PPM::PPM(PPM_Data *data) : data(data)
{
	width = data->size();
	height = data[0].size();
}

PPM& PPM::write(std::string path)
{
	std::ofstream file(path);

	file << "P3 " << width << " " << height << " " << 100 << std::endl;
	for (auto r : *data) {
		for (auto c : r) {
			for (auto b : c) {
				file << std::to_string(b) << " ";
			}
			file << std::endl;
		}
	}
	file.close();

	return *this;
}