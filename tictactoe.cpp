#include <iostream>
#include <ctime>

void drawboard(char *spaces);
void playermove(char *spaces, char player);
void computermove(char *spaces, char computer);
bool winner(char *spaces, char computer, char player);
bool tie(char *spaces);

int main()
{
    char player='X';
    char computer='O';
    char spaces[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',};
    bool running=true;

    drawboard(spaces);

    while(running)
    {
        playermove(spaces, player);
        drawboard(spaces);

        if(winner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(tie(spaces))
        {
            running = false;
            break;
        }

        computermove(spaces, computer);
        drawboard(spaces);

        if(winner(spaces, player, computer))
        {
            running = false;
            break;
        }
    }
    return 0;
}

void drawboard(char *spaces)
{
    std::cout << "     |     |     " << std::endl;
    std::cout << "   " << spaces[0] << " " << "|" << "   " << spaces[1] << " " << "|" << "   " << spaces[2] << " " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "   " << spaces[3] << " " << "|" << "   " << spaces[4] << " " << "|" << "   " << spaces[5] << " " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "   " << spaces[6] << " " << "|" << "   " << spaces[7] << " " << "|" << "   " << spaces[8] << " " << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "\n";
}
void playermove(char *spaces, char player)
{
    int playerchoice;
    do
    {
        std::cout << "Enter the number between 1 to 9: ";
        std::cin >> playerchoice;
        playerchoice--;
        if(spaces[playerchoice] == ' ')
        {
            spaces[playerchoice] = player;
            break;
        }
    }while(!playerchoice < 0 || !playerchoice > 8);
}
void computermove(char *spaces, char computer)

{
    int computerchoice;
    srand(time(0));
    while(true)
    {
        computerchoice = rand() % 9;
        if(spaces[computerchoice] == ' ')
        {
            spaces[computerchoice] = computer;
            break;
        }
    }
}
bool winner(char *spaces, char computer, char player)
{
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player ? std::cout << "You lose! \n" : std::cout << "You win \n";  
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == player ? std::cout << "You lose! \n" : std::cout << "You win \n";  
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == player ? std::cout << "You lose! \n" : std::cout << "You win \n";  
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == player ? std::cout << "You lose! \n" : std::cout << "You win \n";  
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == player ? std::cout << "You lose! \n" : std::cout << "You win \n";  
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[3] == player ? std::cout << "You lose! \n" : std::cout << "You win \n";  
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == player ? std::cout << "You lose! \n" : std::cout << "You win \n";  
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[3] == player ? std::cout << "You lose! \n" : std::cout << "You win \n";  
    }
    else
    {
        return false;
    }

    return true;
}
bool tie(char *spaces)
{
    for(int i=0; i < 9; i++)
    {
        if(spaces[i] == ' ')
        {
            return false;
        }
    }
    std::cout << "It is a tie" << std::endl;
    return true;
}