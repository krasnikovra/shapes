#pragma once

class IShape {
public:
	virtual void draw() const = 0;
	virtual void drawFancy() const = 0;
	virtual float square() const = 0;
};