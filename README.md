# 🗺️ Desafio WAR Estruturado – Conquista de Territórios

Bem-vindo ao **Desafio WAR Estruturado!** Inspirado no famoso jogo de estratégia, este desafio convida você a programar diferentes versões do jogo WAR, evoluindo seus conhecimentos em **C** à medida que avança pelos níveis **Novato**, **Aventureiro** e **Mestre**.

A empresa **MateCheck** contratou você para criar uma versão estruturada do WAR. Cada nível propõe novas funcionalidades, conceitos e desafios de programação. **Você escolhe por onde começar!**

---

## 🧩 Nível Novato: Cadastro Inicial dos Territórios

### 🎯 Objetivo

- Criar uma `struct` chamada `Territorio`.
- Usar um **vetor estático de 5 elementos** para armazenar os territórios.
- Cadastrar os dados de cada território: **Nome**, **Cor do Exército**, e **Número de Tropas**.
- Exibir o estado atual do mapa.

### ⚙️ Funcionalidades

- Leitura de dados pelo terminal (`fgets` e `scanf`)
- Impressão organizada dos dados de todos os territórios

### 💡 Conceitos abordados

- `struct`
- Vetor estático
- Entrada/saída com `scanf`, `fgets`, e `printf`

### 📥 Entrada

O usuário digita o nome do território, a cor do exército dominante e o número de tropas para **cada um dos 5 territórios**.

### 📤 Saída



## 🧗‍♂️ Nível Aventureiro: Batalhas Estratégicas

### 🎯 Objetivo

- Substituir o vetor estático por **alocação dinâmica com `calloc`**
- Criar uma função para **simular ataques entre dois territórios**
- Utilizar números aleatórios para representar dados de batalha

### 🆕 Novidades em relação ao Nível Novato

- Alocação dinâmica de memória com `calloc`
- Uso de **ponteiros**
- Laço interativo para o jogador escolher **territórios para atacar e defender**
- Simulação de dados de ataque e defesa com `rand()`

### ⚙️ Funcionalidades

- Cadastro dos territórios (como no Nível Novato)
- Fase de ataque com:
  - Escolha de atacante e defensor
  - Dados de ataque/defesa
  - Lógica:
    - Se atacante vence → defensor perde 1 tropa
    - Se defensor perde todas → território é conquistado
    - Empates favorecem o atacante

### 💡 Conceitos abordados

- Ponteiros
- `calloc` / `free`
- Aleatoriedade com `rand()` / `srand()`
- Funções para modularização

### 📥 Entrada

- Território **atacante** (1 a 5)
- Território **defensor** (1 a 5)

### 📤 Saída

Exibição do resultado da batalha, dados sorteados e mudanças no mapa.



## 🧠 Nível Mestre: Missões e Modularização Total

### 🎯 Objetivo

- Dividir o código em funções bem definidas
- Implementar um **sistema de missões**
- Verificar cumprimento da missão
- Aplicar **boas práticas** (uso de `const`, modularização, etc.)

### 🆕 Diferenças em relação ao Nível Aventureiro

- Modularização total em funções
- Missões aleatórias atribuídas:
  1. Destruir o exército **Verde**
  2. Conquistar **3 territórios**
- Menu interativo com opções

### ⚙️ Funcionalidades

- Inicialização automática dos territórios
- Menu principal com 3 opções:
  1. Atacar
  2. Verificar Missão
  3. Sair
- Verificação de vitória da missão

### 💡 Conceitos abordados

- Modularização
- `const` correctness
- Estruturação em múltiplas funções
- Passagem por referência

### 📥 Entrada

- Ações do jogador via menu:
  - `1` - Atacar
  - `2` - Verificar Missão
  - `0` - Sair
- Escolha de territórios para ataque

### 📤 Saída

- Mapa atualizado
- Resultados das batalhas
- Verificação da missão
- Mensagem de vitória



## 🏁 Conclusão

Com este **Desafio WAR Estruturado**, você praticará fundamentos essenciais da linguagem **C** de forma **divertida e progressiva**.

Cada nível foca em um conjunto de habilidades:

- 🟢 **Novato**: `struct`, vetor, entrada/saída
- 🔵 **Aventureiro**: ponteiros, memória dinâmica, lógica de jogo
- 🟣 **Mestre**: modularização, design limpo, sistema de missões



🚀 **Boa sorte! Avance nos níveis e torne-se um mestre da programação estratégica!**

> Equipe de Ensino – MateCheck


# Jogo-War
Trabalho da Faculdade ADS - War - 3 Níveis

1.0 - Nível Novato
# 🗺️ Projeto WAR Estruturado em C

Bem-vindo ao **WAR Estruturado**, uma versão digital em linguagem C inspirada no clássico jogo de estratégia de tabuleiro. Este projeto foi desenvolvido como um desafio prático de programação para aplicar conceitos fundamentais e avançados de Estruturas de Dados e gerenciamento de memória.

## 🎯 Objetivos do Projeto
O desenvolvimento é dividido em três grandes níveis de complexidade, evoluindo a arquitetura do software a cada etapa:

