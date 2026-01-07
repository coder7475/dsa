class SimpleHashTable {
  constructor(size = 53) {
    this.keyMap = new Array(size);
  }

  #hash(key) {
    let hash = 999;
    const PRIME_NUMBER = 31;

    for (let i = 0; i < Math.min(key.length, 100); i++) {
      const char = key[i];
      const value = char.codePointAt(char);
      hash = (hash * PRIME_NUMBER + value) % this.keyMap.length;
    }

    return hash;
  }

  set(key, value) {
    const index = this.#hash(key);

    this.keyMap[index] = value;
  }

  get(key) {
    const index = this.#hash(key);
    return this.keyMap[index];
  }

  remove(key) {
    const index = this.#hash(key);
    this.keyMap[index] = undefined;
  }
}

const hashTable = new SimpleHashTable(10);

hashTable.set("city", "New York");
hashTable.set("address", "123 Main St");
hashTable.set("email", "john@gmail.com");
hashTable.set("name", "John");
hashTable.set("age", 20);

console.log(hashTable.keyMap);
