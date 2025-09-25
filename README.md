# Estacao-meteorologica-dht11

## Descrição
Projeto de uma pequena estação meteorológica que captura a umidade do ar e a temperatura do ambiente e exibe em um display.

## Imagem do projeto
![Imagem do projeto](".imagens\imagem_1.jpg")

## Funcionalidades
* Captura a Temperatura atual;
* Captura a umidade atual do ar;
* Exibe as informações no display.

## Componentes utilizados
* 1x Raspberry PI Pico;
* 1x Display LCD 16x2;
* 1x Módulo I2C;
* 1x Sensor DHT11;
* Jumpers;

## Esquema de ligação
![Imagem do circuito](".imagens\circuito_DHT.jpg")
O esquema foi feito com um DHT22 por conta de limitações do programa utilizado. 

## Lógica
1. Inicia o loop;
2. O sensor lê os dados do ambiente;
3. As informações são exibidas no display;
4. Reinicia o loop.

## Desafios e aprendizado
Precisei estudar e aprender a manipular a biblioteca do sensor DHT. Pois não tinha conhecimento sobre ela.
Também aprendi a manipular o display LCD, como acender a luz de fundo, posicionar o cursor e exibir todas 
as informações na tela de forma legível. Foi minha primeira experiência com raspberry pi pico, apesar de 
ter certa semelhança com o ESP32 na forma de organizar os jumpers, foi um aprendizado valioso.
