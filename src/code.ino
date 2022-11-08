const int LIGHT_SENSOR_PIN = A0; // Arduino pin connected to light sensor's  pin
const int LED_PIN          = 3;  // Arduino pin connected to LED's pin
const int ANALOG_THRESHOLD = 200;

// variables will change:
int analogValue;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
  pinMode(LIGHT_SENSOR_PIN, INPUT);
}

void loop() {
  int analogValue = analogRead(LIGHT_SENSOR_PIN); // read the input on analog pin
  Serial.println(analogValue);
  if(analogValue < ANALOG_THRESHOLD)
  {
    digitalWrite(LED_PIN, HIGH);// turn off LED
    Serial.println(" - Light");
  }
  else
  {
    digitalWrite(LED_PIN, LOW); // turn on LED
    Serial.println(" - Dark");
  }
}
