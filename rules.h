#include "rule.h"

#ifndef _RULES
#define _RULES

class rules
{
public:
	rule values[8];

public:
	rules() { reset(); }
    rules(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h)
    {
        reset();
        set(a,b,c,d,e,f,g,h);
    }

	void reset()
	{
		values[0].set(true, true, true, false);
		values[1].set(true, true, false, false);
		values[2].set(true, false, true, false);
		values[3].set(true, false, false, false);
		values[4].set(false, true, true, false);
		values[5].set(false, true, false, false);
		values[6].set(false, false, true, false);
		values[7].set(false, false, false, false);
	}

	void set(bool output, int idx) { values[idx].set(output); }
	void set(bool left, bool centre, bool right, bool output, int idx)
	{
		values[idx].set(left, centre, right, output);
	}

	void set(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h)
	{
		values[0].set(a);
		values[1].set(b);
		values[2].set(c);
		values[3].set(d);
		values[4].set(e);
		values[5].set(f);
		values[6].set(g);
		values[7].set(h);
	}

	bool find(bool left, bool centre, bool right)
	{		
		for(int i=0;i<8;++i)
		{
			if(values[i].isequal(left, centre, right)) return values[i].get();
		}

		return false;
	}

	int length() { return 8; }
};

#endif