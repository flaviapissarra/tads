# [Atividade 2] Questionário — Web e HTTP — Semanas 1 e 2 (Prazo: 28/10 – Valor: 6,0 pontos)

1. Ao acessar um endereço que não existe no servidor, o código de status típico é:
   e. 404
   Justificativa: 404 Not Found: o servidor entendeu o pedido, mas o recurso não existe naquele caminho — o mais famoso erro da classe 4xx.

2. Chrome, Firefox e Safari utilizam, respectivamente, os motores de renderização:
   c. Blink, Gecko e WebKit
   Justificativa: Chrome (e Edge/Opera/Brave) usam Blink; o Firefox usa Gecko; o Safari usa WebKit.

3. A diferença fundamental entre as classes de status 4xx e 5xx é:
   a. 4xx indica problema no pedido do cliente; 5xx indica falha do servidor ao processar
   Justificativa: 4xx = o problema está no pedido (endereço errado, sem permissão). 5xx = o pedido estava certo, mas o servidor falhou. Saber de que lado está o problema é o primeiro passo da depuração.

4. A prática profissional de 'teste cross-browser' consiste em:
   c. testar o site em diferentes navegadores antes de publicar
   Justificativa: Como recursos chegam em momentos diferentes a cada motor de renderização, o profissional verifica o site nos principais navegadores antes de publicar.

5. Na aba Network, um recurso aparece com status 301. Isso indica que:
   e. o recurso foi movido permanentemente para outro endereço (redirecionamento)
   Justificativa: A classe 3xx trata de redirecionamentos; 301 = movido permanentemente, e o navegador segue para o novo endereço.

6. Em uma resposta HTTP que entrega uma página, o código HTML da página vem:
   c. no corpo (body), após uma linha em branco
   Justificativa: A resposta tem linha de status, cabeçalhos e, após uma linha em branco, o corpo — onde viaja o recurso em si (o HTML).

7. Ao enviar um formulário de cadastro que cria um novo usuário, o método HTTP mais adequado é:
   a. POST, pois envia dados para criar um recurso
   Justificativa: POST envia dados no corpo da requisição para criar algo no servidor. A regra de ouro: GET nunca altera dados; POST altera.

8. A sigla HTTP significa:
   b. HyperText Transfer Protocol
   Justificativa: HTTP = HyperText Transfer Protocol, o protocolo de transferência de hipertexto — o idioma universal entre navegadores e servidores.

9. Ordene corretamente o caminho de uma página: (1) navegador renderiza; (2) DNS traduz o nome; (3) usuário digita a URL; (4) servidor responde com o HTML; (5) navegador envia a requisição.
   d. 3, 2, 5, 4, 1
   Justificativa: URL digitada → DNS resolve o endereço → navegador faz o pedido → servidor responde → navegador renderiza os pixels na tela.

10. Ao abrir a página inicial de um portal, a aba Network mostra dezenas de requisições. Isso ocorre porque:
    a. o HTML puxa recursos adicionais: CSS, imagens, fontes, scripts e dados
    Justificativa: Um documento HTML referencia muitos outros recursos; cada um gera sua própria requisição — por isso reduzir requisições é disciplina de performance.

11. Sobre o primeiro site da história (info.cern.ch, 1991), é correto afirmar:
    a. era feito apenas de texto e links, pois o CSS ainda não existia
    Justificativa: O primeiro site era puramente estrutural (texto e links): o CSS só surgiria em 1996. Ele continua no ar até hoje, no endereço original.

12. Sobre a natureza das mensagens HTTP, é correto afirmar que:
    a. são texto estruturado, legível e depurável por humanos
    Justificativa: Requisições e respostas são texto puro estruturado — decisão de projeto que permite ler e depurar a comunicação da Web.

13. Em uma página web, definir que 'o botão é verde, arredondado e fica à direita' é responsabilidade:
    d. do CSS
    Justificativa: Cores, formas e posicionamento são apresentação — trabalho do CSS. O HTML diz o que as coisas são; o JavaScript, como se comportam.

