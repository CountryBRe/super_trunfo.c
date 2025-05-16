🃏 Super Trunfo dos Estados – Jogo em C
Esse é um projeto simples do tipo Super Trunfo, feito em linguagem C como trabalho da faculdade. A ideia foi comparar dois estados brasileiros (🇧🇷 Santa Catarina e Paraná), usando atributos como população, PIB, área, etc.

🔍 Sobre o Jogo
O jogador escolhe uma das duas cartas e o programa compara os atributos com a outra carta. Cada atributo é analisado separadamente e o resultado mostra quem venceu em cada item.

O jogo ainda usa cores no terminal (via códigos ANSI) pra destacar os resultados:

🟢 Verde: sua carta venceu

🔴 Vermelho: carta adversária venceu

🧾 Atributos das Cartas
Cada carta contém:

🏷️ Nome do estado

👥 População

📏 Área (km²)

💰 PIB (em bilhões de reais)

🏞️ Pontos turísticos

📊 PIB per capita (calculado)

📌 Densidade populacional (calculada)

🧠 Super Poder (soma ponderada dos outros atributos)

⚙️ Como Rodar
Compile o código com um compilador C (ex: GCC):

bash
Copiar
Editar
gcc super_trunfo.c -o super_trunfo
Execute no terminal:

bash
Copiar
Editar
./super_trunfo
Escolha a carta (1 para Santa Catarina ou 2 para Paraná) e veja o resultado da batalha!

⚠️ Obs: use um terminal que suporte cores ANSI (como o terminal do Linux, macOS ou Windows Terminal moderno).

📁 Sobre o Código
O código está em um único arquivo: super_trunfo.c

As cartas são criadas com struct

Os cálculos (como PIB per capita, densidade, etc.) são feitos direto no código

A comparação é feita atributo por atributo

Esse projeto é uma base simples e pode ser expandida para mais cartas, mais jogadores, ou até entrada por arquivo no futuro.

👨‍💻 Feito por: Rodrigo Gomes
📘 Disciplina: Introdução à Programação de Computadores
🏫 Faculdade: Estácio de Sá
👨‍🏫 Professor: Sérgio Cardoso
