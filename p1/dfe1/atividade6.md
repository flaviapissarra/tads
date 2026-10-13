# [Atividade 6] Questionário — Layouts com CSS (+ revisão) (Prazo: 26/10 – Valor: 6,0 pontos)

1. Em um e-commerce, a tag mais adequada para envolver cada card de produto de uma vitrine é:
   b. ```<article>```, pois o card é autocontido e faria sentido fora da página
   Justificativa: O card de produto passa no teste do article: num resultado de busca ou num feed, ele continua fazendo sentido sozinho.

2. Um cabeçalho que rola normalmente com a página, mas 'gruda' no topo ao alcançá-lo, usa:
   e. `position: sticky; top: 0;`
   Justificativa: sticky é o híbrido: comporta-se como relative até atingir o limite (`top: 0`) e então gruda — o padrão dos menus de portais.

3. Sobre o uso de `<header>`, é correto afirmar:
   b. pode haver mais de um: a página tem seu header, e um article pode ter o seu próprio
   Justificativa: header marca a abertura de um contexto: a página pode ter um e cada article também. Atenção: header (visível) ≠ head (metadados).

4. Um elemento com `position: relative; top: 10px;`:
   b. desloca-se 10px a partir da sua posição original, sem sair do fluxo
   Justificativa: relative desloca o elemento em relação ao próprio lugar original, mantendo seu espaço reservado no fluxo.

5. Com `box-sizing: border-box`, declarar `width: 300px` significa que:
   c. a caixa TODA (conteúdo + padding + border) terá 300px
   Justificativa: border-box redefine a conta: a largura declarada é o tamanho final da caixa. Por isso o reset universal abre quase todo projeto profissional.

6. Analise o CSS de um cabeçalho de loja virtual. O que garante que ele fique SOBRE o conteúdo que rola por baixo?
   ```css
   .topo {
     position: sticky;
     top: 0;
     display: flex;
     z-index: 10;
   }
   ```
   a. `z-index: 10`
   Justificativa: O sticky gruda o cabeçalho; o z-index: 10 garante que ele fique na camada superior, sobre o conteúdo que passa por baixo.

7. Na declaração `font-family: 'Segoe UI', Arial, sans-serif;`, a lista de fontes serve para:
   a. definir reservas: se a primeira não existir no dispositivo, tenta a próxima
   Justificativa: É o font stack: fontes de reserva em ordem de preferência, com uma família genérica (sans-serif) como garantia final.

8. Para um usuário de leitor de tela, a principal vantagem das landmarks (`header`, `nav`, `main`, `footer`) é:
   d. permitir saltar diretamente entre as regiões da página por atalhos
   Justificativa: Leitores de tela oferecem atalhos que pulam de landmark em landmark — sem elas, o usuário é obrigado a ouvir a página linearmente.

9. Para tamanhos de fonte, a unidade rem é recomendada porque:
   b. respeita a configuração de tamanho de fonte do usuário (acessibilidade), ao contrário do px
   Justificativa: rem é relativa à fonte raiz: se o usuário aumentar a fonte padrão do navegador, o site acompanha. px ignora essa escolha.

10. A filosofia mobile-first consiste em:
    c. escrever o CSS base para telas pequenas e adicionar media queries (`min-width`) para telas maiores
    Justificativa: Base para o celular + acréscimos progressivos para telas maiores: prioriza o conteúdo essencial e entrega CSS mais simples aos dispositivos mais lentos.

11. Em um menu sanfona (accordion), o atributo `aria-expanded="false"` comunica:
    b. que o painel controlado está recolhido no momento
    Justificativa: aria-expanded é um estado: informa às tecnologias assistivas se o painel está expandido (true) ou recolhido (false). O JavaScript alterna o valor.

12. A propriedade `gap: 20px` em um contêiner flex:
    e. cria espaçamento consistente entre os itens, sem margens manuais
    Justificativa: gap resolve o respiro entre itens de forma limpa — sem hacks de margin no último filho.

13. Para posicionar uma etiqueta 'PROMOÇÃO' sobre a foto de um card, o padrão profissional é:
    c. `position: relative` no card (referência) e `position: absolute` na etiqueta
    Justificativa: O pai relative vira o ponto de referência; o filho absolute se ancora nele (top/left/right/bottom). É o padrão de sobreposição do dia a dia.

