#include "Rectangle.h"
#include <cassert>

int main(void) {
	Square s(5.0f);
	s.draw();
	s.drawFancy();
	assert(s.square() == 25.0f);

	Rectangle r(5.0f, 2.0f);
	r.draw();
	r.drawFancy();
	assert(r.square() == 10.0f);

	Rectangle rnew(std::move(r));
	assert(r.square() == 0.0f);
	assert(rnew.square() == 10.0f);

	Rectangle rnewnew;
	rnewnew = std::move(rnew);
	assert(rnew.square() == 0.0f);
	assert(rnewnew.square() == 10.0f);
}