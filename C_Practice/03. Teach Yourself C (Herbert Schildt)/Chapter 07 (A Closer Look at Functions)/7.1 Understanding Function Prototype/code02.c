void line(){
    int i;
    for(i=0; i<80; i++){
        printf(".");
    }
}

// if we try to use the following as prototype, 
// it won't work because the compiler will think 
// that we are simply using the old style method

void line(void); 
// When a function has no parameters, its prototype uses void inside the parentheses.

void line(void){
    int i;
    for(i=0; i<80; i++){
        printf(".");
    }
}