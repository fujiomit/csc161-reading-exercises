#include <stdio.h>

float expt(float x, int y){
  float a = 1.0;
  if(y > 0){
    for(int y; y > 0; y--){
    float  a = a * x;
    }
  }
  else{
    for(int y; -y < 0; y++){
      float a = a * x;
    }
  }
  return a;
}

int main(void){
  expt(2.0, 3);
  expt(2.0, -3);
  expt(0, 8);
  expt(2.0, 0);
  return 0;
}
