# 🔧 Controle de Servo Motor com Arduino UNO

Este projeto demonstra como controlar um servo motor com o Arduino UNO, utilizando a biblioteca `Servo.h` para movimentar o motor em diferentes ângulos.

## 🛠️ Componentes Utilizados

- 1x Arduino UNO
- 1x Servo motor (SG90 ou similar)
- Jumpers
- Cabo USB para conexão com o Arduino

## ⚙️ Esquema de Montagem

A montagem segue a seguinte estrutura:

- O fio **vermelho** do servo é conectado ao **5V** do Arduino.
- O fio **marrom ou preto** (GND) é conectado ao **GND** do Arduino.
- O fio **verde** (sinal) é conectado ao **pino digital 6** do Arduino.

![Montagem do circuito com Arduino e Servo Motor](servo000.png)

## 🔌 Conexões

| Fio do Servo   | Pino Arduino | Função       |
|----------------|--------------|--------------|
| Vermelho       | 5V           | Alimentação  |
| Preto          | GND          | Terra        |
| Verde          | Digital 6    | Sinal (PWM)  |

