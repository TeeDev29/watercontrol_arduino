void automatic(){

 switch (a){
                        
                           
                          case 0 : 
                                       keycard();  
                                       valuebattery();                              
                                       if(mdt==22){
                                        statusall();
                                         }   
                                       stoprobot();
                         break;
                      
                         
                         case 1 :
                                   keycard();
                                   echo();
                                   if(((strID.indexOf("E3:58:CA:05") >= 0) or (strID.indexOf("73:1D:05:07") >= 0)) && sp1==1 ) {     /********กลางเเปลง1(strID.indexOf("29:AA:22:BD") >= 0)********/
                                              
                                            Measure1();
                                            strID = "";
                                              
                                      }else if(((strID.indexOf("73:87:04:07") >= 0) or (strID.indexOf("73:BE:03:07") >= 0)) && sp2==1 ){ /**********ท้ายเเปลง1************/
                                              
                                             Measure2();
                                             strID = "";
                                                                   
                                      }else if((strID.indexOf("F3:AA:01:07") >= 0) or (strID.indexOf("F7:4C:76:B5") >= 0) 
                                            or (strID.indexOf("EA:59:B5:19") >= 0) or (strID.indexOf("83:96:CC:18") >= 0)){
                                        
                                      strID = "";
                                      stoprobot();
                                      delay(1000);
                                      forward();
                                      delay(2500);
                                      stoprobot();
                                      delay(1000);
                                      
                                      a=2;
                                       
                                     }
                                      
                        break;
                
                
                          case 2 :
                                   
                                   rotateR1();    
                          break;
                
                          case 3 :
                                   
                                    turnright1();
                                 
                          break;
                
                          
                      
                         case 4 :
                                     keycard();
                                     echo();
                                        if(((strID.indexOf("C3:BF:FF:06") >= 0)or(strID.indexOf("53:D8:FF:06") >= 0)) && sp3==1){ /**********กลางเเปลง2*************/     
                                              Measure3();
                                              strID = "";                           
                                         }else if(((strID.indexOf("03:4C:CC:05") >= 0) or (strID.indexOf("03:7B:A0:05") >= 0)) && sp4==1){ /**********ท้ายเเปลง2**************/                             
                                              Measure4();                             
                                              strID = "";                         
                                      }else if((strID.indexOf("63:CF:FF:06") >= 0) or (strID.indexOf("97:CD:84:B4") >= 0) 
                                            or (strID.indexOf("29:AA:22:BD") >= 0) or (strID.indexOf("93:14:D4:18") >= 0)){
                                        
                                      strID = "";
                                      stoprobot();
                                      delay(1000);
                                      forward();
                                      delay(2500);
                                      stoprobot();
                                      delay(1000);
                                      if(sp5==1 or sp6==1){
                                        a=5;
                                      }else{
                                        a=11;
                                      }
                                                         
                                     }         
                        break;
                
                
                          case 5 : 
                                  
                                  rotateL1();
                          break;
                
                          case  6 : 
                                                
                                    turnleft1();
                          break;
                
                        case 7 :  
                                       keycard();
                                      echo();
                                         if(((strID.indexOf("E3:5B:00:07") >= 0) or (strID.indexOf("E3:55:35:05") >= 0)) && sp5==1){ /**********กลางเเปลง3*************/                
                                              Measure5();                            
                                              strID = "";                             
                                         }else if(((strID.indexOf("33:0F:01:07") >= 0) or (strID.indexOf("73:32:B9:05") >= 0))&& sp6==1){ /**********ท้ายเเปลง3*************/                        
                                             Measure6();                            
                                              strID = "";                                                        
                                         }else if((strID.indexOf("43:2B:D6:04") >= 0) or (strID.indexOf("37:F3:55:B5") >= 0) 
                                               or (strID.indexOf("57:28:4A:B5") >= 0) or (strID.indexOf("89:80:21:BD") >= 0)){          
                                      strID = "";           
                                      stoprobot();
                                      delay(1000);
                                      forward();
                                      delay(2500);
                                      stoprobot();
                                      delay(1000);
                                      
                                      a=8;               
                                     }
                                    
                
                         break;
                         
                           case 8 :
                
                               
                                 rotateL2();
                          break;
                
                             case 9 :
                              
                                    turnleft2();
                          break;
                
                         case 10 : 
                                   keycard();
                                   echo();
                                           if((strID.indexOf("C3:BF:FF:06") >= 0) or (strID.indexOf("53:D8:FF:06") >= 0)){ /**********กลางเเปลง2*************/
                                                  
                                                   
                                                  strID = "";
                                          }else if((strID.indexOf("03:4C:CC:05") >= 0) or (strID.indexOf("03:7B:A0:05") >= 0)){ /**********ท้ายเเปลง2**************/
                                                                    
                                                  strID = "";                        
                                          }else if((strID.indexOf("63:CF:FF:06") >= 0) or (strID.indexOf("97:CD:84:B4") >= 0) 
                                                or (strID.indexOf("29:AA:22:BD") >= 0) or (strID.indexOf("93:14:D4:18") >= 0)){     
                                     
                                     strID = ""; 
                                      stoprobot();
                                      delay(1000);
                                       forward();
                                      delay(2500);
                                       stoprobot();
                                      delay(1000);
                                     
                                      a=11;
                                    }
                  
                         break;
                          
                         case 11 : 
                                    
                                 rotateR2();
                          break;
                
                          case  12 :
                                 
                                 turnright2();
                          break;
                       
                      } 
}
