# Atividade Prática 01: Algoritmos de Busca e Recursão  

**Disciplina:** IMD0029 - Estrutura de Dados Básicas I  
**Professor:** João Guilherme  

---

##  Visão Geral do Projeto
Este projeto consiste na implementação e aplicação de algoritmos de busca e recursão em C para resolver três problemas distintos. O objetivo foi reforçar os conceitos teóricos da disciplina em um cenário prático, que envolveu não apenas a codificação dos algoritmos, mas também a organização do código, compilação via Makefile e a validação com testes automatizados.

---

##  Desafios Resolvidos
- **Primeira Versão com Defeito:** Utilizar Busca Binária para encontrar eficientemente a primeira "versão inválida" em um conjunto de versões sequenciais.  
- **Equipes Iguais e Diversas:** Implementar uma solução para contar o número de especialidades distintas em um vetor, utilizando Busca Sequencial Otimizada e Bubble Sort como ferramenta de pré-processamento.  
- **Contagem de Caracteres Recursiva:** Desenvolver uma função que calcula a frequência de um caractere em uma string, aplicando o conceito de recursão pura, sem o uso de laços de repetição.  

---

##  Estrutura e Adaptações do Projeto
O projeto foi organizado na estrutura padrão de diretórios **include**, **src** e **test**:

Atividade_1/
├── include/ # Arquivos de cabeçalho (.h)
├── src/ # Código-fonte (.c)
├── test/ # Código de testes
└── Makefile # Script de compilação


###  Ajustes Necessários
- Durante o desenvolvimento, notei que o Makefile fornecido esperava que os diretórios fossem nomeados com o sufixo `_c`. Para garantir a compilação correta dos testes com o comando `make test_c`, foi necessário renomear as pastas para **include_c**, **src_c** e **test_c**.  
- Também foi necessário **tirar os arquivos da pasta original do professor** e reorganizá-los na estrutura acima, para que o compilador e o Makefile funcionassem corretamente no meu ambiente.  

---

##  Configuração do Ambiente e Execução
O projeto foi desenvolvido e testado no **Windows**, utilizando o compilador **MinGW64** integrado ao VS Code.  

### Compilação Padrão
```bash
make test_c
```bash
./test_c.exe
Nota: Para integrar o terminal do MinGW64 ao VS Code, foi necessário configurar o arquivo settings.json com o perfil de terminal apropriado. Em alguns casos, a execução do ./test_c.exe precisou ser feita manualmente no terminal aberto
