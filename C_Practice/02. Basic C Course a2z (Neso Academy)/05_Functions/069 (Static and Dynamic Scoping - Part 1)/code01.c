int main(){
    fun1();
}

fun1(){
    fun2();
}

fun2(){
    fun3();
}

fun3(){
    fun4();
}

fun4(){ 
    return;
}

// Stack works as Last In First Out (LIFO)
// So the memory allocation will be as

// 5. fun4()
// 4. fun3()
// 3. fun2()
// 2. fun1()
// 1. main()