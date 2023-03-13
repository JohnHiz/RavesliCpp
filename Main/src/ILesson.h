#pragma once

#include <iostream>

namespace Ravesli
{
	class ILesson
	{
	public:
		virtual void Run()
		{
			std::cout << "\"Run()\" method is not implemented!\n";
		}
	};
} // namespace Ravesli
