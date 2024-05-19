// 1초동안 부저를 울리고 1초간 울리지않고를 무한히 반복

#define BUZZER_PIN_NUM	7

void setup()
{
  pinMode(BUZZER_PIN_NUM, OUTPUT);
  
  // 부저를 울리도록(출력) 설정
}

void loop()
{
  tone(BUZZER_PIN_NUM, 1000);	// 부저를 1000Hz(1kHz)의 소리를 출력
  delay(1000);					// 1초 기다림
  noTone(BUZZER_PIN_NUM);		// 부저를 울리지 않도록 설정
  delay(1000);
}
