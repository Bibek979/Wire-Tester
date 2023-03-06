int in_wire = D8; 

void setup() {
  Serial.begin(9600);
  pinMode(in_wire, INPUT);
}

void loop() {
  int state = digitalRead(in_wire);
  if(state == HIGH) {
    Serial.println("Wire OK !");
  }
  else {
    Serial.println("Wire NOT OK");
  }
}