class Tablou {
    t: number[]; // tabloul unidimensional
    n: number; // dimensiunea fizica si logica a tabloului
  
    // Constructorul
    constructor(dim: number, a: number, b: number, c: number, d: number) {
      this.n = dim;
      this.t = [a];
      for (let i = 1; i < this.n; i++) {
        this.t[i] = 1 + (this.t[i - 1] * b + c) % d;
      }
    }
  
    // Afiseaza tabloul
    Afiseaza(): void {
      console.log(this.t.join(" "));
    }
  
    // Returneaza maximul din t
    Max(): number {
      return Math.max(...this.t);
    }
  
    // Returneaza prima pozitie unde se gaseste val in t,
    // sau returneaza -1 daca val nu apare in t
    Cauta(val: number): number {
      return this.t.indexOf(val);
    }
  }
  
  const T = new Tablou(5, 3, 26, 23, 41);
  T.Afiseaza();
  console.log(`Max este: ${T.Max()}`);
  console.log(`Elem cu val max se afla pe pozitia ${T.Cauta(T.Max())}`);