# Semana 5 [22/09 a 28/09]: CSS - Cascading Style Sheets

# [Atividade 5] Questionário — HTML Semântico e CSS — Semanas 4 e 5 (Prazo: 26/10 – Valor: 6,0 pontos)

1. Nos times profissionais, a estilização cotidiana usa majoritariamente:
   b. classes, reutilizáveis e de especificidade previsível
   Justificativa: Classes dominam o CSS profissional. IDs em CSS são raros (difíceis de sobrescrever) e o inline é praticamente banido em revisão de código.

2. O seletor ```article p``` aplica o estilo a:
   b. apenas os `p` que estão dentro de algum `article`
   Justificativa: O seletor descendente (espaço) atinge os `p` em qualquer nível dentro de `article` — estilização contextual.

3. Sobre contraste de texto, o padrão WCAG estabelece:
   d. contraste mínimo de 4,5:1 para texto normal
   Justificativa: O WCAG exige 4,5:1 para texto normal. Texto cinza-claro sobre branco pode ser ilegível ao sol ou para daltônicos — contraste reprovado é bug, não opinião.

4. Comparado a ```<button>Comprar</button>```, o uso de ```<div class="botao">Comprar</div>```:
   c. não recebe foco de teclado nem dispara com Enter, exigindo JavaScript extra para ser acessível
   Justificativa: O button nativo traz de graça foco, teclado e semântica. A div-botão parece funcionar até alguém usar Tab+Enter — aí a venda se perde. 'Use a plataforma'.

5. A forma profissional recomendada de adicionar CSS a um site é:
   a. arquivo externo linkado com ```<link rel="stylesheet" href="css/style.css">```
   Justificativa: O arquivo externo é organizado, reutilizável em todo o site e cacheado pelo navegador (performance).

6. O par ```<figure>`/`<figcaption>``` serve para:
   d. agrupar uma imagem e sua legenda como uma unidade de informação
   Justificativa: figure agrupa a mídia e figcaption é sua legenda — semanticamente superior a img + p soltos. O alt continua necessário.

7. A sigla CSS significa:
   a. Cascading Style Sheets (Folhas de Estilo em Cascata)
   Justificativa: Cascading Style Sheets: folhas de estilo (separação da apresentação) em cascata (mecanismo de resolução de conflitos).

8. No HTML5 semântico, a tag ```<div>```:
   a. continua válida como agrupamento visual/técnico, quando nenhuma tag semântica se aplica
   Justificativa: div não é proibida — é a última opção: agrupamento honesto para o CSS quando não há semântica a comunicar.

