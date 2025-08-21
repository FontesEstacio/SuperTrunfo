# SuperTrunfo (níveis: Novato, Aventureiro, Mestre)

Projeto simples em C com três variantes do jogo **Super Trunfo** — cada arquivo implementa um **nível** com funcionalidades progressivas: cadastro básico (Novato), cálculos adicionais (Aventureiro) e comparação/batalha com indicação de vencedor (Mestre).

---

## Estrutura do repositório
- `supertrunfo_novato.c` — versão básica: cadastro e exibição de 2 cartas.  
- `supertrunfo_aventureiro.c` — adiciona cálculos: densidade populacional e PIB per capita; exibe esses valores.  
- `supertrunfo_mestre.c` — versão completa: calcula métricas (densidade, PIB per capita, “super poder”) e compara as cartas por vários atributos, mostrando os vencedores da batalha.

---

## Funcionamento principal de cada nível

### Novato
- Objetivo: cadastrar duas cartas com dados básicos e mostrá-las.  
- Campos lidos: estado (A–H), código (ex.: A01), nome da cidade, população, área (km²), PIB (em bilhões), número de pontos turísticos.  
- Saída: imprime os campos cadastrados para cada carta.

### Aventureiro
- Tudo do *Novato*, mais:  
  - Calcula **densidade populacional** (`população / área`).  
  - Calcula **PIB per capita** (`PIB * 1e9 / população`).  
  - Exibe os valores calculados junto com os demais campos.

### Mestre
- Tudo do *Aventureiro*, mais:  
  - Calcula densidade e PIB per capita para cada carta.  
  - Valor adicional chamado **super poder** (combinação atributos usada como critério extra).  
  - Compara as cartas por: população, área, PIB, pontos turísticos, densidade (menor densidade vence), PIB per capita e super poder.  
  - Exibe os vencedores por atributo.

---

## Como compilar e rodar (exemplo com GCC)
```bash
# Compilar
gcc supertrunfo_novato.c -o supertrunfo_novato
gcc supertrunfo_aventureiro.c -o supertrunfo_aventureiro
gcc supertrunfo_mestre.c -o supertrunfo_mestre

# Executar
./supertrunfo_novato
./supertrunfo_aventureiro
./supertrunfo_mestre
