#include <iostream>


float sign(float val)
{
  if(val > 0) return 1;
  else if(val < 0) return -1;
  return 0;
}
float mu = 0.0;
float k = 1;
float m = 1;

float derivativeOfX(float t, float x, float v) //значение производной в точке (х, у)
{
    return v; 
}
float derivativeOfV(float t, float x, float v) //значение производной в точке (х, у)
{
    return 1/m*(-k*x-mu*sign(v)); 
}

int main()
{   
    // шаг интегрирования
    float h = 0.01; 
    // начальное значение координты
    float x0 = 0;   
    // начальное значение скорости
    float v0 = 1;
    // время останова  
    float tk = 10;
    float x, v;
    for(float t=0 /*начальное значение t*/;  t<=tk; t=t+h )
    {
        // вывод данных
       // std::cout << t << " " << x0 << " " << v0 << std::endl; 
        std::cout << x0 << std::endl; 
        // итерация методом Эйлера
        x = x0 + derivativeOfX(t, x0, v0)*h;    
        v = v0 + derivativeOfV(t, x0, v0)*h;
        // обновляем переменные
        x0=x; v0=v;
        
    }

    return 0;
}