14. Um site pede senha em uma página SEM HTTPS. O risco é:
    e. a senha trafega legível e pode ser interceptada no caminho (ex.: Wi-Fi público)
    Justificativa: Sem criptografia, os dados trafegam em texto legível por equipamentos intermediários. Formulário com senha sem HTTPS é alerta vermelho absoluto.

15. Analise a resposta abaixo. Qual alternativa descreve corretamente o que o navegador fará?
    HTTP/1.1 200 OK Content-Type: text/html; charset=UTF-8 <! DOCTYPE html> <html>...</html> 
    
    a. Renderizará o documento HTML recebido no corpo da resposta
    Justificativa: Status 200 + Content-Type text/html: o navegador interpreta o corpo como HTML e o renderiza na tela.

16. Por que se recomenda criar pastas de projeto como frontend1, sem espaços nem acentos?
    a. Para evitar problemas com ferramentas, servidores e URLs que tratam mal espaços e caracteres especiais
    Justificativa: Espaços e acentos em caminhos causam dores de cabeça com URLs, servidores e ferramentas de linha de comando — nome simples é hábito profissional.

17. Na divisão de trilhas do desenvolvimento web, o desenvolvedor front-end é responsável por:
    c. construir a interface que roda no navegador do usuário
    Justificativa: O front-end constrói a camada com a qual o usuário interage diretamente: tudo que roda no navegador. Servidores e bancos são o back-end.

18. O método HTTP adequado para buscar um recurso, sem alterar dados no servidor, é:
    a. GET
    Justificativa: GET significa 'me dê este recurso': busca dados sem alterar o estado do servidor. É seguro recarregar e favoritar.

19. Na resposta HTTP, o cabeçalho Content-Type: text/html; charset=UTF-8 informa ao navegador:
    e. o tipo do conteúdo do corpo e sua codificação
    Justificativa: Content-Type diz o que vem no corpo (um documento HTML) e em qual codificação (UTF-8), orientando a renderização.

20. Na requisição HTTP, o cabeçalho Host: informa:
    a. para qual servidor o pedido é destinado
    Justificativa: Host identifica o servidor de destino do pedido. O navegador/SO vai no User-Agent; o idioma, no Accept-Language.

21. Um fator decisivo para a Web vencer tecnologias concorrentes dos anos 1990 foi:
    a. o CERN ter aberto mão dos direitos, colocando a tecnologia em domínio público
    Justificativa: Em 1993 o CERN colocou a tecnologia em domínio público: qualquer pessoa podia criar sites e navegadores sem pedir licença — a abertura foi o diferencial.

22. Uma página exibe 'OlÃ¡' no lugar de 'Olá'. A causa mais provável é:
    c. problema de codificação de caracteres (charset)
    Justificativa: Símbolos estranhos no lugar de acentos indicam codificação errada — resolve-se salvando o arquivo em UTF-8 e declarando o charset correto.

23. Na divisão de responsabilidades do front-end, HTML, CSS e JavaScript cuidam, respectivamente, de:
    b. estrutura, aparência e comportamento
    Justificativa: HTML é o esqueleto (estrutura e conteúdo), CSS é a pele e as roupas (aparência) e JavaScript é o músculo e o cérebro (comportamento).

24. O código de status 200 OK em uma resposta HTTP indica que:
    d. a requisição foi recebida e atendida com sucesso
    Justificativa: A classe 2xx indica sucesso; 200 OK é a resposta bem-sucedida mais comum da Web.

25. O caminho padrão para abrir as ferramentas de desenvolvedor (DevTools) no navegador é:
    c. F12 ou botão direito → Inspecionar
    Justificativa: F12 (ou clique com o botão direito → Inspecionar) abre as DevTools em qualquer navegador moderno.

26. Um estudante criou o arquivo index.html, abriu-o no navegador, alterou o texto no VS Code e salvou. O que precisa fazer para ver a mudança no navegador?
    e. Recarregar a página (F5)
    Justificativa: O ciclo fundamental do front-end é editar → salvar → recarregar. O navegador só relê o arquivo quando a página é recarregada.

27. Para observar todas as requisições HTTP que uma página dispara, o desenvolvedor usa:
    d. a aba Network das DevTools
    Justificativa: A aba Network (Rede) das DevTools lista cada requisição com método, status, tipo e tempos — o instrumento nº 1 da depuração web.

