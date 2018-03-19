/*
  Arduino Hall Effect Sensor Project
  by Brian Bruce

  Code copied from:
  by Arvind Sanjeev
  Please check out  http://diyhacking.com for the tutorial of this project.
  DIY Hacking
*/

//function header
//void Num_Write(int);

void setup()
{
  // Must initialize Serial to see Serial.println output
  Serial.begin(115200);
  
  // Set pin modes for the led counter display
  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  //Num_Write(counter);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  
  Serial.println("Starting dude!");
}

void loop() 
{

  // loop to turn leds od seven seg ON
  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
    delay(600);
  }
  
  // loop to turn leds od seven seg OFF
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,LOW);
    delay(600);
  }
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                        // wait for a second
  Serial.println("Turned off the light");

  delay(1000);
}


// this functions writes values 0-9 to the seven seg led pins  
/*
void Num_Write(int number) 
{
  int pin= 2;
  for (int j=0; j < 7; j++) {
   digitalWrite(pin, num_array[number][j]);
   pin++;
  }
}
*/

