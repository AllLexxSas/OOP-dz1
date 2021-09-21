#include "rgba.h"

RGBA::RGBA(){}
RGBA::RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha)
    :m_red(red), m_green(green), m_blue(blue), m_alpha(alpha){}


void RGBA::print()
{
    std::cout  <<"red = " << std::to_string(m_red) << ", green = " << std::to_string(m_green)
              << ", blue = " << std::to_string(m_blue) << ", alpha = " << std::to_string(m_alpha) << std::endl;
}
