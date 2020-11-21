#include <iostream>
#include "rules.h"
#include "buffer.h"
#include "collection.h"

int main(int argc, char *argv[])
{
	collection c;
	buffer b;

	rules r = c.lookup(30);
	b.seed(50,1);

	for(int i=0;i<50;++i)
	{
		b.update(r);
		b.add();
		b.flip();
	}
	
	b.render();

	return 0;
}
