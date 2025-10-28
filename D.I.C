<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Cerâmica Espumada</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      margin: 0;
      background-color: #f4f4f4;
      color: #333;
    }

    header {
      background-color: #4e4376;
      color: white;
      text-align: center;
      padding: 20px;
    }

    nav {
      background-color: #ddd;
      padding: 10px;
      text-align: center;
    }

    nav a {
      margin: 0 15px;
      text-decoration: none;
      color: #333;
      font-weight: bold;
    }

    section {
      background-color: white;
      margin: 20px auto;
      padding: 20px;
      max-width: 900px;
      border-radius: 5px;
    }

    h2 {
      color: #4e4376;
      border-bottom: 2px solid #ccc;
      padding-bottom: 5px;
    }

    img {
      max-width: 100%;
      border-radius: 5px;
      margin: 10px 0;
    }

    .galeria {
      display: flex;
      flex-wrap: wrap;
      justify-content: center;
      gap: 10px;
      margin-top: 10px;
    }

    .galeria img {
      width: 250px;
      height: 180px;
      object-fit: cover;
    }

    footer {
      text-align: center;
      background-color: #4e4376;
      color: white;
      padding: 10px;
      margin-top: 20px;
    }

    button {
      background-color: #4e4376;
      color: white;
      border: none;
      padding: 8px 16px;
      border-radius: 4px;
      cursor: pointer;
    }

    button:hover {
      background-color: #2b5876;
    }

    select, input[type=range] {
      margin: 8px 0;
    }
  </style>
</head>
<body>

  <header>
    <h1>🌿 Cerâmica Espumada</h1>
    <p>Material leve, resistente e sustentável</p>
  </header>

  <nav>
    <a href="#sobre">O que é</a>
    <a href="#como">Como é feita</a>
    <a href="#usos">Usos</a>
    <a href="#atividades">Atividades</a>
    <a href="#galeria">Galeria</a>
  </nav>

  <section id="sobre">
    <h2>O que é a Cerâmica Espumada?</h2>
    <p>
      A <strong>cerâmica espumada</strong> é um material leve e resistente, cheio de pequenos poros, parecendo uma esponja sólida. 
      Ela é produzida ao misturar pó cerâmico com agentes que liberam gás durante o aquecimento, formando bolhas que ficam presas na estrutura.
    </p>
    <img src="https://upload.wikimedia.org/wikipedia/commons/f/f1/Ceramic_foam_filter.jpg" alt="Cerâmica espumada">
  </section>

  <section id="como">
    <h2>Como é feita?</h2>
    <ol>
      <li>Mistura-se o pó cerâmico com um agente espumante.</li>
      <li>A mistura é moldada e aquecida em forno (sinterização).</li>
      <li>As bolhas ficam presas, criando a estrutura leve e porosa.</li>
    </ol>
    <p>É o mesmo princípio do pão: o fermento cria bolhas e, ao assar, elas ficam presas na massa endurecida!</p>
  </section>

  <section id="usos">
    <h2>Principais usos</h2>
    <ul>
      <li><strong>Construção civil:</strong> isolamento térmico e acústico.</li>
      <li><strong>Indústria:</strong> filtros para metais e gases.</li>
      <li><strong>Energia:</strong> revestimentos de fornos e turbinas.</li>
      <li><strong>Sustentabilidade:</strong> pode ser feita com materiais reciclados.</li>
    </ul>
  </section>

  <section id="atividades">
    <h2>Atividades Interativas</h2>

    <h3>🧠 Monte sua cerâmica espumada</h3>
    <p>Escolha os parâmetros abaixo:</p>
    <label>Tipo de cerâmica:</label>
    <select id="tipo">
      <option value="argila">Argila</option>
      <option value="alumina">Alumina</option>
      <option value="zirconia">Zircônia</option>
    </select><br>
    <label>Nível de espumação:</label>
    <input type="range" id="espumacao" min="1" max="5" value="3"><br>
    <button onclick="simular()">Simular</button>
    <p id="resultado">Resultado: equilíbrio entre leveza e resistência.</p>

    <h3>🧩 Quiz rápido</h3>
    <p>Qual é a principal vantagem da cerâmica espumada?</p>
    <button onclick="responder(true)">Isolamento e leveza</button>
    <button onclick="responder(false)">Condutividade elétrica</button>
    <p id="resposta"></p>
  </section>

  <section id="galeria">
    <h2>Galeria de Imagens</h2>
    <p>Veja exemplos reais e ilustrativos de cerâmicas espumadas e suas aplicações:</p>
    <div class="galeria">
      <img src="https://upload.wikimedia.org/wikipedia/commons/f/f1/Ceramic_foam_filter.jpg" alt="Filtro cerâmico">
      <img src="https://upload.wikimedia.org/wikipedia/commons/4/4a/Porous_ceramic.jpg" alt="Estrutura porosa">
      <img src="https://upload.wikimedia.org/wikipedia/commons/8/86/Ceramic_foam.jpg" alt="Bloco de cerâmica espumada">
      <img src="https://upload.wikimedia.org/wikipedia/commons/2/2c/Ceramic_foam_closeup.jpg" alt="Detalhe da cerâmica">
    </div>
  </section>

  <footer>
    <p>© 2025 - Projeto Educativo sobre Materiais Avançados</p>
  </footer>

  <script>
    function simular() {
      const tipo = document.getElementById("tipo").value;
      const nivel = document.getElementById("espumacao").value;
      let msg = "";
      if (nivel <= 2) msg = "Mais densa e resistente.";
      else if (nivel == 3) msg = "Equilíbrio entre leveza e resistência.";
      else msg = "Muito leve, mas um pouco mais frágil.";
      document.getElementById("resultado").innerText = 
        "Material: " + tipo + " — " + msg;
    }

    function responder(correta) {
      const resp = document.getElementById("resposta");
      if (correta) {
        resp.innerText = "✅ Correto! É leve e isolante.";
        resp.style.color = "green";
      } else {
        resp.innerText = "❌ Errado! Ela é usada principalmente como isolante.";
        resp.style.color = "red";
      }
    }
  </script>

</body>
</html>