28. A diferença entre HTTP e HTTPS é que o HTTPS:
    b. adiciona uma camada de criptografia (TLS) à comunicação
    Justificativa: HTTPS = HTTP + TLS: só cliente e servidor conseguem ler a conversa. Navegadores marcam sites sem HTTPS como 'Não seguro'.

29. No modelo cliente-servidor da Web, o papel do cliente é desempenhado tipicamente:
    b. pelo navegador do usuário, que inicia os pedidos
    Justificativa: O cliente é quem inicia a comunicação e solicita recursos — na Web, quase sempre o navegador (Chrome, Firefox, Safari...).

30. A World Wide Web foi proposta em 1989 por:
    c. Tim Berners-Lee, no CERN
    Justificativa: Tim Berners-Lee, físico do CERN, propôs a Web em 1989 para resolver o compartilhamento de documentos entre computadores diferentes.

31. O código 500 Internal Server Error significa que:
    d. ocorreu um erro inesperado no servidor ao processar uma requisição válida
    Justificativa: 500 é o erro genérico do lado do servidor: a requisição era válida, mas algo falhou no processamento interno.

32. No 'feed infinito' de um app de rede social, ao rolar até o fim, novos posts aparecem sem recarregar a página. Tecnicamente, isso ocorre porque:
    b. o JavaScript envia novas requisições GET a uma API e insere os dados recebidos na página
    Justificativa: O front-end detecta a rolagem, faz um GET à API, recebe os dados (geralmente em JSON) e cria os novos elementos na página — o padrão das aplicações dinâmicas.

33. Ao editar a manchete de um portal de notícias pelas DevTools (Inspecionar), o que de fato acontece?
    e. A alteração afeta apenas a cópia local da página na memória do navegador
    Justificativa: As DevTools alteram apenas a reconstrução local da página. Ao recarregar (F5), o navegador busca de novo o original no servidor.

34. Sobre a relação entre Internet e World Wide Web, é correto afirmar que:
    e. a Internet é a infraestrutura física global; a Web é um dos serviços que rodam sobre ela
    Justificativa: A Internet é a rede física global (cabos, roteadores, datacenters); a Web é um dos serviços que a utilizam — assim como e-mail e chamadas de vídeo.

35. No fluxo de trabalho front-end, o site caniuse.com serve para:
    a. consultar a compatibilidade de recursos de CSS/JS em cada navegador
    Justificativa: O caniuse.com mostra tabelas de compatibilidade por navegador, com estatísticas de uso — consulta obrigatória antes de adotar recursos novos.

36. Os três ingredientes fundamentais criados junto com a Web foram:
    a. HTML, URL e HTTP
    Justificativa: A proposta original combinou HTML (a linguagem dos documentos), URL (o endereço único) e HTTP (o protocolo de transporte). CSS e JavaScript vieram depois.

37. Ao digitar www.ifes.edu.br no navegador, o serviço de DNS é responsável por:
    d. traduzir o nome do site para um endereço IP numérico
    Justificativa: O DNS funciona como uma agenda telefônica da Internet: converte nomes amigáveis (www.ifes.edu.br) em endereços IP numéricos.

38. Nas respostas de APIs modernas, os dados estruturados costumam viajar no formato:
    c. JSON
    Justificativa: JSON é um formato de texto para dados estruturados (autor, imagem, legenda...), fácil de ler por humanos e por programas.

39. No modelo cliente-servidor, quem toma a iniciativa da comunicação?
    e. O cliente, que sempre faz o pedido; o servidor responde
    Justificativa: A regra do modelo: o cliente sempre pede e o servidor sempre responde. O servidor não 'empurra' páginas sem um pedido.

40. Analise a requisição abaixo. O que representa /cursos/tads/index.html?
    GET /cursos/tads/index.html HTTP/1.1 Host: www.ifes.edu.br
    d. o caminho do recurso solicitado no servidor
    Justificativa: Na linha de início, GET é o método, /cursos/tads/index.html é o caminho do recurso e HTTP/1.1 é a versão. O Host indica o servidor.
