
int PIN_REL_SOLENOIDE = 27;
int PIN_REL_VENT = 26;
int PIN_REL_ILUM  = 25;
int SENSOR_TEMP = 35;
int SENSOR_HUMEDAD = 34;
int SENSOR_LUZ = 32;

int estado_previo_humedad = 0;
int estado_previo_luz = 0;
int estado_previo_ven = 0;

void setup() {

   Serial.begin(9600);

  
  pinMode(5,   OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(PIN_REL_ILUM,  OUTPUT);
  pinMode(PIN_REL_VENT,  OUTPUT);
  pinMode(PIN_REL_SOLENOIDE,  OUTPUT);
  pinMode(SENSOR_TEMP, INPUT);
  pinMode(SENSOR_HUMEDAD, INPUT);
  pinMode(SENSOR_LUZ, INPUT);

}

void loop() {
  if (estado_previo_ven == 0){
    digitalWrite(PIN_REL_VENT,HIGH);
    }
  if (estado_previo_luz == 0){
    digitalWrite(PIN_REL_ILUM, HIGH);
    }
  if (estado_previo_humedad == 0){
    digitalWrite(PIN_REL_ILUM, HIGH);
    }
  

  float temp = analogRead(SENSOR_TEMP);
  float humedad = analogRead(SENSOR_HUMEDAD);
  float luz = analogRead(SENSOR_LUZ);

  // float temp = map(((analogRead(SENSOR_TEMP) - 20) * 3.04), 0, 1023, -40, 125);

  // Convierte el valor a temperatura
  temp = map(temp, 0, 1023, 0, 100);
  humedad = map(humedad, 0,4095, 100, 0);

  if (humedad < 50.00 )
  {
     Serial.print(humedad);
     Serial.println("%\n");
     digitalWrite(PIN_REL_SOLENOIDE,LOW );
     estado_previo_humedad = 1;
     
   }else {
    digitalWrite(PIN_REL_SOLENOIDE, HIGH);
    estado_previo_humedad = 0;
    }
    
   if (luz > 3000 )
  {
     Serial.println(luz);

     digitalWrite(PIN_REL_ILUM, LOW);
     estado_previo_luz = 1;
     
   }else {
    digitalWrite(PIN_REL_ILUM, HIGH);
    estado_previo_luz = 0;
    }

    if (temp > 30.00 )
  {
    Serial.println(temp);
    Serial.println(" grados Celsius\n");
    digitalWrite(PIN_REL_VENT, LOW);
    estado_previo_ven = 1;
     
   }else {
    digitalWrite(PIN_REL_VENT, HIGH);
    estado_previo_ven = 0;
    }
}