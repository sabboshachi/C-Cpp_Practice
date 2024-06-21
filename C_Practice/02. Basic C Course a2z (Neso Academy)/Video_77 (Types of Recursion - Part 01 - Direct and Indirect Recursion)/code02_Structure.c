// A function (let say fun) is called indirectly recursive if it calls another function (let say fun2)
// and then fun2 calls fun directly or indirectly.

// Structure:

fun(){
    // code
    fun2();
    // code
}

fun2(){
    // code
    fun();
    // code
}