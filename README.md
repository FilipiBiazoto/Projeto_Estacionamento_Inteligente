
<p align="center">
    <img src="https://github.com/user-attachments/assets/590b2173-f418-462c-b56a-3778c5a7d39e" alt="Imagem do projeto" width="25%" />
</p>

# UNIPINHAL - MICROPROCESSADORES E MICROCONTROLADORES

**Autores:**
- Filipi Carvalho Biazoto
- Jean Roberto Pasquini

## ESTACIONAMENTO INTELIGENTE

**Local:** Espírito Santo do Pinhal-SP  
**Ano:** 2024

### Resumo

Este trabalho apresenta o desenvolvimento de um projeto de estacionamento inteligente, implementado em uma maquete de isopor, utilizando Arduino, sensores de obstáculos, LEDs e um sistema de controle automatizado. O objetivo principal do projeto é criar um sistema que monitore a ocupação de 4 vagas de estacionamento e controle a entrada de novos veículos por meio de uma cancela automatizada. Sensores ultrassônicos são usados para detectar a presença de veículos nas vagas, acendendo LEDs vermelhos para indicar a ocupação. O Arduino controla um contador de veículos e, quando todas as vagas estão ocupadas, aciona a fechadura da cancela, impedindo a entrada de novos carros. O sistema permite otimizar o uso do espaço de estacionamento e oferecer uma solução simples e eficiente para o controle automatizado de vagas. A maquete, construída com isopor, serve como uma representação prática do funcionamento do sistema, facilitando a compreensão e visualização do processo de automação. O projeto demonstra a viabilidade e a aplicação de tecnologias de automação em soluções urbanas.

### Abstract

This paper presents the development of a smart parking project, implemented in a Styrofoam model, using Arduino, obstacle sensors, LEDs and an automated control system. The main objective of the project is to create a system that monitors the occupancy of 4 parking spaces and controls the entry of new vehicles through an automated barrier. Ultrasonic sensors are used to detect the presence of vehicles in the spaces, turning on red LEDs to indicate occupancy. Arduino controls a vehicle counter and, when all spaces are occupied, activates the barrier lock, preventing the entry of new cars. The system allows optimizing the use of parking space and offers a simple and efficient solution for automated parking space control. The model, built with Styrofoam, serves as a practical representation of how the system works, facilitating the understanding and visualization of the automation process. The project demonstrates the feasibility and application of automation technologies in urban solutions.

---

## Sumário

