#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;


class Rectangle : public Shape {
public:
    Rectangle(float w, float h) {
        m_width = w;
        m_height = h;
    }

    float Area() override {
        return m_width * m_height;
    }

private:
    float m_width;
    float m_height;
};
