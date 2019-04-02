package main

import (
	"fmt"
	"errors"
	"math"
)

func main(){
	x := -5
	z,err := sqrt(float64(x))

	if err != nil {
		fmt.Println(err)
	}else{
		fmt.Println(z)
	}
}

func sqrt(x float64) (float64,error){
	if x<0 {
		return 0, errors.New("Undefined for hoge.")
	}else {

	return math.Sqrt(x),nil
	}
}