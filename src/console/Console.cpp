#include "Console.h"
#include <iostream>

Console::Console()
{
    
}

Console::~Console()
{
}

void Console::selectProgram()
{
    std::string program = "";
    std::println("Choose a program");
    std::cin >> program;
}

void Console::run()
{
}
