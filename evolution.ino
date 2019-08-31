const int micPin= 0; 
const int ledPin=13; 
int sample; 

const int threshold= 800;

void setup() {
pinMode (ledPin, OUTPUT);
Serial.begin(9600); 
}

void loop(){
 sample= analogRead(micPin);
  Serial.println(sample); 
if (sample > threshold)
{
digitalWrite (ledPin, HIGH); 
delay (500); 
digitalWrite (ledPin, LOW); 
}
else{ digitalWrite(ledPin, LOW); }
} 
