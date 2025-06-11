# 📚 Learning Management System (C++ Console Project)

This is a simple **console-based Learning Management System** (LMS) developed in **C++** as part of my course Software Design and Architecture semester project . It simulates a basic structure of an LMS that handles user login, course management, and user-specific functionality. The project was developed to practice core C++ concepts including file handling, OOP, and layered architecture.

---

## 💡 Project Summary

- Role-based system: **Admin** and **Student**
- Console-based interactive menus
- Text-file based data storage (no database)
- Simulates course assignments, views, and management features
- Built with a basic **3-layered architecture**

---

## 🧱 Architecture Used

This LMS follows a **layered architecture**, dividing the codebase into the following conceptual layers:

1. **UI Layer**  
   - Handles user interaction via console menus and prompts.
   - Takes input, displays output.

2. **Domain Layer**  
   - Contains core logic (e.g. role verification, course handling, student records).
   - Uses OOP concepts like classes and structs.

3. **Data Layer**  
   - Handles file operations (`fstream`).
   - Stores and retrieves data from `.txt` files.

> ⚠️ **Note:** The architecture is implemented in a **basic way** and currently contains several flaws, hard-coded logic, and lacks separation of concerns in some areas.

---

## 🛠️ Current Issues & Improvements Needed

- 🔁 Repetition in code logic
- 💾 File handling is not well abstracted
- 🧩 Domain logic is mixed with UI code
- 🔐 No proper error handling or input validation
- 📦 Needs separation into multiple `.cpp`/`.h` files per layer
- 🧪 No automated testing or debugging utilities

This version is a **work in progress** and needs significant **modification** and **refactoring** to follow clean architecture principles more strictly.

---

## 🎯 Future Plans

- Refactor into clear modular structure (`UI`, `Domain`, `Data` folders)
- Replace text file storage with structured formats (JSON or database)
- Add more features (grades, assignments, attendance, admin dashboard)
- Improve UI experience (maybe even migrate to GUI or web)

---

## 💻 How to Run

### ▶️ Steps:

1. Clone this repo:
   ```bash
   git clone https://github.com/rabeehakamran/Learning-Management-System.git
