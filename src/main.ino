#include <ctype.h>

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
#define cap 6
#define num 3456
#define letter 56

#define lowDelay 50
#define highDelay 1000

String toPrint = "123";

void setup()
{
    Serial.begin(9600);
    pinMode(dot1, OUTPUT);
    pinMode(dot2, OUTPUT);
    pinMode(dot3, OUTPUT);
    pinMode(dot4, OUTPUT);
    pinMode(dot5, OUTPUT);
    pinMode(dot6, OUTPUT);
}

void loop()
{
    printBraille("Hello World!!! 123 hi");
    delay(2000);
}

void signal(int in)
{
    String input = String(in);
    setAllLow();
    delay(lowDelay);
    for (int ii = 0; ii <= input.length(); ii++)
    {
        if (input[ii] == '1')
        {
            digitalWrite(dot1, HIGH);
        }
        else if (input[ii] == '2')
        {
            digitalWrite(dot2, HIGH);
        }
        else if (input[ii] == '3')
        {
            digitalWrite(dot3, HIGH);
        }
        else if (input[ii] == '4')
        {
            digitalWrite(dot4, HIGH);
        }
        else if (input[ii] == '5')
        {
            digitalWrite(dot5, HIGH);
        }
        else if (input[ii] == '6')
        {
            digitalWrite(dot6, HIGH);
        }
    }
    delay(highDelay);
    setAllLow();
}

void printBrailleWord(const String &str)
{
    for (int ii = 0; ii <= str.length(); ii++)
    {
        if (str[ii] == ' ')
            setAllLow();

        else if (str[ii] == 'a')
            signal(a);

        else if (str[ii] == 'b')
            signal(b);

        else if (str[ii] == 'c')
            signal(c);

        else if (str[ii] == 'd')
            signal(d);

        else if (str[ii] == 'e')
            signal(e);

        else if (str[ii] == 'f')
            signal(f);

        else if (str[ii] == 'g')
            signal(g);

        else if (str[ii] == 'h')
            signal(h);

        else if (str[ii] == 'i')
            signal(i);

        else if (str[ii] == 'j')
            signal(j);

        else if (str[ii] == 'k')
            signal(k);

        else if (str[ii] == 'l')
            signal(l);

        else if (str[ii] == 'm')
            signal(m);

        else if (str[ii] == 'n')
            signal(n);

        else if (str[ii] == 'o')
            signal(o);

        else if (str[ii] == 'p')
            signal(p);

        else if (str[ii] == 'q')
            signal(q);

        else if (str[ii] == 'r')
            signal(r);

        else if (str[ii] == 's')
            signal(s);

        else if (str[ii] == 't')
            signal(t);

        else if (str[ii] == 'u')
            signal(u);

        else if (str[ii] == 'v')
            signal(v);

        else if (str[ii] == 'w')
            signal(w);

        else if (str[ii] == 'x')
            signal(x);

        else if (str[ii] == 'y')
            signal(y);

        else if (str[ii] == 'z')
            signal(z);

        else if (str[ii] == 'A')
        {
            signal(cap);
            signal(a);
        }
        else if (str[ii] == 'b')
        {
            signal(cap);
            signal(b);
        }
        else if (str[ii] == 'C')
        {
            signal(cap);
            signal(c);
        }
        else if (str[ii] == 'D')
        {
            signal(cap);
            signal(d);
        }
        else if (str[ii] == 'E')
        {
            signal(cap);
            signal(e);
        }
        else if (str[ii] == 'F')
        {
            signal(cap);
            signal(f);
        }
        else if (str[ii] == 'G')
        {
            signal(cap);
            signal(g);
        }
        else if (str[ii] == 'H')
        {
            signal(cap);
            signal(h);
        }
        else if (str[ii] == 'I')
        {
            signal(cap);
            signal(i);
        }
        else if (str[ii] == 'J')
        {
            signal(cap);
            signal(j);
        }
        else if (str[ii] == 'K')
        {
            signal(cap);
            signal(k);
        }
        else if (str[ii] == 'L')
        {
            signal(cap);
            signal(l);
        }
        else if (str[ii] == 'M')
        {
            signal(cap);
            signal(m);
        }
        else if (str[ii] == 'N')
        {
            signal(cap);
            signal(n);
        }
        else if (str[ii] == 'O')
        {
            signal(cap);
            signal(o);
        }
        else if (str[ii] == 'P')
        {
            signal(cap);
            signal(p);
        }
        else if (str[ii] == 'Q')
        {
            signal(cap);
            signal(q);
        }
        else if (str[ii] == 'R')
        {
            signal(cap);
            signal(r);
        }
        else if (str[ii] == 'S')
        {
            signal(cap);
            signal(s);
        }
        else if (str[ii] == 'T')
        {
            signal(cap);
            signal(t);
        }
        else if (str[ii] == 'U')
        {
            signal(cap);
            signal(u);
        }
        else if (str[ii] == 'V')
        {
            signal(cap);
            signal(v);
        }
        else if (str[ii] == 'W')
        {
            signal(cap);
            signal(w);
        }
        else if (str[ii] == 'X')
        {
            signal(cap);
            signal(x);
        }
        else if (str[ii] == 'Y')
        {
            signal(cap);
            signal(y);
        }
        else if (str[ii] == 'Z')
        {
            signal(cap);
            signal(z);
        }
        else
        {
            continue;
        }
    }
    setAllLow();
}

void printBrailleNum(const String &str)
{
    for (int ii = 0; ii <= str.length(); ii++)
    {
        if (str[ii] == '1')
            signal(a);

        else if (str[ii] == '2')
            signal(b);

        else if (str[ii] == '3')
            signal(c);

        else if (str[ii] == '4')
            signal(d);

        else if (str[ii] == '5')
            signal(e);

        else if (str[ii] == '6')
            signal(f);

        else if (str[ii] == '7')
            signal(g);

        else if (str[ii] == '8')
            signal(h);

        else if (str[ii] == '9')
            signal(i);

        else if (str[ii] == '0')
            signal(j);
    }
}

void printBraille(String str)
{
    String strs[20];
    int strCount = 0;
    while (str.length() > 0)
    {
        int index = str.indexOf(' ');
        if (index == -1)
        {
            strs[strCount++] = str;
            break;
        }
        else
        {
            strs[strCount++] = str.substring(0, index);
            str = str.substring(index + 1);
        }
    }
    for (int ii = 0; ii < strCount; ii++)
    {
        if (!isDigit(strs[ii][0]))
        {
            setAllLow();
            delay(highDelay);
            signal(letter);
            printBrailleWord(strs[ii]);
        }
        else
        {
            setAllLow();
            delay(highDelay);

            signal(num);
            printBrailleNum(strs[ii]);
        }
    }
}

void setAllLow()
{
    digitalWrite(dot1, LOW);
    digitalWrite(dot2, LOW);
    digitalWrite(dot3, LOW);
    digitalWrite(dot4, LOW);
    digitalWrite(dot5, LOW);
    digitalWrite(dot6, LOW);
}