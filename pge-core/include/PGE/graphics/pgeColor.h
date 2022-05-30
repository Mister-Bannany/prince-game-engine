#pragma once

#include <SDL2/SDL.h>

namespace pge
{
    namespace graphics
    {
        struct Color
        {
            Color();
            Color(const Color& color);
            Color(SDL_Color color);
            Color(uint32_t ac);
            Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

            inline SDL_Color AsSDLColor()
            {
                return (SDL_Color) { r, g, b, a };
            };

            uint8_t r, g, b, a;

        };
    }
}