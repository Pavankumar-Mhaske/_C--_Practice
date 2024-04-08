#include <iostream>
#include <fstream>
#include <string>

int main()
{
    const int numFiles = 2;

    for (int i = 1; i <= numFiles; ++i)
    {
        std::string filename = "Q_" + std::to_string(i) + ".cpp";
        std::ofstream file(filename);

        if (file.is_open())
        {
            std::cout << "File created: " << filename << std::endl;
            file.close();
        }
        else
        {
            std::cerr << "Error creating file: " << filename << std::endl;
        }
    }

    return 0;
}
