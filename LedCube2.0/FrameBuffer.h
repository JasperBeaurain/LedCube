#ifndef FrameBuffer_H
#define FrameBuffer_H

#include <bitset>
#include <vector>
#include <cmath>
const uint8_t NUMBER_OF_LAYERS = 4;
const uint8_t NUMBER_OF_LEDS_PER_LAYER = 16;
const uint8_t NUMBER_OF_LEDS_PER_AXIS = 4;

class FrameBuffer {
    public:
        FrameBuffer();
        std::vector<uint8_t> TranslateLayerFromBitset(uint8_t layer) const;

        void SetBit(bool new_state, uint8_t x, uint8_t y, uint8_t z);
        void SetBitsInFullLayer(bool new_state, uint8_t layer);
        void Draw2DLine(bool new_state, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t z);
    private:
        std::vector<std::bitset<NUMBER_OF_LEDS_PER_LAYER>> leds;
};

#endif