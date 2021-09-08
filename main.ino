
int led=9;
int sensor=8;
int valeur;
void setup() {
  pinMode(sensor,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {   
       valeur=digitalRead(sensor);
       Serial.print(valeur);
       delay(1000);
       if (valeur==0 ){
        digitalWrite(led,HIGH);
       }
       else {
        digitalWrite(led,LOW);
       }
}
