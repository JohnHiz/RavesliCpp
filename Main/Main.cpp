#include "Main.h"

int main()
{
	Ravesli::LessonLauncher* lesson = new Ravesli::LessonLauncher();
	lesson->Run<Ravesli::Structure>();
	std::getchar();
}