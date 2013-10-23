
#line 1 "FSM - US - Patent Act_actions.rl"

#line 15 "FSM - US - Patent Act_actions.rl"



#include <stdio.h>
#include <string.h>


#line 8 "FSM - US - Patent Act_actions.c"
static const char _FSMUSPatentAct_actions[] = {
	0, 1, 0, 1, 1, 1, 2, 1, 
	3, 1, 4, 1, 5
};

static const char _FSMUSPatentAct_key_offsets[] = {
	0, 0, 3, 5, 7, 8
};

static const char _FSMUSPatentAct_trans_keys[] = {
	97, 98, 124, 100, 101, 102, 103, 99, 
	0
};

static const char _FSMUSPatentAct_single_lengths[] = {
	0, 3, 2, 2, 1, 0
};

static const char _FSMUSPatentAct_range_lengths[] = {
	0, 0, 0, 0, 0, 0
};

static const char _FSMUSPatentAct_index_offsets[] = {
	0, 0, 4, 7, 10, 12
};

static const char _FSMUSPatentAct_trans_targs[] = {
	2, 4, 0, 1, 5, 3, 0, 5, 
	5, 0, 2, 0, 0, 0
};

static const char _FSMUSPatentAct_trans_actions[] = {
	5, 3, 0, 1, 9, 7, 0, 9, 
	11, 0, 5, 0, 0, 0
};

static const int FSMUSPatentAct_start = 1;
static const int FSMUSPatentAct_first_final = 5;
static const int FSMUSPatentAct_error = 0;

static const int FSMUSPatentAct_en_main = 1;


#line 22 "FSM - US - Patent Act_actions.rl"

int parse(char* string)
{
  int cs;
  int res=0;
  char *p, *pe;

  p = string;
  pe = p + strlen(string);

  
#line 60 "FSM - US - Patent Act_actions.c"
	{
	cs = FSMUSPatentAct_start;
	}

#line 33 "FSM - US - Patent Act_actions.rl"
  
#line 63 "FSM - US - Patent Act_actions.c"
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
	_keys = _FSMUSPatentAct_trans_keys + _FSMUSPatentAct_key_offsets[cs];
	_trans = _FSMUSPatentAct_index_offsets[cs];

	_klen = _FSMUSPatentAct_single_lengths[cs];
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

	_klen = _FSMUSPatentAct_range_lengths[cs];
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
	cs = _FSMUSPatentAct_trans_targs[_trans];

	if ( _FSMUSPatentAct_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _FSMUSPatentAct_actions + _FSMUSPatentAct_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 0:
#line 5 "FSM - US - Patent Act_actions.rl"
	{ res = 1; }
	break;
	case 1:
#line 6 "FSM - US - Patent Act_actions.rl"
	{ res = 2; }
	break;
	case 2:
#line 7 "FSM - US - Patent Act_actions.rl"
	{ res = 3; }
	break;
	case 3:
#line 8 "FSM - US - Patent Act_actions.rl"
	{ res = 4; }
	break;
	case 4:
#line 9 "FSM - US - Patent Act_actions.rl"
	{ res = 5; }
	break;
	case 5:
#line 10 "FSM - US - Patent Act_actions.rl"
	{ res = 6; }
	break;
#line 153 "FSM - US - Patent Act_actions.c"
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

#line 34 "FSM - US - Patent Act_actions.rl"

  return res;
}

