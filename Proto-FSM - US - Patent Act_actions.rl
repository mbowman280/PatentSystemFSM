%%{

machine FSMUSPatentAct;

action s1 { res = 1; }
action s2 { res = 2; }
action s3 { res = 3; }
action s4 { res = 4; }
action s5 { res = 5; }
action s6 { res = 6; }


include "FSM - US - Patent Act.rl";

}%%


#include <stdio.h>
#include <string.h>

%% write data;

int parse(char* string)
{
  int cs;
  int res=0;
  char *p, *pe;

  p = string;
  pe = p + strlen(string);

  %% write init;
  %% write exec;

  return res;
}

