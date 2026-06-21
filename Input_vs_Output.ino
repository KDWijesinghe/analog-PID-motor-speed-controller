const int pidPin = A0;
const int inputPin = A1;

void setup() {
    Serial.begin(115200);
}

void loop() {
    // Read signals
    float output = analogRead(pidPin) * (5.0 / 1023.0);
    float input  = analogRead(inputPin) * (5.0 / 1023.0);

    // Fixed scale(0–5V)
    Serial.print(0);        Serial.print(" ");

    // Input waveform
    Serial.print(input);    Serial.print(" ");

    // Output waveform
    Serial.print(output);   Serial.print(" ");

    Serial.println(5);

    delay(100);
}