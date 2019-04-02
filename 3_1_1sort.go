package main
import (
	"fmt"
)

func main(){
	a := [8]int{8,3,5,9,1,2,3,1}
	var t int

	for i:=0; i<8; i++{
		min := a[i]
		s := i
		for j:=i+1; j<8; j++{
			if a[j]<min{
				min=a[j]
				s=j
			}
		}

	t = a[i]
	a[i]=min
	a[s]=t
	}

	i:=0
	for i<8 {
		fmt.Println(a[i])
		i++
	}
}
