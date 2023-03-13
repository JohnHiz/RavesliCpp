#pragma once

#include <type_traits>
#include <stdarg.h>

#include "ILesson.h"

namespace Ravesli
{
	class LessonLauncher
	{
	public:
		template<class T>
		void Run();
	};

	template<class T>
	inline void LessonLauncher::Run()
	{
		static_assert(std::is_base_of_v<ILesson, T>, "Template must be derived from ILesson struct!");

		T* lesson = new T();
		lesson->Run();
	}
} // namespace Ravesli
