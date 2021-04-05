#include "classe.hpp"
#include <math.h>

/*Retangulo:: Retangulo(float altura, float largura)
{
    this->altura = 0.0;
    this->largura = 0.0;
}
*/
Retangulo::Retangulo(float altura, float largura)
{
    this->altura = altura;
    this->largura = largura;
}

float Retangulo:: calculaArea(float altura, float largura)
{
    float area = altura*largura;
    cout<< "Area = "<<area<<"."<<endl;
}

float Retangulo:: calculaPerimetro(float altura, float largura)
{
    float perimetro = 2*(altura+largura);
    cout<< "Perimetro = "<<perimetro<<"."<<endl;
}

/*Triangulo::Triangulo(float altura, float base)
{
    this->altura = 0.0;
    this->base = 0.0;
}
*/
Triangulo::Triangulo(float altura, float base)
{
    this->altura = altura;
    this->base = base;
}

float Triangulo:: calculaArea(float altura, float base)
{
    float area = (altura*base)/2;
    cout<< "Area = "<<area<<"."<<endl;
}

/*Circulo:: Circulo(float raio)
{
    this->raio = 0.0;
}
*/
Circulo:: Circulo(float raio)
{
    this->raio = raio;
}

float Circulo:: calculaArea(float raio)
{
    float area = pi*pow(raio,2);
    cout<< "Area = "<<area<<"."<<endl;
}

/*Paralelepipedo :: Paralelepipedo(float altura, float largura, float comprimento)
{
    this->comprimento = 0.0;
}
*/
Paralelepipedo :: Paralelepipedo(float altura, float largura, float comprimento)
{
    this->altura = altura;
    this->largura = largura;
    this->comprimento = comprimento;
}

Paralelepipedo :: calculaVolume(float altura);
{
    float volume = pow(altura,3);
    cout<< "Volume = "<<volume<<"."<<endl;
}

Paralelepipedo:: calculaAreaParal(float altura, float largura);
{
    float area2D = calculaArea(float altura, float largura);
    float area = areaD2 * 6;
    cout<< "Area = "<<area<<"."<<endl;
}
/* Cilindro:: Cilindro(float altura, float raio)
{
    this->altura = 0.0;
}
*/
Cilindro :: Cilindro(float altura, float raio)
{
    this->altura = altura;
    this->raio = raio;
}

float Cilindro:: calculaVolumeCilindro(float altura, float raio)
{
    float volume = (pi* pow(raio,2)) * altura;
    cout<< "Volume = "<<volume<<"."<<endl;

}

float Cilindro:: calculaAreaCilindro(float altura, float raio)
{
    float area = (2*pi*pow(raio,2) + (2*pi*raio*altura));
    cout<< "Area = "<<area<<"."<<endl;
}

/*Cone:: Cone(float altura, float raio)
{
    this->altura = 0.0;
}
*/
Cone:: Cone(float altura, float raio)
{
    this->altura = altura;
    this->raio = raio;
}

float Cone:: calculaVolumeCone(float altura, float raio)
{
    float volume = ((pi* pow(raio,2)) * altura)/3;
    cout<< "Volume = "<<volume<<"."<<endl;
}
