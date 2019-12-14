#include <iostream>
#include <vector>

using namespace std;

//prototypes:


/////DO NOT TOUCH/////
int main()
{
  vector <int> projects;
  vector <int> quizzes;

  int numProjects;
  int numQuizzes;

  cout<<"\nHow many projects are there? ";
  cin>>numProjects;
  cout<<"\nHow many quizzes are there? ";
  cin>>numQuizzes;

  //only proceed if both numbers are positive
  if( isPositive(numProjects) && isPositive(numQuizzes) )
  {
    projects.resize(numProjects);
    quizzes.resize(numQuizzes);

    fillWith(projects, 90); // Fills the vector with all value 90s
    fillWith(quizzes, 80); // Fills the vector with all value 80s

    cout<<"\nProject Scores:\n";
    printVector(projects); // Prints vector with space after each cell
    cout<<"\n\nQuiz Scores:\n";
    printVector(quizzes); // Prints vector with space after each cell
  }
  else
  {
    cout<<"\nSorry, numbers must be bigger than 0.\n";
  }
  return 0;
}

//function definitions
void fillWith(vector <int> &a, int b)
{
    for( int i = 0; i < a.size(); i++)
    {
    a[i] = b;
    }
}

int isPositive( int x )
{
  int positive = 0;

  if( x > 0)
    {
    positive = 1;
    return positive;
    }
    else
    {
    return positive;
    }
}

void printVector( vector <int> c)
{
    for( int k = 0; k <c.size(); k++)
    {
        cout << c[k]<< " ";
    }


}


