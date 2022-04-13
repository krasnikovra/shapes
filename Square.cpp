#include "Square.h"
#include <iostream>

Square::Square() : _w(.0f) {}

Square::Square(const Square& square) : _w(square._w) {}

Square::Square(Square&& square) noexcept : _w(square._w) { square._w = .0f; }

Square::Square(const float w) : _w(w) {}

Square& Square::operator=(const Square& other) {
	_w = other._w;
	return *this;
}

Square& Square::operator=(Square&& other) noexcept {
	_w = other._w;
	other._w = 0;
	return *this;
}

void Square::draw() const {
	std::cout << "W: " << _w << " H: " << _w << std::endl;
}

void Square::drawFancy() const {
	for (size_t i = 0; i < _w; i++) {
		for (size_t j = 0; j < _w; j++)
			std::cout << "#";
		std::cout << std::endl;
	}
}

float Square::square() const {
	return _w * _w;
}
