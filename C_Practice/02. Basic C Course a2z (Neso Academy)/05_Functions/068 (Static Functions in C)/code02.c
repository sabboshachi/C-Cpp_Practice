int fun(int x, int y){
    return(x+y);
}

// but here if we add 'static' before the fun()
// it won't be accessable by the main function
// the function will usable only inside the code

static fun(int x, int y){
    return(x+y);
}