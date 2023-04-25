#include <vector>
#include <string>

#include <iostream>

void show_values(const std::vector<std::string>& values)
{
    for (const auto& value : values)
    {
        std::cout << value << std::endl;
    }
}

int main(int argc, char* argv[])
{
    const std::vector<std::string> inputs{argv, argv + argc};

    show_values(inputs);
}