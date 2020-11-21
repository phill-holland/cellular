#include "rules.h"
#include <iostream>

#ifndef _BUFFER
#define _BUFFER

class buffer
{
	const static int width = 125;
	const static int height = 80;

	bool *a, *b, *output;
	bool *source, *destination;

	bool init;

public:
	buffer() { makeNull(); reset(); }
	~buffer() { cleanup(); }

	bool initalised() { return init; }

	void reset()
	{
		init = false; cleanup();

		a = new bool[width * height];
		if(a == NULL) return;

		b = new bool[width * height];
		if(b == NULL) return;

		output = new bool[width * height];
		if(output == NULL) return;

		source = a; destination = b;

		clear();

		init = true;
	}
	
	void update(rules &r)
	{
		for(int y = 1; y < height - 1; ++y)
		{
			for(int x = 1; x < width - 1; ++x)
			{
				bool centre = source[(y * width) + x];
				bool left = source[(y * width) + (x - 1)];
				bool right = source[(y * width) + (x + 1)];

				bool value = r.find(left, centre, right);
				destination[((y + 1) * width) + x] = value;
			}
		}
	}

	void seed(int x, int y)
	{
		source[(y * width) + x] = true;
	}

	void clear()
	{
		int length = width * height;
		for(int i=0;i<length;++i) 
		{
			a[i] = false;
			b[i] = false;
			output[i] = false;
		}
	}

	void add()
	{
		for(int y = 1; y < height - 1; ++y)
		{
			for(int x = 1; x < width - 1; ++x)
			{
				int idx = (y * width) + x;
				if(destination[idx])
					output[idx] = true;
			}
		}
	}

	void render()
	{
		for(int y = 1; y < height - 1; ++y)
		{
			for(int x = 1; x < width - 1; ++x)
			{
				
				if(output[(y * width) + x])
					std::cout << 'X';
				else std::cout << ' ';
			}

			std::cout << y << "\n";
		}
	}

	void flip()
	{
		bool *temp = destination;
		destination = source;
		source = temp;
	}

protected:
	void makeNull()
	{
		a = NULL;
		b = NULL;
		output = NULL;
	}

	void cleanup()
	{
		if(output != NULL) delete output;
		if(b != NULL) delete b;
		if(a != NULL) delete a;
	}
};

#endif