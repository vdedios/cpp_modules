#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {
    public:
        Enemy (void);
        Enemy(std::string type, int hp);
        Enemy (Enemy & enemy);
        virtual ~Enemy(void);
        Enemy & operator=(Enemy & src);

        std::string getType() const;
        int gethp() const;

        virtual void takeDamage(int damage);
    
    protected:
        std::string _type;
        int _hp;
};

#endif