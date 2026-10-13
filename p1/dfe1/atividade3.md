# [Atividade 3] Questionário — Estrutura do HTML (+ revisão)

1. Analise o código. Qual o papel de `target="_blank"` e `rel="noopener"`?
   `<a href="https://www.ifes.edu.br" target="_blank" rel="noopener">Site do Ifes</a>`
   b. Abrem o link em nova aba, e o noopener evita que a nova página acesse a janela de origem
   Justificativa: `target="_blank"` abre em nova aba; `rel="noopener"` é a boa prática de segurança que acompanha, impedindo que a página aberta manipule a original.

2. No elemento `<html lang="pt-BR">`, o atributo lang beneficia diretamente:
   b. leitores de tela, tradutores automáticos e buscadores
   Justificativa: O lang permite que leitores de tela pronunciem corretamente, que tradutores identifiquem o idioma e que buscadores classifiquem o conteúdo.

3. Do ponto de vista da acessibilidade, o melhor texto de link é:
   d. "Consulte o edital de matrícula 2026/2"
   Justificativa: Leitores de tela navegam de link em link: o texto deve descrever o destino. 'Clique aqui' repetido torna a página inavegável.

4. A diferença fundamental entre as classes de status 4xx e 5xx é:
   b. 4xx indica problema no pedido do cliente; 5xx indica falha do servidor ao processar
   Justificativa: 4xx = o problema está no pedido (endereço errado, sem permissão). 5xx = o pedido estava certo, mas o servidor falhou. Saber de que lado está o problema é o primeiro passo da depuração.

5. A sintaxe correta de um comentário em HTML é:
   c. `<!-- este é um comentário -->`
   Justificativa: Comentários HTML abrem com `<!--`. As formas `//` e `/* */` pertencem a JavaScript e CSS.

6. O código 500 Internal Server Error significa que:
   c. ocorreu um erro inesperado no servidor ao processar uma requisição válida
   Justificativa: 500 é o erro genérico do lado do servidor: a requisição era válida, mas algo falhou no processamento interno.

7. Ao enviar um formulário de cadastro que cria um novo usuário, o método HTTP mais adequado é:
   c. POST, pois envia dados para criar um recurso
   Justificativa: POST envia dados no corpo da requisição para criar algo no servidor. A regra de ouro: GET nunca altera dados; POST altera.

8. A sigla HTTP significa:
   a. HyperText Transfer Protocol
   Justificativa: HTTP = HyperText Transfer Protocol, o protocolo de transferência de hipertexto — o idioma universal entre navegadores e servidores.

9. Sobre a relação entre Internet e World Wide Web, é correto afirmar que:
   e. a Internet é a infraestrutura física global; a Web é um dos serviços que rodam sobre ela
   Justificativa: A Internet é a rede física global (cabos, roteadores, datacenters); a Web é um dos serviços que a utilizam — assim como e-mail e chamadas de vídeo.

10. O atributo `alt` da tag `<img>`:
    b. descreve a imagem para quem não pode vê-la e para buscadores
    Justificativa: O alt é o texto alternativo: lido por leitores de tela, exibido se a imagem quebrar e indexado pelo Google Imagens. Imagem decorativa usa `alt=""` vazio.

11. O serviço validator.w3.org serve para:
    b. verificar se o HTML segue o padrão oficial do W3C, apontando erros
    Justificativa: O validador oficial do W3C é o 'corretor ortográfico' do HTML — checagem que, nas empresas, roda automaticamente a cada alteração.

12. A tag `<meta name="viewport" content="width=device-width, initial-scale=1.0">` serve para:
    c. instruir os celulares a não 'encolher' a página, base do design responsivo
    Justificativa: Sem o viewport, o celular renderiza a página como desktop em miniatura. Com ele, a largura acompanha o dispositivo — indispensável desde a era mobile.

13. Analise o trecho. Qual é o resultado renderizado?
    `<p>O café conilon representa <strong>75% da produção</strong> capixaba e tem sabor <em>intenso</em>.</p>`
    b. '75% da produção' com ênfase forte (negrito) e 'intenso' com ênfase (itálico)
    Justificativa: `strong` = importância forte (negrito por padrão); `em` = ênfase (itálico por padrão). A quebra de linha no código-fonte não afeta a renderização.

