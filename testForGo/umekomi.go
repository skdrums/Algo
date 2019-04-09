package main

import (
	"fmt"
)

type User struct{
	FirstName string
	LastName string
}

func (u *User) FullName() string{
	fullName := fmt.Sprintf("%s %s",u.FirstName,u.LastName)
	return fullName
}

func NewUser(firstName, lastName string) *User{
	user := &User{
		FirstName: firstName,
		LastName: lastName,
	}
	return user
}

type Task struct{
	ID int
	Detail string
	done bool
	*User //埋め込み
}

func NewTask(id int, detail, firstName, lastName string) *Task {
	task := &Task{
		ID: id,
		Detail: detail,
		done: false,
		User: NewUser(firstName,lastName),
	}
	return task
}


func main() {
	task := NewTask(1, "do something", "sora","kikuchi")
	fmt.Println(task.FirstName)
    fmt.Println(task.LastName)
    // TaskにUserのメソッドが埋め込まれている
    fmt.Println(task.FullName())
    // Taskから埋め込まれたUser自体にもアクセス可能
    fmt.Println(task.User)
}