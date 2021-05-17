#include <read_write.h>

void setup() {
  Serial.begin(115200);
  while(!Serial);
  uint32_t a = 687366544;
  while(!Serial.available());
  write_uint32_t(a);
}

void loop() {

}
