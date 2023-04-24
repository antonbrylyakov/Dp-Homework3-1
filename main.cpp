#include <iostream>
#ifdef _WIN32
#include "windows.h"
#endif
#include "LogCommand.h"
#include "ConsoleLogCommand.h"
#include "FileLogCommand.h"

void print(LogCommand& cmd, const std::string& message)
{
	cmd.print(message);
}

int main()
{
	setlocale(LC_ALL, "Russian");
#ifdef _WIN32
	SetConsoleCP(1251);
#endif

	{
		auto cmd = ConsoleLogCommand();
		print(cmd, "Сообщение в консоль");
	}

	{
		auto cmd = FileLogCommand("log.txt");
		print(cmd, "Сообщение в файл");
	}

	return 0;
}