#include <iostream>
#include <functional>

int main()
{
    double angles[3] = { 30, 60, 90 };
	for (auto& i : angles) {
		i *= 3.1415926 / 180;
	}
	std::function<void(double)> functions[3] = {
		[](const auto& ang) {
			std::cout << "sin: " << sin(ang) << " ";
			},
		[](const auto& ang) {
			std::cout << "cos: " << cos(ang) << " ";
			},
		[](const auto& ang) {
			std::cout << "tan: " << tan(ang) << " ";
			}
	};

	for (const auto& angle : angles) {
		std::cout << angle << ": ";
		for (const auto& function : functions)
			function(angle);
		std::cout << std::endl;
	}
}
