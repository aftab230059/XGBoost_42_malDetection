
#include "header.h"

void predict_unit21(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)29570)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)27491)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
              result[12] += 0.0011279635;
            } else {
              result[12] += -0.03661767;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[12] += 0.02853151;
            } else {
              result[12] += 0.17662627;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)32405)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32132)) {
              result[12] += -0.015306447;
            } else {
              result[12] += -0.09967619;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
              result[12] += -0.00096606516;
            } else {
              result[12] += 0.023102608;
            }
          }
        }
      } else {
        result[12] += -0.042877115;
      }
    } else {
      result[12] += -0.1336498;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
      result[12] += -0.14230964;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
          result[12] += 0.11455074;
        } else {
          result[12] += 0.033843607;
        }
      } else {
        result[12] += -0.07206663;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
              result[13] += 0.0012421093;
            } else {
              result[13] += 0.057528537;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
              result[13] += 0.011615427;
            } else {
              result[13] += -0.05304785;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
              result[13] += 0.022905443;
            } else {
              result[13] += 0.29736522;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[13] += -0.14365838;
            } else {
              result[13] += 0.064112596;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
            result[13] += -0.12902582;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
              result[13] += -0.081144094;
            } else {
              result[13] += 0.23539305;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[13] += -0.14732586;
          } else {
            result[13] += 0.07820724;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
          result[13] += 0.15901154;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)862)) {
            result[13] += -0.10207851;
          } else {
            result[13] += 0.12808086;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[13] += 0.011995651;
            } else {
              result[13] += -0.14742169;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1879)) {
              result[13] += 0.051462214;
            } else {
              result[13] += 0.12524423;
            }
          }
        } else {
          result[13] += 0.13777614;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)3467)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            result[13] += -0.15326257;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
              result[13] += -0.052370463;
            } else {
              result[13] += -0.13434437;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
            result[13] += 0.11714408;
          } else {
            result[13] += -0.029249156;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
          result[13] += -0.11752612;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
            result[13] += 0.138952;
          } else {
            result[13] += -0.09651414;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
              result[13] += 0.30987835;
            } else {
              result[13] += -0.15468615;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[13] += -0.009502451;
            } else {
              result[13] += -0.12976652;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
              result[13] += 0.09457042;
            } else {
              result[13] += 0.26687735;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[13] += 0.045751654;
            } else {
              result[13] += -0.16725607;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42428)) {
              result[13] += 0.11411553;
            } else {
              result[13] += -0.06040562;
            }
          } else {
            result[13] += 0.20531522;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[13] += -0.17695208;
            } else {
              result[13] += -0.08458372;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
              result[13] += -0.0052245623;
            } else {
              result[13] += 0.054275792;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[14] += 0.00022936979;
            } else {
              result[14] += -0.09060017;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
              result[14] += -0.059379354;
            } else {
              result[14] += 0.033289388;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
              result[14] += -0.15032591;
            } else {
              result[14] += -0.09160362;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[14] += 0.1089179;
            } else {
              result[14] += -0.021599855;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
              result[14] += -0.025337735;
            } else {
              result[14] += 0.118786536;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[14] += -0.16929807;
            } else {
              result[14] += 0.09457985;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
              result[14] += -0.2626122;
            } else {
              result[14] += 0.091665745;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
              result[14] += 0.08654284;
            } else {
              result[14] += 0.0038430993;
            }
          }
        }
      }
    } else {
      result[14] += -0.13103434;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        result[14] += -0.14294201;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
              result[14] += -0.003728696;
            } else {
              result[14] += 0.1286516;
            }
          } else {
            result[14] += -0.091872066;
          }
        } else {
          result[14] += -0.12653275;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        result[14] += 0.14635332;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
          result[14] += -0.11689021;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += 0.10984383;
            } else {
              result[14] += 0.02700651;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
              result[14] += -0.0974428;
            } else {
              result[14] += 0.037435085;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1631175168)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[0] += 0.00063375704;
            } else {
              result[0] += -0.11372699;
            }
          } else {
            result[0] += -0.14828244;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += 0.039309125;
            } else {
              result[0] += 0.15283301;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
              result[0] += 0.118491985;
            } else {
              result[0] += -0.1369456;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1565489664)) {
            result[0] += 0.14601575;
          } else {
            result[0] += 0.0010082095;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1565489664)) {
              result[0] += 0.07904647;
            } else {
              result[0] += -0.013957313;
            }
          } else {
            result[0] += -0.14768389;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
        result[0] += -0.112670094;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
          result[0] += 0.5538375;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += 0.100023165;
            } else {
              result[0] += -0.12294584;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += -0.08301343;
            } else {
              result[0] += 0.1641117;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[0] += -0.14188693;
            } else {
              result[0] += 0.031316087;
            }
          } else {
            result[0] += -0.146103;
          }
        } else {
          result[0] += 0.052285053;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
          result[0] += -0.10756303;
        } else {
          result[0] += 0.1311293;
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            result[0] += -0.1303481;
          } else {
            result[0] += -0.034641612;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
              result[0] += 0.10141496;
            } else {
              result[0] += -0.000100999176;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35152)) {
              result[0] += -0.122727;
            } else {
              result[0] += 0.016360829;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
            result[0] += -0.07930304;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)420)) {
              result[0] += 0.14418893;
            } else {
              result[0] += -0.0032367255;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
            result[0] += -0.1308071;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += -0.025311964;
            } else {
              result[0] += 0.06804885;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
              result[1] += -0.00071886904;
            } else {
              result[1] += 0.01744126;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.14726146;
            } else {
              result[1] += -0.018378625;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)54077)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[1] += -0.15415125;
            } else {
              result[1] += -0.011158971;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
              result[1] += 0.0169021;
            } else {
              result[1] += -0.14710239;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2221068800)) {
              result[1] += 0.001077159;
            } else {
              result[1] += 0.068576396;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)849185600)) {
              result[1] += 0.020678002;
            } else {
              result[1] += 0.14026095;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
              result[1] += 0.024780273;
            } else {
              result[1] += -0.111615606;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
              result[1] += 0.109808676;
            } else {
              result[1] += 0.010607625;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)323)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
              result[1] += -0.038341276;
            } else {
              result[1] += -0.10674623;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
              result[1] += -0.15249614;
            } else {
              result[1] += -0.075504474;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)318)) {
            result[1] += 0.18706354;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
              result[1] += 0.15470146;
            } else {
              result[1] += -0.13090535;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
              result[1] += -0.0815599;
            } else {
              result[1] += 0.22764711;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2578545664)) {
              result[1] += 0.07123955;
            } else {
              result[1] += -0.032110173;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            result[1] += -0.16139233;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[1] += 0.03104588;
            } else {
              result[1] += -0.14834297;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)479)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          result[1] += -0.1488446;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
              result[1] += 0.005809577;
            } else {
              result[1] += -0.074977554;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[1] += 0.09405656;
            } else {
              result[1] += -0.11602006;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[1] += 0.14148276;
            } else {
              result[1] += 0.062485017;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[1] += -0.13727102;
            } else {
              result[1] += 0.13735965;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += -0.14348127;
            } else {
              result[1] += 0.051963452;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
              result[1] += 0.008439824;
            } else {
              result[1] += 0.10898065;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)868466368)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)678742336)) {
              result[1] += -0.04698065;
            } else {
              result[1] += -0.41660994;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)644409920)) {
              result[1] += -0.023347821;
            } else {
              result[1] += 0.17605881;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)27219)) {
              result[1] += -0.17458332;
            } else {
              result[1] += 0.08099535;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39062)) {
              result[1] += -0.0592714;
            } else {
              result[1] += -0.21958034;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)966552000)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
            result[1] += 0.2597111;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
              result[1] += -0.17772923;
            } else {
              result[1] += 0.10108282;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5909)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
              result[1] += -0.07823143;
            } else {
              result[1] += 0.1483797;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
              result[1] += -0.013328413;
            } else {
              result[1] += 0.017151069;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)19951)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)16519)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)15049)) {
              result[2] += -0.0021386181;
            } else {
              result[2] += 0.22965635;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)18473)) {
              result[2] += -0.09026031;
            } else {
              result[2] += -0.0037770064;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
            result[2] += -0.14001666;
          } else {
            result[2] += -0.0029222122;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)24390)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)20521)) {
              result[2] += 0.13858494;
            } else {
              result[2] += -0.02425727;
            }
          } else {
            result[2] += 0.14864422;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)25367)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)24830)) {
              result[2] += -0.004968932;
            } else {
              result[2] += -0.0750151;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)25635)) {
              result[2] += 0.2954411;
            } else {
              result[2] += -0.0018774689;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)3172)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2256)) {
          result[2] += 0.007807521;
        } else {
          result[2] += 0.034739334;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)16637)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)14390)) {
              result[2] += 0.002254519;
            } else {
              result[2] += 0.034050856;
            }
          } else {
            result[2] += -0.1437608;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)18628)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)18039)) {
              result[2] += 0.04277335;
            } else {
              result[2] += 0.1251034;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)18913)) {
              result[2] += -0.122685246;
            } else {
              result[2] += 0.0084291855;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.1002453;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.10768719;
    } else {
      result[3] += -0.0015674037;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.08173109;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
        result[3] += -0.07596642;
      } else {
        result[3] += 0.049626876;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)31100)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)29953)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)29679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)29128)) {
              result[4] += 0.0021037476;
            } else {
              result[4] += -0.070345536;
            }
          } else {
            result[4] += 0.0598359;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)30238)) {
            result[4] += -0.13793129;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)30524)) {
              result[4] += 0.06110092;
            } else {
              result[4] += -0.05021837;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32763)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)31693)) {
            result[4] += 0.010285074;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32230)) {
              result[4] += 0.13440672;
            } else {
              result[4] += 0.025823975;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)34318)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)33096)) {
              result[4] += -0.019714655;
            } else {
              result[4] += -0.14049923;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)34979)) {
              result[4] += 0.16249259;
            } else {
              result[4] += 0.004592818;
            }
          }
        }
      }
    } else {
      result[4] += 0.07583363;
    }
  } else {
    result[4] += -0.100078724;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)9329)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53768)) {
              result[5] += 0.00043766445;
            } else {
              result[5] += -0.1746256;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[5] += -0.14291142;
            } else {
              result[5] += 0.14162058;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
              result[5] += -0.037914116;
            } else {
              result[5] += -0.15449558;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += -0.14897417;
            } else {
              result[5] += 0.013259121;
            }
          }
        }
      } else {
        result[5] += -0.15396896;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)398755392)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)38644)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[5] += 0.006000966;
            } else {
              result[5] += -0.24705793;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[5] += -0.09686595;
            } else {
              result[5] += 0.15284397;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
              result[5] += 0.086938635;
            } else {
              result[5] += -0.099314876;
            }
          } else {
            result[5] += 0.17850347;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
              result[5] += 0.09533976;
            } else {
              result[5] += -0.12903067;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)868466368)) {
              result[5] += 0.04185758;
            } else {
              result[5] += 0.14307085;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[5] += -0.030761234;
            } else {
              result[5] += 0.12128714;
            }
          } else {
            result[5] += -0.22087485;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
            result[5] += -0.15403867;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[5] += -0.12831616;
            } else {
              result[5] += 0.16955861;
            }
          }
        } else {
          result[5] += -0.1590817;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
          result[5] += -0.1557714;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47457)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[5] += 0.15976909;
            } else {
              result[5] += -0.15104425;
            }
          } else {
            result[5] += -0.14842156;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1280068736)) {
              result[5] += 0.03321234;
            } else {
              result[5] += -0.046494514;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[5] += -0.16854423;
            } else {
              result[5] += 0.07557624;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[5] += 0.17768335;
            } else {
              result[5] += -0.08205166;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
              result[5] += -0.15896979;
            } else {
              result[5] += 0.059411965;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[5] += 0.01757262;
        } else {
          result[5] += -0.15829687;
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[23].missing != -1) && (data[23].fvalue < (float)12)) {
      result[6] += 0.00013775163;
    } else {
      result[6] += 0.017706566;
    }
  } else {
    result[6] += -0.100064196;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)58145)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
              result[7] += 0.00048766934;
            } else {
              result[7] += -0.021348648;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
              result[7] += 0.07940718;
            } else {
              result[7] += -0.011816259;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)16)) {
              result[7] += -0.007584129;
            } else {
              result[7] += 0.27241325;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1565489664)) {
              result[7] += -0.07955986;
            } else {
              result[7] += -0.0030161045;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[7] += -0.046274025;
            } else {
              result[7] += -0.1878063;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)950050240)) {
              result[7] += 0.14436716;
            } else {
              result[7] += -0.03584041;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1000793920)) {
              result[7] += -0.031456396;
            } else {
              result[7] += 0.17841485;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
              result[7] += 0.090816714;
            } else {
              result[7] += -0.014964582;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          result[7] += 0.011337093;
        } else {
          result[7] += 0.23590893;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)868466368)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)849185600)) {
              result[7] += 0.1677311;
            } else {
              result[7] += -0.15708576;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)799135808)) {
              result[7] += -0.10824584;
            } else {
              result[7] += -0.0034309034;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1130557440)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)918588480)) {
              result[7] += 0.050752778;
            } else {
              result[7] += 0.21587662;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[7] += -0.06909307;
            } else {
              result[7] += -0.0103710275;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1795638272)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
              result[7] += -0.0481895;
            } else {
              result[7] += 0.23032637;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)315034144)) {
              result[7] += -0.0508446;
            } else {
              result[7] += 0.04521982;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2299985664)) {
            result[7] += -0.014724007;
          } else {
            result[7] += -0.1886336;
          }
        }
      } else {
        result[7] += 0.20594513;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
        result[7] += -0.16053776;
      } else {
        result[7] += -0.028283013;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 1.31941915e-05;
            } else {
              result[8] += -0.14941706;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[8] += 0.14903332;
            } else {
              result[8] += 0.05991989;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[8] += -0.1523132;
          } else {
            result[8] += 0.076371476;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
              result[8] += 0.15343235;
            } else {
              result[8] += -0.2486694;
            }
          } else {
            result[8] += 0.15660211;
          }
        } else {
          result[8] += -0.06173685;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
        result[8] += -0.16391653;
      } else {
        result[8] += 0.11319327;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)262)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
          result[8] += 0.16965757;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
            result[8] += -0.0173018;
          } else {
            result[8] += 0.034837257;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[8] += -0.37722057;
            } else {
              result[8] += 0.027505232;
            }
          } else {
            result[8] += 0.09377219;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
            result[8] += 0.17168747;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[8] += 0.12568411;
            } else {
              result[8] += -0.23022372;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            result[8] += 0.14619017;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[8] += 0.14405067;
            } else {
              result[8] += -0.13893993;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[8] += -0.14167413;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[8] += 0.07484522;
            } else {
              result[8] += -0.10785125;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            result[8] += 0.13911828;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[8] += -0.4196544;
            } else {
              result[8] += -0.022949737;
            }
          }
        } else {
          result[8] += -0.1425245;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)23617)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[9] += 0.00010148894;
            } else {
              result[9] += 0.12933496;
            }
          } else {
            result[9] += -0.13428499;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)266309232)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[9] += -0.072558396;
            } else {
              result[9] += -0.16081014;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.13115904;
            } else {
              result[9] += 0.03341671;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[9] += -0.13754393;
          } else {
            result[9] += -0.05167837;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
            result[9] += 0.018926244;
          } else {
            result[9] += 0.15970144;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)33879)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
          result[9] += 0.08155942;
        } else {
          result[9] += -0.1771067;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)159697)) {
            result[9] += -0.1460929;
          } else {
            result[9] += 0.07814544;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[9] += 0.13130777;
            } else {
              result[9] += -0.14478391;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
              result[9] += 0.15636152;
            } else {
              result[9] += -0.10414775;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
      result[9] += 0.14674135;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
        result[9] += 0.13902451;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
            result[9] += 0.12869704;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
              result[9] += -0.17057821;
            } else {
              result[9] += -0.07326919;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31372)) {
              result[9] += 0.008780546;
            } else {
              result[9] += 0.1511688;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
              result[9] += 0.012193683;
            } else {
              result[9] += -0.04268547;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)320)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)627447552)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
              result[10] += 0.00038785854;
            } else {
              result[10] += 0.124364115;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.13708562;
            } else {
              result[10] += -0.013961662;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)280175584)) {
              result[10] += -0.28808743;
            } else {
              result[10] += -0.012840354;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15721)) {
              result[10] += 0.06914977;
            } else {
              result[10] += 0.0027632192;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
              result[10] += 0.030517438;
            } else {
              result[10] += 0.12760624;
            }
          } else {
            result[10] += -0.12623817;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            result[10] += 0.13599817;
          } else {
            result[10] += -0.04024421;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
        result[10] += -0.1442182;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
          result[10] += 0.17802179;
        } else {
          result[10] += -0.118853055;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35306)) {
        result[10] += -0.12006534;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
          result[10] += 0.2508656;
        } else {
          result[10] += 0.12478095;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
        result[10] += -0.1555459;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
          result[10] += 0.13067393;
        } else {
          result[10] += -0.08751218;
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
              result[11] += -0.0013894376;
            } else {
              result[11] += 0.0022031013;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[11] += -0.1489597;
            } else {
              result[11] += 0.00072758785;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[11] += 0.103996344;
            } else {
              result[11] += -0.12387652;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
              result[11] += -0.13012764;
            } else {
              result[11] += 0.01203233;
            }
          }
        }
      } else {
        result[11] += -0.18095103;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
          result[11] += 0.13007967;
        } else {
          result[11] += -0.19501747;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
          result[11] += 0.14604698;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
              result[11] += 0.12471089;
            } else {
              result[11] += -0.34081736;
            }
          } else {
            result[11] += 0.12977757;
          }
        }
      }
    }
  } else {
    result[11] += -0.1371583;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1923645952)) {
              result[12] += -0.00041827012;
            } else {
              result[12] += -0.081658795;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
              result[12] += 0.061077584;
            } else {
              result[12] += 0.0066938787;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[12] += -0.1499686;
            } else {
              result[12] += -0.083156824;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)950050240)) {
              result[12] += -0.010214923;
            } else {
              result[12] += 0.00563569;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
              result[12] += 0.008275041;
            } else {
              result[12] += -0.07857457;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1795638272)) {
              result[12] += -0.05034422;
            } else {
              result[12] += 0.0007860385;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[12] += -0.14096253;
            } else {
              result[12] += 0.044255577;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.12964962;
            } else {
              result[12] += -0.088241406;
            }
          }
        }
      }
    } else {
      result[12] += -0.1315901;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
      result[12] += -0.14097998;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
          result[12] += 0.11034664;
        } else {
          result[12] += 0.027782336;
        }
      } else {
        result[12] += -0.066153154;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[13] += 0.00088986446;
            } else {
              result[13] += -0.10188463;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[13] += 0.120464966;
            } else {
              result[13] += 0.0045504365;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)695816320)) {
              result[13] += 0.00036649982;
            } else {
              result[13] += -0.13501689;
            }
          } else {
            result[13] += 0.108519286;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1747430528)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
              result[13] += -0.13071065;
            } else {
              result[13] += 0.08380005;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
              result[13] += 0.05167156;
            } else {
              result[13] += -0.08887586;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
              result[13] += 0.4429126;
            } else {
              result[13] += -0.09053926;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
              result[13] += 0.063030615;
            } else {
              result[13] += -0.03502697;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
        result[13] += -0.12566124;
      } else {
        result[13] += 0.0030738406;
      }
    }
  } else {
    result[13] += -0.122159675;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[14] += -3.948568e-05;
            } else {
              result[14] += -0.13534477;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.14850473;
            } else {
              result[14] += 0.014042708;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
            result[14] += 0.13248695;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[14] += -0.110990286;
            } else {
              result[14] += 0.0481067;
            }
          }
        }
      } else {
        result[14] += -0.1420086;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[14] += 0.1449127;
        } else {
          result[14] += -0.075655505;
        }
      } else {
        result[14] += -0.1308077;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)41648)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)40597)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1878)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23617)) {
              result[14] += 0.07869005;
            } else {
              result[14] += -0.049881797;
            }
          } else {
            result[14] += -0.13099618;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
              result[14] += -0.31703568;
            } else {
              result[14] += -0.053690955;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.01538637;
            } else {
              result[14] += -0.08932717;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
            result[14] += -0.07447696;
          } else {
            result[14] += -0.0052673826;
          }
        } else {
          result[14] += -0.59853524;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
            result[14] += -0.15793881;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.060546838;
            } else {
              result[14] += -0.05992574;
            }
          }
        } else {
          result[14] += -0.3150537;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[14] += 0.00013914968;
            } else {
              result[14] += 0.13412444;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.029821472;
            } else {
              result[14] += -0.08543089;
            }
          }
        } else {
          result[14] += -0.09809353;
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1631175168)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[0] += 0.00018329931;
            } else {
              result[0] += 0.05361549;
            }
          } else {
            result[0] += -0.14364555;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.09500862;
            } else {
              result[0] += 0.106989816;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
              result[0] += 0.15644959;
            } else {
              result[0] += -0.10816474;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1565489664)) {
            result[0] += 0.13624348;
          } else {
            result[0] += -0.0011106662;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1565489664)) {
              result[0] += 0.072356;
            } else {
              result[0] += -0.015600153;
            }
          } else {
            result[0] += -0.14459294;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[0] += -0.111281194;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
          result[0] += -0.1020818;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            result[0] += 0.39511833;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += 0.00958962;
            } else {
              result[0] += 0.15870164;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
          result[0] += -0.14114192;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
              result[0] += -0.09748735;
            } else {
              result[0] += 0.10457527;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[0] += -0.14483085;
            } else {
              result[0] += 0.044643234;
            }
          }
        }
      } else {
        result[0] += 0.08546575;
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            result[0] += -0.1270034;
          } else {
            result[0] += -0.034035657;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
              result[0] += 0.09331417;
            } else {
              result[0] += 0.0031842256;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
              result[0] += 0.018564854;
            } else {
              result[0] += -0.12759948;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
            result[0] += -0.07569081;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)420)) {
              result[0] += 0.14050418;
            } else {
              result[0] += -0.00090247864;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
            result[0] += -0.12845464;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += -0.02276424;
            } else {
              result[0] += 0.057952058;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
              result[1] += -0.0003833973;
            } else {
              result[1] += 0.013565984;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
              result[1] += -0.00040849944;
            } else {
              result[1] += -0.07403477;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2371757312)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
              result[1] += 0.1171241;
            } else {
              result[1] += 0.80257314;
            }
          } else {
            result[1] += -0.13912433;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9820)) {
            result[1] += -0.13436727;
          } else {
            result[1] += 0.33266;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
            result[1] += -0.15061997;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
              result[1] += 0.13623762;
            } else {
              result[1] += -0.1336691;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1095392640)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)782316608)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)695816320)) {
              result[1] += -0.008085538;
            } else {
              result[1] += 0.37838593;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[1] += -0.14248468;
            } else {
              result[1] += -0.00013135928;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1130557440)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[1] += 0.9060589;
            } else {
              result[1] += 0.26686156;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[1] += 0.21989031;
            } else {
              result[1] += 0.013569439;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)42926)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17067)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
              result[1] += -0.05067518;
            } else {
              result[1] += 0.35783288;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
              result[1] += -0.14587784;
            } else {
              result[1] += -0.044136103;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
              result[1] += 0.004862545;
            } else {
              result[1] += 0.6804113;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[1] += -0.1431841;
            } else {
              result[1] += 0.12950912;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.13089952;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)48039)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)47795)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)45044)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)44853)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)43217)) {
              result[2] += 0.00011709758;
            } else {
              result[2] += 0.07873722;
            }
          } else {
            result[2] += -0.1400243;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)45379)) {
            result[2] += 0.25562838;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
              result[2] += 0.06638368;
            } else {
              result[2] += -0.037303302;
            }
          }
        }
      } else {
        result[2] += 0.28070432;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)48806)) {
        result[2] += -0.11701404;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)63458)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)62881)) {
              result[2] += 0.0014128807;
            } else {
              result[2] += 0.5621995;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)63665)) {
              result[2] += -0.0047050626;
            } else {
              result[2] += -0.019075043;
            }
          }
        } else {
          result[2] += -0.12170737;
        }
      }
    }
  } else {
    result[2] += -0.09659948;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.104219496;
    } else {
      result[3] += -0.0013259371;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.07948708;
    } else {
      result[3] += -0.015340524;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)6065)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[4] += -0.0016694994;
            } else {
              result[4] += -0.010007732;
            }
          } else {
            result[4] += 0.013508148;
          }
        } else {
          result[4] += -0.023510989;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)19426)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)19183)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)18913)) {
              result[4] += 0.009317682;
            } else {
              result[4] += -0.11432215;
            }
          } else {
            result[4] += 0.13602318;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)30846)) {
            result[4] += -0.0053503043;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32763)) {
              result[4] += 0.04551607;
            } else {
              result[4] += 0.0057128174;
            }
          }
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
        result[4] += 0.024457024;
      } else {
        result[4] += 0.088771716;
      }
    }
  } else {
    result[4] += -0.09643269;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)464605088)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)398755392)) {
              result[5] += 0.0003995771;
            } else {
              result[5] += -0.1289082;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
              result[5] += -0.14064886;
            } else {
              result[5] += 0.13773622;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[5] += -0.14877905;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
              result[5] += -0.04130687;
            } else {
              result[5] += 0.010488714;
            }
          }
        }
      } else {
        result[5] += -0.1372117;
      }
    } else {
      result[5] += -0.14948143;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)514242560)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
          result[5] += -0.08139403;
        } else {
          result[5] += 0.15917361;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          result[5] += -0.16569252;
        } else {
          result[5] += 0.13204977;
        }
      }
    } else {
      result[5] += -0.13934883;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[23].missing != -1) && (data[23].fvalue < (float)12)) {
      result[6] += 0.00016211357;
    } else {
      result[6] += 0.016459066;
    }
  } else {
    result[6] += -0.0964181;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)52006)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
              result[7] += 0.0022320503;
            } else {
              result[7] += -0.016149182;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[7] += -0.09693545;
            } else {
              result[7] += 0.043433324;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50108)) {
              result[7] += -0.05830786;
            } else {
              result[7] += 0.0838996;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
              result[7] += -0.034846194;
            } else {
              result[7] += -0.15327749;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)29825)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)832030464)) {
              result[7] += 0.07036417;
            } else {
              result[7] += 0.007707999;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
              result[7] += -0.053238865;
            } else {
              result[7] += -0.0063061654;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)36194)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33113)) {
              result[7] += 0.02380297;
            } else {
              result[7] += 0.098429345;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[7] += -0.0857565;
            } else {
              result[7] += 0.015920164;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)514242560)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[7] += -0.0013961069;
            } else {
              result[7] += 0.11903974;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
              result[7] += -0.07141784;
            } else {
              result[7] += 0.2580501;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
              result[7] += 0.3123124;
            } else {
              result[7] += 0.0715295;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
              result[7] += -0.016442565;
            } else {
              result[7] += 0.13925949;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7446)) {
              result[7] += 0.03919501;
            } else {
              result[7] += -0.081580624;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
              result[7] += 0.0006426311;
            } else {
              result[7] += 0.042821083;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)29299)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2718478592)) {
              result[7] += -0.05560292;
            } else {
              result[7] += 0.0037800854;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
              result[7] += -0.045893714;
            } else {
              result[7] += -0.0041682925;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
              result[7] += -0.10478982;
            } else {
              result[7] += -0.016493186;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43961)) {
              result[7] += 0.016274715;
            } else {
              result[7] += -0.075417295;
            }
          }
        } else {
          result[7] += 0.08473867;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2650760192)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)56)) {
            result[7] += 0.053017966;
          } else {
            result[7] += -0.08851503;
          }
        } else {
          result[7] += 0.078473456;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
          result[7] += 0.14674176;
        } else {
          result[7] += 0.044405155;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)6)) {
            result[7] += -0.17353624;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
              result[7] += 0.120597675;
            } else {
              result[7] += -0.092591524;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54077)) {
              result[7] += 0.11026496;
            } else {
              result[7] += -0.013830634;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[7] += 0.14720361;
            } else {
              result[7] += -0.034515902;
            }
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[8] += -0.00018746879;
            } else {
              result[8] += -0.14436182;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
              result[8] += 0.056854263;
            } else {
              result[8] += -0.025370833;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.1419023;
            } else {
              result[8] += -0.09483316;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)14735)) {
              result[8] += -0.101500414;
            } else {
              result[8] += 0.008066394;
            }
          }
        }
      } else {
        result[8] += -0.14665893;
      }
    } else {
      result[8] += 0.13697986;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
      result[8] += -0.14492115;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
        result[8] += 0.1332939;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
            result[8] += -0.15198983;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1000793920)) {
              result[8] += 0.014183004;
            } else {
              result[8] += 0.11438715;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)432)) {
            result[8] += 0.11666508;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
              result[8] += 0.048182562;
            } else {
              result[8] += -0.122936934;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)23617)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[9] += 0.00021190921;
            } else {
              result[9] += -0.13282523;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[9] += -0.13438036;
            } else {
              result[9] += -0.02052017;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[9] += -0.13579077;
            } else {
              result[9] += -0.04800737;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[9] += 0.017265635;
            } else {
              result[9] += 0.1571893;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)33879)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
            result[9] += 0.07095808;
          } else {
            result[9] += -0.17120643;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)159697)) {
              result[9] += -0.1454274;
            } else {
              result[9] += 0.07281325;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[9] += -0.09467595;
            } else {
              result[9] += 0.060835123;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[9] += -0.07623498;
        } else {
          result[9] += 0.15011017;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          result[9] += 0.1446522;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
              result[9] += 0.16512728;
            } else {
              result[9] += -0.11737764;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[9] += 0.14516972;
            } else {
              result[9] += 0.0025855752;
            }
          }
        }
      }
    }
  } else {
    result[9] += -0.1343206;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)627447552)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.0019868503;
            } else {
              result[10] += 0.05339577;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
              result[10] += -0.2074198;
            } else {
              result[10] += -0.013663794;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
              result[10] += 0.005307713;
            } else {
              result[10] += 0.17897393;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
              result[10] += -0.03353235;
            } else {
              result[10] += 0.009604526;
            }
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[10] += 0.0016417968;
        } else {
          result[10] += 0.0030007036;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
        result[10] += -0.1445099;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
          result[10] += 0.13464168;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[10] += -0.00545756;
            } else {
              result[10] += -0.24446392;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
              result[10] += 0.048224837;
            } else {
              result[10] += 0.0039832294;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.119408354;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)58400)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43122)) {
              result[11] += 0.0014721008;
            } else {
              result[11] += -0.010726531;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
              result[11] += 0.009652192;
            } else {
              result[11] += 0.086115226;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)19858)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[11] += 0.049217355;
            } else {
              result[11] += -0.19908528;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
              result[11] += -0.06729237;
            } else {
              result[11] += 0.2695689;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3481869312)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
              result[11] += -0.026072595;
            } else {
              result[11] += -0.007268849;
            }
          } else {
            result[11] += -0.22573496;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
              result[11] += 0.13358407;
            } else {
              result[11] += 0.0030924827;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58670)) {
              result[11] += 0.28928626;
            } else {
              result[11] += -0.10857875;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3399763968)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
              result[11] += 0.01558386;
            } else {
              result[11] += -0.032077897;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[11] += 0.05455244;
            } else {
              result[11] += 0.40881;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
              result[11] += -0.10294415;
            } else {
              result[11] += -0.26029918;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[11] += 0.030938031;
            } else {
              result[11] += -0.039540157;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
            result[11] += 0.23662134;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
              result[11] += -0.14936228;
            } else {
              result[11] += 0.23517038;
            }
          }
        } else {
          result[11] += -0.12897322;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
        result[11] += -0.15057713;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)288)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12973)) {
              result[11] += 0.055808064;
            } else {
              result[11] += -0.2654942;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[11] += 0.17389463;
            } else {
              result[11] += 0.04280966;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)304)) {
            result[11] += -0.15307194;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)309)) {
              result[11] += 0.049269054;
            } else {
              result[11] += -0.006372512;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
              result[11] += 0.0018699003;
            } else {
              result[11] += -0.023175787;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)450602464)) {
              result[11] += 0.19395138;
            } else {
              result[11] += 0.036019657;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[11] += -0.28857395;
            } else {
              result[11] += -0.11066833;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[11] += -0.385818;
            } else {
              result[11] += -0.005836341;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)765019264)) {
            result[11] += 0.15397751;
          } else {
            result[11] += -0.25849447;
          }
        } else {
          result[11] += 0.19063695;
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)152)) {
              result[12] += -8.481211e-05;
            } else {
              result[12] += -0.12721896;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[12] += 0.07158359;
            } else {
              result[12] += -0.12524374;
            }
          }
        } else {
          result[12] += -0.1400416;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            result[12] += 0.084170535;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.012886658;
            } else {
              result[12] += -0.091153115;
            }
          }
        } else {
          result[12] += -0.14168331;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
              result[12] += 0.05859597;
            } else {
              result[12] += -0.09554047;
            }
          } else {
            result[12] += 0.14414869;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.1751281;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
              result[12] += 0.13884594;
            } else {
              result[12] += -0.08954197;
            }
          }
        }
      } else {
        result[12] += -0.09584747;
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      result[12] += -0.12987104;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)16021)) {
            result[12] += 0.1068498;
          } else {
            result[12] += -0.020421255;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
            result[12] += -0.06330165;
          } else {
            result[12] += 0.067468375;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)17502)) {
          result[12] += -0.11109775;
        } else {
          result[12] += 0.06539381;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)7446)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50108)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5405)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[13] += -0.0081433505;
            } else {
              result[13] += 0.12703979;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)382589280)) {
              result[13] += -0.019188099;
            } else {
              result[13] += 0.049182538;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6929)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
              result[13] += 0.13044055;
            } else {
              result[13] += -0.090963736;
            }
          } else {
            result[13] += 0.24060099;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            result[13] += -0.18129033;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2182743296)) {
              result[13] += 0.052113973;
            } else {
              result[13] += -0.104428664;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
              result[13] += 0.004094337;
            } else {
              result[13] += 0.20924743;
            }
          } else {
            result[13] += -0.13995624;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
            result[13] += -0.17133003;
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += 0.055375606;
            } else {
              result[13] += -0.15501347;
            }
          }
        } else {
          result[13] += -0.025743881;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
              result[13] += -0.037212472;
            } else {
              result[13] += 0.14793481;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
              result[13] += 0.21257381;
            } else {
              result[13] += -0.16302153;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
              result[13] += -0.11855514;
            } else {
              result[13] += 0.29048255;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
              result[13] += -0.13835682;
            } else {
              result[13] += 0.04591223;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)10568)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2357014272)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)627447552)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
              result[13] += 0.06940723;
            } else {
              result[13] += 0.20123503;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
              result[13] += 0.4259721;
            } else {
              result[13] += 0.082926385;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
            result[13] += -0.10727965;
          } else {
            result[13] += 0.08357887;
          }
        }
      } else {
        result[13] += -0.12449867;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[13] += -0.002760177;
            } else {
              result[13] += 0.007172494;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1599453184)) {
              result[13] += -0.03345906;
            } else {
              result[13] += -0.1455757;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2928404992)) {
              result[13] += 0.08957003;
            } else {
              result[13] += -0.057769526;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[13] += -0.121536605;
            } else {
              result[13] += 0.09710653;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50702)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[13] += 0.017416975;
            } else {
              result[13] += -0.12966792;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
              result[13] += -0.0038477648;
            } else {
              result[13] += 0.03713615;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
              result[13] += -0.18821916;
            } else {
              result[13] += 0.03860209;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[13] += 0.10007352;
            } else {
              result[13] += -0.15194371;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)57147)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
              result[14] += -0.00022490224;
            } else {
              result[14] += -0.04201175;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3598538240)) {
              result[14] += 0.048820604;
            } else {
              result[14] += -0.16075423;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            result[14] += -0.03657471;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[14] += -0.21345907;
            } else {
              result[14] += -0.009407652;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
              result[14] += 0.01621987;
            } else {
              result[14] += -0.059222955;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61935)) {
              result[14] += -0.123559736;
            } else {
              result[14] += 0.18668598;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
              result[14] += 0.3227947;
            } else {
              result[14] += 0.1250516;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[14] += -0.1332892;
            } else {
              result[14] += 0.053361315;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
              result[14] += 0.002213637;
            } else {
              result[14] += -0.053408384;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[14] += 0.04530136;
            } else {
              result[14] += -0.1744342;
            }
          }
        } else {
          result[14] += -0.16301544;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
          result[14] += -0.1502335;
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            result[14] += 0.0911188;
          } else {
            result[14] += -0.0379519;
          }
        }
      }
    }
  } else {
    result[14] += -0.12941062;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)30078)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)29299)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28765)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)27491)) {
              result[0] += -0.00054922694;
            } else {
              result[0] += 0.040789913;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1000793920)) {
              result[0] += -0.12612832;
            } else {
              result[0] += 0.0038778435;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)29825)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += -0.036406502;
            } else {
              result[0] += 0.1350835;
            }
          } else {
            result[0] += 0.038636535;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30343)) {
              result[0] += -0.078669325;
            } else {
              result[0] += -0.20242558;
            }
          } else {
            result[0] += 0.085727;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30862)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += 0.014419867;
            } else {
              result[0] += 0.082019016;
            }
          } else {
            result[0] += -0.051619824;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)33113)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)32132)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31884)) {
              result[0] += 0.06551608;
            } else {
              result[0] += 0.21170616;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)782316608)) {
              result[0] += -0.019069482;
            } else {
              result[0] += 0.040057488;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[0] += -0.038294964;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32902)) {
              result[0] += 0.13012359;
            } else {
              result[0] += 0.083029896;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
          result[0] += -0.13956624;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33651)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
              result[0] += -0.017538706;
            } else {
              result[0] += -0.111985765;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34379)) {
              result[0] += 0.063685514;
            } else {
              result[0] += 0.002511472;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
      result[0] += 0.039041318;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
          result[0] += 0.011781535;
        } else {
          result[0] += -0.045580544;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
          result[0] += -0.13574073;
        } else {
          result[0] += -0.007859196;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
              result[1] += -0.00017790917;
            } else {
              result[1] += 0.045326885;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
              result[1] += -0.1482861;
            } else {
              result[1] += 0.20714444;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)464605088)) {
              result[1] += 0.117355205;
            } else {
              result[1] += 0.8176161;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
              result[1] += -0.14240593;
            } else {
              result[1] += 0.048679933;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9820)) {
            result[1] += -0.1315323;
          } else {
            result[1] += 0.25356275;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
            result[1] += -0.14817071;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3284568832)) {
              result[1] += -0.13174148;
            } else {
              result[1] += 0.120845266;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1893026944)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)25147)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24342)) {
              result[1] += 0.10998415;
            } else {
              result[1] += 0.7800213;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1516410240)) {
              result[1] += -0.07765181;
            } else {
              result[1] += 0.18430817;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[1] += -0.14531818;
            } else {
              result[1] += 0.06206442;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32902)) {
              result[1] += 0.05166034;
            } else {
              result[1] += -0.09580991;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
            result[1] += -0.08656744;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[1] += 0.6748545;
            } else {
              result[1] += 0.2572274;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
            result[1] += -0.14336708;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1763358336)) {
              result[1] += -0.12885493;
            } else {
              result[1] += 0.3195008;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)48198)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)42926)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)28238)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2136418816)) {
            result[1] += -0.14221697;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
              result[1] += 0.28310287;
            } else {
              result[1] += -0.13714625;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
              result[1] += 0.82975435;
            } else {
              result[1] += -0.105293415;
            }
          } else {
            result[1] += -0.1307421;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1013594304)) {
            result[1] += 0.24063836;
          } else {
            result[1] += -0.076998964;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
            result[1] += 0.1469972;
          } else {
            result[1] += 0.72761285;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
        result[1] += -0.14794058;
      } else {
        result[1] += -0.020862645;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)4057)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)23202)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)22590)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)14010)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)11198)) {
              result[2] += 0.0019112198;
            } else {
              result[2] += -0.060353827;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)14340)) {
              result[2] += 0.1631347;
            } else {
              result[2] += 0.0026232032;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)22869)) {
            result[2] += -0.09429504;
          } else {
            result[2] += -0.056072347;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)23587)) {
          result[2] += 0.31542814;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)24390)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.069496214;
            } else {
              result[2] += 1.1730157;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)26079)) {
              result[2] += -0.035992585;
            } else {
              result[2] += 0.0006162195;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)12366)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)12047)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)11717)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
              result[2] += 0.004884598;
            } else {
              result[2] += 0.039243244;
            }
          } else {
            result[2] += -0.060270455;
          }
        } else {
          result[2] += 0.10603799;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)12683)) {
          result[2] += -0.07836354;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)12983)) {
              result[2] += 0.01568523;
            } else {
              result[2] += 0.10361909;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)19426)) {
              result[2] += -0.008219663;
            } else {
              result[2] += 0.00841892;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.09316222;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)967153)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[3] += -0.07971225;
        } else {
          result[3] += -0.0010431202;
        }
      } else {
        result[3] += 0.04062703;
      }
    } else {
      result[3] += -0.0889024;
    }
  } else {
    result[3] += 0.051083464;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)12366)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)7636)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)7343)) {
              result[4] += 0.00035067578;
            } else {
              result[4] += -0.045502275;
            }
          } else {
            result[4] += 0.08065772;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)8891)) {
            result[4] += -0.10814656;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)9186)) {
              result[4] += 0.023993816;
            } else {
              result[4] += -0.010749981;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)12683)) {
          result[4] += 0.086654305;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
            result[4] += -0.05487273;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)19426)) {
              result[4] += 0.02084276;
            } else {
              result[4] += 0.0042006657;
            }
          }
        }
      }
    } else {
      result[4] += 0.08547547;
    }
  } else {
    result[4] += -0.092996895;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[5] += 0.00061868876;
            } else {
              result[5] += -0.011694084;
            }
          } else {
            result[5] += -0.13835096;
          }
        } else {
          result[5] += -0.15264429;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)414614720)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)38644)) {
              result[5] += -0.08577042;
            } else {
              result[5] += 0.1358264;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
              result[5] += 0.04340093;
            } else {
              result[5] += 0.17267737;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
              result[5] += -0.087063;
            } else {
              result[5] += 0.1183629;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)984983168)) {
              result[5] += -0.08016848;
            } else {
              result[5] += 0.026602155;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
        result[5] += -0.15991881;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
          result[5] += -0.15817504;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1923645952)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
              result[5] += -0.008355338;
            } else {
              result[5] += 0.10425243;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
              result[5] += -0.16299064;
            } else {
              result[5] += 0.044127982;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
        result[5] += 0.13889152;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
          result[5] += 0.0048955586;
        } else {
          result[5] += 0.081319585;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        result[5] += -0.08940419;
      } else {
        result[5] += 0.102981485;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[23].missing != -1) && (data[23].fvalue < (float)12)) {
      result[6] += 7.670868e-05;
    } else {
      result[6] += 0.015021917;
    }
  } else {
    result[6] += -0.09298243;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)4294947072)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[7] += 0.0032398126;
            } else {
              result[7] += -0.0038105058;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
              result[7] += -0.08402541;
            } else {
              result[7] += -0.0010299182;
            }
          }
        } else {
          result[7] += 0.11759921;
        }
      } else {
        result[7] += -0.110572554;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            result[7] += -0.07370134;
          } else {
            result[7] += 0.08318893;
          }
        } else {
          result[7] += -0.12202302;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
            result[7] += 0.079797216;
          } else {
            result[7] += -0.12211612;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
              result[7] += 0.072011515;
            } else {
              result[7] += 0.24319541;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
              result[7] += -0.09750109;
            } else {
              result[7] += 0.21655956;
            }
          }
        }
      }
    }
  } else {
    result[7] += -0.16311885;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 5.3398605e-07;
            } else {
              result[8] += -0.14857775;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[8] += 0.14805432;
            } else {
              result[8] += 0.05451595;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[8] += -0.15154335;
          } else {
            result[8] += 0.0688163;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
              result[8] += 0.15141118;
            } else {
              result[8] += -0.19542912;
            }
          } else {
            result[8] += 0.15518156;
          }
        } else {
          result[8] += -0.05656917;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
        result[8] += -0.16107434;
      } else {
        result[8] += 0.10882283;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)262)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
              result[8] += 0.1682323;
            } else {
              result[8] += -0.27139255;
            }
          } else {
            result[8] += 0.17760584;
          }
        } else {
          result[8] += 0.02011488;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
              result[8] += -0.068739355;
            } else {
              result[8] += -0.32442364;
            }
          } else {
            result[8] += 0.03433884;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
            result[8] += 0.16764386;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[8] += 0.12056839;
            } else {
              result[8] += -0.19396396;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)43122)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            result[8] += 0.14492819;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[8] += 0.14297101;
            } else {
              result[8] += -0.137285;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[8] += -0.14028944;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
              result[8] += 0.06609397;
            } else {
              result[8] += -0.104819976;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41909)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
              result[8] += -0.095572494;
            } else {
              result[8] += 0.15832835;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
              result[8] += -0.3134354;
            } else {
              result[8] += 0.07580215;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1450752896)) {
              result[8] += 0.11044053;
            } else {
              result[8] += -0.019528778;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2182743296)) {
              result[8] += -0.10792716;
            } else {
              result[8] += 0.020638967;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
              result[9] += 0.0004108235;
            } else {
              result[9] += -0.03985133;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
              result[9] += -0.030994361;
            } else {
              result[9] += 0.1492512;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[9] += -0.11501021;
            } else {
              result[9] += 0.1520087;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
              result[9] += -0.15302636;
            } else {
              result[9] += 0.011442353;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1386276096)) {
              result[9] += 0.010871686;
            } else {
              result[9] += -0.09203532;
            }
          } else {
            result[9] += 0.14956829;
          }
        } else {
          result[9] += 0.1536742;
        }
      }
    } else {
      result[9] += -0.13187885;
    }
  } else {
    result[9] += -0.1323356;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[10] += 0.0001654471;
            } else {
              result[10] += -0.26331764;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
              result[10] += 0.09823782;
            } else {
              result[10] += -0.10929162;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)29299)) {
            result[10] += -0.23815776;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45676)) {
              result[10] += 0.110914186;
            } else {
              result[10] += -0.14893517;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
            result[10] += -0.23023874;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
              result[10] += 0.13075705;
            } else {
              result[10] += -0.067588404;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[10] += 0.04377915;
            } else {
              result[10] += 0.14034472;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
              result[10] += -0.088119954;
            } else {
              result[10] += 0.06991891;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
          result[10] += -0.25087383;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
            result[10] += 0.16117765;
          } else {
            result[10] += -0.095572226;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
          result[10] += -0.26833567;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
            result[10] += 0.13598199;
          } else {
            result[10] += -0.1670011;
          }
        }
      }
    }
  } else {
    result[10] += -0.11869847;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          result[11] += -0.020410748;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[11] += -0.0027611335;
          } else {
            result[11] += 0.0027853718;
          }
        }
      } else {
        result[11] += -0.12784201;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
              result[11] += 0.00012300709;
            } else {
              result[11] += 0.09436043;
            }
          } else {
            result[11] += -0.16081814;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[11] += 0.07354822;
            } else {
              result[11] += -0.011933203;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3615)) {
              result[11] += -0.1545899;
            } else {
              result[11] += -0.009312575;
            }
          }
        }
      } else {
        result[11] += -0.12691036;
      }
    }
  } else {
    result[11] += -0.12854664;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[12] += -0.011374055;
            } else {
              result[12] += -1.1528077e-05;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
              result[12] += -0.0044282433;
            } else {
              result[12] += 0.11561198;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
              result[12] += -0.0543066;
            } else {
              result[12] += 0.07630077;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[12] += 0.40438923;
            } else {
              result[12] += 0.12744358;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
              result[12] += 0.0322587;
            } else {
              result[12] += -0.0087737525;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
              result[12] += 0.32525676;
            } else {
              result[12] += 0.11314204;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
              result[12] += 0.03992387;
            } else {
              result[12] += 0.30669084;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28526)) {
              result[12] += -0.04558436;
            } else {
              result[12] += -0.17695841;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[12] += -0.03698796;
            } else {
              result[12] += 0.13723865;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45184)) {
              result[12] += -0.15112278;
            } else {
              result[12] += 0.17981695;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
              result[12] += 0.021944279;
            } else {
              result[12] += 0.14849204;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
              result[12] += 0.19106244;
            } else {
              result[12] += 0.45294407;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
              result[12] += -0.2498633;
            } else {
              result[12] += -0.14620999;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[12] += -0.12686402;
            } else {
              result[12] += 0.1628925;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
              result[12] += 0.0875881;
            } else {
              result[12] += 0.30061322;
            }
          } else {
            result[12] += -0.14556058;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[12] += -0.1044837;
            } else {
              result[12] += 0.33654886;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
              result[12] += -0.12996098;
            } else {
              result[12] += 0.06534618;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)14735)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
              result[12] += 0.26021287;
            } else {
              result[12] += -0.14331256;
            }
          } else {
            result[12] += 0.2679474;
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)34126)) {
              result[12] += -0.042311013;
            } else {
              result[12] += -0.22579397;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53768)) {
              result[12] += 0.29595712;
            } else {
              result[12] += -0.03876915;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
            result[12] += 0.16442212;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[12] += -0.10133268;
            } else {
              result[12] += 0.085683;
            }
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
        result[12] += 0.33369407;
      } else {
        result[12] += 0.11650839;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
              result[13] += 0.0020596497;
            } else {
              result[13] += -0.030544478;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[13] += 0.029000152;
            } else {
              result[13] += -0.12574326;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
              result[13] += 0.04507052;
            } else {
              result[13] += 0.6009624;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[13] += -0.10097257;
            } else {
              result[13] += 0.18113515;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
            result[13] += -0.12342646;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[13] += 0.164287;
            } else {
              result[13] += -0.08929458;
            }
          }
        } else {
          result[13] += -0.12977792;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
          result[13] += 0.15659057;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)862)) {
            result[13] += -0.09656582;
          } else {
            result[13] += 0.11927187;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2650760192)) {
              result[13] += -0.02563988;
            } else {
              result[13] += -0.17136317;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
              result[13] += -0.07482224;
            } else {
              result[13] += 0.15069592;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[13] += 0.13815787;
            } else {
              result[13] += -0.092215054;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[13] += -0.120063685;
            } else {
              result[13] += 0.12190714;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            result[13] += -0.15227024;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
              result[13] += -0.1464496;
            } else {
              result[13] += -0.08163338;
            }
          }
        } else {
          result[13] += 0.0924383;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
          result[13] += -0.117490575;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
            result[13] += 0.13513684;
          } else {
            result[13] += -0.101853594;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
              result[13] += 0.25388062;
            } else {
              result[13] += -0.14546369;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23106)) {
              result[13] += -0.11684488;
            } else {
              result[13] += -0.007910092;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[13] += 0.13411759;
            } else {
              result[13] += 0.27455893;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
              result[13] += -0.06878737;
            } else {
              result[13] += 0.0425317;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)35152)) {
            result[13] += 0.16653527;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[13] += -0.06367374;
            } else {
              result[13] += 0.16744381;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[13] += -0.16597424;
            } else {
              result[13] += -0.08368932;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
              result[13] += -0.0016513035;
            } else {
              result[13] += -0.106512144;
            }
          }
        }
      }
    }
  }
}

