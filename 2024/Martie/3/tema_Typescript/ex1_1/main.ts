class Person {
    private age: number;
    private height: number;

    // Constructor
    constructor() {
        this.age = 10;
        this.height = 100;
    }

    public setAge(age: number): void {
        if(age >= 1 && age <= 200) {
            this.age = age;
        }
    }

    public setHeight(height: number): void {
        if(height >= 30 && height <= 250) {
            this.height = height;
        }
    }

    // Getter methods
    public getAge(): number {
        return this.age;
    }

    public getHeight(): number {
        return this.height;
    }
}

// Usage
const p1 = new Person();
p1.setAge(25); // Set age to 25
console.log(`Age is ${p1.getAge()}`);