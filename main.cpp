#include <iostream>
using namespace std;
int a1[12],
a2[12],
a3[12],
a4[12];
char reply;
int used1,
used2,
used3,
used4,
minInt,
intNum,
i,
oneInt;
int* hopPtr;
int* hopPtr1;
int* hopPtr2;
int* hopPtr3;
int* hopPtr4;
int* endPtr;
int* endPtr1;
int* endPtr2;
int* probePtr;
char begA1Str[] = "beginning a1: ";
char cpaA1Str[] = "chkPointA a1: ";
char proA1Str[] = "processed a1: ";
char comA2Str[] = "          a2: ";
char comA3Str[] = "          a3: ";
char comA4Str[] = "          a4: ";
char einStr[]   = "Enter integer #";
char moStr[]    = "Max of ";
char ieStr[]    = " ints entered...";
char eaiStr[]   = "End adding ints? (y or Y = yes, others = no) ";
char dacStr[]   = "Do another case? (n or N = no, others = yes) ";
char dlStr[]    = "================================";
char byeStr[]   = "bye...";

int main()
{
begdw1:                                                     //DW1
    {
        intNum = 0;
        used1 = 0;
        used2 = 0;
        hopPtr1 = a1;
        hopPtr2 = a2;
        cout << eaiStr;
        cin >> reply;
        goto w1test;
        
        {
            
        begw1:
            ++intNum;
            cout << einStr;
            cout << intNum;
            cout << ':' << ' ';
            cin >> oneInt;
            
            if ( (intNum & 1) == 0 ) goto else1;	        //I1x
            {
                *hopPtr1 = oneInt;
                ++hopPtr1;
                ++used1;
                goto endI1;
            }
            else1:
            {
                *hopPtr2 = oneInt;
                ++hopPtr2;
                ++used2;
            }
            endI1:
            
            if (intNum != 12) goto else2;	                //I2x
            {
                cout << moStr;
                cout << 12;
                cout << ieStr;
                cout << endl;
                reply = 'y';
                goto endI2;
            }
            else2:
            {
                cout << eaiStr;
                cin >> reply;
            }
            endI2:
            ;
        }
        
    w1test: if (reply != 'y' && reply != 'Y') goto begw1;	 //W1x
        //end w1
        
        cout << endl;
        
        cout << begA1Str;
        hopPtr = a1;
        endPtr = a1 + used1;
        
        
        goto w2test;
    begw2:
        
        {
            cout << *hopPtr << ' ' << ' ';
            ++hopPtr;
        }
    w2test: if (hopPtr < endPtr) goto begw2;	            //W2x
        
        
        cout << endl;
        
        cout << comA2Str;
        hopPtr = a2;
        endPtr = a2 + used2;
        
        
        goto w3test;
    begw3:
        
        {
            cout << *hopPtr << ' ' << ' ';
            ++hopPtr;
        }
    w3test: if (hopPtr < endPtr) goto begw3;                //W3x
        
        
        cout << endl;
        
        if (!(used1 > 0) && !(used2 > 0)) goto else3;       //I3x
        {
            hopPtr1 = a1;
            hopPtr2 = a2;
            hopPtr3 = a3;
            hopPtr4 = a4;
            endPtr1 = a1 + used1;
            endPtr2 = a2 + used2;
            used3 = 0;
            used4 = 0;
            if (used1 <= 0) goto else4;                     //I4x
            {
                minInt = *hopPtr1;
                goto endi4;
            }
        else4:
            {
                minInt = *hopPtr2;
            }
        endi4:
            goto w4test;
        begw4:
            
            {
                goto w5test;
            begw5:
                
                {
                    oneInt = *hopPtr1;
                    if (oneInt >= minInt) goto endI5;	    //I5x
                    {
                        minInt = oneInt;
                    }
                    endI5:
                    
                    if ( (oneInt & 1) == 0 ) goto endI6;	//I6x
                    *hopPtr3 = oneInt;
                    ++used3;
                    ++hopPtr1;
                    ++hopPtr3;
                    
                    ;
                }
            w5test: if (hopPtr1 < endPtr1) goto begw5;      //W5x
                endI6:
                
                goto w6test;
            begw6:
                
                {
                    oneInt = *hopPtr2;
                    if (oneInt >= minInt) goto endI7;	    //I7x
                    {
                        minInt = oneInt;
                    }
                    endI7:
                    if ( (oneInt & 1) != 0 ) goto endI8;	//I8x
                    *hopPtr4 = oneInt;
                    ++used4;
                    ++hopPtr2;
                    ++hopPtr4;
                
                    ;
                w6test: if (hopPtr2 < endPtr2) goto begw6;	//W6x
                }
                endI8:
                if (!(hopPtr1 < endPtr1) || !(hopPtr2 < endPtr2)) goto endI9;	 //I9x
                {
                    *hopPtr3 = *hopPtr2;
                    *hopPtr4 = *hopPtr1;
                    ++used3;
                    ++used4;
                    ++hopPtr1;
                    ++hopPtr2;
                    ++hopPtr3;
                    ++hopPtr4;
                }
            endI9:
                ;
            }
        w4test: if (hopPtr1 < endPtr1 && hopPtr2 < endPtr2) goto begw4;	 //W4x
            goto w7test;
        begw7:
            {
                oneInt = *hopPtr1;
                if (oneInt >= minInt) goto endI10;	        //I10x
                {
                    minInt = oneInt;
                }
            endI10:
                if ( (oneInt & 1) == 0 ) goto elseI11;	    //I11x
                {
                    *hopPtr3 = oneInt;
                    ++used3;
                    ++hopPtr3;
                    goto endI11;
                }
            elseI11:
                {
                    *hopPtr4 = oneInt;
                    ++used4;
                    ++hopPtr4;
                }
            endI11:
                ++hopPtr1;
            }
        w7test: if (hopPtr1 < endPtr1) goto begw7;	        //W7x
            goto w8test;
        begw8:
            
            {
                oneInt = *hopPtr2;
                if (oneInt >= minInt) goto endI12;	        //I12x
                {
                    minInt = oneInt;
                }
            endI12:
                if ( (oneInt & 1) == 0 ) goto elseI13;	    //I13x
                {
                    *hopPtr3 = oneInt;
                    ++used3;
                    ++hopPtr3;
                    goto endI13;
                }
            elseI13:
                {
                    *hopPtr4 = oneInt;
                    ++used4;
                    ++hopPtr4;
                }
            endI13:
                ++hopPtr2;
            }
        w8test: if (hopPtr2 < endPtr2) goto begw8;	        //W8x
        goto endi3;
        }
    else3:
        {
            used3 = 0;
            used4 = 0;
        }
    endi3:
        cout << comA3Str;
        hopPtr = a3;
        endPtr = a3 + used3;
        
        goto w9test;
    begw9:
        
        {
            cout << *hopPtr << ' ' << ' ';
            ++hopPtr;
        }
    w9test: if (hopPtr < endPtr) goto begw9;	            //W9x
        
        cout << endl;
        
        cout << comA4Str;
        hopPtr = a4;
        endPtr = a4 + used4;
        goto w10test;
    begw10:
        
        {
            cout << *hopPtr << ' ' << ' ';
            ++hopPtr;
        }
    w10test: if (hopPtr < endPtr) goto begw10;	            //W10x
        cout << endl;
        if (!(used1 > 0) && !(used2 > 0)) goto endi14;	    //I14x
        {
            used1 = 0;
            used2 = 0;
            hopPtr = a3;
            endPtr = a3 + used3;
            goto w11test;
        begw11:
            
            {
                oneInt = *hopPtr;
                
                probePtr = a1 + used1;
                goto f1test;
            begf1:                                          //F1x
                {
                    if ( *(probePtr - 1) <= oneInt ) goto endi15;	 //I15x
                    *probePtr = *(probePtr - 1);
                
                    --probePtr;
                f1test: if (probePtr > a1) goto begf1;
                    ;
                }
                
                endi15:
                *probePtr = *hopPtr;
                ++used1;
                ++hopPtr;
            }
        w11test: if (hopPtr < endPtr) goto begw11;	        //W11x
            hopPtr = a4;
            endPtr = a4 + used4;
            goto w12test;
        begw12:
            
            {
                oneInt = *hopPtr;
                
                probePtr = a2 + used2;
                goto f2test;
            begf2:

                {
                    if ( *(probePtr - 1) <= oneInt ) goto endi16;	 //I16x
                    *probePtr = *(probePtr - 1);
                
                    --probePtr;
                    ;
                f2test: if (probePtr > a2) goto begf2;      //F2x
                }
                
                endi16:
                *probePtr = *hopPtr;
                ++used2;
                ++hopPtr;
            }
        w12test: if (hopPtr < endPtr) goto begw12;	        //W12x
            cout << cpaA1Str;
            hopPtr = a1;
            endPtr = a1 + used1;
            goto w13test;
        begw13:
            
            {
                cout << *hopPtr << ' ' << ' ';
                ++hopPtr;
            }
        w13test: if (hopPtr < endPtr) goto begw13;	        //W13x
            cout << endl;
            cout << comA2Str;
            hopPtr = a2;
            endPtr = a2 + used2;
            goto w14test;
        begw14:
            
            {
                cout << *hopPtr << ' ' << ' ';
                ++hopPtr;
            }
        w14test: if (hopPtr < endPtr) goto begw14;	        //W14x
            cout << endl;
            cout << comA3Str;
            hopPtr = a3;
            endPtr = a3 + used3;
            goto w15test;
        begw15:
            
            {
                cout << *hopPtr << ' ' << ' ';
                ++hopPtr;
            }
        w15test: if (hopPtr < endPtr) goto begw15;	        //W15x
            cout << endl;
            cout << comA4Str;
            hopPtr = a4;
            endPtr = a4 + used4;
            goto w16test;
        begw16:
            
            {
                cout << *hopPtr << ' ' << ' ';
                ++hopPtr;
            }
        w16test: if (hopPtr < endPtr) goto begw16;	        //W16x
            cout << endl;
            used3 = 0;
            used4 = 0;
            if ( (minInt & 1) == 0)	goto else17;            //I17x
            {
                hopPtr = a3;
                used3 = used1 + used2;
                goto endi17;
            }
        else17:
            {
                hopPtr = a4;
                used4 = used1 + used2;
            }
        endi17:
            hopPtr1 = a1;
            hopPtr2 = a2;
            endPtr1 = a1 + used1;
            endPtr2 = a2 + used2;
            goto w17test;
        begw17:
            
            {
                if (*hopPtr1 >= *hopPtr2) goto else18;      //I18x
                {
                    *hopPtr = *hopPtr1;
                    ++hopPtr1;
                    goto endi18;
                }
            else18:
                {
                    *hopPtr = *hopPtr2;
                    ++hopPtr2;
                }
            endi18:
                ++hopPtr;
            }
        w17test: if (hopPtr1 < endPtr1 && hopPtr2 < endPtr2) goto begw17;	 //W17x
            goto w18test;
        begw18:
            
            {
                *hopPtr = *hopPtr1;
                ++hopPtr1;
                ++hopPtr;
            }
        w18test: if (hopPtr1 < endPtr1) goto begw18;	    //W18x
            goto w19test;
        begw19:
            
            {
                *hopPtr = *hopPtr2;
                ++hopPtr2;
                ++hopPtr;
            }
        w19test: if (hopPtr2 < endPtr2)	 goto begw19;       //W19x
        }
    endi14:
        cout << proA1Str;
        hopPtr = a1;
        endPtr = a1 + used1;
        goto w20test;
    begw20:
        
        {
            cout << *hopPtr << ' ' << ' ';
            ++hopPtr;
        }
    w20test: if (hopPtr < endPtr) goto begw20;	            //W20x
        cout << endl;
        cout << comA2Str;
        hopPtr = a2;
        endPtr = a2 + used2;
        goto w21test;
    begw21:
        
        {
            cout << *hopPtr << ' ' << ' ';
            ++hopPtr;
        }
    w21test: if (hopPtr < endPtr) goto begw21;	            //W21x
        cout << endl;
        cout << comA3Str;
        hopPtr = a3;
        endPtr = a3 + used3;
        goto w22test;
    begw22:
        
        {
            cout << *hopPtr << ' ' << ' ';
            ++hopPtr;
        }
    w22test: if (hopPtr < endPtr) goto begw22;	            //W22x
        cout << endl;
        cout << comA4Str;
        hopPtr = a4;
        endPtr = a4 + used4;
        goto w23test;
    begw23:
        
        {
            cout << *hopPtr << ' ' << ' ';
            ++hopPtr;
        }
    w23test: if (hopPtr < endPtr) goto begw23;	            //W23x
        cout << endl;
        cout << endl;
        cout << dacStr;
        cin >> reply;
        cout << endl;
    }
dw1test: if (reply != 'n' && reply != 'N') goto begdw1;
    cout << dlStr;
    cout << '\n';
    cout << byeStr;
    cout << '\n';
    cout << dlStr;
    cout << '\n';
    return 0;
}
