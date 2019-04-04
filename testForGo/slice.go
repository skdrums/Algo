package main
import(
	"fmt"
)

func main(){
	//slice (可変長)
	//var slice []int
	slice2 := []string{"sora","yoko","ryo","shoto","mei"}
	fmt.Println("slice..")

	//phpでいうforeach
	for i, _ := range slice2{
		fmt.Println(slice2[i])
	}

	//add関数に直打ち
	fmt.Println(add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)) // 55

	//配列に一度格納後add関数の呼び出し
	atais := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	fmt.Println(add(atais...))

}

//引数を複数（可変）で受け取る
func add(atais ...int) int {
    ans := 0
    for _, atai := range atais {
        ans += atai
    }
    return ans
}