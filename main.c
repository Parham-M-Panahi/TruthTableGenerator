#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum operators{AND, OR, NOT, IMPLY};

void draw_table(enum operators);

void draw_and(void);
void draw_or(void);
void draw_not(void);
void draw_imply(void);
void draw_basic(enum operators);

int main(void)
{
  printf("Truth Tables for basic logical operation\n\n");

  enum operators operator = 0;
  for (int i = 0; i < 4; i++)
  {
    draw_table(operator);
    operator += 1;
  }

}

void draw_table(enum operators operator)
{
  switch (operator)
  {
    case AND :
      draw_and();
      break;
    case OR :
      draw_or();
      break;
    case NOT :
      draw_not();
      break;
    case IMPLY :
      draw_imply();
      break;
  }
}

void draw_and()
{
  draw_basic(AND);

  bool p[2] = {false, true};
  bool q[2] = {false, true};

  puts("p\tq\t p & q\n");

  for (int i = 0; i < 2; i++)
  {
    for(int j = 0; j < 2; j++)
    {
      fputs(p[i] ? "true\t" : "false\t", stdout);
      fputs(q[j] ? "true\t" : "false\t", stdout);
      fputs(p[i] && q[j] ? "true\n" : "false\n", stdout);
    }
  }

  puts("\n\n");

}

void draw_or()
{
  draw_basic(OR);

  bool p[2] = {false, true};
  bool q[2] = {false, true};

  puts("p\tq\t p | q\n");

  for (int i = 0; i < 2; i++)
  {
    for(int j = 0; j < 2; j++)
    {
      fputs(p[i] ? "true\t" : "false\t", stdout);
      fputs(q[j] ? "true\t" : "false\t", stdout);
      fputs(p[i] || q[j] ? "true\n" : "false\n", stdout);
    }
  }

  puts("\n\n");

}

void draw_not()
{
  draw_basic(NOT);

  bool p[2] = {false, true};

  puts("p\t~p\n");
  
  for (int i = 0; i < 2; i++)
  {
    fputs(p[i] ? "true\t" : "false\t", stdout);
    fputs(!p[i] ? "true\n" : "false\n", stdout);
  }

  puts("\n\n");
}

void draw_imply()
{
  draw_basic(IMPLY);

  bool p[2] = {false, true};
  bool q[2] = {false, true};

  puts("p\tq\t p->q\n");

  for (int i = 0; i < 2; i++)
  {
    for(int j = 0; j < 2; j++)
    {
      fputs(p[i] ? "true\t" : "false\t", stdout);
      fputs(q[j] ? "true\t" : "false\t", stdout);
      fputs(!p[i] || q[j] ? "true\n" : "false\n", stdout);
    }
  }

  puts("\n\n");
}

void draw_basic(enum operators operator)
{
  char operator_name [10];
  switch (operator)
  {
    case AND:
      strcpy(operator_name, " and ");
      break;
    case OR:
      strcpy(operator_name, " or ");
      break;
    case NOT:
      strcpy(operator_name, " not ");
      break;
    case IMPLY:
      strcpy(operator_name, " imply ");
      break;
  }
  printf("Truth Table for %s\n", operator_name);
  puts("------------------");
}
