float convertCtoK();
float convertKtoC();
float convertFtoC();
float convertCtoF();

float convertKtoC(float tempK){
float Conversion = tempK - 273.15;
return Conversion;
}

float convertFtoC(float tempF){
float Conversion = (tempF-32) * 5/9;
return Conversion;
}

float convertCtoF(float tempC){
float Conversion = (tempC*1.8) + 32;
return Conversion;
}

float convertCtoK(float tempC){
float Conversion = tempC + 273.15;
return Conversion;
}
