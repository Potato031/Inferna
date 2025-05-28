#pragma once

#ifdef IN_PLATFORM_WINDOWS
	#ifdef IN_BUILD_DLL
		#define INFERNA_API _declspec(dllexport)
	#else
		#define INFERNA_API _declspec(dllimport)
	#endif
#else 
	#error Infera only support windows!
#endif