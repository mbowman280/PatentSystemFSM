// FSMCDNPatentActv1b.cpp : main project file.

#include "stdafx.h"

using namespace System;


#line 1 "ragelFSMCDNPatentActv1a_actions.rl"

#line 11 "ragelFSMCDNPatentActv1a_actions.rl"



#include <stdio.h>
#include <string.h>


#line 8 "FSMCDN1b.cc"
static const char _FSMCDNPatentAct_actions[] = {
	0, 1, 0, 1, 1, 1, 2
};

static const char _FSMCDNPatentAct_key_offsets[] = {
	0, 0, 3, 4
};

static const char _FSMCDNPatentAct_trans_keys[] = {
	97, 98, 124, 99, 0
};

static const char _FSMCDNPatentAct_single_lengths[] = {
	0, 3, 1, 0
};

static const char _FSMCDNPatentAct_range_lengths[] = {
	0, 0, 0, 0
};

static const char _FSMCDNPatentAct_index_offsets[] = {
	0, 0, 4, 6
};

static const char _FSMCDNPatentAct_trans_targs[] = {
	3, 2, 0, 1, 3, 0, 0, 0
};

static const char _FSMCDNPatentAct_trans_actions[] = {
	5, 3, 0, 1, 5, 0, 0, 0
};

static const int FSMCDNPatentAct_start = 1;
static const int FSMCDNPatentAct_first_final = 3;
static const int FSMCDNPatentAct_error = 0;

static const int FSMCDNPatentAct_en_main = 1;


#line 18 "ragelFSMCDNPatentActv1a_actions.rl"

int parse(char* string)
{
  int cs;
  int res=0;
  char *p, *pe;

  p = string;
  pe = p + strlen(string);

  
#line 56 "FSMCDN1b.cc"
	{
	cs = FSMCDNPatentAct_start;
	}

#line 29 "ragelFSMCDNPatentActv1a_actions.rl"
  
#line 59 "FSMCDN1b.cc"
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	_keys = _FSMCDNPatentAct_trans_keys + _FSMCDNPatentAct_key_offsets[cs];
	_trans = _FSMCDNPatentAct_index_offsets[cs];

	_klen = _FSMCDNPatentAct_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _FSMCDNPatentAct_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	cs = _FSMCDNPatentAct_trans_targs[_trans];

	if ( _FSMCDNPatentAct_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _FSMCDNPatentAct_actions + _FSMCDNPatentAct_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 0:
#line 5 "ragelFSMCDNPatentActv1a_actions.rl"
	{ res = 1; }
	break;
	case 1:
#line 6 "ragelFSMCDNPatentActv1a_actions.rl"
	{ res = 2; }
	break;
	case 2:
#line 7 "ragelFSMCDNPatentActv1a_actions.rl"
	{ res = 3; }
	break;
#line 140 "FSMCDN1b.cc"
		}
	}

_again:
	if ( cs == 0 )
		goto _out;
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	_out: {}
	}

#line 30 "ragelFSMCDNPatentActv1a_actions.rl"

  return res;
}



int main(array<System::String ^> ^args)
{
	int try1 = parse("a");
	int try2 = parse("bc");
	int try3 = parse("c");
	int try4 = parse("d");
    //Console::WriteLine(L"Hello World");
	Console::Write("Input = a, Result = ");
	Console::WriteLine(try1);
	Console::Write("Input = bc, Result = ");
	Console::WriteLine(try2);
	Console::Write("Input = c, Result = ");
	Console::WriteLine(try3);
	Console::Write("Input = d, Result = ");
	Console::WriteLine(try4);
	Console::Read(); //the user must hit enter to exit the program
    return 0;
}