14. Por que o comentário abaixo é problemático?
    `<!-- Este comentário -- vai gerar problemas -->`
    b. o hífen duplo (--) interno pode encerrar o comentário antes da hora e quebrar o HTML
    Justificativa: A sequência `--` dentro de um comentário pode ser interpretada como parte do fechamento. Nunca use hífen duplo dentro de comentários.

15. Na requisição HTTP, o cabeçalho `Host:` informa:
    d. para qual servidor o pedido é destinado
    Justificativa: Host identifica o servidor de destino do pedido. O navegador/SO vai no User-Agent; o idioma, no Accept-Language.

16. Ao acessar um endereço que não existe no servidor, o código de status típico é:
    e. 404
    Justificativa: 404 Not Found: o servidor entendeu o pedido, mas o recurso não existe naquele caminho — o mais famoso erro da classe 4xx.

17. A primeira linha `<!DOCTYPE html>` serve para:
    b. informar ao navegador que o documento segue o padrão HTML5
    Justificativa: Sem o DOCTYPE, o navegador entra em 'quirks mode' e renderiza de forma imprevisível. Ele declara: isto é HTML5.

18. Ao digitar www.ifes.edu.br no navegador, o serviço de DNS é responsável por:
    b. traduzir o nome do site para um endereço IP numérico
    Justificativa: O DNS funciona como uma agenda telefônica da Internet: converte nomes amigáveis (www.ifes.edu.br) em endereços IP numéricos.

19. A diferença entre `<strong>` e `<b>` é:
    d. strong carrega significado (importância); b é só aparência visual
    Justificativa: `strong` descreve significado (leitores de tela mudam a entonação); `b` apenas engorda o traço. No HTML moderno, prefira tags com significado.

20. Chrome, Firefox e Safari utilizam, respectivamente, os motores de renderização:
    d. Blink, Gecko e WebKit
    Justificativa: Chrome (e Edge/Opera/Brave) usam Blink; o Firefox usa Gecko; o Safari usa WebKit.

21. HTML é uma linguagem de:
    c. marcação, que atribui significado ao conteúdo
    Justificativa: HTML = HyperText Markup Language: marca cada trecho do conteúdo com seu significado ('isto é um título', 'isto é um parágrafo'). Não é linguagem de programação.

22. O método HTTP adequado para buscar um recurso, sem alterar dados no servidor, é:
    e. GET
    Justificativa: GET significa 'me dê este recurso': busca dados sem alterar o estado do servidor. É seguro recarregar e favoritar.

23. No modelo cliente-servidor da Web, o papel do cliente é desempenhado tipicamente:
    b. pelo navegador do usuário, que inicia os pedidos
    Justificativa: O cliente é quem inicia a comunicação e solicita recursos — na Web, quase sempre o navegador (Chrome, Firefox, Safari...).

24. Analise a requisição abaixo. O que representa `/cursos/tads/index.html`?
    `GET /cursos/tads/index.html HTTP/1.1`
    `Host: www.ifes.edu.br`
    c. o caminho do recurso solicitado no servidor
    Justificativa: Na linha de início, GET é o método, `/cursos/tads/index.html` é o caminho do recurso e HTTP/1.1 é a versão. O Host indica o servidor.

25. A World Wide Web foi proposta em 1989 por:
    b. Tim Berners-Lee, no CERN
    Justificativa: Tim Berners-Lee, físico do CERN, propôs a Web em 1989 para resolver o compartilhamento de documentos entre computadores diferentes.

26. O código de status 200 OK em uma resposta HTTP indica que:
    d. a requisição foi recebida e atendida com sucesso
    Justificativa: A classe 2xx indica sucesso; 200 OK é a resposta bem-sucedida mais comum da Web.

27. As metatags Open Graph (`og:title`, `og:image`...) controlam:
    b. a pré-visualização (cartão com título, resumo e imagem) exibida ao compartilhar o link em redes sociais
    Justificativa: WhatsApp, LinkedIn e outras redes leem as tags `og:` para montar o cartão de compartilhamento — sem elas, a rede 'adivinha' com resultados ruins.

