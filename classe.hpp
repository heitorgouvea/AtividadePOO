#ifndef CLASSE_HPP
#define CLASSE_HPP

#include <iostream>

using namespace std;

class Retangulo
{
protected:  //protected por que será necessáio as classe que herdárem dessa poderem acessar seus atributos
    float altura;
    float largura;

public:  // metodos todos publicos
    Retangulo(float altura, float largura); // Construtor da classe
    float calculaArea(float altura, float largura);
    float calculaPerimetro(float altura, float largura);
};

class Triangulo // segue os mesmos padrões do Retangulo, apenas mudando os atributos
{
protected:
    float altura;
    float base;

public:
    Triangulo(float altura, float base);
    float calculaArea(float altura, float base);
};

class Circulo // Necessario atributos de Raio apenas
{
protected:
    float raio;
    double pi = 3.1415;

public:
    Circulo(float raio);
    float calculaArea(float raio);
} ;

class Paralelepipedo: public Retangulo // Herda de Retangulo, pois são semelhantes
{
private:
    float comprimento;

public:
    Paralelepipedo(float altura, float largura, float comprimento);
    float calculaVolume(float altura);
    float calculaAreaParal(float altura, float largura);
};

class Cilindro: public Circulo // Herda de Circulo, pois são semelhantes
{
protected:
    float altura;

public:
    Cilindro(float altura, float raio);
    float calculaVolumeCilindro(float altura, float raio);
    float calculaAreaCilindro(float altura, float raio);
};

class Cone: public Circulo // Herda de Circulo, pois são semelhantes
{
protected:
    float altura;

public:
    Cone(float altura, float raio);
    float calculaVolumeCone(float altura, float raio);
};

#endif
