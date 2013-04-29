/**
 * BufferFill
 *
 * Prints out each line of characters read in from the serial buffer
 *
 */
 
char readBuffer[256];              // Space to store the bytes that we read off the serial connection
int numBytesRead;                  // How many bytes we've read so far
int lastByteRead;                  // The byte we just read
 
void echoBuffer() {
  Serial.print("Echo: ");
  for (int i=0; i<numBytesRead; ++i) {    // Print each read byte, one at a time
    Serial.print(readBuffer[i]);
  }
  Serial.println("");
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
      echoBuffer();                            // Print out the contents of the buffer
      resetBuffer();                           // Reset the buffer so we can store the next message
    }
  }
}

