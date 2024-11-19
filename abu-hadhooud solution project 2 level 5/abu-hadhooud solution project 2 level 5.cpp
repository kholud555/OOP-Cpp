
#include <iostream>
using namespace std;
enum enQuestionlevel { Easy = 1, Med = 2 , Hard = 3 , Mix = 4 };
enum enOperationType { add = 1 , sub = 2 ,Mult = 3 , Div = 4 , MixOp = 5};
struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionlevel Questionlevel;
    short CorrectAnswer = 0;
    short PlayerAnswer = 0;
    bool AnswerResult = false;

};
struct stQuiz
{
    stQuestion Questionlist[100];
    short NumberOfQuestion;
    enOperationType OpeType;
    enQuestionlevel Questionslevel;
    int NumberOfWrongAnswers = 0;
    int NumberOfRightAnswers = 0;
    bool isPassed = false;
};
int Random_Number(int from, int to)
{
    // function to generate a rondom number.
    int Random_Num = rand() % (to - from + 1) + from;
    return Random_Num;
}
short HowManyQuestions()
{
    short QuestionsNumber;
    cout << "How many questions do you want to answer ?";
    cin >> QuestionsNumber;
    cout << endl;
    return QuestionsNumber;
}
enQuestionlevel ReadQuestionLevel()
{
    short QuestionLevel = 0;
    do
    {
        cout << "Enter question level [1] Easy , [2] Med , [3] Hard , [4] Mix ?";
        cin >> QuestionLevel;
        cout << endl;
    } while (QuestionLevel < 1 || QuestionLevel > 4);
    return (enQuestionlevel) QuestionLevel;
}
enOperationType OperationType()
{
    short OperationType;
    do
    {

        cout << "Enter operation type [1] add , [2] sub , [3] Mult , [4] div , [5] Mix ?";
        cin >> OperationType;
    } while (OperationType < 1 || OperationType > 5);

    return (enOperationType) OperationType;
}
enOperationType GetRandomOperationType()
{
   int OpType = Random_Number(1, 4);
    return (enOperationType) OpType;
}
int SimpleCaculature(int Number1, int Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::add:
        return Number1 + Number2;
    case enOperationType::sub:
        return Number1 - Number2;
    case enOperationType::Mult:
        return Number1 * Number2;
    case enOperationType::Div:
        return Number1 /Number2;
    default:
        return Number1 + Number2;
    }
}
stQuestion  GenerateQuestion(enQuestionlevel QuestionLevel, enOperationType OpType)
{
    stQuestion Question;

    if (QuestionLevel == enQuestionlevel::Mix)
    {
        QuestionLevel = (enQuestionlevel)Random_Number(1, 3);
    }
    if (OpType == enOperationType::MixOp)
    {
        OpType = GetRandomOperationType();
    }
    Question.OperationType = OpType;

    switch (QuestionLevel)
    {
    case enQuestionlevel::Easy:
        Question.Number1 = Random_Number(1, 10);
        Question.Number2 = Random_Number(1, 10);

        Question.CorrectAnswer = SimpleCaculature(Question.Number1, Question.Number2, Question.OperationType);
        Question.Questionlevel = QuestionLevel;
            return Question;
    case enQuestionlevel::Med:
        Question.Number1 = Random_Number(10, 50);
        Question.Number2 = Random_Number(10, 50);
        
        Question.CorrectAnswer = SimpleCaculature(Question.Number1, Question.Number2, Question.OperationType);
        Question.Questionlevel = QuestionLevel;
        return Question;
    case enQuestionlevel::Hard:
        Question.Number1 = Random_Number(50, 100);
        Question.Number2 = Random_Number(50, 100);

        Question.CorrectAnswer = SimpleCaculature(Question.Number1, Question.Number2, Question.OperationType);
        Question.Questionlevel = QuestionLevel;
        return Question;
    }
    return Question;
}
string GetOpTypeSymbol(enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::add:
        return "+";
    case enOperationType::sub:
        return "-";
    case enOperationType::Mult:
        return "x";
    case enOperationType::Div:
        return "/";
    default:
        return "Mix";
    }
}
void GenerateQuizStructure(stQuiz& Quiz)
{
    for (short Question = 0; Question < Quiz.NumberOfQuestion; Question++)
    {
        Quiz.Questionlist[Question] =
            GenerateQuestion(Quiz.Questionslevel, Quiz.OpeType);
    }

}
int ReadPlayerAnswer()
{
    int Answer = 0;
    cin >> Answer;
    return Answer;
}
void SetScreenColor(bool Right)
{
    if (Right)
    {
        system("color 2F"); // turn screen to green.
    }
    else
    {
        system("color 4F");// turn screen to red.
        cout << "\a";
    }
}
void CorrectTheQuestionAnswer(stQuiz& Quiz, short QuestionNumber)
{
    if (Quiz.Questionlist[QuestionNumber].PlayerAnswer != Quiz.Questionlist[QuestionNumber].CorrectAnswer)
    {
        Quiz.Questionlist[QuestionNumber].AnswerResult = false;
        Quiz.NumberOfWrongAnswers++;

        cout << "Wrong Answer :-(\n";
        cout << "The right answer is : ";
        cout << Quiz.Questionlist[QuestionNumber].CorrectAnswer;
        cout << "\n";
    }
    else
    {
        Quiz.Questionlist[QuestionNumber].AnswerResult = true;
        Quiz.NumberOfRightAnswers++;
        cout << "Right Answer :-) \n";
    }
    cout << endl;
    SetScreenColor(Quiz.Questionlist[QuestionNumber].AnswerResult);
}
void PrintTheQuestion(stQuiz& Quiz, short QuestionNumber)
{
    cout << "\n";
    cout << "Question [" << QuestionNumber + 1 << "/" << Quiz.NumberOfQuestion << "]"<<endl;
    cout << Quiz.Questionlist[QuestionNumber].Number1 << endl;
    cout << Quiz.Questionlist[QuestionNumber].Number2 << "";
    cout << GetOpTypeSymbol(Quiz.Questionlist[QuestionNumber].OperationType);
    cout << "\n-------" << endl;
}
void AskAndCorrectQuestionListAnswers(stQuiz& Quiz)
{
    for (short QuestionNumber = 0; QuestionNumber < Quiz.NumberOfQuestion; QuestionNumber++)
    {
        PrintTheQuestion(Quiz, QuestionNumber);

        Quiz.Questionlist[QuestionNumber].PlayerAnswer = ReadPlayerAnswer();

        CorrectTheQuestionAnswer(Quiz, QuestionNumber);
    }
    Quiz.isPassed = (Quiz.NumberOfRightAnswers >= Quiz.NumberOfWrongAnswers);
      
   /* if (Quiz.NumberOfRightAnswers >= Quiz.NumberOfWrongAnswers)
        Quiz.isPassed =  true;
    else
        Quiz.isPassed = false;*/
}
string GetQuestionLevelText(enQuestionlevel QuestionLevel)
{
    string ArrQuestionlevelText[4] = {"Easy","Med","Hard","Mix"};
    return ArrQuestionlevelText[QuestionLevel - 1 ];
}
string GetFinalResultText(bool pass)
{
    if (pass == true)
        return "Passed";
    else
        return "failed";
}
void PrintQuizResult(stQuiz Quiz)
{
    cout << "\n";
    cout << "----------------------------------------\n\n";
    cout << " Final result is : " << GetFinalResultText(Quiz.isPassed)<<endl;
    cout<< "----------------------------------------\n\n";

    cout << "Number of question is      : " << Quiz.NumberOfQuestion << endl;
    cout << "Question  level   is       : " << GetQuestionLevelText(Quiz.Questionslevel) << endl;
    cout << "Operation   type  is       :" << GetOpTypeSymbol(Quiz.OpeType) << endl;
    cout << "Number of Right Answers is :" << Quiz.NumberOfRightAnswers << endl;
    cout << "Number of Wrong Answers is  :" << Quiz.NumberOfWrongAnswers << endl;
    cout << "---------------------------------------------\n";

}
void PlayGame()
{
    stQuiz Quiz;
    Quiz.NumberOfQuestion = HowManyQuestions();
    Quiz.Questionslevel = ReadQuestionLevel();
    Quiz.OpeType = OperationType();

    GenerateQuizStructure(Quiz);

    AskAndCorrectQuestionListAnswers(Quiz);

    PrintQuizResult(Quiz);
}
void ResetScreen()
{
    system("cls");
    system("color 0F");
}
void startGame()
{
    char PlayAgain = 'Y';
    do
    {
        ResetScreen();
        PlayGame();
        cout << "Do you want to play again\n";
        cin >> PlayAgain;

    } while (PlayAgain == 'y' || PlayAgain == 'Y');
}
int main()
{
    srand((unsigned)time(NULL));
    startGame();
}


