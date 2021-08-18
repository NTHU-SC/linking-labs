package main

import "C"
import "fmt"

//export my_sub
func my_sub(a, b float64) float64 {
    fmt.Printf(" Called Go sub function with %f and %f.\n", a, b);
    return a - b
}


func main() {}
