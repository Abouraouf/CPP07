#pragma once

template <typename T, T* ptr, int N, void (*Func)(T)>
	void iter()
	{
		for (int i = 0; i < N; i++)
		{
			func(ptr[i]);
		}
	}
