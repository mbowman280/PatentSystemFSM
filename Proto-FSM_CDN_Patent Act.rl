# This file was generated by				
# Qfsm Version 0.53					
# (C) Stefan Duffner, Rainer Strobel			


%%{
machine FSM_CDN_Patent_Act;

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
