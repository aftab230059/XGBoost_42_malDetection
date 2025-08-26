
#include "header.h"

void predict_unit24(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[3] += -0.046995085;
    } else {
      result[3] += 0.0157377;
    }
  } else {
    result[3] += 0.012322289;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.038394414;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[4] += 0.0070529156;
        } else {
          result[4] += 0.044055987;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            result[4] += -0.0068920194;
          } else {
            result[4] += -0.024284577;
          }
        } else {
          result[4] += 0.023379425;
        }
      }
    }
  } else {
    result[4] += 0.05176511;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)7939)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)7212)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)6956)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6453)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6201)) {
              result[5] += -0.0021194667;
            } else {
              result[5] += -0.087866165;
            }
          } else {
            result[5] += 0.064088546;
          }
        } else {
          result[5] += -0.10845596;
        }
      } else {
        result[5] += 0.071645126;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)7454)) {
        result[5] += -0.118151434;
      } else {
        result[5] += -0.014821711;
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)8476)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[5] += 0.0010083541;
      } else {
        result[5] += 0.0671302;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)8735)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.04188942;
        } else {
          result[5] += -0.1156135;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)9252)) {
          result[5] += 0.08475375;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)10262)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)9760)) {
              result[5] += 0.00021541934;
            } else {
              result[5] += -0.111223996;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)11816)) {
              result[5] += 0.028699197;
            } else {
              result[5] += 0.0034837346;
            }
          }
        }
      }
    }
  }
  result[6] += -0.00032471347;
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[7] += -0.00049735507;
            } else {
              result[7] += 0.0185819;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[7] += 0.040525977;
            } else {
              result[7] += -0.110516205;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[7] += 0.0025718086;
            } else {
              result[7] += 0.03738721;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[7] += 0.086970076;
            } else {
              result[7] += -0.06284629;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[7] += -0.062003914;
            } else {
              result[7] += 0.04428252;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[7] += -0.3261219;
            } else {
              result[7] += -0.062923715;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[7] += 0.10441031;
            } else {
              result[7] += -0.044584606;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[7] += -0.08182056;
            } else {
              result[7] += 0.006204815;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54154)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[7] += -0.12205996;
            } else {
              result[7] += 0.090913504;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
              result[7] += 0.19719444;
            } else {
              result[7] += 0.04794019;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1159214080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
              result[7] += -0.02430745;
            } else {
              result[7] += 0.11064704;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
              result[7] += -0.13511044;
            } else {
              result[7] += 0.028917536;
            }
          }
        }
      } else {
        result[7] += 0.11024334;
      }
    }
  } else {
    result[7] += 0.09223848;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
              result[8] += -3.610103e-06;
            } else {
              result[8] += 0.023991393;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += 0.009716255;
            } else {
              result[8] += 0.1011137;
            }
          }
        } else {
          result[8] += -0.11316288;
        }
      } else {
        result[8] += 0.0938009;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        result[8] += -0.12829126;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[8] += -0.005856195;
            } else {
              result[8] += 0.08916879;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
              result[8] += -0.038905974;
            } else {
              result[8] += -0.19803534;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
              result[8] += -0.10088885;
            } else {
              result[8] += 0.017260578;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.104557164;
            } else {
              result[8] += 0.018960612;
            }
          }
        }
      }
    }
  } else {
    result[8] += -0.09788806;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[9] += 6.400342e-05;
            } else {
              result[9] += 0.000635479;
            }
          } else {
            result[9] += -0.0010484101;
          }
        } else {
          result[9] += -0.08198248;
        }
      } else {
        result[9] += 0.05031197;
      }
    } else {
      result[9] += -0.121824175;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
      result[9] += 0.08657177;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
              result[9] += -0.068147495;
            } else {
              result[9] += 0.039176133;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[9] += -0.02525344;
            } else {
              result[9] += 0.10733228;
            }
          }
        } else {
          result[9] += -0.07291067;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
            result[9] += 0.093836404;
          } else {
            result[9] += -0.076773986;
          }
        } else {
          result[9] += 0.09966531;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
              result[10] += -0.00011713795;
            } else {
              result[10] += -0.023345646;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += 0.11277164;
            } else {
              result[10] += -0.014596563;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
              result[10] += -0.090336956;
            } else {
              result[10] += 0.06635312;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
              result[10] += -0.16002986;
            } else {
              result[10] += 0.021513771;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            result[10] += -0.079859555;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
              result[10] += 0.16994311;
            } else {
              result[10] += 0.020558052;
            }
          }
        } else {
          result[10] += -0.10655754;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[10] += -0.12427248;
            } else {
              result[10] += 0.0066641127;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[10] += 0.038777716;
            } else {
              result[10] += 0.21639429;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
            result[10] += -0.1920766;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
              result[10] += -0.06980638;
            } else {
              result[10] += 0.1109027;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
              result[10] += 0.20832129;
            } else {
              result[10] += 0.003926249;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
              result[10] += -0.1642398;
            } else {
              result[10] += 0.08804141;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[10] += 0.030812833;
            } else {
              result[10] += -0.16789071;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[10] += 0.09617111;
            } else {
              result[10] += -0.06534685;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[10] += -0.10623676;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12324)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
              result[10] += -0.005433339;
            } else {
              result[10] += 0.026893193;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
              result[10] += -0.12605855;
            } else {
              result[10] += -0.013987255;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
            result[10] += 0.15943801;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
              result[10] += -0.06132047;
            } else {
              result[10] += 0.017287226;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
            result[10] += -0.013948131;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[10] += -0.12519321;
            } else {
              result[10] += -0.040040918;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24813)) {
            result[10] += 0.09406439;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
              result[10] += -0.050677385;
            } else {
              result[10] += 0.0043559573;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.00041155325;
            } else {
              result[11] += -0.0112502035;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.14657472;
            } else {
              result[11] += -0.022376575;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.11108983;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
              result[11] += 0.059871815;
            } else {
              result[11] += 0.021478586;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.13629317;
            } else {
              result[11] += -0.037534688;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[11] += -0.029491432;
            } else {
              result[11] += 0.00409379;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[11] += 0.13746478;
          } else {
            result[11] += -0.03027392;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.14030394;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[11] += 0.09630519;
            } else {
              result[11] += 0.005154227;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[11] += 0.14770831;
          } else {
            result[11] += -0.13811193;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
              result[11] += -0.0019195612;
            } else {
              result[11] += 0.02305954;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
              result[11] += -0.10564284;
            } else {
              result[11] += -0.31300527;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
              result[11] += 0.27068752;
            } else {
              result[11] += 0.058308106;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[11] += 0.014358242;
            } else {
              result[11] += -0.03545541;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.08958477;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.00011276132;
            } else {
              result[12] += 0.015731243;
            }
          } else {
            result[12] += -0.09300629;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[12] += -0.108071856;
          } else {
            result[12] += 0.013765114;
          }
        }
      } else {
        result[12] += 0.11033235;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[12] += 0.096791215;
            } else {
              result[12] += -0.036377378;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
              result[12] += 0.0035491597;
            } else {
              result[12] += -0.09972807;
            }
          }
        } else {
          result[12] += -0.118506774;
        }
      } else {
        result[12] += 0.053975645;
      }
    }
  } else {
    result[12] += -0.08780656;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.0008063121;
            } else {
              result[13] += -0.085334465;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.10451036;
            } else {
              result[13] += 0.009585011;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[13] += 0.18576062;
            } else {
              result[13] += -0.0047170883;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.079982385;
            } else {
              result[13] += -0.124940075;
            }
          }
        }
      } else {
        result[13] += -0.08936868;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          result[13] += 0.09403887;
        } else {
          result[13] += 0.02635569;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
          result[13] += -0.015157144;
        } else {
          result[13] += 0.032161355;
        }
      }
    }
  } else {
    result[13] += -0.08715337;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[14] += 0.00029493298;
            } else {
              result[14] += -0.015306178;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
              result[14] += 0.04318674;
            } else {
              result[14] += -0.14152998;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
              result[14] += 0.008568254;
            } else {
              result[14] += -0.07204676;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
              result[14] += 0.19499888;
            } else {
              result[14] += -0.017955732;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[14] += 0.021184105;
            } else {
              result[14] += -0.06374837;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[14] += 0.15395263;
            } else {
              result[14] += -0.024328856;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58671)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[14] += -0.0014279098;
            } else {
              result[14] += -0.107634604;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
              result[14] += 0.1328261;
            } else {
              result[14] += 0.005135866;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[14] += -0.023740599;
            } else {
              result[14] += 0.1154617;
            }
          } else {
            result[14] += -0.122027665;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25824)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[14] += 0.03410747;
            } else {
              result[14] += -0.101019934;
            }
          } else {
            result[14] += -0.13555959;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
          result[14] += -0.11033615;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)39929)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30457)) {
              result[14] += 0.030267278;
            } else {
              result[14] += 0.278285;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
              result[14] += -0.12342232;
            } else {
              result[14] += 0.10917018;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[14] += -0.11525467;
      } else {
        result[14] += -0.032743;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            result[14] += 0.07844736;
          } else {
            result[14] += -0.08837408;
          }
        } else {
          result[14] += 0.07517883;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          result[14] += -0.09130532;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[14] += 0.039562523;
          } else {
            result[14] += -0.025525892;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
              result[0] += 4.5229834e-05;
            } else {
              result[0] += -0.036600314;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
              result[0] += -0.18380582;
            } else {
              result[0] += -0.01468637;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27865)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
              result[0] += 0.020099489;
            } else {
              result[0] += 0.1410606;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.106859304;
            } else {
              result[0] += 0.0047497563;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += -0.090848766;
        } else {
          result[0] += 0.01641462;
        }
      }
    } else {
      result[0] += -0.09897577;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        result[0] += -0.08668063;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          result[0] += 0.08783342;
        } else {
          result[0] += -0.015494798;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
        result[0] += 0.16253787;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
          result[0] += 0.015741272;
        } else {
          result[0] += -0.011596781;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
              result[1] += -0.005842831;
            } else {
              result[1] += 0.0142833395;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[1] += 0.020715468;
            } else {
              result[1] += -0.08782786;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
            result[1] += -0.018630069;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
              result[1] += 0.20856418;
            } else {
              result[1] += 0.039374;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[1] += 0.03700363;
            } else {
              result[1] += -0.13801536;
            }
          } else {
            result[1] += 0.06826322;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            result[1] += 0.2130464;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
              result[1] += 0.0046569095;
            } else {
              result[1] += -0.07264333;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1143537664)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
              result[1] += 0.028106548;
            } else {
              result[1] += -0.05912528;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[1] += 0.09616957;
            } else {
              result[1] += 0.28235137;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[1] += -0.083035365;
            } else {
              result[1] += 0.021403052;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
              result[1] += 0.24294384;
            } else {
              result[1] += -0.011260656;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += -0.0113211395;
            } else {
              result[1] += -0.10888132;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
              result[1] += -0.1065493;
            } else {
              result[1] += 0.11716713;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
              result[1] += 0.010837044;
            } else {
              result[1] += -0.03173965;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12831)) {
              result[1] += -0.014319312;
            } else {
              result[1] += 0.00035804056;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.09098628;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)47115)) {
              result[2] += 0.0006776075;
            } else {
              result[2] += 0.06539373;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)48906)) {
              result[2] += -0.07284303;
            } else {
              result[2] += 7.05737e-05;
            }
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[2] += 0.011283581;
          } else {
            result[2] += 0.023306627;
          }
        }
      } else {
        result[2] += 0.042464476;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
        result[2] += -0.03246488;
      } else {
        result[2] += -0.009259687;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
      result[2] += 0.08261175;
    } else {
      result[2] += 0.0026767158;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.0006899128;
    } else {
      result[3] += 0.0109758;
    }
  } else {
    result[3] += -0.03109527;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.035116933;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
              result[4] += 0.009479135;
            } else {
              result[4] += 0.04155001;
            }
          } else {
            result[4] += -0.023057183;
          }
        } else {
          result[4] += 0.04139158;
        }
      } else {
        result[4] += -0.008083655;
      }
    }
  } else {
    result[4] += 0.050554886;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[5] += 0.00028951032;
            } else {
              result[5] += -0.119924456;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
              result[5] += 0.029433638;
            } else {
              result[5] += -0.003557103;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            result[5] += 0.064106055;
          } else {
            result[5] += -0.11567868;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
          result[5] += 0.2127681;
        } else {
          result[5] += -0.007694393;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
          result[5] += -0.125585;
        } else {
          result[5] += 0.071823984;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[5] += 0.106105395;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            result[5] += -0.10032613;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[5] += 0.08125801;
            } else {
              result[5] += -0.012804359;
            }
          }
        }
      }
    }
  } else {
    result[5] += 0.07137896;
  }
  result[6] += -0.00032657868;
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)50927)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
              result[7] += 8.126779e-05;
            } else {
              result[7] += -0.011406612;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
              result[7] += 0.038394578;
            } else {
              result[7] += -0.00040531228;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[7] += 0.087463975;
            } else {
              result[7] += -0.03873753;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[7] += -0.004189916;
            } else {
              result[7] += 0.045456223;
            }
          }
        }
      } else {
        result[7] += -0.11138945;
      }
    } else {
      result[7] += 0.14892365;
    }
  } else {
    result[7] += -0.091831796;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += -7.5280745e-06;
            } else {
              result[8] += -0.11224773;
            }
          } else {
            result[8] += 0.15300559;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
              result[8] += 0.12947832;
            } else {
              result[8] += 0.03877393;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += -0.106944695;
            } else {
              result[8] += 0.04483354;
            }
          }
        }
      } else {
        result[8] += -0.12859699;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
              result[8] += 0.03147239;
            } else {
              result[8] += -0.099803545;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[8] += 0.081635065;
            } else {
              result[8] += -0.001633376;
            }
          }
        } else {
          result[8] += -0.15172431;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[8] += 0.14122888;
          } else {
            result[8] += 0.038895886;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[8] += -0.123837166;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[8] += 0.090638936;
            } else {
              result[8] += 0.0021726005;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.12997364;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          result[8] += 0.021334615;
        } else {
          result[8] += 0.0895581;
        }
      } else {
        result[8] += -0.085489735;
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
              result[9] += -5.8327667e-05;
            } else {
              result[9] += 0.09300199;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
              result[9] += -0.04134795;
            } else {
              result[9] += -0.15064032;
            }
          }
        } else {
          result[9] += 0.09145799;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[9] += 0.06894227;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
            result[9] += -0.1732089;
          } else {
            result[9] += -0.050764017;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
          result[9] += -0.09388404;
        } else {
          result[9] += -0.018463198;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51470)) {
              result[9] += 0.11877001;
            } else {
              result[9] += 0.018663287;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[9] += -0.09130487;
            } else {
              result[9] += 0.05709081;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += -0.054594394;
            } else {
              result[9] += 0.09330283;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += -0.082267374;
            } else {
              result[9] += 0.061286658;
            }
          }
        }
      }
    }
  } else {
    result[9] += -0.048318528;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[10] += 0.00020259598;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[10] += -0.0010908677;
          } else {
            result[10] += -0.001648329;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[10] += -0.1389741;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.06278554;
            } else {
              result[10] += -0.076746225;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
            result[10] += 0.08078727;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[10] += -0.086274795;
            } else {
              result[10] += 0.035325166;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
              result[10] += 0.027843574;
            } else {
              result[10] += 0.15010488;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[10] += -0.016667062;
            } else {
              result[10] += -0.13824397;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
            result[10] += -0.06309517;
          } else {
            result[10] += -0.20663099;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[10] += 0.070380695;
            } else {
              result[10] += 0.21495217;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
              result[10] += -0.13969763;
            } else {
              result[10] += 0.020014763;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27096)) {
              result[10] += -0.080440156;
            } else {
              result[10] += 0.00015002057;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1613070592)) {
              result[10] += 0.20440255;
            } else {
              result[10] += 0.0037992438;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[10] += -0.102868944;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[10] += 0.0032750927;
            } else {
              result[10] += 0.10567422;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
              result[10] += -0.080155164;
            } else {
              result[10] += 0.040800273;
            }
          }
        } else {
          result[10] += -0.16256621;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
            result[10] += 0.07852535;
          } else {
            result[10] += 0.1535252;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
              result[10] += 0.0028087236;
            } else {
              result[10] += -0.13522188;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
              result[10] += 0.14499684;
            } else {
              result[10] += 0.0048394855;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[11] += 0.00012998833;
            } else {
              result[11] += -0.014080442;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[11] += 0.09515319;
            } else {
              result[11] += -0.029781034;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[11] += 0.014497567;
            } else {
              result[11] += -0.07675347;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.12701374;
            } else {
              result[11] += 0.010108987;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += -0.136852;
        } else {
          result[11] += 0.12952428;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[11] += -0.16156542;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.1413401;
            } else {
              result[11] += 0.14269985;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.051099237;
            } else {
              result[11] += 0.13352466;
            }
          }
        } else {
          result[11] += -0.14931211;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)14362)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
              result[11] += -0.0027979356;
            } else {
              result[11] += 0.16799304;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
              result[11] += -0.16192523;
            } else {
              result[11] += 0.003884306;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            result[11] += -0.27105185;
          } else {
            result[11] += -0.020050455;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
          result[11] += -0.20879734;
        } else {
          result[11] += 0.13500309;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
            result[11] += 0.083345644;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.10915392;
            } else {
              result[11] += 0.5080657;
            }
          }
        } else {
          result[11] += 0.070148386;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
              result[11] += 0.018293642;
            } else {
              result[11] += -0.13481367;
            }
          } else {
            result[11] += -0.13551675;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
              result[11] += 0.041345924;
            } else {
              result[11] += 0.2606545;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
              result[11] += -0.118941925;
            } else {
              result[11] += 0.013632583;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)44043)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[12] += -8.297454e-05;
            } else {
              result[12] += -0.01578878;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[12] += 0.020944325;
            } else {
              result[12] += 0.23563431;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.05387969;
            } else {
              result[12] += 0.045649156;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
              result[12] += 0.30209622;
            } else {
              result[12] += 0.009426305;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.07730138;
            } else {
              result[12] += -0.07222115;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[12] += 0.3391079;
            } else {
              result[12] += 0.06354569;
            }
          }
        } else {
          result[12] += -0.14681284;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
              result[12] += -0.09443152;
            } else {
              result[12] += -0.007874217;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
              result[12] += 0.009801707;
            } else {
              result[12] += 0.16804865;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[12] += -0.15355104;
          } else {
            result[12] += -0.051406797;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
              result[12] += 0.093409754;
            } else {
              result[12] += -0.057739664;
            }
          } else {
            result[12] += 0.23265387;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
            result[12] += -0.15617259;
          } else {
            result[12] += 0.049607728;
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[12] += 0.08042054;
            } else {
              result[12] += -0.033353645;
            }
          } else {
            result[12] += 0.224751;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1186405888)) {
            result[12] += -0.2022639;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
              result[12] += 0.15096241;
            } else {
              result[12] += -0.13470098;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
              result[12] += -0.06731559;
            } else {
              result[12] += -0.21895756;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.10175038;
            } else {
              result[12] += -0.097335555;
            }
          }
        } else {
          result[12] += 0.22127926;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
              result[12] += -0.014528978;
            } else {
              result[12] += 0.30345666;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
              result[12] += -0.032376956;
            } else {
              result[12] += -0.09832958;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
              result[12] += 0.008662272;
            } else {
              result[12] += 0.1464357;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[12] += -0.10208999;
            } else {
              result[12] += 0.076789655;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)46583)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
              result[12] += 0.040158678;
            } else {
              result[12] += 0.19891049;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
              result[12] += -0.1401833;
            } else {
              result[12] += 0.03567655;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[12] += 0.004341743;
            } else {
              result[12] += -0.021915473;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += -0.015029796;
            } else {
              result[12] += 0.006965788;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[13] += -0.0017098106;
            } else {
              result[13] += -0.13100545;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[13] += -0.079160385;
            } else {
              result[13] += 0.113418855;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
              result[13] += -0.049969293;
            } else {
              result[13] += -0.12920746;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[13] += 0.1384067;
            } else {
              result[13] += -0.042712897;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
            result[13] += 0.02650262;
          } else {
            result[13] += 0.25997427;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
            result[13] += -0.12725624;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
              result[13] += -0.07128612;
            } else {
              result[13] += 0.03507368;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
            result[13] += -0.14188707;
          } else {
            result[13] += 0.05638389;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
            result[13] += 0.15058677;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[13] += -0.12624273;
            } else {
              result[13] += 0.052537583;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
          result[13] += 0.115046255;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            result[13] += -0.10037894;
          } else {
            result[13] += -0.0014848134;
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.021192878;
            } else {
              result[13] += 0.095288746;
            }
          } else {
            result[13] += 0.22243573;
          }
        } else {
          result[13] += -0.12913741;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            result[13] += 0.35295036;
          } else {
            result[13] += 0.055449046;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
              result[13] += -0.10277154;
            } else {
              result[13] += -0.014599919;
            }
          } else {
            result[13] += 0.14097847;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
              result[13] += -0.03302572;
            } else {
              result[13] += -0.109937645;
            }
          } else {
            result[13] += -0.15705888;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2339238656)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
              result[13] += 0.011008672;
            } else {
              result[13] += 0.29837516;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.0071574445;
            } else {
              result[13] += -0.12824997;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
              result[13] += -0.019788196;
            } else {
              result[13] += 0.05866869;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.10479226;
            } else {
              result[13] += -0.008072735;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
              result[13] += -0.0061584646;
            } else {
              result[13] += -0.078545205;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
              result[13] += 0.038642507;
            } else {
              result[13] += 5.7663016e-07;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += -2.2798897e-05;
            } else {
              result[14] += -0.10743426;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[14] += -0.0014995725;
            } else {
              result[14] += -0.118870646;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.09627182;
            } else {
              result[14] += -0.09160143;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[14] += 0.03681718;
            } else {
              result[14] += -0.0047783535;
            }
          }
        }
      } else {
        result[14] += -0.10919589;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        result[14] += -0.12640704;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[14] += -0.057823367;
            } else {
              result[14] += 0.024689227;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[14] += 0.1963577;
            } else {
              result[14] += 0.071334265;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[14] += -0.118137114;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.07671647;
            } else {
              result[14] += -0.06627603;
            }
          }
        }
      }
    }
  } else {
    result[14] += -0.088286534;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[0] += -0.00048773905;
        } else {
          result[0] += -0.0013062985;
        }
      } else {
        result[0] += 0.00083606265;
      }
    } else {
      result[0] += -0.12804562;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[0] += 0.0027833972;
            } else {
              result[0] += 0.010712219;
            }
          } else {
            result[0] += -0.13997531;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[0] += -0.012008318;
            } else {
              result[0] += 0.08394087;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[0] += -0.08644676;
            } else {
              result[0] += 0.020524066;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            result[0] += -0.017697979;
          } else {
            result[0] += -0.11527409;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[0] += -0.106333785;
            } else {
              result[0] += 0.029504955;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[0] += 0.0035183977;
            } else {
              result[0] += 0.06848129;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
          result[0] += -0.02444768;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[0] += 0.008373273;
          } else {
            result[0] += 0.1790585;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
          result[0] += -0.03887824;
        } else {
          result[0] += 0.02694852;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.00024990618;
            } else {
              result[1] += -0.0046983594;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[1] += -0.054561403;
            } else {
              result[1] += 0.0975727;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
              result[1] += -0.026558282;
            } else {
              result[1] += 0.14741647;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[1] += -0.1710141;
            } else {
              result[1] += 0.013346695;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += 0.016960219;
            } else {
              result[1] += 0.09722065;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[1] += 0.31646714;
            } else {
              result[1] += 0.07974426;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[1] += -0.03846964;
            } else {
              result[1] += -0.14643553;
            }
          } else {
            result[1] += 0.07809071;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
              result[1] += -0.028642576;
            } else {
              result[1] += 0.1070789;
            }
          } else {
            result[1] += -0.14771527;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[1] += -0.062566526;
            } else {
              result[1] += -0.18824802;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14612)) {
              result[1] += -0.10561191;
            } else {
              result[1] += 0.15944088;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[1] += 0.07484471;
            } else {
              result[1] += -0.08876806;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
              result[1] += -0.029091882;
            } else {
              result[1] += 0.033158917;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
              result[1] += 0.08036892;
            } else {
              result[1] += -0.016841425;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[1] += 0.22366254;
            } else {
              result[1] += -0.0036527186;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += 0.24390906;
            } else {
              result[1] += 0.116518006;
            }
          } else {
            result[1] += -0.031227335;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
              result[1] += 0.11286097;
            } else {
              result[1] += 0.020367475;
            }
          } else {
            result[1] += -0.13538726;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
              result[1] += -0.058145795;
            } else {
              result[1] += 0.051928516;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
              result[1] += -0.060517948;
            } else {
              result[1] += -0.15486373;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)978331136)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
              result[1] += 0.051594835;
            } else {
              result[1] += 0.21914656;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[1] += 0.011723714;
            } else {
              result[1] += -0.016077982;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1788612096)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[1] += -0.03526121;
            } else {
              result[1] += 0.0056924517;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[1] += 0.083850056;
            } else {
              result[1] += 0.22727679;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += -0.088554904;
            } else {
              result[1] += -0.004537988;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
              result[1] += 0.080175914;
            } else {
              result[1] += -0.0046080346;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[1] += 0.1229933;
            } else {
              result[1] += -0.117066994;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
              result[1] += 0.16346511;
            } else {
              result[1] += -0.03112249;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.05635876;
            } else {
              result[1] += -0.024152292;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[1] += -0.23045228;
            } else {
              result[1] += -0.040153846;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)55338)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41676)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
              result[2] += 0.0011193493;
            } else {
              result[2] += -0.07644394;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41951)) {
              result[2] += 0.1169907;
            } else {
              result[2] += 0.0011810542;
            }
          }
        } else {
          result[2] += -0.10279871;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)56134)) {
          result[2] += 0.061713714;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)56394)) {
            result[2] += -0.044028614;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)56897)) {
              result[2] += 0.06530378;
            } else {
              result[2] += 0.0021440913;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          result[2] += -0.07593935;
        } else {
          result[2] += 0.013313486;
        }
      } else {
        result[2] += 0.020978231;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
      result[2] += 0.077256545;
    } else {
      result[2] += -0.0038527113;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.025898073;
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
      result[3] += 0.019288564;
    } else {
      result[3] += -0.0015277233;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.014198723;
    } else {
      result[4] += -0.029099299;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
      result[4] += 0.034098405;
    } else {
      result[4] += -0.0029809445;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += 0.00019855011;
            } else {
              result[5] += 0.20092887;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[5] += -0.10071653;
            } else {
              result[5] += -0.035204146;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
            result[5] += -0.09587356;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[5] += 0.3720422;
            } else {
              result[5] += 0.057038635;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[5] += -0.1219589;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[5] += -0.07327716;
            } else {
              result[5] += 0.052037332;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
            result[5] += -0.13636985;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
              result[5] += 0.08844803;
            } else {
              result[5] += -0.058953118;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
            result[5] += 0.09638024;
          } else {
            result[5] += -0.08807984;
          }
        } else {
          result[5] += -0.11313208;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)41745)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
              result[5] += 0.059434053;
            } else {
              result[5] += -0.087292776;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[5] += 0.0011617659;
            } else {
              result[5] += 0.2544597;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[5] += -0.028604472;
            } else {
              result[5] += 0.0865798;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
              result[5] += -0.12949923;
            } else {
              result[5] += 0.031966783;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
      result[5] += 0.020187922;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
        result[5] += -0.10036564;
      } else {
        result[5] += 0.0024534941;
      }
    }
  }
  result[6] += -0.0002693492;
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
              result[7] += -0.00019312886;
            } else {
              result[7] += 0.011003094;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54003)) {
              result[7] += -0.026102759;
            } else {
              result[7] += 0.001964992;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54154)) {
              result[7] += 0.05483808;
            } else {
              result[7] += -0.008626719;
            }
          } else {
            result[7] += 0.10518696;
          }
        }
      } else {
        result[7] += 0.08968988;
      }
    } else {
      result[7] += 0.07745846;
    }
  } else {
    result[7] += 0.09007589;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)35047)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
              result[8] += 0.0012266607;
            } else {
              result[8] += 0.04001991;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
              result[8] += -0.020023314;
            } else {
              result[8] += 5.7212615e-06;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[8] += 0.008687359;
            } else {
              result[8] += -0.05714258;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[8] += -0.13189816;
            } else {
              result[8] += -0.044454776;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1613070592)) {
              result[8] += -0.059726868;
            } else {
              result[8] += 0.12509175;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
              result[8] += 0.04780853;
            } else {
              result[8] += -0.085891284;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
            result[8] += 0.3991259;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
              result[8] += -0.035832047;
            } else {
              result[8] += 0.086672425;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
            result[8] += -0.12641674;
          } else {
            result[8] += 0.23493178;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
              result[8] += -0.11363519;
            } else {
              result[8] += 0.11265467;
            }
          } else {
            result[8] += 0.44197312;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
          result[8] += 0.17846736;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
              result[8] += -0.0445055;
            } else {
              result[8] += -0.13951007;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
              result[8] += 0.21587946;
            } else {
              result[8] += -0.052316483;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
              result[8] += -0.06407622;
            } else {
              result[8] += 0.061549686;
            }
          } else {
            result[8] += 0.3179599;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25824)) {
            result[8] += -0.13255732;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
              result[8] += 0.12655699;
            } else {
              result[8] += -0.07884532;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2786661888)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[8] += 0.14942162;
            } else {
              result[8] += -0.03425399;
            }
          } else {
            result[8] += 0.3602997;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3151783168)) {
            result[8] += -0.10873636;
          } else {
            result[8] += 0.0134029025;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
              result[8] += 0.006887576;
            } else {
              result[8] += 0.31373486;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[8] += 0.16558848;
            } else {
              result[8] += -0.119054556;
            }
          }
        } else {
          result[8] += 0.71544385;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[8] += -0.12798715;
        } else {
          result[8] += 0.067939855;
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[9] += -9.877318e-06;
            } else {
              result[9] += 0.081895836;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[9] += -0.09173895;
            } else {
              result[9] += 0.07380704;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[9] += -0.05374865;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[9] += 0.11535325;
            } else {
              result[9] += 0.0054811863;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
          result[9] += -0.11929623;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
            result[9] += -0.05169993;
          } else {
            result[9] += 0.080746464;
          }
        }
      }
    } else {
      result[9] += 0.10056881;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        result[9] += -0.23231423;
      } else {
        result[9] += 0.08934834;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[9] += -0.023965597;
        } else {
          result[9] += -0.10448363;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
            result[9] += 0.1212871;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
              result[9] += -0.1404055;
            } else {
              result[9] += 0.046189994;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[9] += 0.085246354;
            } else {
              result[9] += -0.16232643;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
              result[9] += 0.08513308;
            } else {
              result[9] += -0.023973871;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[10] += -8.3121486e-05;
            } else {
              result[10] += 0.030287184;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[10] += -0.15263064;
            } else {
              result[10] += -0.035273977;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
            result[10] += -0.08185001;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[10] += 0.16374438;
            } else {
              result[10] += -0.009423707;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
              result[10] += -0.1896845;
            } else {
              result[10] += -0.04838943;
            }
          } else {
            result[10] += -0.046616025;
          }
        } else {
          result[10] += 0.108097605;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
          result[10] += 0.2205823;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27865)) {
              result[10] += 0.05920357;
            } else {
              result[10] += -0.15761575;
            }
          } else {
            result[10] += 0.16043404;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
            result[10] += -0.18653892;
          } else {
            result[10] += -0.05063802;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
            result[10] += 0.023532426;
          } else {
            result[10] += 0.17881629;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)27865)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20245)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
              result[10] += 0.11241796;
            } else {
              result[10] += -0.08620382;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.1662261;
            } else {
              result[10] += 0.012938313;
            }
          }
        } else {
          result[10] += -0.19028027;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)35552)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[10] += -0.02753896;
          } else {
            result[10] += 0.24553655;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
            result[10] += -0.2062252;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
              result[10] += 0.07621932;
            } else {
              result[10] += -0.07225956;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
        result[10] += 0.15579277;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
              result[10] += 0.03984675;
            } else {
              result[10] += 0.2042825;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[10] += -0.023325792;
            } else {
              result[10] += 0.09601789;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[10] += -0.1467281;
            } else {
              result[10] += -0.005633339;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
              result[10] += 0.07870625;
            } else {
              result[10] += -0.029869063;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[11] += 0.0001207543;
            } else {
              result[11] += -0.0071619055;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
              result[11] += 0.01656065;
            } else {
              result[11] += -0.052939367;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[11] += 0.006483722;
            } else {
              result[11] += 0.106021695;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
              result[11] += -0.10477556;
            } else {
              result[11] += -0.026025051;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[11] += -0.046605363;
        } else {
          result[11] += 0.020180993;
        }
      }
    } else {
      result[11] += -0.08845706;
    }
  } else {
    result[11] += -0.088511884;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
              result[12] += -0.001515967;
            } else {
              result[12] += 0.020773256;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += -0.026058983;
            } else {
              result[12] += -0.14466488;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
              result[12] += 0.017532866;
            } else {
              result[12] += -0.09230104;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
              result[12] += 0.3067672;
            } else {
              result[12] += 0.032360774;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[12] += 0.0039760326;
            } else {
              result[12] += -0.031864885;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
              result[12] += 0.055251393;
            } else {
              result[12] += -0.135917;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
              result[12] += -0.0018271679;
            } else {
              result[12] += 0.0048010894;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[12] += 0.028137887;
            } else {
              result[12] += -0.04617129;
            }
          }
        }
      }
    } else {
      result[12] += -0.084427215;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[12] += -0.04036127;
    } else {
      result[12] += -0.009985581;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += 0.0001623025;
            } else {
              result[13] += 0.023024108;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1924085632)) {
              result[13] += 0.01915204;
            } else {
              result[13] += -0.070145376;
            }
          }
        } else {
          result[13] += -0.07884702;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[13] += -0.13334875;
          } else {
            result[13] += 0.015688162;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
              result[13] += 0.13069549;
            } else {
              result[13] += 0.022874782;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[13] += -0.06683358;
            } else {
              result[13] += 0.03483793;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
            result[13] += 0.07196134;
          } else {
            result[13] += -0.03712538;
          }
        } else {
          result[13] += 0.09810177;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
              result[13] += -0.032684125;
            } else {
              result[13] += 0.051508363;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
              result[13] += -0.023761027;
            } else {
              result[13] += -0.11389693;
            }
          }
        } else {
          result[13] += 0.09602307;
        }
      }
    }
  } else {
    result[13] += -0.08371552;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
              result[14] += -0.0012090073;
            } else {
              result[14] += -0.07486837;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
              result[14] += 0.115509175;
            } else {
              result[14] += 0.0040795365;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38113)) {
              result[14] += -0.055245552;
            } else {
              result[14] += 0.004109222;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.120070726;
            } else {
              result[14] += -0.023461284;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            result[14] += -0.13115378;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[14] += 0.03308144;
            } else {
              result[14] += -0.12972535;
            }
          }
        } else {
          result[14] += 0.1973105;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
              result[14] += 0.0012499198;
            } else {
              result[14] += 0.032376282;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[14] += 0.2591357;
            } else {
              result[14] += 0.031085173;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[14] += 0.0039730035;
            } else {
              result[14] += -0.07323642;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += -0.14042568;
            } else {
              result[14] += -0.030478334;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
              result[14] += -0.10712579;
            } else {
              result[14] += 0.15369895;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
              result[14] += 0.28756812;
            } else {
              result[14] += 0.07146845;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[14] += -0.12000201;
            } else {
              result[14] += -0.0018941218;
            }
          } else {
            result[14] += 0.12791502;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[14] += -0.11728827;
      } else {
        result[14] += -0.009946083;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
          result[14] += 0.065348536;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            result[14] += -0.043212138;
          } else {
            result[14] += 0.025407882;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
          result[14] += -0.078041844;
        } else {
          result[14] += -0.013540524;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[0] += -0.00044887562;
            } else {
              result[0] += -0.0011633504;
            }
          } else {
            result[0] += 0.00070604845;
          }
        } else {
          result[0] += -0.12552947;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
          result[0] += -0.06777447;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
              result[0] += 0.0018311264;
            } else {
              result[0] += 0.13470414;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[0] += -0.052506424;
            } else {
              result[0] += 0.0035431113;
            }
          }
        }
      }
    } else {
      result[0] += -0.09288212;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
      result[0] += 0.10731705;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
        result[0] += -0.055799376;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
          result[0] += 0.07154172;
        } else {
          result[0] += -0.03721442;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[1] += 7.159552e-05;
            } else {
              result[1] += -0.01722856;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
              result[1] += 0.027726883;
            } else {
              result[1] += -0.06224016;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
              result[1] += -0.013905335;
            } else {
              result[1] += -0.1303732;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
              result[1] += 0.3040539;
            } else {
              result[1] += -0.0002618676;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
          result[1] += -0.13012561;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41485)) {
              result[1] += 0.11367813;
            } else {
              result[1] += -0.005423538;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
              result[1] += -0.14238255;
            } else {
              result[1] += 0.011066871;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[1] += -0.13706258;
          } else {
            result[1] += 0.008949975;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += -0.10878277;
            } else {
              result[1] += 0.005317967;
            }
          } else {
            result[1] += 0.11351279;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[1] += -0.035567086;
            } else {
              result[1] += 0.053274203;
            }
          } else {
            result[1] += -0.09527368;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            result[1] += -0.024535326;
          } else {
            result[1] += 0.09424153;
          }
        }
      }
    }
  } else {
    result[1] += 0.07974349;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)46100)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)45299)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
              result[2] += -0.00025433127;
            } else {
              result[2] += 0.023800552;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)45575)) {
              result[2] += 0.13092591;
            } else {
              result[2] += 0.014252355;
            }
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)49419)) {
              result[2] += -0.023924137;
            } else {
              result[2] += 0.008519093;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)58434)) {
              result[2] += -0.10051388;
            } else {
              result[2] += 0.0052869604;
            }
          }
        }
      } else {
        result[2] += 0.03495489;
      }
    } else {
      result[2] += -0.025819259;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
      result[2] += 0.043330584;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
          result[2] += -0.014547423;
        } else {
          result[2] += 0.0070698145;
        }
      } else {
        result[2] += 0.03525377;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.0015102961;
    } else {
      result[3] += 0.012499433;
    }
  } else {
    result[3] += -0.029137617;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[4] += 0.01367725;
        } else {
          result[4] += -0.02632269;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)25002)) {
          result[4] += 0.033369884;
        } else {
          result[4] += 0.009320416;
        }
      }
    } else {
      result[4] += -0.023928864;
    }
  } else {
    result[4] += 0.034427192;
  }
}

