/**
 * BufferFill
 *
 * Prints out each line of characters read in from the serial buffer
 *
 */
 
char readBuffer[256];              // Space to store the bytes that we read off the serial connection
int numBytesRead;                  // How many bytes we've read so far
int lastReadByte;                  // The byte we just read
 
void echoBuffer() {
}

void resetBuffer() {
  numBytesRead = 0;
}

void setup() {
  Serial.begin(9600);
  resetBuffer();
}

void loop() {
  while (Serial.available() > 0) {   // So long as there are bytes waiting to be read
    lastByteRead = Serial.read();    // Get the next available byte
    readBuffer[
  }
}

