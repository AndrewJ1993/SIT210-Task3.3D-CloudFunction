int led = D7;

void myHandler(const char *event, const char *data)
{
    if(strcmp(data, "wave"))
    {
        // Enters here if data == "pat"
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        Serial.print("data: ");
        Serial.println(data);
    }
    else
    {
        // Enters here if data == "wave"
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        Serial.print("data: ");
        Serial.println(data);
    }

}

void setup()
{
  Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler, ALL_DEVICES);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    delay(2000);
}
