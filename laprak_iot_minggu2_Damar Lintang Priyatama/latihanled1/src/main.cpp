#include <Arduino.h> // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampu = 26;
int lampu2 = 33;
int lampu3 = 22;

void setup()
{
    Serial.begin(115200); // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Blinking LED");

    // Atur pin sebagai OUTPUT
    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}

void loop()
{
    digitalWrite(lampu3, HIGH);
    Serial.println("LED ON");

    delay(2000); // Tunggu 1 detik

    digitalWrite(lampu3, LOW);
    Serial.println("LED OFF");

    delay(1000); // Tunggu 1 detik sebelum mengulang

    digitalWrite(lampu2, HIGH);
    Serial.println("LED ON");

    delay(500); // Tunggu 1 detik

    digitalWrite(lampu2, LOW);
    Serial.println("LED OFF");

    delay(500); // Tunggu 1 detik sebelum mengulang

    digitalWrite(lampu, HIGH);
    Serial.println("LED ON");

    delay(2000); // Tunggu 1 detik

    digitalWrite(lampu, LOW);
    Serial.println("LED OFF");

    delay(1000); // Tunggu 1 detik sebelum mengulang
}