char gelenVeri;
int city1=0;

int u01[3]={13,12,11};
int u02[3]={10,9,8};
int u03[3]={7,6,5};
int u04[3]={4,3,2};
int u05[3]={1,0,16};
int u06[3]={17,20,21};
int u07[3]={A2,A1,A0};
int u08[3]={A5,A4,A3};
int u09[3]={A8,A7,A6};
int u10[3]={A11,A10,A9};
int u11[3]={A14,A13,A12};
int u12[3]={51,53,A15};


void setup() 
{
 Serial3.begin(9600);
 for(int i=0; i<3; i++)
 {
  pinMode(u01[i],OUTPUT);  pinMode(u05[i],OUTPUT); pinMode(u09[i],OUTPUT);
  pinMode(u02[i],OUTPUT);  pinMode(u06[i],OUTPUT); pinMode(u10[i],OUTPUT);
  pinMode(u03[i],OUTPUT);  pinMode(u07[i],OUTPUT); pinMode(u11[i],OUTPUT);
  pinMode(u04[i],OUTPUT);  pinMode(u08[i],OUTPUT); pinMode(u12[i],OUTPUT);  
 }
delay(100);
sifirla();
}

void loop() 
{
 if(Serial3.available())
 {
   delay(10);
   gelenVeri = (Serial3.read());
   delay(10);
    if(gelenVeri==0) sifirla();
    if(gelenVeri==1) adana();
    if(gelenVeri==2) adiyaman();
    if(gelenVeri==3) afyon();
    if(gelenVeri==4) agri();
    if(gelenVeri==5) amasya();
    if(gelenVeri==6) ankara();
    if(gelenVeri==7) antalya();
    if(gelenVeri==8) artvin();
    if(gelenVeri==9) aydin();
    if(gelenVeri==10) balikesir();
    if(gelenVeri==11) bilecik();
    if(gelenVeri==12) bingol();
    if(gelenVeri==13) bitlis();
    if(gelenVeri==14) bolu();
    if(gelenVeri==15) burdur();
    if(gelenVeri==16) bursa();
    if(gelenVeri==17) canakkale();
    if(gelenVeri==18) cankiri();
    if(gelenVeri==19) corum();
    if(gelenVeri==20) denizli();
    if(gelenVeri==21) diyarbakir();
    if(gelenVeri==22) edirne();
    if(gelenVeri==23) elazig();
    if(gelenVeri==24) erzincan();
    if(gelenVeri==25) erzurum();
    if(gelenVeri==26) eskisehir();
    if(gelenVeri==27) gaziantep();
    if(gelenVeri==28) giresun();
    if(gelenVeri==29) gumushane();
    if(gelenVeri==30) hakkari();
    if(gelenVeri==31) hatay();
    if(gelenVeri==32) isparta();
    if(gelenVeri==33) mersin();
    if(gelenVeri==34) istanbul();
    if(gelenVeri==35) izmir();
    if(gelenVeri==36) kars();
    if(gelenVeri==37) kastamonu();
    if(gelenVeri==38) kayseri();
    if(gelenVeri==39) kirklareli();
    if(gelenVeri==40) kirsehir();
    if(gelenVeri==41) kocaeli();
    if(gelenVeri==42) konya();
    if(gelenVeri==43) kutahya();
    if(gelenVeri==44) malatya();
    if(gelenVeri==45) manisa();
    if(gelenVeri==46) kahramanmaras();
    if(gelenVeri==47) mardin();
    if(gelenVeri==48) mugla();
    if(gelenVeri==49) mus();
    if(gelenVeri==50) nevsehir();
    if(gelenVeri==51) nigde();
    if(gelenVeri==52) ordu();
    if(gelenVeri==53) rize();
    if(gelenVeri==54) sakarya();
    if(gelenVeri==55) samsun();
    if(gelenVeri==56) siirt();
    if(gelenVeri==57) sinop();
    if(gelenVeri==58) sivas();
    if(gelenVeri==59) tekirdag();
    if(gelenVeri==60) tokat();
    if(gelenVeri==61) trabzon();
    if(gelenVeri==62) tunceli();
    if(gelenVeri==63) sanliurfa();
    if(gelenVeri==64) usak();
    if(gelenVeri==65) van();
    if(gelenVeri==66) yozgat();
    if(gelenVeri==67) zonguldak();
    if(gelenVeri==68) aksaray();
    if(gelenVeri==69) bayburt();
    if(gelenVeri==70) karaman();
    if(gelenVeri==71) kirikkale();
    if(gelenVeri==72) batman();
    if(gelenVeri==73) sirnak();
    if(gelenVeri==74) bartin();
    if(gelenVeri==75) ardahan();
    if(gelenVeri==76) igdir();
    if(gelenVeri==77) yalova();
    if(gelenVeri==78) karabuk();
    if(gelenVeri==79) kilis();
    if(gelenVeri==80) osmaniye();
    if(gelenVeri==81) duzce();
   
  }

}

void sifirla()
{
  digitalWrite(u01[0],1);
  digitalWrite(u01[1],1);
  digitalWrite(u01[2],1);

  digitalWrite(u02[0],1);
  digitalWrite(u02[1],1);
  digitalWrite(u02[2],1);

  digitalWrite(u03[0],1);
  digitalWrite(u03[1],1);
  digitalWrite(u03[2],1);

  digitalWrite(u04[0],1);
  digitalWrite(u04[1],1);
  digitalWrite(u04[2],1);

  digitalWrite(u05[0],1);
  digitalWrite(u05[1],1);
  digitalWrite(u05[2],1);

  digitalWrite(u06[0],1);
  digitalWrite(u06[1],1);
  digitalWrite(u06[2],1);


  digitalWrite(u07[0],1);
  digitalWrite(u07[1],1);
  digitalWrite(u07[2],1);

  digitalWrite(u08[0],1);
  digitalWrite(u08[1],1);
  digitalWrite(u08[2],1);

  digitalWrite(u09[0],1);
  digitalWrite(u09[1],1);
  digitalWrite(u09[2],1);

  digitalWrite(u10[0],1);
  digitalWrite(u10[1],1);
  digitalWrite(u10[2],1);

  digitalWrite(u11[0],1);
  digitalWrite(u11[1],1);
  digitalWrite(u11[2],1);

  digitalWrite(u12[0],1);
  digitalWrite(u12[1],1);
  digitalWrite(u12[2],1);
}
