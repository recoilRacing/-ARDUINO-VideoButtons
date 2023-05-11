#include <Keyboard.h>

bool last = false;

const int SocialMediaButton = 2;
const int USPButton = 3;
const int RaederUndAchsenButton = 4;
const int OpenFOAMButton = 5;
const int BewegungsanalyseIIButton = 6;
const int FertigungButton = 7;
const int LackierungButton = 8;
const int WindkanalButton = 9;
const int TeamidentitaetButton = 10;
const int KonstruktionButton = 11;
const int BewegungsanalyseIButton = 12;
const int FlyerButton = 13;

//FDM/SLS Druck, Lackierung

bool isPressed(int button) {
  return digitalRead(button);
}

void setup() {
  pinMode(SocialMediaButton, INPUT);
  pinMode(USPButton, INPUT);
  pinMode(RaederUndAchsenButton, INPUT);
  pinMode(OpenFOAMButton, INPUT);
  pinMode(BewegungsanalyseIIButton, INPUT);
  pinMode(FertigungButton, INPUT);
  pinMode(LackierungButton, INPUT);
  pinMode(WindkanalButton, INPUT);
  pinMode(TeamidentitaetButton, INPUT);
  pinMode(KonstruktionButton, INPUT);
  pinMode(BewegungsanalyseIButton, INPUT);
  pinMode(FlyerButton, INPUT);

  Serial.begin(9600);
}

bool wasLastAndUpdate() {
  if (last == true) {
    return true;
  }
  else {
    last = true;
    return false;
  }
  
}

void loop() {   
  if (isPressed(SocialMediaButton)) {
    Serial.println(digitalRead(SocialMediaButton));
    if (!wasLastAndUpdate()) {
      Serial.println("SocialMedia presse2d!");
      Keyboard.print("1");
    }
  }
  else if (isPressed(USPButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("USP pressed!");QQ
      Keyboard.print("2");
    }
  }
  else if (isPressed(RaederUndAchsenButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("Räder und Achsen pressed!");
      Keyboard.print("3");
    }
  }
    else if (isPressed(OpenFOAMButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("OpenFOAM pressed!");
      Keyboard.print("4");
    }
  }
    else if (isPressed(BewegungsanalyseIIButton)) {
   if (!wasLastAndUpdate()) {
     Serial.println("Bewegungsanalyse II pressed!");
     Keyboard.print("5");
    }
  }
    else if (isPressed(FertigungButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("Fertigung pressed!");
      Keyboard.print("6");
    }
  }
    else if (isPressed(LackierungButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("Lackierung pressed!");
      Keyboard.print("7");
    }
  }
    else if (isPressed(WindkanalButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("Windkanal pressed!");
      Keyboard.print("8");
    }
  }
    else if (isPressed(TeamidentitaetButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("Teamidentität pressed!");
      Keyboard.print("9");
    }
  }
      else if (isPressed(KonstruktionButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("Konstruktion pressed!");
     Keyboard.print("0");
  }
  }
      else if (isPressed(BewegungsanalyseIButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("Bewegungsanalyse I pressed!");
      Keyboard.print("Q");
    }
  }
  else if (isPressed(FlyerButton)) {
    if (!wasLastAndUpdate()) {
      Serial.println("Flyer pressed!");
      Keyboard.print("W");
    }
  }
  else {
    last = false;
  }
  delay(50);
  Serial.println("Last: "+String(last));
}
