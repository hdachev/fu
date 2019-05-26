import { Token, LexValue } from './lex';

export type NodeKind = 'node';

export type Node =
{
    kind:   NodeKind;
    token:  Token;

    value:  LexValue;
    flags:  number;
};
