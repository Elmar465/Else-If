#include <iostream>
#include <string>

const int pen{10};
const int marker{20};
const int eraser{30};
const int rectangle{40};
const int cicle{50};
const int ellipse{60};
const int line{70};

int main()
{
    // Tools

    int tool{ellipse};

    if (tool == pen)
    {
        std::cout << "Active tool is pen" << std::endl;
    }
    else if (tool == marker)
    {
        std::cout << "Active tool is marker" << std::endl;
    }
    else if (tool == eraser)
    {
        std::cout << "Active tool is eraser" << std::endl;
    }
    else if (tool == rectangle)
    {
        std::cout << "Active tool is rectangle" << std::endl;
    }
    else if (tool == cicle)
    {
        std::cout << "Active tool is cicle" << std::endl;
    }
    else if (tool == ellipse)
    {
        std::cout << "Active tool is ellipse" << std::endl;
    }
    else
    {
        /* code */
    }
}
