package main

import (
	"fmt"
)

type Task struct {
	ID int
	Detail string 
	done bool
}

//構造体を作る
func NewTask(id int, detail string) *Task {
	task := &Task{
		ID: id,
		Detail: detail,
		done: false,
	}
	return task
}

//method
func (task Task) String() string {
    str := fmt.Sprintf("%d) %s", task.ID, task.Detail)
    return str
}

//ポインターを用いたmethod
func (task *Task) Finish() {
	task.done=true
}


func main() {
    task := NewTask(1, "buy the milk")
	fmt.Printf("%s\n", task) // 1) buy the milk
	task.Finish()
	fmt.Printf("%+v", task.done)
}