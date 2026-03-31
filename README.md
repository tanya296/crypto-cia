## Caesar Cipher in C++

## Overview

This project implements the **Caesar Cipher**, one of the simplest encryption techniques in cryptography.

It shifts each letter in a string by a fixed number of positions in the alphabet.

---

## Features

* Encrypts text using a given shift value
* Decrypts encrypted text back to original
* Supports both **uppercase** and **lowercase**
* Keeps spaces and special characters unchanged

---

## How It Works

Each character is shifted using this formula:

## Encryption:

```
(c - base + shift) % 26 + base
```

## Decryption:

```
(c - base - shift + 26) % 26 + base
```

Where:

* `base` is `'A'` for uppercase and `'a'` for lowercase

---

## ▶️ How to Run

### Compile:

```
g++ cia1.cpp -o cia
```

### Run:

```
./cia
```

---

## 🧪 Example

Input:

```
Hello World
Shift: 3
```

Output:

```
Encrypted: Khoor Zruog
Decrypted: Hello World
```

---

##  File Structure

* `cia1.cpp` → Main implementation

---

##  Author

Tanya Kumar

