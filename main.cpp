#include <iostream>
#include "classe.hpp"

using namespace std;

int main()
{
    /* Rodar o código aqui:
       Funciona para:
        -Quadrados
        -Retangulos
        -Triangulos
        -Circulos
        -Cubos
        -Paralelepipedos
        -Cones
        -Cilindros
    */

    int contador=0;
    float altura, largura, base, raio, comprimento;

    while(contador!=0)
    {
    cout<<" funcao que calcula questoes relativas a figuras geometricas."<<endl.
    cout<<" Escolha a figura desejada."<<endl.
    cout<<" 1 - Quadrado."<<endl.
    cout<<" 2 - Retangulo."<<endl.
    cout<<" 3 - Triangulo."<<endl.
    cout<<" 4 - Circulo."<<endl.
    cout<<" 5 - Paralelepipedo."<<endl.
    cout<<" 6 - Cilindro."<<endl.
    cout<<" 7 - Cone."<<endl.
    cout<<" 0 - Sair."<<endl.
    cin>>contador.

    if (contador == 1)
    {
        cout<<" Digite a largura da figura desejada: "
        cin>>largura.

        altura = largura;

        Retangulo qua(altura, largura);

        qua.calculaArea(altura, largura);
        qua.calculaPerimetro(altura, largura);

    }
        if (contador == 2)
    {
        cout<<" Digite a altura da figura desejada: "
        cin>>altura.
        cout<<" Digite a largura da figura desejada: "
        cin>>largura.

        Retangulo ret(altura, largura);

        ret.calculaArea(altura, largura);
        ret.calculaPerimetro(altura, largura);

    }

        if (contador == 3)
    {
        cout<<" Digite a altura da figura desejada: "
        cin>>altura.
        cout<<" Digite a base da figura desejada: "
        cin>>base.

        Triangulo tri(altura, base);

        tri.calculaArea(altura, base);
        tri.calculaPerimetro(altura, base);

    }

        if (contador == 3)
    {
        cout<<" Digite a altura da figura desejada: "
        cin>>altura.
        cout<<" Digite a base da figura desejada: "
        cin>>base.

        Triangulo tri(altura, base);

        tri.calculaArea(altura, base);

    }

        if (contador == 4)
    {
        cout<<" Digite a raio da figura desejada: "
        cin>>raio.

        Circulo cir(altura, base);

        cir.calculaArea(raio);

    }

        if (contador == 5)
    {
        cout<<" Digite a altura da figura desejada: "
        cin>>altura.
        cout<<" Digite a largura da figura desejada: "
        cin>>largura.
        cout<<" Digite a comprimento da figura desejada: "
        cin>>comprimento.

        Paralelepipedo par(altura, largura);

        par.calculaVolume(altura);
        par.calculaAreaParal(altura, largura);

    }
        if (contador == 6)
    {
        cout<<" Digite a altura da figura desejada: "
        cin>>altura.
        cout<<" Digite a raio da figura desejada: "
        cin>>raio.

        Cilindro cil(altura, largura);

        cil.calculaVolumeCilindro(altura, raio);
        cil.calculaAreaCilindro(altura, raio);

    }

        if (contador == 7)
    {
        cout<<" Digite a altura da figura desejada: "
        cin>>altura.
        cout<<" Digite a raio da figura desejada: "
        cin>>raio.

        Cone con(altura, largura);

        con.calculaVolumeCone(altura, raio);

    }

    }
}
