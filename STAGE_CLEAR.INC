'-- FLOOR CLEARED ANIMATION AND BONUS COUNT

SUB STAGE_CLEAR(N)

 LOCAL OK,T,K,AN,TR,TS,TT,CTR,CTS,CTT,BONUS,SLOWER,BPLUS

 LEVEL=N-1

 'LOAD FONTS
 PAGE WRITE 12
 LOAD PNG "./IMAGES/CIAN_FONTS.PNG"

 'LOAD STAGE CLEAR SCREEN
 PAGE WRITE 1
 LOAD PNG "./IMAGES/STAGE_CLEAR.PNG"
 BLIT 3,114,23,17,78,87,13,0

 'FIX BJ ANIMATION 
 PAGE WRITE 0
 BOX 20,16,81,87,0,,RGB(0,0,0)
 BLIT 0,0,0,0,MM.HRES,MM.VRES,1,4
 SC_PRINT(207,16,STR$(LEVEL),2) 'FLOOR CLEARED
 PLAY STOP
 PLAY MODFILE "./MUSICS/STAGE_END.MOD",22050
 HEADMV=0: HEADTIME=10: BJ_HEAD(HEALTH,0)

 PAGE COPY 0 TO 1,I

 TR=INT((K_FLOOR/K_RATIO)*100)
 TS=INT((S_FLOOR/S_RATIO)*100)
 TT=INT((T_FLOOR/T_RATIO)*100)

 CTR=0
 CTS=0
 CTT=0
 BPLUS=0

 T=0:SLOWER=0: SND=0: OK=0
 
 DO WHILE OK=0

  PAGE WRITE 1
  SC_PRINT(248,112,STR$(CTR),3)  'KILL RATIO
  SC_PRINT(248,128,STR$(CTS),3)  'SECRET RATIO
  SC_PRINT(248,144,STR$(CTT),3)  'TREASURE RATIO
  SC_PRINT(216,56,STR$(BONUS),5) 'TOTAL BONUS

  SELECT CASE INT(T)
   CASE  0: 
    SLOWER=SLOWER+1: SND=SND+1
    CTR=CTR+1
    IF CTR>=TR THEN CTR=TR: BPLUS=BPLUS+TR*10: IF SLOWER>10 THEN T=T+1
   CASE  1 TO  9: SLOWER=SLOWER+1: IF SLOWER>5 THEN T=T+1
   CASE 10:
    SLOWER=SLOWER+1: SND=SND+1
    CTS=CTS+1 
    IF CTS>=TS THEN CTS=TS: BPLUS=BPLUS+TS*10: IF SLOWER>10 THEN T=T+1
   CASE 11 TO 19: SLOWER=SLOWER+1: IF SLOWER>5 THEN T=T+1
   CASE 20:
    SLOWER=SLOWER+1: SND=SND+1
    CTT=CTT+1 
    IF CTT>=TT THEN CTT=TT: BPLUS=BPLUS+TT*10: IF SLOWER>10 THEN T=T+1
   CASE 21 TO 29: SLOWER=SLOWER+1: IF SLOWER>5 THEN T=T+1
   CASE 30:
    IF CTR=100 OR CTS=100 OR CTT=100 THEN 
     PLAY_SFX("BJ_YEAH")
     IF CTR=100 THEN BONUS=BONUS+10000
     IF CTS=100 THEN BONUS=BONUS+10000
     IF CTT=100 THEN BONUS=BONUS+10000
     BJ_HEAD(100,1)
    ELSE
     PLAY MODSAMPLE 28,4,64,22050
     BONUS=BONUS+BPLUS
    ENDIF
    T=T+1: SLOWER=0: SND=0
    SCORE=SCORE+BONUS
    REFRESH_STATUS_BAR
   CASE 31:
    FOR K=1 TO 4
     IF KEYDOWN(K)=32 OR KEYDOWN(K)=27 OR KEYDOWN(K)=13 THEN OK=1
    NEXT K
  END SELECT  

  IF SLOWER MOD 10 AND SND>5 THEN SND=0: PLAY MODSAMPLE 30,4,64,22050
  IF SLOWER>10 THEN SLOWER=0

  'BJ ANIMATION
  SELECT CASE AN
   CASE 0: BLIT 3,114,23,17,78,87,13,0
   CASE 1: BLIT 84,114,23,17,78,87,13,0
  END SELECT

  IF TIMER MOD 1000<500 THEN AN=0 ELSE AN=1

  PAGE COPY 1 TO 0,B

 LOOP

 NXT_LEVEL=1: ON_OPTIONS=0
 
END SUB

