# 🚨 Alarme de Proximidade (Arduino UNO R4 WiFi + Modulino)

Projeto simples utilizando **Arduino UNO R4 WiFi** com módulos **Modulino Distance** e **Modulino Buzzer**, desenvolvido no **PlatformIO** e versionado com Git.

---

## 📌 Objetivo

Detectar a proximidade de objetos e emitir um alerta sonoro proporcional à distância.

---

## 🧰 Hardware

* Arduino UNO R4 WiFi
* Modulino Distance
* Modulino Buzzer
* Cabos Qwiic (I2C)

---

## 🖥️ Software

* VSCode + PlatformIO
* Biblioteca `Arduino_Modulino`

---

## 📁 Estrutura

```
src/
└── main.cpp
```

---

## ⚙️ Funcionamento

* O sensor mede a distância continuamente
* Se estiver próximo:

  * O buzzer é acionado
  * A frequência varia com a distância
* Caso contrário:

  * O buzzer permanece desligado

---

## 🔌 Conexão

Via **Qwiic (I2C)**:

```
UNO R4 → Modulino Distance → Modulino Buzzer
```

---

## 🚀 Execução

1. Abrir no VSCode (PlatformIO)
2. Conectar o Arduino via USB
3. Upload do código
4. Abrir monitor serial

---

## 📦 Dependência

No `platformio.ini`:

```
lib_deps =
    arduino-libraries/Arduino_Modulino
```

---

## 📊 Exemplo de saída

```
Distancia: 320 mm
Distancia: 150 mm
Distancia: 45 mm
```

---

## 🧠 Observação

É necessário usar `Modulino.begin()` para inicializar corretamente os módulos via I2C.

---

## 🔮 Próximo passo

Refatorar para arquitetura modular e evoluir para IoT (WiFi + MQTT).

---

## 👨‍💻 Autor

Claudio Pereira da Silva
