// This is the 'classic' fixed-space bitmap font for Adafruit_GFX since 1.0.
// See gfxfont.h for newer custom bitmap font info.

#ifndef FONT5X7_H
#define FONT5X7_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#elif defined(ESP8266)
 #include <pgmspace.h>
#else
 #define PROGMEM
#endif

// Standard ASCII 5x7 font
const unsigned char font[] PROGMEM = {
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xFC, 0x02, 0x01, 0x01, 0x01, 0x01,
 0x01, 0x81, 0xC1, 0xE1, 0xF1, 0xF9,
 0xF9, 0xF9, 0xF9, 0x01, 0x01, 0x01,
 0x01, 0x01, 0x01, 0x01, 0x02, 0xFC,
 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07,
 0x07, 0x07, 0x07, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x03, 0x03, 0x03, 0x01, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFC, 0xFC, 0xFC, 0xFE, 0xFF, 0x00,
 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0xFC, 0xFE, 0xFC, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
 0xFE, 0x00, 0x00, 0x80, 0xF8, 0xFC,
 0x7C, 0x3E, 0x1E, 0x1E, 0x1E, 0x1E,
 0x1E, 0x3E, 0x7C, 0xFC, 0xF8, 0x80,
 0x00, 0x00, 0xC0, 0xF8, 0x7C, 0x3C,
 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
 0x3C, 0x3C, 0x18, 0x00, 0x38, 0x7C,
 0x7C, 0x7C, 0x7C, 0x7C, 0xFC, 0xFC,
 0x7C, 0x7C, 0x7C, 0x7C, 0x38, 0x00,
 0x00, 0xC0, 0xF0, 0xF8, 0x7C, 0x3C,
 0x1E, 0x1E, 0x1E, 0x3C, 0x7C, 0xF8,
 0xF0, 0xC0, 0x00, 0x00, 0x80, 0xF8,
 0xFC, 0x7C, 0x3E, 0x1E, 0x1E, 0x1E,
 0x1E, 0x1E, 0x3E, 0x7C, 0xFC, 0xF8,
 0x80, 0x00, 0x00, 0x00, 0xFC, 0xFE,
 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
 0x1E, 0x1E, 0x1E, 0x1E, 0x1C, 0x00,
 0xE0, 0xF8, 0xFC, 0x3E, 0x1E, 0x1E,
 0x1E, 0x1E, 0x1E, 0x1E, 0x3E, 0xFC,
 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x03, 0x0F, 0x1F, 0x3C, 0x3C,
 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0xFF,
 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
 0x00, 0x00, 0x03, 0x0F, 0x1E, 0x3C,
 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
 0x7C, 0xF8, 0xC0, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0x07, 0x0F,
 0x0F, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
 0x1E, 0x1E, 0xFE, 0xFC, 0xF0, 0x00,
 0xC0, 0xF7, 0xFF, 0x3F, 0x3E, 0x1C,
 0x1C, 0x1C, 0x1C, 0x3E, 0x3F, 0xFF,
 0xF7, 0xC0, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x3F, 0x40, 0x80, 0x80, 0x80, 0x80,
 0x9C, 0x9E, 0x9E, 0x9E, 0x9E, 0x9F,
 0x9F, 0x9F, 0x9F, 0x9E, 0x9E, 0x9E,
 0x9E, 0x9C, 0x80, 0x80, 0x40, 0x3F,
 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
 0xE3, 0xE1, 0xE1, 0xE1, 0xE1, 0xE0,
 0xE0, 0xE0, 0xE0, 0xE1, 0xE1, 0xE1,
 0xE1, 0xE3, 0xFF, 0xFF, 0x7F, 0x3F,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x18, 0x3C, 0x3C, 0x3C, 0x3C,
 0x3C, 0x3C, 0x3C, 0x3C, 0x1F, 0x0F,
 0x07, 0x00, 0x00, 0x00, 0x0F, 0x1F,
 0x1F, 0x3E, 0x3C, 0x3C, 0x3C, 0x3C,
 0x3C, 0x3E, 0x1F, 0x1F, 0x0F, 0x00,
 0x00, 0x00, 0x18, 0x3C, 0x3C, 0x3C,
 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
 0x3E, 0x1F, 0x03, 0x00, 0x1C, 0x3E,
 0x3E, 0x3E, 0x3E, 0x3E, 0x3F, 0x3F,
 0x3E, 0x3E, 0x3E, 0x3E, 0x1C, 0x00,
 0x00, 0x3F, 0x3F, 0x1F, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x0F,
 0x1F, 0x1F, 0x3E, 0x3C, 0x3C, 0x3C,
 0x3C, 0x3C, 0x3E, 0x1F, 0x1F, 0x0F,
 0x00, 0x00, 0x00, 0x00, 0x06, 0x1F,
 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
 0x1F, 0x1F, 0x0F, 0x07, 0x03, 0x00,
 0x01, 0x07, 0x0F, 0x1E, 0x3C, 0x3C,
 0x3C, 0x3C, 0x3C, 0x3C, 0x1E, 0x0F,
 0x07, 0x01, 0x00, 0x00, 0x00, 0x00,
 0xFC, 0x02, 0x01, 0x79, 0x79, 0x79,
 0x79, 0xF9, 0xF9, 0xF9, 0x79, 0x79,
 0x79, 0x79, 0x01, 0x01, 0x01, 0x01,
 0x01, 0x01, 0x01, 0x01, 0x02, 0xFC,
 0xFC, 0xFE, 0xFF, 0x87, 0x87, 0x87,
 0x87, 0x07, 0x07, 0x07, 0x87, 0x87,
 0x87, 0x87, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC,
 0xFC, 0x02, 0x01, 0xE1, 0xE1, 0xE1,
 0xE1, 0xE1, 0xE1, 0xE1, 0xE1, 0xE1,
 0xE1, 0xE1, 0xE1, 0xE1, 0xC1, 0xC1,
 0x81, 0x01, 0x01, 0x01, 0x02, 0xFC,
 0xFC, 0xFE, 0xFF, 0x1F, 0x1F, 0x1F,
 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
 0x1F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F,
 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC,
 0xFC, 0x02, 0x01, 0x01, 0x01, 0x01,
 0x01, 0x01, 0x01, 0x01, 0x01, 0x09,
 0x89, 0xF9, 0xF9, 0xF9, 0xF9, 0xF9,
 0xF9, 0x09, 0x09, 0x01, 0x02, 0xFC,
 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7,
 0x77, 0x07, 0x07, 0x07, 0x07, 0x07,
 0x07, 0xF7, 0xF7, 0xFF, 0xFE, 0xFC,
 0xFC, 0x02, 0x01, 0x01, 0x01, 0x01,
 0x81, 0xC1, 0xE1, 0xF1, 0xF1, 0xF9,
 0x79, 0x79, 0xF9, 0xF9, 0xF1, 0xF1,
 0xE1, 0x81, 0x01, 0x01, 0x02, 0xFC,
 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
 0x7F, 0x3F, 0x1F, 0x0F, 0x0F, 0x07,
 0x87, 0x87, 0x07, 0x07, 0x0F, 0x0F,
 0x1F, 0x7F, 0xFF, 0xFF, 0xFE, 0xFC,
 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0,
 0xC0, 0xC0, 0xC0, 0xC0, 0xE1, 0xFF,
 0x7F, 0x1F, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F,
 0x3F, 0x3F, 0x3F, 0x3F, 0x1E, 0x00,
 0x80, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0xC0, 0xF0, 0xFC, 0xFC, 0x3F,
 0x0F, 0x03, 0x01, 0x01, 0xFF, 0xFF,
 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x3F, 0x0F, 0x03, 0x03, 0xC0,
 0xF0, 0xFC, 0xFE, 0xFE, 0x00, 0x00,
 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0xE0, 0xFC, 0xFF,
 0xFF, 0xFF, 0xFF, 0x1F, 0x03, 0x00,
 0x00, 0x00, 0x18, 0x1F, 0x1F, 0x1F,
 0x1F, 0x0F, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0x1F, 0x03, 0x00,
 0x00, 0x00, 0x00, 0xE0, 0xFC, 0xFF,
 0xFF, 0xFF, 0xE7, 0xE0, 0xE0, 0xE0,
 0xE0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x80, 0xC0, 0xE0, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x7F, 0x3F, 0x1F, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01,
 0x03, 0x0F, 0x3F, 0xFD, 0xF1, 0xC0,
 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE,
 0xFC, 0xF0, 0xC0, 0x02, 0x0F, 0x3F,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x00, 0xF0, 0xFC,
 0xFF, 0xFF, 0xFF, 0x73, 0x70, 0x70,
 0x70, 0x70, 0x70, 0x70, 0xFF, 0xFF,
 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x03,
 0x00, 0x00, 0x00, 0x8C, 0x8F, 0x8F,
 0x8F, 0x8F, 0x8F, 0x8F, 0x00, 0x00,
 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xC0, 0x80, 0x00,
 0x00, 0x80, 0xC0, 0xE0, 0xF8, 0xF0,
 0x20, 0x00, 0x00, 0x00, 0x00, 0xFF,
 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x3F, 0x7F, 0xFF,
 0xFF, 0x7F, 0x3F, 0x1F, 0x07, 0x0F,
 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0x3F, 0x40, 0x80, 0x8F, 0x8F, 0x8F,
 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F,
 0x8F, 0x8F, 0x8F, 0x8F, 0x8F, 0x8F,
 0x8F, 0x87, 0x83, 0x81, 0x40, 0x3F,
 0x3F, 0x7F, 0xFF, 0xF0, 0xF0, 0xF0,
 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
 0xF0, 0xF8, 0xFC, 0xFE, 0x7F, 0x3F,
 0x3F, 0x40, 0x80, 0x8E, 0x8E, 0x8F,
 0x8F, 0x8F, 0x8E, 0x8E, 0x80, 0x80,
 0x80, 0x80, 0x80, 0x80, 0x83, 0x8F,
 0x8F, 0x8E, 0x8E, 0x80, 0x40, 0x3F,
 0x3F, 0x7F, 0xFF, 0xF1, 0xF1, 0xF0,
 0xF0, 0xF0, 0xF1, 0xF1, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF0,
 0xF0, 0xF1, 0xF1, 0xFF, 0x7F, 0x3F,
 0x3F, 0x40, 0x80, 0x80, 0x9F, 0x9F,
 0x9F, 0x9F, 0x9F, 0x80, 0x80, 0x80,
 0x80, 0x80, 0x80, 0x80, 0x9F, 0x9F,
 0x9F, 0x9F, 0x9F, 0x80, 0x40, 0x3F,
 0x3F, 0x7F, 0xFF, 0xFF, 0xE0, 0xE0,
 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0,
 0xE0, 0xE0, 0xE0, 0xFF, 0x7F, 0x3F,
 0x3F, 0x40, 0x80, 0x80, 0x80, 0x81,
 0x83, 0x87, 0x87, 0x8F, 0x8F, 0x8F,
 0x8F, 0x87, 0x87, 0x83, 0x81, 0x80,
 0x80, 0x80, 0x80, 0x80, 0x40, 0x3F,
 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE,
 0xFC, 0xF8, 0xF8, 0xF0, 0xF0, 0xF0,
 0xF0, 0xF8, 0xF8, 0xFC, 0xFE, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F
};
#endif // FONT5X7_H
