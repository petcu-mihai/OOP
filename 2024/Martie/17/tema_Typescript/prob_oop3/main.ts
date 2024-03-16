class Stiva {
    private elemente: number[];
    private capacitate: number;
    private dimensiune: number;
    private maxim: number;
  
    constructor() {
      this.capacitate = 1;
      this.dimensiune = 0;
      this.maxim = -1;
      this.elemente = new Array(this.capacitate);
    }
  
    private verificaSiDubleazaCapacitatea() {
      if (this.dimensiune >= this.capacitate) {
        this.capacitate *= 2;
        const nouElemente = new Array(this.capacitate);
        for (let i = 0; i < this.dimensiune; ++i) {
          nouElemente[i] = this.elemente[i];
        }
        this.elemente = nouElemente;
      }
    }
  
    public Push(x: number) {
      this.verificaSiDubleazaCapacitatea();
      this.elemente[this.dimensiune++] = x;
      if (this.dimensiune === 1 || x > this.maxim) {
        this.maxim = x;
      }
    }
  
    public Pop() {
      if (this.dimensiune === 0) {
        return;
      }
      // Daca elementul scos este maximul, trebuie sa recalculez maximul
      if (this.elemente[this.dimensiune - 1] === this.maxim) {
        this.maxim = -Infinity;
        for (let i = 0; i < this.dimensiune - 1; ++i) {
            if (this.maxim < this.elemente[i]) {
            this.maxim = this.elemente[i];
            }
        }
      }
      this.dimensiune--;
    }
  
    public Top(): number {
      if (this.dimensiune === 0) {
        return -1;
      }
      return this.elemente[this.dimensiune - 1];
    }
  
    public Max(): number {
      return this.maxim;
    }
  
    public Empty(): number {
      return this.dimensiune === 0 ? 1 : 0;
    }
  }
  
  const w = new Stiva();
  w.Push(4);
  w.Push(2);
  w.Push(5);
  w.Push(1);
  console.log(`${w.Top()} ${w.Max()}`); // Afiseaza 1 5
  w.Pop();
  w.Pop();
  console.log(`${w.Top()} ${w.Max()}`); // Afiseaza 2 4
  