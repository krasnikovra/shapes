#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : Square(), _h(.0f) {}

Rectangle::Rectangle(const Rectangle& rect) : Square(rect), _h(rect._h) {}

Rectangle::Rectangle(Rectangle&& rect) noexcept : Square(std::move(rect)), _h(rect._h) {
	rect._h = .0f;
}

Rectangle::Rectangle(const float w, const float h) : Square(w), _h(h) {}

Rectangle& Rectangle::operator=(const Rectangle& other) {
	_w = other._w; _h = other._h;
	return *this;
}

Rectangle& Rectangle::operator=(Rectangle&& other) noexcept {
	_w = other._w; _h = other._h;
	other._h = other._w = 0;
	return *this;
}

void Rectangle::draw() const {
	std::cout << "W: " << _w << " H: " << _h << std::endl;
}

void Rectangle::drawFancy() const {
	for (size_t i = 0; i < _h; i++) {
		for (size_t j = 0; j < _w; j++)
			std::cout << "#";
		std::cout << std::endl;
	}
}

float Rectangle::square() const {
	return _w * _h;
}
