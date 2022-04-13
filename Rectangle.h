#pragma once

#include "Square.h"
#include <utility>

class Rectangle : public Square {
public:
	Rectangle();
	Rectangle(const Rectangle& rect);
	Rectangle(Rectangle&& rect) noexcept;
	Rectangle(const float w, const float h);
	Rectangle& operator=(const Rectangle& other);
	Rectangle& operator=(Rectangle&& other) noexcept;
	virtual void draw() const override;
	virtual float square() const override;
	virtual void drawFancy() const override;
	virtual ~Rectangle() = default;
protected:
	float _h;
};