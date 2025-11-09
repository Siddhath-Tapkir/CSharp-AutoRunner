# 🧰 C# Automation Tool (Built in C)

I built this simple **automation tool in C** to help me **run individual C# files** easily.  
The idea came from the frustration of not being able to execute C# programs using `csc` or `mcs` directly on my setup.

## 💡 Purpose
To automate the compilation and execution of a **single C# file** that contains a `Main` method.

## 🚀 Use
This automation simplifies the process — just run the tool, and it will **compile and execute your C# file automatically**.

## ⚙️ How It Works
- Written in **C** 🧠  
- Takes a `.cs` filename as input  
- Compiles and runs it using system calls  
- Handles temporary executable creation and cleanup automatically  

## 🧾 Usage
```bash
gcc Automate.c -o runcs
./runcs filename.cs
