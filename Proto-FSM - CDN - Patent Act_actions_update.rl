#include <stdio.h>
#include <string.h>

%%{

machine FSM_CDN_Patent_Act;

action accept { res = 1; }
action not_accept { res = 0; }

main :=
start:
Idea,_not_Disclosed: (
  [b] @not_accept  -> Idea,_Disclosed | 
  [a] @accept  -> Canadian_Applicaiton,_Confidential | 
  [^a-b|] @not_accept  -> Idea,_not_Disclosed),
Idea,_Disclosed: (
  [c] @accept  -> Canadian_Applicaiton,_Confidential),
Canadian_Applicaiton,_Confidential: (
  "" @not_accept -> final);

}%%


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

