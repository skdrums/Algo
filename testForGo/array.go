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


	fmt.Print("\n")
	fn(arr1)
	fn2(arr2)
	

}

func fn(arr [5]int){
	fmt.Println("array..")
	fmt.Println(arr)
	fmt.Print("\n")
}

func fn2(arr [5]string){
	fmt.Println("array..")
	fmt.Println(arr)
	fmt.Print("\n")
}