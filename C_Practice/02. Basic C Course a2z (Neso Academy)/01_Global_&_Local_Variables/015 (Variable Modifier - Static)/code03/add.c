int count = 0; // declearing it as a global variable will allow us to access it from any other program in the same directory

int increment(){
    count = count +1;
    return count;
}