class Complex {
    private re: number;
    private im: number;

    // constructor
    constructor(re: number, im: number) {
        this.re = re;
        this.im = im;
    }

    // TypeScript nu are un concept de destructor deoarece gestionarea memoriei este realizată de garbage collector

    setRe(re: number): void {
        this.re = re;
    }

    setIm(im: number): void {
        this.im = im;
    }

    getRe(): number {
        return this.re;
    }

    getIm(): number {
        return this.im;
    }

    printNumber(): string {
        return `${this.re} + ${this.im}i`;
    }

    computeModule(): number {
        return Math.sqrt(this.re ** 2 + this.im ** 2);
    }
}

const c1 = new Complex(2, 3);
console.log(c1.printNumber());
console.log(`Modul din ${c1.printNumber()} este ${c1.computeModule()}`);

// Copierea obicectului in TypeScript (nu este chivalent pentru constructorul de copiere din C++)
const c2 = new Complex(c1.getRe(), c1.getIm());
console.log(c2.printNumber());