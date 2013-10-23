%%{

machine FSMCDNPatentAct;

action s1 { res = 1; }
action s2 { res = 2; }
action s3 { res = 3; }

include "ragelFSMCDNPatentActv1a.rl";

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

