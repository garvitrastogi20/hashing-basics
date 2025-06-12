# 🔐 Hashing in C++ – Concepts, Frequency Counting & Advanced Topics

This repository contains my learning and practice of **Hashing in Data Structures & Algorithms (DSA)** using C++. It begins with basic frequency counting using arrays and maps, and will expand to advanced hashing techniques and problems.

---

### 🧠 What I’ve Learned So Far

- **What is Hashing?**  
  An efficient technique to map data to a fixed-size table (or index) using hash functions. Enables fast lookups, insertions, and deletions — often in O(1) average time.

- **Number Hashing (number_hashing.cpp)**  
  Using a fixed-size array to count frequencies of integers when the value range is small (like 0 to 100).

- **Character Hashing (char_hashing.cpp)**  
  Counting how many times each character appears using an array indexed by ASCII values, useful for lowercase/uppercase letters and digits.

- **String Hashing (string_hashing.cpp)**  
  Using a map to count the frequency of full words or strings. Useful in problems like word counting and detecting duplicate strings.

- **Map Hashing (map_hashing.cpp)**  
  Using `map<int, int>` to store frequencies or mappings when the keys are numeric but not limited to a small range. Maintains sorted order.

- **Unordered Map Hashing (unordered_map_hashing.cpp)**  
  Using `unordered_map<string, int>` or `unordered_map<int, int>` for average O(1) time complexity in frequency counting and element lookup. Faster but does not maintain order.

---

## 🔭 What I'm Going to Learn Next

- 🔜 Collision handling in hash tables (chaining, open addressing)
- 🔜 Custom hash functions in C++
- 🔜 Hashing-based problem solving:
  - Two Sum
  - Subarray with 0 Sum
  - Group Anagrams
  - Longest Consecutive Sequence
  - Count of distinct elements in window
- 🔜 Performance considerations: when to use `map` vs `unordered_map`
- 🔜 Applications of hashing in real-world & contests

---

## 🚀 Sample Use Cases

- Count frequency of integers, characters, and strings
- Fast lookups in O(1) average time
- Detect duplicates
- Solve subarray/string-based problems efficiently

---

## 🛠️ Tech Stack

- Language: **C++**
- Concepts: Hash Tables, Arrays, STL Maps, Unordered Maps

---

## 👨‍💻 Author

**Garvit Rastogi**  
[GitHub Profile](https://github.com/garvitrastogi20)

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).  
Feel free to fork, clone, contribute or star ⭐ this repository!
