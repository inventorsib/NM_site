#include <iostream>



float derivative( float x, float y) //значение производной в точке (х, у)
{
    return -y*sin(x); 
}

int main()
{
    float h = 0.5; // шаг интегрирования
    float y = 1;   // начальное значение y 
    float xk = 4;
    for(float x=0 /*начальное значение х*/;  x<=xk; x=x+h )
    {
        
       std::cout << x << "\t" << y << std::endl; // вывод данных
        y = y + derivative(x, y)*h;    // итерация методом Эйлера
    }

    return 0;
}