9. Para estilizar todos os elementos com ```class="btn"```, o seletor correto é:
   e. ```.btn```
   Justificativa: Ponto (.) seleciona classe; cerquilha (#) seleciona ID; sem prefixo seleciona a tag.

10. Para marcar a sigla 'Ifes' expandindo seu significado, usa-se:
    b. ```<abbr title="Instituto Federal do Espírito Santo">Ifes</abbr>```
    Justificativa: abbr com o atributo title expande a sigla ao passar o mouse e para leitores de tela. acronym é obsoleta; alt é atributo de imagem.

11. No card de produto, marcar o nome do produto como ```<h3><a href="...">Nome</a></h3>``` (em vez de div) permite que:
    d. leitores de tela naveguem de produto em produto pelos títulos, e o nome funcione como link
    Justificativa: Título navegável: usuários de leitores de tela saltam entre títulos; o link leva à página do produto. A div não oferece nada disso.

12. Sobre a notação de cores ```#232a60```, é correto afirmar:
    e. representa vermelho, verde e azul em hexadecimal — o padrão do mercado
    Justificativa: O hexadecimal (#RRGGBB) expressa a mistura de vermelho, verde e azul — a forma mais comum de escrever cores no CSS.

13. O critério para escolher ```<article>``` em vez de ```<section>``` é:
    e. o conteúdo é autocontido e faria sentido sozinho, fora da página
    Justificativa: Teste do article: 'se eu recortar este bloco e colar em outro site, continua fazendo sentido?' Notícia, post, card de produto — sim. section agrupa tematicamente dentro de um todo.

14. Uma vantagem de performance do CSS externo é que o navegador:
    e. baixa o arquivo uma vez e o reutiliza do cache nas próximas páginas
    Justificativa: O style.css é baixado uma vez e servido do cache nas demais páginas — cada requisição economizada importa.

15. Sobre o uso de ```<header>```, é correto afirmar:
    e. pode haver mais de um: a página tem seu header, e um article pode ter o seu próprio
    Justificativa: header marca a abertura de um contexto: a página pode ter um e cada article também. Atenção: header (visível) ≠ head (metadados).

16. A primeira e mais importante regra do ARIA é:
    b. não usar ARIA quando um elemento HTML nativo já faz o trabalho
    Justificativa: Se precisa de botão, use ```<button>```; de link, ```<a>```. ARIA em elemento nativo é redundante e pode confundir — ela existe para os widgets que o HTML não descreve sozinho.

17. Para tamanhos de fonte, a unidade rem é recomendada porque:
    d. respeita a configuração de tamanho de fonte do usuário (acessibilidade), ao contrário do px
    Justificativa: rem é relativa à fonte raiz: se o usuário aumentar a fonte padrão do navegador, o site acompanha. px ignora essa escolha.

18. SEM ```box-sizing: border-box```, qual a largura total renderizada da caixa abaixo?
    ```css
    .card {
      width: 300px;
      padding: 16px;
      border: 2px solid #ccc;
    }
    ```
    d. 336px
    Justificativa: 300 (conteúdo) + 16+16 (padding dos dois lados) + 2+2 (bordas) = 336px. Esquecer os dois lados é o erro clássico.

19. Na declaração ```font-family: 'Segoe UI', Arial, sans-serif;```, a lista de fontes serve para:
    d. definir reservas: se a primeira não existir no dispositivo, tenta a próxima
    Justificativa: É o font stack: fontes de reserva em ordem de preferência, com uma família genérica (sans-serif) como garantia final.

20. De dentro para fora, as camadas do box model são:
    e. conteúdo → padding → border → margin
    Justificativa: Conteúdo no centro, padding (respiro interno), border (a moldura) e margin (distância dos vizinhos).

21. Para um fundo azul-marinho com 60% de opacidade, usa-se:
    a. ```background-color: rgba(35, 42, 96, 0.6);```
    Justificativa: rgba adiciona o canal alfa (0 a 1) ao rgb: 0.6 = 60% opaco.

22. No desenvolvimento web moderno, o CSS é responsável pela camada de:
    e. apresentação e estilo
    Justificativa: HTML = estrutura; CSS = apresentação (cores, fontes, layout); JavaScript = comportamento.

23. A tag ```<nav>``` deve ser usada para:
    e. blocos de navegação importantes, como o menu principal
    Justificativa: nav é reservada para navegações relevantes (menu principal, navegação interna) — não para qualquer conjunto de links.

24. O HTML semântico beneficia simultaneamente:
    c. acessibilidade, SEO e manutenção do código
    Justificativa: Landmarks e tags com significado ajudam leitores de tela (acessibilidade), buscadores (SEO) e outros desenvolvedores (manutenção) — três interesses na mesma jogada.

25. No Brasil, a acessibilidade digital em sites é tratada:
    b. pela LBI (Lei 13.146/2015) e pelo modelo eMAG no setor público
    Justificativa: A Lei Brasileira de Inclusão e o eMAG (padrão do governo) tornam acessibilidade obrigação legal no setor público — e diferencial profissional em qualquer projeto.

26. Na regra abaixo, `color` e `#232a60` são, respectivamente:
    ```
    h1 {
      color: #232a60;
    }
    ```
    d. propriedade e valor
    Justificativa: h1 é o seletor; color é a propriedade (o aspecto a alterar) e #232a60 é o valor aplicado.

27. Duas regras com a MESMA especificidade definem cores diferentes para o mesmo elemento. Vence:
    e. a que aparece por último no arquivo
    Justificativa: Em empate de especificidade, a ordem decide: vale a última regra declarada.

28. O conteúdo mais adequado para uma tag ```<aside>``` é:
    e. a barra lateral com conteúdo tangencial, como 'leia também' ou publicidade
    Justificativa: aside marca conteúdo relacionado mas tangencial — faz sentido mesmo se removido do fluxo principal (sidebars, anúncios, sugestões).

29. Para um usuário de leitor de tela, a principal vantagem das landmarks (`header`, `nav`, `main`, `footer`) é:
    b. permitir saltar diretamente entre as regiões da página por atalhos
    Justificativa: Leitores de tela oferecem atalhos que pulam de landmark em landmark — sem elas, o usuário é obrigado a ouvir a página linearmente.

30. Sobre a tag ```<main>```, é correto afirmar:
    c. deve conter o conteúdo principal e ser única na página
    Justificativa: main marca o conteúdo principal e deve ser única — fora de header, footer e aside.

31. Para centralizar horizontalmente um bloco com largura definida, a técnica clássica é:
    e. ```margin: 0 auto;```
    Justificativa: margin: 0 auto distribui automaticamente as margens laterais, centralizando blocos com width definida. (text-align centraliza o texto interno, não a caixa.)

32. Analise o trecho. Qual crítica semântica está correta?
    ```
    <section>
      <div class="titulo-grande">Depoimentos</div>
      <p>"Excelente curso!" — Maria</p>
    </section>
    ```
    d. o título da seção deveria ser um heading real (ex.: ```<h2>```), não uma div estilizada
    Justificativa: Uma section pede um título de verdade na hierarquia (h2, h3...). Div 'título' é invisível para leitores de tela e buscadores.

33. Um mesmo parágrafo é atingido pelas três regras abaixo. Qual cor ele terá?
    ```
    p { color: black; }
    .destaque { color: green; }
    #unico { color: red; }
    ```
    a. vermelho, pois ID tem a maior especificidade
    Justificativa: Especificidade: ID > classe > tag. Quando várias regras atingem o mesmo elemento, vence a mais específica.

34. Com ```box-sizing: border-box```, declarar ```width: 300px``` significa que:
    e. a caixa TODA (conteúdo + padding + border) terá 300px
    Justificativa: border-box redefine a conta: a largura declarada é o tamanho final da caixa. Por isso o reset universal abre quase todo projeto profissional.

35. A vantagem de ```<time datetime="2026-09-08">8 de setembro</time>``` sobre um texto simples é:
    b. torna a data legível por máquinas (buscadores exibem a data nos resultados)
    Justificativa: O atributo datetime entrega a data em formato de máquina, permitindo que buscadores e agregadores a interpretem com precisão.

36. Em um menu sanfona (accordion), o atributo ```aria-expanded="false"``` comunica:
    c. que o painel controlado está recolhido no momento
    Justificativa: aria-expanded é um estado: informa às tecnologias assistivas se o painel está expandido (true) ou recolhido (false). O JavaScript alterna o valor.

37. A expressão 'sopa de divs' refere-se a:
    b. páginas construídas quase só com ```<div>```, estruturas genéricas e sem significado
    Justificativa: A 'sopa de divs' domina páginas antigas: caixas genéricas que não comunicam significado. O HTML5 trouxe tags que se autodescrevem.

38. Da prioridade mais fraca para a mais forte, a cascata do CSS segue a ordem:
    d. navegador → externa → interna → inline
    Justificativa: Estilo padrão do navegador < folha externa < folha interna (`<style>`) < estilo inline. Essa é a base da resolução de conflitos no CSS.
