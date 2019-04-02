package main

import (
	"fmt"
	"errors"
	"math"
)

type person struct{
	name string
	age int
}

func main(){
	person1 := person{
		name: "sora",age: 22
	}
	fmt.Println(person1)
}
