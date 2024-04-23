int increment(){
    static count = 0;// we are declearing it locally but as we used static memory it the data in count won't distroyed after competion
    // of the function. it will be stored in a memory
    count = count +1;
    return count;
}

