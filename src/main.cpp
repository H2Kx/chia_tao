#include <Arduino.h>

float tinh_chia_tao(int a, int b)
{
  float chia_tao = b / a;
  return chia_tao;
}
int so_du_qua_tao(int c, int d)
{
  int qua_tao = d % c;
  return qua_tao;
}
int qt;
int td;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  qt = tinh_chia_tao(10, 21);
  Serial.println(qt);
  td = so_du_qua_tao(10, 21);
  Serial.println(td);
  delay(1000);
}