14. Sobre a notação de cores `#232a60`, é correto afirmar:
    c. representa vermelho, verde e azul em hexadecimal — o padrão do mercado
    Justificativa: O hexadecimal (#RRGGBB) expressa a mistura de vermelho, verde e azul — a forma mais comum de escrever cores no CSS.

15. O bloco abaixo aplica seus estilos quando:
    ```css
    @media (min-width: 768px) {
      .galeria { flex-direction: row; }
    }
    ```
    d. a tela tem PELO MENOS 768px de largura
    Justificativa: min-width: 768px = 'daqui para cima'. É a media query típica do mobile-first: o estilo base atende o celular e as queries adicionam para telas maiores.

16. Analise o trecho. Qual crítica semântica está correta?
    ```html
    <section>
      <div class="titulo-grande">Depoimentos</div>
      <p>"Excelente curso!" — Maria</p>
    </section>
    ```
    e. o título da seção deveria ser um heading real (ex.: `<h2>`), não uma div estilizada
    Justificativa: Uma section pede um título de verdade na hierarquia (h2, h3...). Div 'título' é invisível para leitores de tela e buscadores.

17. A primeira e mais importante regra do ARIA é:
    a. não usar ARIA quando um elemento HTML nativo já faz o trabalho
    Justificativa: Se precisa de botão, use `<button>`; de link, `<a>`. ARIA em elemento nativo é redundante e pode confundir — ela existe para os widgets que o HTML não descreve sozinho.

18. A diferença entre elementos block e inline é:
    d. block ocupa toda a largura e quebra linha; inline ocupa só o conteúdo e flui no texto
    Justificativa: Blocos (h1, p, div) empilham ocupando a largura; inlines (a, span, strong) fluem como palavras e ignoram width/height.

19. Para centralizar horizontalmente um bloco com largura definida, a técnica clássica é:
    b. `margin: 0 auto;`
    Justificativa: margin: 0 auto distribui automaticamente as margens laterais, centralizando blocos com width definida. (text-align centraliza o texto interno, não a caixa.)

20. No card de produto, marcar o nome do produto como `<h3><a href="...">Nome</a></h3>` (em vez de div) permite que:
    e. leitores de tela naveguem de produto em produto pelos títulos, e o nome funcione como link
    Justificativa: Título navegável: usuários de leitores de tela saltam entre títulos; o link leva à página do produto. A div não oferece nada disso.

21. Sobre a escolha de breakpoints, a prática profissional recomenda:
    c. definir breakpoints onde o SEU layout quebra, testando no modo dispositivo
    Justificativa: Não há valores mágicos: o mercado converge para faixas, mas a decisão certa nasce de observar onde o próprio layout quebra.

22. Uma galeria em linha no desktop precisa virar coluna no celular (até 600px). Qual media query resolve?
    ```css
    .galeria { display: flex; }
    ```
    d. `@media (max-width: 600px) { .galeria { flex-direction: column; } }`
    Justificativa: max-width: 600px = 'até 600px'. Dentro dela, flex-direction: column empilha os itens.

23. Em um contêiner flex (direção padrão), justify-content e align-items alinham, respectivamente:
    d. no eixo principal (horizontal) e no eixo transversal (vertical)
    Justificativa: justify-content distribui no eixo principal (linha, por padrão); align-items alinha no transversal. Trocá-los é o tropeço mais comum do Flexbox.

24. Comparado a `<button>Comprar</button>`, o uso de `<div class="botao">Comprar</div>`:
    c. não recebe foco de teclado nem dispara com Enter, exigindo JavaScript extra para ser acessível
    Justificativa: O button nativo traz de graça foco, teclado e semântica. A div-botão parece funcionar até alguém usar Tab+Enter — aí a venda se perde. 'Use a plataforma'.

25. Para alinhar os filhos de um contêiner com Flexbox, o primeiro passo é declarar no PAI:
    e. `display: flex;`
    Justificativa: display: flex no contêiner ativa o contexto flexível para os filhos diretos.

26. Nos times profissionais, a estilização cotidiana usa majoritariamente:
    d. classes, reutilizáveis e de especificidade previsível
    Justificativa: Classes dominam o CSS profissional. IDs em CSS são raros (difíceis de sobrescrever) e o inline é praticamente banido em revisão de código.

27. Para testar como a página aparece em um celular sem sair do desktop, o desenvolvedor usa:
    d. o modo dispositivo das DevTools (Ctrl+Shift+M)
    Justificativa: O modo dispositivo simula tamanhos de tela e toque — é onde se decide onde o layout quebra e onde criar breakpoints.

28. O valor `display: inline-block` é útil porque o elemento:
    c. flui na linha como inline, mas aceita width e height como block
    Justificativa: inline-block é a ponte: convive na linha com outros elementos e ainda aceita dimensões — útil em botões e badges.

29. SEM `box-sizing: border-box`, qual a largura total renderizada da caixa abaixo?
    ```css
    .card {
      width: 300px;
      padding: 16px;
      border: 2px solid #ccc;
    }
    ```
    e. 336px
    Justificativa: 300 (conteúdo) + 16+16 (padding dos dois lados) + 2+2 (bordas) = 336px. Esquecer os dois lados é o erro clássico.

30. Ao aplicar `flex-direction: column` a um contêiner flex:
    e. os itens se organizam em coluna e o eixo principal passa a ser o vertical
    Justificativa: column gira o eixo principal para a vertical — e justify-content passa a distribuir verticalmente.

31. Para um fundo azul-marinho com 60% de opacidade, usa-se:
    d. `background-color: rgba(35, 42, 96, 0.6);`
    Justificativa: rgba adiciona o canal alfa (0 a 1) ao rgb: 0.6 = 60% opaco.

32. O código abaixo aplicado ao pai resulta em:
    ```css
    .pai {
      display: flex;
      justify-content: center;
      align-items: center;
    }
    ```
    c. filho centralizado horizontal E verticalmente — o clássico 'santo graal'
    Justificativa: A combinação centraliza nos dois eixos — a solução moderna para o problema mais famoso da história do CSS.

33. Para marcar a sigla 'Ifes' expandindo seu significado, usa-se:
    d. `<abbr title="Instituto Federal do Espírito Santo">Ifes</abbr>`
    Justificativa: abbr com o atributo title expande a sigla ao passar o mouse e para leitores de tela. acronym é obsoleta; alt é atributo de imagem.

34. A diferença entre `display: none` e `visibility: hidden` é:
    e. `display: none` remove o elemento do fluxo (sem buraco); `visibility: hidden` esconde mantendo o espaço
    Justificativa: none tira o elemento do layout (vizinhos ocupam o lugar); hidden só o torna invisível, preservando o buraco. Pergunta clássica de entrevista.

35. De dentro para fora, as camadas do box model são:
    a. conteúdo → padding → border → margin
    Justificativa: Conteúdo no centro, padding (respiro interno), border (a moldura) e margin (distância dos vizinhos).

36. A propriedade z-index controla:
    d. a ordem de empilhamento (quem fica por cima) entre elementos posicionados
    Justificativa: z-index decide a camada quando caixas se sobrepõem — e só tem efeito em elementos posicionados (relative, absolute, fixed, sticky).

37. O botão de WhatsApp que permanece no canto da tela mesmo ao rolar a página usa:
    c. `position: fixed`
    Justificativa: fixed prende o elemento à janela (viewport): ele não acompanha a rolagem — típico de botões flutuantes e barras de cookies.

38. No Brasil, a acessibilidade digital em sites é tratada:
    e. pela LBI (Lei 13.146/2015) e pelo modelo eMAG no setor público
    Justificativa: A Lei Brasileira de Inclusão e o eMAG (padrão do governo) tornam acessibilidade obrigação legal no setor público — e diferencial profissional em qualquer projeto.

39. Sobre contraste de texto, o padrão WCAG estabelece:
    b. contraste mínimo de 4,5:1 para texto normal
    Justificativa: O WCAG exige 4,5:1 para texto normal. Texto cinza-claro sobre branco pode ser ilegível ao sol ou para daltônicos — contraste reprovado é bug, não opinião.

40. Para transformar uma lista `<ul>` vertical em um menu horizontal com espaçamento, a solução moderna é:
    ```css
    ul.menu {
      /* ??? */
    }
    ```
    e. `display: flex; gap: 16px;`
    Justificativa: display: flex no ul põe os li lado a lado; gap dá o respiro. O float era a técnica dos anos 2000.
