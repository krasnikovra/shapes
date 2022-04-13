#pragma once

#include "IShape.h"

class Square : public IShape {
public:
	Square();
	Square(const Square& square);
	Square(Square&& square) noexcept;
	Square(const float w);
	Square& operator=(const Square& other);
	Square& operator=(Square&& other) noexcept;
	virtual void draw() const override;
	virtual void drawFancy() const override;
	virtual float square() const override;
	virtual ~Square() = default;
protected:
	float _w;
};