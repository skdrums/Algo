package main
import (
	"fmt"
)

func main(){
	const N int = 5// constant定数
	var arr1 = [...]int{4,5,5,8,9} // variable変数 
	
	for i :=0; i<N; i++{
		fmt.Println(arr1[i])
	}


}