#include "charset.h"

const char character_data[95][5] = {
  // Charset for LCD display
  {0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x5F, 0x5F, 0x00, 0x00},
  {0x00, 0x07, 0x00, 0x07, 0x00},
  {0x14, 0x7F, 0x14, 0x7F, 0x14},
  {0x24, 0x2A, 0x7F, 0x2A, 0x12},
  {0x23, 0x13, 0x08, 0x64, 0x62},
  {0x36, 0x49, 0x55, 0x22, 0x50},
  {0x00, 0x05, 0x03, 0x00, 0x00},
  {0x00, 0x1C, 0x22, 0x41, 0x00},
  {0x00, 0x41, 0x22, 0x1C, 0x00},
  {0x14, 0x08, 0x3E, 0x08, 0x14},
  {0x08, 0x08, 0x3E, 0x08, 0x08},
  {0x00, 0x50, 0x30, 0x00, 0x00},
  {0x08, 0x08, 0x08, 0x08, 0x08},
  {0x00, 0x60, 0x60, 0x00, 0x00},
  {0x20, 0x10, 0x08, 0x04, 0x02},
  {0x3E, 0x51, 0x49, 0x45, 0x3E},
  {0x00, 0x42, 0x7F, 0x40, 0x00},
  {0x42, 0x61, 0x51, 0x49, 0x46},
  {0x22, 0x49, 0x49, 0x49, 0x36},
  {0x18, 0x14, 0x12, 0x7F, 0x10},
  {0x2F, 0x49, 0x49, 0x49, 0x31},
  {0x3E, 0x49, 0x49, 0x49, 0x32},
  {0x03, 0x01, 0x71, 0x09, 0x07},
  {0x36, 0x49, 0x49, 0x49, 0x36},
  {0x26, 0x49, 0x49, 0x49, 0x3E},
  {0x00, 0x36, 0x36, 0x00, 0x00},
  {0x00, 0x56, 0x36, 0x00, 0x00},
  {0x08, 0x14, 0x22, 0x41, 0x00},
  {0x14, 0x14, 0x14, 0x14, 0x14},
  {0x00, 0x41, 0x22, 0x14, 0x08},
  {0x02, 0x01, 0x51, 0x09, 0x06},
  {0x32, 0x49, 0x79, 0x41, 0x3E},
  {0x7C, 0x0A, 0x09, 0x0A, 0x7C},
  {0x7F, 0x49, 0x49, 0x49, 0x36},
  {0x3E, 0x41, 0x41, 0x41, 0x22},
  {0x7F, 0x41, 0x41, 0x41, 0x3E},
  {0x7F, 0x49, 0x49, 0x49, 0x41},
  {0x7F, 0x09, 0x09, 0x09, 0x01},
  {0x3E, 0x41, 0x49, 0x49, 0x7A},
  {0x7F, 0x08, 0x08, 0x08, 0x7F},
  {0x00, 0x41, 0x7F, 0x41, 0x00},
  {0x30, 0x40, 0x40, 0x40, 0x3F},
  {0x7F, 0x08, 0x14, 0x22, 0x41},
  {0x7F, 0x40, 0x40, 0x40, 0x40},
  {0x7F, 0x02, 0x0C, 0x02, 0x7F},
  {0x7F, 0x02, 0x04, 0x08, 0x7F},
  {0x3E, 0x41, 0x41, 0x41, 0x3E},
  {0x7F, 0x09, 0x09, 0x09, 0x06},
  {0x3E, 0x41, 0x51, 0x21, 0x5E},
  {0x7F, 0x09, 0x09, 0x09, 0x76},
  {0x26, 0x49, 0x49, 0x49, 0x32},
  {0x01, 0x01, 0x7F, 0x01, 0x01},
  {0x3F, 0x40, 0x40, 0x40, 0x3F},
  {0x1F, 0x20, 0x40, 0x20, 0x1F},
  {0x3F, 0x40, 0x38, 0x40, 0x3F},
  {0x63, 0x14, 0x08, 0x14, 0x63},
  {0x03, 0x04, 0x78, 0x04, 0x03},
  {0x61, 0x51, 0x49, 0x45, 0x43},
  {0x7F, 0x41, 0x41, 0x00, 0x00},
  {0x02, 0x04, 0x08, 0x10, 0x20},
  {0x00, 0x41, 0x41, 0x7F, 0x00},
  {0x04, 0x02, 0x01, 0x02, 0x04},
  {0x40, 0x40, 0x40, 0x40, 0x40},
  {0x00, 0x01, 0x02, 0x04, 0x00},
  {0x20, 0x54, 0x54, 0x54, 0x78},
  {0x7F, 0x48, 0x44, 0x44, 0x38},
  {0x38, 0x44, 0x44, 0x44, 0x20},
  {0x38, 0x44, 0x44, 0x48, 0x7F},
  {0x38, 0x54, 0x54, 0x54, 0x18},
  {0x08, 0x7E, 0x09, 0x01, 0x02},
  {0x0C, 0x52, 0x52, 0x52, 0x3E},
  {0x7F, 0x08, 0x04, 0x04, 0x78},
  {0x00, 0x44, 0x7D, 0x40, 0x00},
  {0x20, 0x40, 0x44, 0x3D, 0x00},
  {0x7F, 0x10, 0x28, 0x44, 0x00},
  {0x00, 0x41, 0x7F, 0x40, 0x00},
  {0x7C, 0x04, 0x18, 0x04, 0x78},
  {0x7C, 0x08, 0x04, 0x04, 0x78},
  {0x38, 0x44, 0x44, 0x44, 0x38},
  {0x7C, 0x14, 0x14, 0x14, 0x08},
  {0x08, 0x14, 0x14, 0x18, 0x7C},
  {0x7C, 0x08, 0x04, 0x04, 0x08},
  {0x48, 0x54, 0x54, 0x54, 0x20},
  {0x04, 0x3F, 0x44, 0x40, 0x20},
  {0x3C, 0x40, 0x40, 0x20, 0x7C},
  {0x1C, 0x20, 0x40, 0x20, 0x1C},
  {0x3C, 0x40, 0x38, 0x40, 0x3C},
  {0x44, 0x28, 0x10, 0x28, 0x44},
  {0x0C, 0x50, 0x50, 0x50, 0x3C},
  {0x44, 0x64, 0x54, 0x4C, 0x44},
  {0x00, 0x08, 0x36, 0x41, 0x00},
  {0x00, 0x00, 0x7F, 0x00, 0x00},
  {0x00, 0x41, 0x36, 0x08, 0x00},
  {0x08, 0x04, 0x08, 0x10, 0x08}};
