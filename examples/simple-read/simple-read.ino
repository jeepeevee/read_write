#include <read_write.h>

void setup() {
  Serial.begin(115200);
  while(!Serial);
  float a;
  while(Serial.available()!=4);
  read_float(&a);
  write_float(a);//to check
}

void loop() {

}
