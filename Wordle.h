#ifndef WORDLE_WORDLE_H
#define WORDLE_WORDLE_H

class Wordle
{
private:
    std::string m_answer {}; // best practice: m_ prefix to denote member variables
    std::string m_guess {};
    int m_try {};
    int m_status {};
    std::string m_grid[6][5] {};
    std::string m_invalidLetters {};
    std::string m_misplacedLetters {};

public:
    void setAnswer();
    void setGuess(std::string guess);
    void setTry();
    void setGrid();
    void setInvalidLetters(std::string invalidLetter);
    void setMisplacedLetters(std::string misplacedLetter);
    void setStatus(int r);

    std::string getAnswer() const { return m_answer; } // best practice: make any member function that does not modify the state of the class object const, so that it can be called by const objects.
    std::string getGuess() const { return m_guess; }
    std::string getInvalidLetters() const { return m_invalidLetters; }
    int getTries() const { return m_try; }
    int getStatus() const { return m_status; }

    void promptUser();
    void displayGrid();
    bool isValid(std::string guess);
    void checkStatus();
};

#endif
