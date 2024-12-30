enum ProgramType
{
    SQUARE_ROOT
};

class Console
{
private:
    ProgramType selectedProgram;

public:
    Console();
    ~Console();
    void selectProgram();
    void run();
};
