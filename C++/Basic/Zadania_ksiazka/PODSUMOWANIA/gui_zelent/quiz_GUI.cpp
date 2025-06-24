#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>  // konieczne dla WINAPI i WinMain

using namespace std;

struct Question {
    string text;
    string a, b, c, d;
    string correct;
};

vector<Question> loadQuiz(string filename) {
    ifstream file(filename);
    vector<Question> questions;
    string line;
    string temat, nick;
    int line_num = 1;
    Question q;

    while (getline(file, line)) {
        switch (line_num) {
            case 1: temat = line; break;
            case 2: nick = line; break;
            case 3: q.text = line; break;
            case 4: q.a = line; break;
            case 5: q.b = line; break;
            case 6: q.c = line; break;
            case 7: q.d = line; break;
            case 8:
                q.correct = line;
                questions.push_back(q);
                q = Question(); // reset
                line_num = 2;   // będzie 3 po ++
                continue;
        }
        line_num++;
    }

    return questions;
}

int main() {
    vector<Question> questions = loadQuiz("quiz.txt");

    sf::RenderWindow window(sf::VideoMode(800, 600), "Quiz GUI");
    sf::Font font;
    if (!font.loadFromFile("Roboto_Condensed-ExtraBoldItalic.ttf")) {
        cerr << "Nie można załadować czcionki Roboto_Condensed-ExtraBoldItalic.ttf!\n";
        return -1;
    }

    int current = 0;
    int score = 0;
    string selected = "";

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed && current < (int)questions.size()) {
                char key = tolower(event.key.code + 'a');
                selected = string(1, key);

                if (selected == questions[current].correct) score++;
                current++;
            }
        }

        window.clear(sf::Color::White);

        if (current >= (int)questions.size()) {
            sf::Text endText("Koniec! Punkty: " + to_string(score), font, 40);
            endText.setFillColor(sf::Color::Black);
            endText.setPosition(200, 250);
            window.draw(endText);
        } else {
            Question& q = questions[current];

            sf::Text qText(q.text, font, 24);
            qText.setFillColor(sf::Color::Black);
            qText.setPosition(50, 30);
            window.draw(qText);

            sf::Text a("A. " + q.a, font, 20);
            sf::Text b("B. " + q.b, font, 20);
            sf::Text c("C. " + q.c, font, 20);
            sf::Text d("D. " + q.d, font, 20);
            a.setPosition(50, 100);
            b.setPosition(50, 150);
            c.setPosition(50, 200);
            d.setPosition(50, 250);
            for (auto* t : {&a, &b, &c, &d}) t->setFillColor(sf::Color::Blue);

            window.draw(a); window.draw(b); window.draw(c); window.draw(d);
        }

        window.display();
    }

    return 0;
}

// Definicja WinMain na końcu pliku (po main)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    return main();
}
