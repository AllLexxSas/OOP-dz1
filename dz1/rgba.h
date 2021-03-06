#ifndef RGBA_H
#define RGBA_H

#include <cstdint>
#include <iostream>


class RGBA
{
public:
    RGBA();
    RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha);
    void print();


private:
    std::uint8_t m_red = 0, m_green = 0, m_blue = 0, m_alpha = 255;
};

#endif // RGBA_H
