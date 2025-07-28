#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("LCD Keypad Shield");
  lcd.setCursor(0, 1);
  lcd.print("Iniciando...");

  delay(2000);  // Mostra o texto por 2 segundos

  lcd.clear();  // Limpa a tela antes de entrar no loop
  lcd.print("Pressione um btn");
}

void loop() {
    lcd.clear();  // Limpa a tela antes de entrar no loop
  lcd.print("Pressione um btn");
  int leitura = analogRead(A0);
  lcd.setCursor(0, 1);

  if (leitura < 50) {
    lcd.print("Botao: DIREITA   ");
  } else if (leitura < 250) {
    lcd.print("Botao: CIMA      ");
  } else if (leitura < 450) {
    lcd.print("Botao: BAIXO     ");
  } else if (leitura < 650) {
    lcd.print("Botao: ESQUERDA  ");
  } else if (leitura < 850) {
    lcd.print("Botao: SELECT    ");
  } else {
    lcd.print("Sem botao        ");
  }

  delay(200);  // Pequeno atraso para evitar atualizações rápidas demais
}
