# Semana 4 [15/09 a 21/09]: Estrutura e Semântica do HTML

Notas de Aula: Desenvolvimento Front-End I
Objetivo da Aula: Criar a estrutura inicial de uma página web para um site de incubadora, utilizando HTML semântico para organizar o conteúdo e aplicando estilos CSS básicos para formatar o layout.

Ferramentas Utilizadas:
Editor de Código: Visual Studio Code (VS Code)
Extensão: Live Server (para visualização em tempo real)

## Passo 1: Organização do Projeto

Ações Realizadas:
Abrir o VS Code.
Criar uma pasta principal para o projeto, nomeada Semana4.
Dentro de Semana4, criar as subpastas: css, image, e js.
Criar o arquivo principal na raiz do projeto: index.html.
Explicação Detalhada:
A organização de um projeto é fundamental. Separar os arquivos por tipo torna o projeto mais fácil de entender, manter e escalar. O arquivo index.html é o ponto de partida padrão para qualquer site.

## Passo 2: Estrutura Base do HTML (Boilerplate)

Ação Realizada:
No arquivo index.html, digitar ! e pressionar a tecla Tab.

```
<!DOCTYPE html>
<html lang="pt-BR">
  <head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Núcleo Incubador do Ifes de Alegre</title>
  </head>
  <body>
  </body>
</html>
```

## Passo 3: Estruturação com HTML Semântico

```
<body>
  <header></header>
  <main></main>
  <footer></footer>
</body>
```

## Passo 4: Populando o Cabeçalho e a Navegação

```
<header>
  <h1>Incubadora do Ifes de Alegre</h1>
  <p>Ambiente de inovação para transformar ideias em negócios de impacto no Espírito Santo.</p>
  <nav>
    <ul>
      <li><a href="#">Início</a></li>
      <li><a href="#">Programas</a></li>
      <li><a href="#">Startups</a></li>
      <li><a href="#">Eventos</a></li>
      <li><a href="#">Sobre</a></li>
      <li><a href="#">Contatos</a></li>
    </ul>
  </nav>
</header>
```

## Passo 5: Adicionando Conteúdo Principal

```
<main>
  <section>
    <h2>Programas e Trilhas</h2>
    <article>
      <h3>Pré-incubação</h3>
      <p>Transformação de ideias em protótipos de baixa fidelidade e MVP.</p>
      <img src="image/incubadora.jpeg" alt="Incubadora Ifes de Alegre" style="width: 400px;">
    </article>
  </section>
</main>
```

## Passo 6: Finalizando o Rodapé

```
<footer>
  <p>&copy; 2025 Núcleo Incubador do Ifes de Alegre - Todos Direitos Reservados</p>
</footer>
```

## Passo 7: Estilização do Menu com CSS

Explicação Detalhada:
Para aplicar este estilo, você pode criar uma tag <style> no início do seu conteúdo no Moodle ou, idealmente, adicionar as regras de CSS em uma área de CSS customizado do Moodle, se disponível.

```
<style>
  nav ul {
    display: flex;
    list-style: none;
    gap: 8px;
    padding: 0; /* Adicionado para remover o padding padrão da lista */
  }
</style>
```
