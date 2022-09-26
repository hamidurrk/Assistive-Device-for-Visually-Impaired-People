#define dot1 2
#define dot2 3
#define dot3 4
#define dot4 5
#define dot5 6
#define dot6 7

#define a 1
#define b 12
#define c 14
#define d 145
#define e 15
#define f 124
#define g 1245
#define h 125
#define i 24
#define j 245
#define k 13
#define l 123
#define m 134
#define n 1345
#define o 135
#define p 1234
#define q 12345
#define r 1235
#define s 234
#define t 2345
#define u 136
#define v 1236
#define w 2456
#define x 1346
#define y 13456
#define z 1356

#define lowDelay 0
#define highDelay 1000

String toPrint = "123";

void setup() {
    Serial.begin(9600);
    pinMode(dot1, OUTPUT);
    pinMode(dot2, OUTPUT);
    pinMode(dot3, OUTPUT);
    pinMode(dot4, OUTPUT);
    pinMode(dot5, OUTPUT);
    pinMode(dot6, OUTPUT);
}

void loop() {
/*  digitalWrite(dot5, HIGH);   // turn the dot on (HIGH is the voltage level)
  digitalWrite(dot6, LOW);
  delay(1000);                       // wait for a second
  digitalWrite(dot5, LOW);    // turn the dot off by making the voltage LOW
  digitalWrite(dot6, HIGH);
  delay(1000);                       // wait for a second
*/

    printBraille("aba");
    delay(2000);
    
}

void signal (int in) {
    String input = String(in);
    setAllLow();
    delay(lowDelay);
    for(int ii=0; ii<=input.length(); ii++) {
        if (input[ii] == '1'){
            digitalWrite(dot1, HIGH);
        }
        else if (input[ii] == '2') {
            digitalWrite(dot2, HIGH);
        }
        else if (input[ii] == '3') {
            digitalWrite(dot3, HIGH);
        }
        else if (input[ii] == '4') {
            digitalWrite(dot4, HIGH);
        }
        else if (input[ii] == '5') {
            digitalWrite(dot5, HIGH);
        }
        else if (input[ii] == '6') {
            digitalWrite(dot6, HIGH);
        }
        
    }
    delay(highDelay);
    setAllLow();
}

void printBraille(const String& str) {
    for(int ii=0; ii<=str.length(); ii++) {
        if (str[ii] == 'a'){
            signal(a);
        }
        if (str[ii] == 'b'){
            signal(b);
        }
    }

    setAllLow();
    
}
void setAllLow() {
    digitalWrite(dot1, LOW);
    digitalWrite(dot2, LOW);
    digitalWrite(dot3, LOW);
    digitalWrite(dot4, LOW);
    digitalWrite(dot5, LOW);
    digitalWrite(dot6, LOW);
}