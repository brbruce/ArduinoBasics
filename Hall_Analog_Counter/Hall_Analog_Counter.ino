
int HESvalue = 0;
int SENSOR=A0;
int counter = 0 ;

void setup()
{
pinMode (SENSOR,INPUT);
Serial.begin(9600);
}

void loop()
{
HESvalue= analogRead(SENSOR);
if(HESvalue  < 490) //sensor threshold
{
counter++;
while(HESvalue < 500 ) //debouncing sensor
{
delay(20); //debouncing sensor
HESvalue= analogRead(SENSOR);
}
Serial.print("Counter = ");
Serial.println(counter);
}}

