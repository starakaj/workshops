/**
 * SSPBlink
 *
 * Using Sam's Simple Protocol to get stuff done.
 *
 */
 
char readBuffer[256];              // Space to store the bytes that we read off the serial connection
int numBytesRead;                  // How many bytes we've read so far
int lastByteRead;                  // The byte we just read

int destination;                   // Where we should send our message
int method;                        // The method to call
int value;                         // The value to pass to that message
 
void handleSSPMessage() {
  
  // Important but confusing first step: So that our buffer contains
  // a well-formed string, replace the last carriage return with a null
  readBuffer[numBytesRead-1] = 0;  // An actual NULL character, which is not the same as '0'
  
  // Now parse the message
  destination = readBuffer[0] - 65;
  method = readBuffer[1];
  value = String(readBuffer).substring(2).toInt();    // Parse the rest of the string as an integer
  
  // Send the message to the appropriate place
  if (method == 'd') {
    setDigitalPin(destination, value);
  }
}

void setDigitalPin(int pin, int lohi) {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, lohi);
}

void resetBuffer() {
  numBytesRead = 0;
}

void setup() {
  Serial.begin(9600);
  resetBuffer();
}

void loop() {
  while (Serial.available() > 0) {             // So long as there are bytes waiting to be read
    lastByteRead = Serial.read();              // Get the next available byte
    readBuffer[numBytesRead] = lastByteRead;   // Store that byte in our buffer
    numBytesRead++;                            // Increment the number of stored bytes
    if (lastByteRead == 13) {                  // If the last byte read was a carriage return
      handleSSPMessage();                      // Parse the message as SSP
      resetBuffer();                           // Reset the buffer so we can store the next message
    }
  }
}

