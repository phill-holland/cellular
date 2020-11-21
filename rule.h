#ifndef _RULE
#define _RULE

class rule
{
public:
	bool values[4];

public:
	rule() { reset(); }

	void reset()
	{ 
		for(int i=0;i<4;++i)
		{
			values[i] = false;
		}
	}

	void set(bool output){ values[3] = output; }
	void set(bool left, bool centre, bool right, bool output)
	{
		values[0] = left;
		values[1] = centre;
		values[2] = right;
		values[3] = output;
	}

	bool get() { return values[3]; }

	bool isequal(bool left, bool centre, bool right)
	{
		if((values[0] == left) && (values[1] == centre) && (values[2] == right)) return true;
		return false;
	}
};

#endif