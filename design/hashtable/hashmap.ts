type key = number | undefined;
type value = number | undefined;
class MyHashMap {
  keys: key[] = [];
  values: value[] = [];

  constructor() {
    this.keys = [];
    this.values = [];
  }

  put(key: number, value: number): void {
    const pos = this.keys.indexOf(key);
    if (pos !== -1) {
      this.values[pos] = value;
      return;
    }
    this.keys.push(key);
    this.values.push(value);
  }

  get(key: number): value {
    const pos = this.keys.indexOf(key);
    if (pos === -1) {
      return -1;
    }
    return this.values[pos];
  }

  remove(key: number): void {
    const pos = this.keys.indexOf(key);
    if (pos !== -1) {
      this.keys[pos] = undefined;
    }
  }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
//  */
// var obj = new MyHashMap();
// obj.put(1, 1);
// obj.put(1, 2);
// console.log(obj);
// // obj.put(2, 2);
// var param_2 = obj.get(1);
// console.log(param_2);
// obj.remove(key);