1. [Introdução](#introdução)
2. [Objetivo](#objetivo)  
3. [Revisão Bibliográfica](#revisão-bibliográfica)  
    3.1. [Montagem da estrutura](#montagem-da-estrutura)  
    3.2. [Componentes Utilizados](#componentes-utilizados)  
    3.3. [Programação do Sistema](#programação-do-sistema)  
4. [Resultados Esperados](#resultados-esperados)  
5. [Desenvolvimento e Implementação](#desenvolvimento-e-implementação)  
    5.1. [Construção da Maquete](#construção-da-maquete)  
    5.2. [Instalação dos Sensores](#instalação-dos-sensores)  
    5.3. [Programação do Arduino](#programação-do-arduino)  
6. [Conclusão](#conclusão)  
7. [Referências Bibliográficas](#referências-bibliográficas)

---

## 1. Introdução

Nos últimos anos, com o aumento da quantidade de veículos em áreas urbanas, surgiu a necessidade de soluções inovadoras para otimizar o uso de estacionamentos. O projeto de estacionamento inteligente busca integrar a tecnologia para melhorar a gestão de vagas, além de proporcionar maior conforto e eficiência para os motoristas. O objetivo deste trabalho é desenvolver um sistema de estacionamento inteligente, implementado em uma maquete de isopor, utilizando Arduino, sensores de obstáculos, LEDs e um contador de veículos, com o propósito de monitorar e controlar o fluxo de carros em um estacionamento de 4 vagas.

---

## 2. Objetivo

O objetivo principal deste projeto é criar um sistema de estacionamento inteligente, capaz de identificar a ocupação das vagas, sinalizar visualmente o status de cada vaga e controlar a entrada de novos veículos por meio de uma cancela automatizada. Quando o estacionamento estiver completamente ocupado, a cancela será fechada automaticamente, impedindo a entrada de novos carros. O projeto utilizará uma maquete de isopor como estrutura física, com a integração de componentes eletrônicos controlados por um Arduino.

---

## 3. Revisão Bibliográficas

### 3.1 Montagem da Estrutura

A maquete foi construída utilizando blocos de isopor, representando um estacionamento com 4 vagas. As dimensões da maquete foram ajustadas para simular um estacionamento em pequena escala, sendo suficiente para testar o funcionamento do sistema. A maquete inclui:
- 4 vagas para veículos
- Uma cancela automatizada para controle de entrada
- LEDs indicadores de status de vagas

### 3.2 Componentes Utilizados

- **Arduino Uno:** Placa de controle central responsável por processar os dados dos sensores e controlar os LEDs e a cancela.
- **Sensores de Obstáculo (Ultrassônicos):** Utilizados para detectar a presença de veículos em cada vaga. Quando um veículo é identificado, o sensor envia um sinal ao Arduino.
- **LEDs Vermelhos:** Indicadores de que uma vaga está ocupada. Eles acendem quando o sensor de obstáculo detecta um veículo na vaga correspondente.
- **Contador de Veículos:** O Arduino mantém um contador de veículos presentes no estacionamento. Cada vez que um sensor detecta um carro, o contador é incrementado.
- **Servo Motor (para a cancela):** Responsável por abrir e fechar a cancela, dependendo do número de vagas ocupadas. Quando todas as vagas estão preenchidas, o motor aciona a cancela para impedir a entrada de novos veículos.

### 3.3 Programação do Sistema

A programação do Arduino foi realizada para controlar a lógica do estacionamento inteligente:
- **Sensores de Obstáculo:** Cada sensor de obstáculo é associado a uma vaga do estacionamento. Quando um carro ocupa uma vaga, o sensor detecta a presença e envia um sinal para o Arduino.
- **Controle dos LEDs:** Quando um sensor identifica um carro, o Arduino acende o LED correspondente à vaga, indicando que ela está ocupada.
- **Contador de Vagas:** O sistema mantém um contador de vagas ocupadas. Sempre que um sensor detecta um carro, o contador aumenta, e quando um carro sai (sensor detecta ausência), o contador diminui.
- **Controle da Cancela:** Quando o contador de vagas atinge o número máximo (4 vagas ocupadas), o Arduino envia um comando para o servo motor fechar a cancela, impedindo a entrada de mais carros. Caso haja vagas disponíveis, a cancela permanece aberta.

---

## 4. Resultados Esperados

Espera-se que, ao final da implementação, a maquete funcione de maneira eficiente, demonstrando a automação do sistema de estacionamento. O comportamento esperado do sistema é o seguinte:
- As 4 vagas do estacionamento são monitoradas com precisão por sensores de obstáculo.
- Quando um veículo ocupa uma vaga, o LED correspondente acende, e o contador de veículos aumenta.
- Caso o estacionamento atinja sua capacidade máxima (4 vagas ocupadas), a cancela se fecha automaticamente.
- Quando uma vaga é liberada, o LED correspondente apaga e o contador diminui, permitindo que a cancela abra novamente.

---

## 5. Desenvolvimento e Implementação

### 5.1 Construção da Maquete

A maquete foi construída com blocos de isopor para representar as vagas de estacionamento e a área ao redor. A base da maquete foi projetada para acomodar todos os componentes eletrônicos necessários, como o Arduino e os sensores. A estrutura foi dividida em 4 zonas para simular as 4 vagas.

### 5.2 Instalação dos Sensores

Os sensores ultrassônicos foram fixados em cada vaga, em posições estratégicas, de modo a garantir que eles possam detectar a presença de um veículo. Cada sensor foi conectado ao Arduino por meio de fios e configurado para detectar a distância e a presença de obstáculos (veículos).

### 5.3 Programação do Arduino

A programação foi realizada no ambiente de desenvolvimento Arduino IDE. O código foi escrito para:
- Monitorar os sensores e acionar os LEDs quando um veículo é detectado.
- Atualizar o contador de veículos conforme a ocupação das vagas.
- Controlar a cancela por meio de um servo motor, abrindo ou fechando conforme a disponibilidade das vagas.

---

## 6. Conclusão

O projeto de estacionamento inteligente foi concluído com sucesso, e a maquete demonstrou o funcionamento eficiente do sistema. O uso do Arduino e sensores de obstáculos possibilitou a criação de uma solução prática e funcional para o monitoramento e controle de vagas. O contador de veículos, a indicação visual das vagas ocupadas com LEDs e o controle automático da cancela são recursos que tornam o sistema útil e prático para a gestão de estacionamentos. Este projeto pode ser expandido e aprimorado para estacionamentos maiores ou adaptado para outras aplicações relacionadas à automação.

---

## 7. Referências Bibliográficas

- Arduino. (2023). Documentação Oficial Arduino. Recuperado de [https://www.arduino.cc](https://www.arduino.cc)
- Santos, A. F. & Oliveira, M. R. (2021). Sistemas de Automação Aplicados ao Controle de Estacionamentos. São Paulo: Editora Tech.
- Júnior, F. S. (2022). Internet das Coisas e Automação: Aplicações Práticas em Projetos Simples. Rio de Janeiro: Editora IOT.
