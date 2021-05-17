#include <read_write.h>

//####################Write sur Serial

void write_uint8_t(uint8_t var) {
  Serial.write((uint8_t*)&var,1);
}

void write_int8_t(int8_t var) {
  Serial.write((uint8_t*)&var,1);
}

void write_float(float var) {
  Serial.write((uint8_t*)&var,4);
}

void write_uint16_t(uint16_t var) {
  Serial.write((uint8_t*)&var,2);
}

void write_int16_t(int16_t var) {
  Serial.write((uint8_t*)&var,2);
}

void write_uint32_t(uint32_t var) {
  Serial.write((uint8_t*)&var,4);
}

void write_int32_t(int32_t var) {
  Serial.write((uint8_t*)&var,4);
}

//####################Read sur Serial

void read_uint8_t(uint8_t *var) {
  uint8_t *pvar = (uint8_t *)var;
    *pvar = Serial.read();
}

void read_int8_t(int8_t *var) {
  uint8_t *pvar = (uint8_t *)var;
    *pvar = Serial.read();
}

void read_float(float *var) {
  uint8_t *pvar = (uint8_t *)var;
  for (uint8_t i = 0; i < 4; i++) {
    *(pvar + i) = Serial.read();
  }
}

void read_uint16_t(uint16_t *var) {
  uint8_t *pvar = (uint8_t *)var;
  for (uint8_t i = 0; i < 2; i++) {
    *(pvar + i) = Serial.read();
  }
}

void read_int16_t(int16_t *var) {
  uint8_t *pvar = (uint8_t *)var;
  for (uint8_t i = 0; i < 2; i++) {
    *(pvar + i) = Serial.read();
  }
}

void read_uint32_t(uint32_t *var) {
  uint8_t *pvar = (uint8_t *)var;
  for (uint8_t i = 0; i < 4; i++) {
    *(pvar + i) = Serial.read();
  }
}

void read_int32_t(int32_t *var) {
  uint8_t *pvar = (uint8_t *)var;
  for (uint8_t i = 0; i < 4; i++) {
    *(pvar + i) = Serial.read();
  }
}