28. Para criar um link que inicia uma ligação telefônica no celular, usa-se:
    a. `<a href="tel:+5528999998888">Ligue</a>`
    Justificativa: O esquema `tel:` no href dispara a ação de ligação; `mailto:` faz o mesmo para e-mail.

29. Na divisão de responsabilidades do front-end, HTML, CSS e JavaScript cuidam, respectivamente, de:
    d. estrutura, aparência e comportamento
    Justificativa: HTML é o esqueleto (estrutura e conteúdo), CSS é a pele e as roupas (aparência) e JavaScript é o músculo e o cérebro (comportamento).

30. Em uma página web, definir que 'o botão é verde, arredondado e fica à direita' é responsabilidade:
    d. do CSS
    Justificativa: Cores, formas e posicionamento são apresentação — trabalho do CSS. O HTML diz o que as coisas são; o JavaScript, como se comportam.

31. Para criar um link para a página `contato.html`, que está na mesma pasta do site, usa-se:
    e. `<a href="contato.html">`
    Justificativa: Links internos usam caminho relativo no href. O atributo `src` é de imagens/scripts; a tag `link` é para CSS no head.

32. A tag `<meta charset="UTF-8">` é responsável por:
    d. definir a codificação de caracteres, garantindo a exibição correta de acentos
    Justificativa: O charset define a codificação: é a diferença entre exibir 'São Paulo' e 'SÃ£o Paulo'.

33. Um fator decisivo para a Web vencer tecnologias concorrentes dos anos 1990 foi:
    e. o CERN ter aberto mão dos direitos, colocando a tecnologia em domínio público
    Justificativa: Em 1993 o CERN colocou a tecnologia em domínio público: qualquer pessoa podia criar sites e navegadores sem pedir licença — a abertura foi o diferencial.

34. O conteúdo colocado dentro de `<head>`:
    c. são metadados sobre a página, que não aparecem nela
    Justificativa: O head é o centro de controle invisível: charset, viewport, título da aba, links de CSS. O cabeçalho visual é o `<header>`, dentro do body.

35. Para marcar os passos de uma receita, em que a ordem importa, a estrutura correta é:
    d. `<ol>` com `<li>`
    Justificativa: `ol` (ordered list) numera automaticamente e comunica que a sequência importa; `ul` é para itens sem ordem.

36. Os três ingredientes fundamentais criados junto com a Web foram:
    d. HTML, URL e HTTP
    Justificativa: A proposta original combinou HTML (a linguagem dos documentos), URL (o endereço único) e HTTP (o protocolo de transporte). CSS e JavaScript vieram depois.

37. Na resposta HTTP, o cabeçalho `Content-Type: text/html; charset=UTF-8` informa ao navegador:
    d. o tipo do conteúdo do corpo e sua codificação
    Justificativa: Content-Type diz o que vem no corpo (um documento HTML) e em qual codificação (UTF-8), orientando a renderização.

38. [QUESTÃO ANULADA] Analise o documento. Qual elemento essencial está FALTANDO no head para uma página em português com acentos?
    `<!DOCTYPE html>`
    `<html lang="pt-BR">`
    `<head>`
    `  <title>Minha página</title>`
    `</head>`
    `<body>`
    `  <h1>Olá!</h1>`
    `</body>`
    `</html>`
    b. `<meta charset="UTF-8">`
    Justificativa: Sem o meta charset, os acentos podem quebrar dependendo do servidor/navegador. É presença obrigatória no head.

39. Sobre os títulos `<h1>` a `<h6>`, a prática correta é:
    d. usar um único h1 por página e não pular níveis
    Justificativa: Os títulos formam o 'sumário invisível' da página: um h1 (assunto), h2 para seções, sem pulos — leitores de tela e buscadores navegam por essa hierarquia.

40. No modelo cliente-servidor, quem toma a iniciativa da comunicação?
    c. O cliente, que sempre faz o pedido; o servidor responde
    Justificativa: A regra do modelo: o cliente sempre pede e o servidor sempre responde. O servidor não 'empurra' páginas sem um pedido.
