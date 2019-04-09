package main

import (
	"fmt"
	"math"
)

type Point interface {
	distance() float64
}

type Point2d struct {
	x,y float64
}

func newPoint2d(x,y float64) *Point2d{
	p := new(Point2d)
	p.x, p.y = x, y
	return p
}

func (p *Point2d) distance() float64 {
	return math.Sqrt(p.x*p.x + p.y*p.y)
}

type Point3d struct {
	x,y,z float64
}

func newPoint3d(x,y,z float64) *Point3d {
	p:= new(Point3d)
	p.x, p.y, p.z =x,y,z
	return p
}

func (p *Point3d) distance() float64 {
	return math.Sqrt(p.x*p.x+p.y*p.y+p.z*p.z)
}

func main() {
	a := []Point{
		newPoint2d(3,4), newPoint2d(10,10),
		newPoint3d(0,0,0), newPoint3d(10,10,10),
	}
	p:= new(Point3d)
	p.x, p.y, p.z =3,4,5
	fmt.Println(a[0])
	fmt.Println(a[0].distance)
	fmt.Println(a[1].distance)
	fmt.Println(a[2].distance)
	fmt.Println(a[3].distance)
	fmt.Println(math.Sqrt(p.x*p.x+p.y*p.y))
}