static int count = 0; // declearing it as a global variable will allow us to access it from any other program in the same directory

int increment(){
    count = count +1;
    return count;
}

// as we made it static variable 
// linker won't be able to fine any link so it will return ERROR