- **🟢 Nível Novato (Concluído):** Criação da base de dados dos territórios utilizando `structs`, laços de repetição e vetores estáticos, com leitura e formatação de dados via terminal.
- **🔵 Nível Aventureiro (Em Desenvolvimento):** Implementação de alocação dinâmica de memória (`calloc`/`free`), manipulação de ponteiros, modularização de funções e simulação de batalhas com geração de dados aleatórios (`rand`).
- **🟣 Nível Mestre (Planejado):** Refatoração completa com foco em boas práticas de design de software, *const correctness*, passagem de parâmetros por referência e um sistema de missões com condições de vitória.

## 🛠️ Tecnologias Utilizadas
* **Linguagem:** C
* **Compilador:** GCC
* **Ambiente:** GitHub Codespaces / Linux

## 🚀 Como Executar

1. Clone o repositório para a sua máquina local ou abra no GitHub Codespaces:
   ```bash
   git clone [https://github.com/seu-usuario/seu-repositorio.git](https://github.com/seu-usuario/seu-repositorio.git)

----------------------------------------------------------------------------------------------------------------------------------

2.0 - Nível Aventureiro

# 🗺️ Projeto WAR Estruturado em C

Bem-vindo ao **WAR Estruturado**, uma versão digital em linguagem C inspirada no clássico jogo de estratégia de tabuleiro. Este projeto foi desenvolvido como um desafio prático de programação para aplicar conceitos fundamentais e avançados de Estruturas de Dados e gerenciamento dinâmico de memória.

## 🎯 Objetivos do Projeto e Status
O desenvolvimento foi dividido em três grandes níveis de complexidade, evoluindo a arquitetura do software a cada etapa:

- **🟢 Nível Novato (Concluído):** Criação da base de dados dos territórios utilizando `structs`, laços de repetição e I/O formatado.
- **🔵 Nível Aventureiro (Concluído):** Implementação de alocação dinâmica de memória (`calloc`/`free`), manipulação de dados via ponteiros, e criação do motor de batalhas com geração de dados aleatórios (`rand`). Regras de conquista e transferência de tropas aplicadas em tempo real na memória.
- **🟣 Nível Mestre (Em Desenvolvimento):** Refatoração completa com foco em boas práticas de design de software, modularização total e implementação de um sistema de missões secretas com condições de vitória.

## 🛠️ Tecnologias e Funcionalidades
* **Linguagem:** C
* **Ambiente:** GitHub Codespaces / Compilador GCC
* **Gerenciamento de Memória:** Transição de arrays estáticos para estruturas dinâmicas na Heap (prevenindo vazamentos com `free`).
* **Lógica de Jogo:** Simulação de rolagem de dados atrelada ao relógio do sistema (`srand(time(NULL))`), com regras de combate, empate e tomada de territórios inimigos (`strcpy`).

## 🚀 Como Executar

1. Clone o repositório para a sua máquina local ou abra no GitHub Codespaces:
   ```bash
   git clone [https://github.com/seu-usuario/seu-repositorio.git](https://github.com/seu-usuario/seu-repositorio.git)

   gcc main.c -o war

   ./war

   -------------------------------------------------------------------------------------------------------------------------------

3.0 - Nível Mestre

# 🗺️ Projeto WAR Estruturado em C

Bem-vindo ao **WAR Estruturado**, uma versão digital em linguagem C inspirada no clássico jogo de estratégia de tabuleiro. Este projeto foi desenvolvido como um desafio prático de programação para aplicar conceitos fundamentais e avançados de Estruturas de Dados e gerenciamento de memória.

## 🎯 Níveis de Desenvolvimento (Status: 100% Concluído)
O projeto foi construído evoluindo a arquitetura do software em três etapas:

- **🟢 Nível Novato (Concluído):** Criação da base de dados dos territórios utilizando `structs`, laços de repetição e I/O formatado via terminal.
- **🔵 Nível Aventureiro (Concluído):** Implementação de alocação dinâmica de memória (`calloc`/`free`), manipulação de ponteiros e criação do motor de batalhas com geração de dados aleatórios (`rand`). Regras de conquista e transferência de tropas aplicadas em tempo real.
- **🟣 Nível Mestre (Concluído):** Refatoração completa com foco em boas práticas de engenharia de software. Implementação de modularização total, passagem de parâmetros por referência, manipulação avançada de strings (`strcmp`, `strcpy`) e um sistema dinâmico de missões secretas com avaliação de vitória.

## 🛠️ Tecnologias e Conceitos Aplicados
* **Linguagem:** C
* **Ambiente:** GitHub Codespaces / Compilador GCC
* **Gerenciamento de Memória:** Uso seguro da Heap (`malloc`, `calloc`) com limpeza rigorosa (`free`) para prevenir *memory leaks*.
* **Modularização:** Separação de responsabilidades em funções específicas (`atacar`, `exibirMapa`, `atribuirMissao`, `verificarMissao`, `liberarMemoria`).
* **Lógica de Jogo:** Simulação de rolagem de dados baseada no tempo do sistema (`srand(time(NULL))`), com regras matemáticas de combate, empate e ocupação de territórios inimigos.

## 🚀 Como Executar

1. Clone o repositório para a sua máquina local ou abra no GitHub Codespaces:
   ```bash
   git clone [https://github.com/seu-usuario/seu-repositorio.git](https://github.com/seu-usuario/seu-repositorio.git)

   gcc main.c -o war

   ./war

---------------------------------------------------------------------------------------------------------------------------------------------------