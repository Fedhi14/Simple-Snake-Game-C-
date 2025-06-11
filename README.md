# 🐍 Simple Snake Game in C++

## 🎮 Game Description

This is a **console-based Snake Game** implemented in C++ as part of our DSA (Data Structures and Algorithms) coursework. The player controls a snake to collect fruits (`o`) on the board without colliding with itself or the wall. The snake grows longer with each fruit, increasing the difficulty.

The game is played using keyboard arrow keys and displays a bordered game board made of asterisks (`*`) for better aesthetics.

---

## 🧠 How the Game Uses DSA Concepts

This project demonstrates the practical use of **fundamental data structures and algorithms**:

- **Arrays**: Used to store the positions of the snake and fruit.
- **Structs**: To define and organize the snake's position data.
- **Queue/Linked List Logic**: Simulated using arrays to manage the snake’s growth (head/tail).
- **Algorithms**:
  - **Collision Detection** (with wall and itself)
  - **Snake Movement Update**
  - **Fruit Randomization**
  - **Game Loop Control**

---

## 🛠️ How It Works

1. The game initializes a board and the snake.
2. A fruit is randomly generated on the board.
3. Arrow keys are used to change direction.
4. The snake moves one step in the current direction.
5. If the snake eats the fruit, its length increases.
6. The game ends if the snake collides with the wall or itself.
7. The player is prompted to play again or exit.

---

## 📂 Project Structure

| **File**        | **Description**                                 |
|-----------------|-------------------------------------------------|
| `main.cpp`      | Game loop & overall control                     |
| `snake.cpp`     | Snake movement, growth, and collision logic     |
| `board.cpp`     | Drawing the game board                          |
| `input.cpp`     | Handling player keyboard input                  |
| `utils.cpp`     | Utility functions (e.g., screen clear)          |
| `snake.h`       | Struct and function declarations                |
| `README.md`     | Project documentation                           |

---

## 👥 Group Members & Assigned Tasks

| **Name**               | **GitHub Username** | **ID Number**  | **Assigned File / Task**                                  |
|------------------------|---------------------|----------------|------------------------------------------------------------|
| **Yadesa Mulugeta**    | @yadesaML01         | NSR/1605/16    | Project lead, `main.cpp`, README setup                     |
| **Misiker Daniel**     | @misiker0           | NSR/708/16     | `board.cpp` – Design and render board                      |
| **Yordanos Mesay**     | @Yordi96            | NSR/1634/16    | `utils.cpp` – Utility & screen functions (with Demanesh)   |
| **Demanesh Gelu**      | @dema8040           | NSR/264/16     | `utils.cpp` – Utility & screen functions (with Yordanos)   |
| **Yitnaw Bataneh**     | @yitnaw             | NSR/1049/16    | `input.cpp` – Keyboard input handling                      |
| **Yabets Mulu**        | @Jabez-20           | NSR/1017/16    | `snake.cpp` – Snake logic implementation                   |
| **Metsnanat Awraris**  | @Metsi1             | NSR/1494/16    | `snake.h` – Struct & function declarations                 |



> ✅ All members collaborated using GitHub. Each task was created under the Issues section, and members were assigned accordingly for contribution and version control.

---

## 📌 Future Improvements

- Add score tracking
- Add levels and speed increase
- Implement obstacles and sound
- Cross-platform input handling (non-blocking keys)

---

## 📫 Contact



---

**Made with ❤️ by DSA Team**


