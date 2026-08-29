# 🔤 ASCII Text Analyzer

A lightweight C++ command-line utility that takes a line of text and displays the ASCII value of every character...

Built as a small hands-on project to understand how characters are represented internally while practicing **C++ strings, loops, character handling, and type casting**.

---

## ✨ Features

* ⌨️ Accepts a complete line of text, including spaces
* 🔢 Displays the ASCII value of each character
* ␠ Identifies spaces separately for better readability
* 📊 Calculates the total number of characters
* ⚡ Fast and lightweight
* 📦 Uses only the standard C++ library

---

## 🖥️ Example

```text
====================================
        ASCII TEXT ANALYZER
====================================

Enter text: Hello World

Character    ASCII
------------------
H            72
e            101
l            108
l            108
o            111
Space        32
W            87
o            111
r            114
l            108
d            100

Total characters: 11
```

---

## 🛠️ Built With

| Technology           | Usage                                  |
| -------------------- | -------------------------------------- |
| **C++**              | Core programming language              |
| **Standard Library** | String and console operations          |
| **Git & GitHub**     | Version control and project management |

### Concepts Practiced

* `string`
* `getline()`
* `for` loops
* Character iteration
* Type casting
* ASCII / character encoding
* Console input & output

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone <your-repository-url>
cd ascii-text-analyzer
```

### 2. Compile

```bash
g++ main.cpp -o ascii-analyzer
```

### 3. Run

**Linux / macOS**

```bash
./ascii-analyzer
```

**Windows**

```bash
g++ main.cpp -o ascii-analyzer.exe
ascii-analyzer.exe
```

---

## 📁 Project Structure

```text
ascii-text-analyzer/
│
├── main.cpp
├── README.md
└── .gitignore
```

---

## 🧠 What I Learned

This project helped me understand that a character isn't just something displayed on the screen — it is represented internally by a numeric value.

While building it, I practiced:

* Taking an entire line as input using `getline()`
* Iterating through a string character by character
* Converting characters into their numeric ASCII representation
* Handling spaces without losing them during input
* Formatting console output for better readability

It's a small project, but it connects basic C++ syntax with a real concept used by computers at a fundamental level.

---

## 🔮 Possible Improvements

Some ideas for future versions:

* [ ] Add support for hexadecimal and binary character values
* [ ] Add a character frequency analyzer
* [ ] Distinguish uppercase and lowercase characters
* [ ] Add ASCII range validation
* [ ] Create an interactive menu
* [ ] Add support for extended character encoding

---

## 🎯 Why I Built This

I wanted to build something small enough to finish completely, but practical enough to reinforce the fundamentals I was learning in C++.

Instead of only solving isolated syntax exercises, this project gave me a chance to combine **input handling, strings, loops, type conversion, and output formatting** into one working utility.

Small project. Real code. One more step forward. 🚀

---

## 👨‍💻 Author

**Satyam Sinha**

Learning C++ one project at a time.

---

⭐ If you found this project useful, consider giving it a star...

