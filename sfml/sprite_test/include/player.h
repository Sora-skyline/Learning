#include <SFML/Graphics.hpp>

class Player: public sf::Drawable {
public:
    Player(sf::Window *window): _window(window), _shape(sf::Vector2f(64, 64)) {
        _shape.setOrigin(32, 32);
        _shape.setPosition(300, 300);
    }

    Player(const Player &) = delete;
    Player &operator=(const Player &) = delete;

    void update(const sf::Time &deltaTime);
    bool loadTexture();

private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    sf::RectangleShape _shape;
    sf::Vector2f _velocity;
    sf::Window *_window;
    sf::Texture texture;
};