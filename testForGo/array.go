package main
import (
	"fmt"
)

func main(){
	const N int = 5// constant定数
	
	//配列（固定長）
	//var arr []int
	var arr1 = [5]int{4,5,5,8,9} // variable変数 
	var arr2 = [...]string{"sora","yoko","ryo","shoto","mei"}// ...で長さを暗黙的に指定

	//slice (可変長)
	//var slice []int
	slice2 := []string{"sora","yoko","ryo","shoto","mei"}

	fmt.Println("array..")
	for i :=0; i<N; i++{
		fmt.Println(arr1[i])
	}
	fmt.Print("\n")
	fmt.Println("array..")
	for i :=0; i<N; i++{
		fmt.Println(arr2[i])
	}
	fmt.Print("\n")
	fmt.Println("slice..")
	for i :=0; i<N; i++{
		fmt.Println(slice2[i])
	}
	fmt.Print("\n")

}