
#include "header.h"

void predict_unit25(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[5] += 4.647284e-05;
            } else {
              result[5] += -0.1298469;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[5] += 0.14549927;
            } else {
              result[5] += 0.030114103;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            result[5] += -0.15097728;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
              result[5] += -0.0053425455;
            } else {
              result[5] += -0.1546632;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)36967)) {
            result[5] += 0.08966278;
          } else {
            result[5] += -0.08250769;
          }
        } else {
          result[5] += 0.12666343;
        }
      }
    } else {
      result[5] += -0.1282996;
    }
  } else {
    result[5] += -0.12879016;
  }
  result[6] += 9.0235655e-05;
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2650760192)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2621401856)) {
              result[7] += 0.0023417093;
            } else {
              result[7] += 0.12410932;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[7] += -0.14059143;
            } else {
              result[7] += -0.00198152;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[7] += 0.0023325754;
            } else {
              result[7] += -0.13676691;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
              result[7] += -0.0057519493;
            } else {
              result[7] += 0.123591;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)966552000)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[7] += -0.025239358;
            } else {
              result[7] += -0.19202723;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2744264704)) {
              result[7] += 0.22048005;
            } else {
              result[7] += -0.04372728;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)832030464)) {
              result[7] += 0.01005663;
            } else {
              result[7] += 0.22623982;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1532925184)) {
              result[7] += 0.1771193;
            } else {
              result[7] += -0.043838393;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
        result[7] += 0.15593575;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)868466368)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)849185600)) {
              result[7] += 0.14479886;
            } else {
              result[7] += -0.14709812;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)662398464)) {
              result[7] += -0.061010614;
            } else {
              result[7] += -0.12589696;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1130557440)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[7] += 0.2218168;
            } else {
              result[7] += 0.00862597;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
              result[7] += -0.14470473;
            } else {
              result[7] += -0.0142100435;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2299985664)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
              result[7] += -0.040151168;
            } else {
              result[7] += 0.2024685;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
              result[7] += 0.10639853;
            } else {
              result[7] += -0.07762653;
            }
          }
        } else {
          result[7] += -0.18434885;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
          result[7] += 0.1906159;
        } else {
          result[7] += 0.015431627;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
        result[7] += -0.14312829;
      } else {
        result[7] += -0.019670947;
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
              result[8] += -0.01593629;
            } else {
              result[8] += 0.062263597;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[8] += -0.16222456;
            } else {
              result[8] += 0.0073127532;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
            result[8] += -0.2318064;
          } else {
            result[8] += 0.114046015;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
          result[8] += 0.16029282;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[8] += 0.10486887;
            } else {
              result[8] += -0.20122239;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50108)) {
              result[8] += 0.08153526;
            } else {
              result[8] += -0.17036273;
            }
          }
        }
      }
    } else {
      result[8] += -0.12989238;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[8] += 0.028233135;
            } else {
              result[8] += -0.0483996;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1747430528)) {
              result[8] += 0.016511029;
            } else {
              result[8] += 0.17881459;
            }
          }
        } else {
          result[8] += -0.122982204;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
              result[8] += -0.051154684;
            } else {
              result[8] += 0.038016878;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
              result[8] += 0.19468874;
            } else {
              result[8] += -0.059535123;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
              result[8] += -0.13151743;
            } else {
              result[8] += -0.34887588;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[8] += 0.24569556;
            } else {
              result[8] += -0.08957411;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
              result[8] += -0.0084799575;
            } else {
              result[8] += 0.05251454;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
              result[8] += -0.10327641;
            } else {
              result[8] += 0.034358583;
            }
          }
        } else {
          result[8] += 0.13240206;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)5661)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
              result[8] += 0.025781391;
            } else {
              result[8] += -0.05954319;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.48156133;
            } else {
              result[8] += 0.10243996;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35152)) {
              result[8] += 0.0020428093;
            } else {
              result[8] += -0.0014730695;
            }
          } else {
            result[8] += -0.1339933;
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1860617216)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
              result[9] += 0.00033202482;
            } else {
              result[9] += -0.10795834;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.063526295;
            } else {
              result[9] += 0.14509776;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
            result[9] += 0.11272777;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[9] += -0.15390363;
            } else {
              result[9] += -0.015541767;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
          result[9] += 0.059687506;
        } else {
          result[9] += 0.14755805;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)36442)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.07705571;
          } else {
            result[9] += 0.12332031;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
              result[9] += -0.11288928;
            } else {
              result[9] += 0.07851848;
            }
          } else {
            result[9] += 0.060716152;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
          result[9] += 0.15679672;
        } else {
          result[9] += 0.012656861;
        }
      }
    }
  } else {
    result[9] += -0.12307699;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)464605088)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)14981)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)14735)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11619)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
              result[10] += -0.0001266331;
            } else {
              result[10] += 0.10743355;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[10] += -0.029195178;
            } else {
              result[10] += -0.44797117;
            }
          }
        } else {
          result[10] += -0.24488531;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
          result[10] += 0.15351555;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
            result[10] += -0.13738033;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[10] += 0.031665605;
            } else {
              result[10] += 0.003166265;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
        result[10] += -0.075825535;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)450602464)) {
          result[10] += 0.1881113;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            result[10] += 0.1734581;
          } else {
            result[10] += -0.2660354;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)156)) {
        result[10] += -0.14757885;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
            result[10] += 0.02102957;
          } else {
            result[10] += 0.11988264;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
            result[10] += -0.12386811;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
              result[10] += 0.12733164;
            } else {
              result[10] += -0.09090138;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
            result[10] += -0.44456276;
          } else {
            result[10] += 0.16695423;
          }
        } else {
          result[10] += 0.17607889;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
              result[10] += 0.14371654;
            } else {
              result[10] += -0.34437227;
            }
          } else {
            result[10] += 0.15519466;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[10] += -0.02096405;
            } else {
              result[10] += -0.27378163;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
              result[10] += 0.11198107;
            } else {
              result[10] += -9.742052e-05;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
              result[11] += 3.6443053e-05;
            } else {
              result[11] += 0.075316824;
            }
          } else {
            result[11] += -0.15608247;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
              result[11] += 0.054020453;
            } else {
              result[11] += -0.07825132;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52537)) {
              result[11] += -0.02265714;
            } else {
              result[11] += 0.03256348;
            }
          }
        }
      } else {
        result[11] += -0.11928795;
      }
    } else {
      result[11] += -0.119490616;
    }
  } else {
    result[11] += -0.12001363;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[12] += -0.0004340616;
            } else {
              result[12] += 0.015323053;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
              result[12] += -0.03484845;
            } else {
              result[12] += 0.10777492;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += 0.016698288;
            } else {
              result[12] += -0.032296393;
            }
          } else {
            result[12] += 0.13150078;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[12] += 0.08246145;
            } else {
              result[12] += -0.02585337;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
              result[12] += 0.09167275;
            } else {
              result[12] += 0.30085248;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += -0.14732789;
            } else {
              result[12] += -0.0025161866;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
              result[12] += 0.16473857;
            } else {
              result[12] += -0.14335448;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)23856)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)22594)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
              result[12] += 0.080196574;
            } else {
              result[12] += -0.16132762;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[12] += 0.39670733;
            } else {
              result[12] += 0.12976852;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
              result[12] += -0.016327297;
            } else {
              result[12] += -0.16105197;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
              result[12] += 0.052297074;
            } else {
              result[12] += -0.14304347;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          result[12] += 0.28894013;
        } else {
          result[12] += 0.10945012;
        }
      }
    }
  } else {
    result[12] += -0.123682745;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)304)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)302)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)261)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
              result[13] += 5.9147103e-05;
            } else {
              result[13] += 0.07637598;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[13] += -0.12865147;
            } else {
              result[13] += 0.021388547;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31372)) {
            result[13] += -0.04914033;
          } else {
            result[13] += 0.29994652;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)35711)) {
          result[13] += 0.11698278;
        } else {
          result[13] += -0.030467471;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
        result[13] += -0.1379447;
      } else {
        result[13] += 0.08799565;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1747430528)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
            result[13] += -0.13193223;
          } else {
            result[13] += 0.0065983636;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[13] += 0.086045995;
          } else {
            result[13] += -0.032416146;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[13] += 0.011402338;
            } else {
              result[13] += 0.113036856;
            }
          } else {
            result[13] += -0.056917004;
          }
        } else {
          result[13] += -0.08981092;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)365)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2800293632)) {
          result[13] += 0.41833624;
        } else {
          result[13] += -0.069798924;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
              result[13] += -0.09460954;
            } else {
              result[13] += -0.00010926379;
            }
          } else {
            result[13] += 0.06872007;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30078)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
              result[13] += 0.13025935;
            } else {
              result[13] += -0.05449108;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44684)) {
              result[13] += -0.04164585;
            } else {
              result[13] += 0.06744976;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[14] += -4.5673554e-05;
            } else {
              result[14] += 0.023927737;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[14] += -0.06319415;
            } else {
              result[14] += 0.0029224912;
            }
          }
        } else {
          result[14] += 0.12805898;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)440)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1280068736)) {
              result[14] += -0.098923825;
            } else {
              result[14] += 0.070313126;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[14] += -0.18175736;
            } else {
              result[14] += -0.050317135;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)514242560)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[14] += -0.07107511;
            } else {
              result[14] += 0.13178395;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
              result[14] += 0.05418135;
            } else {
              result[14] += -0.099195935;
            }
          }
        }
      }
    } else {
      result[14] += -0.121576056;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        result[14] += -0.13881713;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
            result[14] += 0.07437872;
          } else {
            result[14] += 0.02290351;
          }
        } else {
          result[14] += -0.10995579;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        result[14] += 0.12700897;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
          result[14] += -0.10169191;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
            result[14] += 0.082290746;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
              result[14] += -0.08713922;
            } else {
              result[14] += 0.028416248;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6929)) {
              result[0] += -0.00053578365;
            } else {
              result[0] += -0.07728528;
            }
          } else {
            result[0] += 0.21219343;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
            result[0] += -0.0624366;
          } else {
            result[0] += 0.06932133;
          }
        }
      } else {
        result[0] += 0.14840761;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)9820)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9027)) {
              result[0] += -0.120732374;
            } else {
              result[0] += 0.018915217;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.17810827;
            } else {
              result[0] += 0.0635035;
            }
          }
        } else {
          result[0] += 0.01987816;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[0] += -0.17068903;
        } else {
          result[0] += -0.06274543;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      result[0] += -0.14231086;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
          result[0] += 0.014993866;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10568)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += 0.051539715;
            } else {
              result[0] += 0.24144688;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10839)) {
              result[0] += 0.0714309;
            } else {
              result[0] += 0.037872273;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)11619)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11356)) {
              result[0] += -0.07009846;
            } else {
              result[0] += -0.10316489;
            }
          } else {
            result[0] += 0.056826875;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12714)) {
              result[0] += 0.0246357;
            } else {
              result[0] += 0.13468434;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
              result[0] += -0.1026436;
            } else {
              result[0] += 0.0038578867;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        result[1] += -0.042684585;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[1] += -0.020805858;
        } else {
          result[1] += -0.0040467414;
        }
      }
    } else {
      result[1] += -0.11429272;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
              result[1] += 8.60561e-06;
            } else {
              result[1] += 0.018670667;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[1] += -0.031582896;
            } else {
              result[1] += -0.0028876867;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
              result[1] += 0.052385148;
            } else {
              result[1] += -0.01583251;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
              result[1] += 0.0665464;
            } else {
              result[1] += -0.110509105;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
            result[1] += -0.14047419;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
              result[1] += 0.18567233;
            } else {
              result[1] += -0.0901247;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)43122)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[1] += 0.03643641;
            } else {
              result[1] += 0.15123309;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[1] += 0.07894186;
            } else {
              result[1] += -0.120956995;
            }
          }
        }
      }
    } else {
      result[1] += -0.12045675;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)58063)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)53284)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)43217)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)42608)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)42375)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)42239)) {
              result[2] += 0.0007635516;
            } else {
              result[2] += -0.13396278;
            }
          } else {
            result[2] += 0.08350131;
          }
        } else {
          result[2] += -0.09358023;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          result[2] += 0.020659499;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)48619)) {
            result[2] += 0.009364504;
          } else {
            result[2] += -0.08662297;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)54453)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)53705)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)53458)) {
            result[2] += -0.11111227;
          } else {
            result[2] += 0.049595807;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)54091)) {
            result[2] += -0.13008976;
          } else {
            result[2] += -0.06825066;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)56783)) {
          result[2] += -0.0021545058;
        } else {
          result[2] += -0.04649219;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
      result[2] += 0.013062321;
    } else {
      result[2] += -0.09939415;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.015591183;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.06355868;
    } else {
      result[3] += 0.0068626376;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)16356)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)14390)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)7636)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)7343)) {
              result[4] += 0.00012233506;
            } else {
              result[4] += -0.034482323;
            }
          } else {
            result[4] += 0.049481373;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)8891)) {
            result[4] += -0.089626044;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)9186)) {
              result[4] += 0.022656312;
            } else {
              result[4] += -0.0014008343;
            }
          }
        }
      } else {
        result[4] += 0.042045243;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)14959)) {
        result[4] += -0.124390684;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15231)) {
          result[4] += 0.044578575;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)16057)) {
            result[4] += -0.013013639;
          } else {
            result[4] += -0.0022462802;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)16637)) {
        result[4] += 0.019766737;
      } else {
        result[4] += 0.1300125;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)18628)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)18039)) {
          result[4] += -0.028949995;
        } else {
          result[4] += -0.10940433;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)18913)) {
          result[4] += 0.10058657;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)19183)) {
            result[4] += -0.10386527;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)19426)) {
              result[4] += 0.1182882;
            } else {
              result[4] += 0.0032004935;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1402044288)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1236219776)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33879)) {
              result[5] += 0.00041501768;
            } else {
              result[5] += -0.017693136;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
              result[5] += -0.16675282;
            } else {
              result[5] += 0.030264271;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1280068736)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
              result[5] += -0.0071927533;
            } else {
              result[5] += 0.13748206;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
              result[5] += -0.1536055;
            } else {
              result[5] += 0.06442715;
            }
          }
        }
      } else {
        result[5] += -0.14720151;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
          result[5] += -0.13873023;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)8581)) {
            result[5] += -0.10657121;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
              result[5] += 0.17091613;
            } else {
              result[5] += 0.105244726;
            }
          }
        }
      } else {
        result[5] += -0.15747084;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
          result[5] += -0.009841408;
        } else {
          result[5] += -0.15405811;
        }
      } else {
        result[5] += 0.013393209;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
              result[5] += -0.057777975;
            } else {
              result[5] += -0.14399119;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[5] += 0.11198282;
            } else {
              result[5] += 0.036364663;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1860617216)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
              result[5] += 0.114436634;
            } else {
              result[5] += -0.13834119;
            }
          } else {
            result[5] += -0.13659473;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
          result[5] += -0.15702696;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
              result[5] += -0.06417356;
            } else {
              result[5] += 0.035876542;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
              result[5] += -0.17199916;
            } else {
              result[5] += 0.020029357;
            }
          }
        }
      }
    }
  }
  result[6] += 7.8338795e-05;
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[7] += 0.0003550487;
            } else {
              result[7] += -0.096714795;
            }
          } else {
            result[7] += 0.10574769;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[7] += -0.055053964;
            } else {
              result[7] += 0.025638808;
            }
          } else {
            result[7] += 0.08263115;
          }
        }
      } else {
        result[7] += 0.14411625;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)6)) {
          result[7] += -0.14525586;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1499005440)) {
            result[7] += 0.10741969;
          } else {
            result[7] += -0.10438104;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[7] += -0.10449921;
            } else {
              result[7] += -0.03570021;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
              result[7] += 0.16592601;
            } else {
              result[7] += -0.061794937;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)52273)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
              result[7] += 0.04813334;
            } else {
              result[7] += 0.23758475;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
              result[7] += 0.08638497;
            } else {
              result[7] += -0.065770775;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49348)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)414614720)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[7] += -0.006914203;
            } else {
              result[7] += -0.11950138;
            }
          } else {
            result[7] += 0.18835826;
          }
        } else {
          result[7] += -0.13205631;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
              result[7] += 0.21459034;
            } else {
              result[7] += -0.12446789;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
              result[7] += 0.07038424;
            } else {
              result[7] += 0.2778942;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38249)) {
              result[7] += -0.08159462;
            } else {
              result[7] += 0.004588887;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
              result[7] += 0.11482803;
            } else {
              result[7] += -0.046694957;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
              result[7] += 0.1076901;
            } else {
              result[7] += 0.021165418;
            }
          } else {
            result[7] += -0.124290735;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            result[7] += -0.037490048;
          } else {
            result[7] += 0.3349949;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)48198)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
              result[7] += -0.020709358;
            } else {
              result[7] += -0.14017819;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[7] += 0.0199381;
            } else {
              result[7] += 0.20738171;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15995)) {
              result[7] += -0.032955028;
            } else {
              result[7] += 0.074509665;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
              result[7] += -0.04456832;
            } else {
              result[7] += 0.0010329519;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)304)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
              result[8] += -4.379862e-05;
            } else {
              result[8] += -0.043710127;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[8] += 0.00991567;
            } else {
              result[8] += -0.01892355;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
            result[8] += -0.1347698;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
              result[8] += 0.047766916;
            } else {
              result[8] += 0.012502401;
            }
          }
        }
      } else {
        result[8] += -0.12614219;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
        result[8] += -0.037105344;
      } else {
        result[8] += 0.13253349;
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      result[8] += -0.14120242;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        result[8] += 0.087639704;
      } else {
        result[8] += -0.0768829;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)53768)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
              result[9] += -0.00029538746;
            } else {
              result[9] += 0.15473257;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[9] += -0.15427852;
            } else {
              result[9] += 0.12504299;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.069399044;
          } else {
            result[9] += 0.17416903;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            result[9] += -0.09714462;
          } else {
            result[9] += 0.14255325;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1264832000)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
              result[9] += -0.11794985;
            } else {
              result[9] += -0.029828584;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[9] += 0.021305714;
            } else {
              result[9] += 0.13668792;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1386276096)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1130557440)) {
              result[9] += -0.006223639;
            } else {
              result[9] += 0.15385354;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
              result[9] += 0.13812974;
            } else {
              result[9] += -0.1139139;
            }
          }
        } else {
          result[9] += 0.14436626;
        }
      } else {
        result[9] += 0.14801429;
      }
    }
  } else {
    result[9] += -0.12294773;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)765019264)) {
              result[10] += 0.00018740118;
            } else {
              result[10] += 0.02216519;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
              result[10] += -0.31958944;
            } else {
              result[10] += 0.12859716;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)12187)) {
            result[10] += 0.14905629;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22857)) {
              result[10] += -0.13123631;
            } else {
              result[10] += 0.065727584;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1280068736)) {
              result[10] += -0.24546921;
            } else {
              result[10] += 0.07671357;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
              result[10] += -0.30980796;
            } else {
              result[10] += -0.032429747;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)156)) {
              result[10] += -0.14239915;
            } else {
              result[10] += -0.0031327205;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
              result[10] += 0.0032514452;
            } else {
              result[10] += -0.026710346;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
        result[10] += -0.14025103;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
          result[10] += 0.1463963;
        } else {
          result[10] += -0.11032204;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
      result[10] += -0.13615113;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)266309232)) {
        result[10] += 0.17647965;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
          result[10] += -0.12483495;
        } else {
          result[10] += 0.09001305;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          result[11] += -0.01667663;
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[11] += -0.0015483658;
          } else {
            result[11] += 0.003313591;
          }
        }
      } else {
        result[11] += -0.1162699;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1434199552)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1386276096)) {
              result[11] += -0.0025921953;
            } else {
              result[11] += 0.09976582;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)38644)) {
              result[11] += -0.1722703;
            } else {
              result[11] += 0.020086065;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2564)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2694456320)) {
              result[11] += -0.024757573;
            } else {
              result[11] += 0.01685808;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2882424576)) {
              result[11] += 0.07949024;
            } else {
              result[11] += 0.0016762268;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9820)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
              result[11] += -0.008478639;
            } else {
              result[11] += 0.050309364;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
              result[11] += 0.06898151;
            } else {
              result[11] += 0.00012384332;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59439)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)319)) {
              result[11] += -0.05305108;
            } else {
              result[11] += 0.15332405;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
              result[11] += 0.15894851;
            } else {
              result[11] += 0.041793365;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.11889117;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2882424576)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
              result[12] += -0.00056003046;
            } else {
              result[12] += 0.024446562;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += -0.030423423;
            } else {
              result[12] += 0.014617004;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3399763968)) {
              result[12] += -0.07000378;
            } else {
              result[12] += -0.13653816;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
              result[12] += 0.011557592;
            } else {
              result[12] += -0.0021744915;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)315034144)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)296821792)) {
              result[12] += -0.029633103;
            } else {
              result[12] += 0.4811184;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
              result[12] += -0.15456447;
            } else {
              result[12] += -0.028527984;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2694456320)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1264832000)) {
              result[12] += 0.055790603;
            } else {
              result[12] += 0.28260478;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
              result[12] += -0.10203648;
            } else {
              result[12] += 0.19394799;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)695816320)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
              result[12] += 0.056598373;
            } else {
              result[12] += 0.44820854;
            }
          } else {
            result[12] += -0.14251457;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
            result[12] += 0.43963468;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
              result[12] += -0.026346153;
            } else {
              result[12] += 0.23354663;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
          result[12] += -0.14942423;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2650760192)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[12] += 0.35813382;
            } else {
              result[12] += 0.07086454;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3598538240)) {
              result[12] += -0.13511868;
            } else {
              result[12] += 0.021430522;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1826348032)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)918588480)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)901448896)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[12] += -0.017398687;
            } else {
              result[12] += 0.11713336;
            }
          } else {
            result[12] += -0.18051656;
          }
        } else {
          result[12] += 0.31097734;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
              result[12] += -0.1535055;
            } else {
              result[12] += 0.008355108;
            }
          } else {
            result[12] += 0.10538383;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1599453184)) {
            result[12] += 0.3373771;
          } else {
            result[12] += -0.10989615;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
          result[12] += 0.53247225;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1923645952)) {
              result[12] += 0.30181724;
            } else {
              result[12] += -0.13321131;
            }
          } else {
            result[12] += 0.5139405;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2299985664)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
            result[12] += 0.3053156;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[12] += 0.006617341;
            } else {
              result[12] += 0.41763467;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
            result[12] += -0.17627865;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
              result[12] += 0.03173662;
            } else {
              result[12] += -0.07085021;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3541748992)) {
              result[13] += -0.0015583477;
            } else {
              result[13] += -0.027477806;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
              result[13] += -0.027384998;
            } else {
              result[13] += 0.05724107;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
              result[13] += 0.001961961;
            } else {
              result[13] += -0.08027523;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
              result[13] += 0.011364728;
            } else {
              result[13] += -0.052183162;
            }
          }
        }
      } else {
        result[13] += -0.11934933;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2371757312)) {
        result[13] += -0.07645676;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2384619520)) {
          result[13] += 0.26069123;
        } else {
          result[13] += -0.06689043;
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
      result[13] += -0.115477115;
    } else {
      result[13] += 0.006058418;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
              result[14] += -0.00050770474;
            } else {
              result[14] += 0.04389476;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
              result[14] += -0.055555686;
            } else {
              result[14] += 0.009289672;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
              result[14] += 0.11150538;
            } else {
              result[14] += -0.0040965113;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
              result[14] += 0.21711661;
            } else {
              result[14] += -0.16898502;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10839)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
              result[14] += -0.0450058;
            } else {
              result[14] += 0.21871372;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
              result[14] += -0.10241445;
            } else {
              result[14] += -0.22563027;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23106)) {
              result[14] += 0.014171393;
            } else {
              result[14] += 0.2319753;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32902)) {
              result[14] += -0.10888555;
            } else {
              result[14] += 0.0046216054;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)38249)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34379)) {
              result[14] += 0.026313752;
            } else {
              result[14] += 0.17036457;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45184)) {
              result[14] += -0.17126745;
            } else {
              result[14] += 0.025081422;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
              result[14] += -0.33440483;
            } else {
              result[14] += 0.032161202;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13727)) {
              result[14] += 0.034791637;
            } else {
              result[14] += 0.20073672;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
            result[14] += 0.1407289;
          } else {
            result[14] += -0.27565935;
          }
        } else {
          result[14] += 0.14650697;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
          result[14] += -0.2033164;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[14] += -0.13007215;
            } else {
              result[14] += 0.11001781;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += -0.14733759;
            } else {
              result[14] += -0.039681517;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)24342)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22857)) {
              result[14] += 0.3013937;
            } else {
              result[14] += 0.12730141;
            }
          } else {
            result[14] += -0.10408007;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31372)) {
              result[14] += 0.061614964;
            } else {
              result[14] += -0.071398616;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
              result[14] += 0.4411391;
            } else {
              result[14] += 0.08631621;
            }
          }
        }
      }
    } else {
      result[14] += -0.18532516;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[0] += 0.000624175;
            } else {
              result[0] += -0.10859525;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
              result[0] += 0.11627315;
            } else {
              result[0] += 0.016487164;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += 0.04270814;
            } else {
              result[0] += -0.0861759;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
              result[0] += 0.14844054;
            } else {
              result[0] += -0.015521768;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
          result[0] += 0.047902383;
        } else {
          result[0] += 0.025945107;
        }
      }
    } else {
      result[0] += -0.11417311;
    }
  } else {
    result[0] += -0.11475095;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1599453184)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
              result[1] += -0.010962752;
            } else {
              result[1] += 0.13938642;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[1] += -0.10099136;
            } else {
              result[1] += 0.22043559;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)37360)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[1] += -0.050724123;
            } else {
              result[1] += -0.21324916;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
              result[1] += 0.079756506;
            } else {
              result[1] += -0.18843134;
            }
          }
        }
      } else {
        result[1] += 0.30983105;
      }
    } else {
      result[1] += -0.15245193;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)514242560)) {
              result[1] += 0.02897408;
            } else {
              result[1] += -0.080296256;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
              result[1] += 0.16769052;
            } else {
              result[1] += -0.09748212;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
            result[1] += -0.16454007;
          } else {
            result[1] += 0.014830557;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
            result[1] += 0.41557238;
          } else {
            result[1] += -0.058759887;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
            result[1] += -0.10652279;
          } else {
            result[1] += 0.112425886;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3481869312)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
              result[1] += -0.017138984;
            } else {
              result[1] += -0.16506746;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
              result[1] += -0.22644185;
            } else {
              result[1] += -0.05276875;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[1] += 0.10246725;
            } else {
              result[1] += -0.14066608;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
              result[1] += 0.4408034;
            } else {
              result[1] += 0.16059306;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3399763968)) {
              result[1] += 0.023737676;
            } else {
              result[1] += -0.116133496;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32920)) {
              result[1] += -0.07798795;
            } else {
              result[1] += 0.45554382;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
              result[1] += -0.012508995;
            } else {
              result[1] += 0.08803325;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
              result[1] += 0.030855147;
            } else {
              result[1] += -0.00021983827;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)43546)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37177)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)34810)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)34258)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)33749)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)27301)) {
              result[2] += -0.00028536556;
            } else {
              result[2] += 0.012561949;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)33950)) {
              result[2] += -0.120952904;
            } else {
              result[2] += -0.028683761;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            result[2] += 0.13045268;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)34579)) {
              result[2] += 0.060692564;
            } else {
              result[2] += -0.051020224;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)35560)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)35431)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)35051)) {
              result[2] += -0.11810212;
            } else {
              result[2] += 0.059990205;
            }
          } else {
            result[2] += -0.13803694;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)35866)) {
            result[2] += 0.13119566;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)35998)) {
              result[2] += -0.13588259;
            } else {
              result[2] += -0.0058048447;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
        result[2] += 0.0028888222;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)38428)) {
          result[2] += 0.40758678;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)39175)) {
            result[2] += 0.052644692;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39320)) {
              result[2] += -0.1252512;
            } else {
              result[2] += 0.012398639;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)45044)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)44853)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          result[2] += -0.069844626;
        } else {
          result[2] += 0.0855103;
        }
      } else {
        result[2] += -0.13605937;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)45379)) {
        result[2] += 0.15694708;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
            result[2] += 0.050249923;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)49575)) {
              result[2] += -0.04814638;
            } else {
              result[2] += 0.0060169813;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)47487)) {
            result[2] += -0.043029904;
          } else {
            result[2] += -0.11722763;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.013733963;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.06305308;
    } else {
      result[3] += 0.006172409;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)3172)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2256)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[4] += -0.0018493418;
            } else {
              result[4] += -0.006125533;
            }
          } else {
            result[4] += -0.018800601;
          }
        } else {
          result[4] += 0.028859181;
        }
      } else {
        result[4] += -0.022671469;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)45844)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)43981)) {
              result[4] += 0.005280998;
            } else {
              result[4] += -0.042092096;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)46420)) {
              result[4] += 0.086026445;
            } else {
              result[4] += 0.0064995084;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)50483)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)50183)) {
              result[4] += -0.04871022;
            } else {
              result[4] += -0.112021826;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)51298)) {
              result[4] += 0.070064664;
            } else {
              result[4] += 6.8882514e-07;
            }
          }
        }
      } else {
        result[4] += 0.020725189;
      }
    }
  } else {
    result[4] += 0.054152563;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
              result[5] += 8.964039e-05;
            } else {
              result[5] += -0.105652384;
            }
          } else {
            result[5] += -0.16144845;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24100)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
              result[5] += -0.14829606;
            } else {
              result[5] += 0.09676116;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1339201280)) {
              result[5] += 0.065106064;
            } else {
              result[5] += -0.12054161;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
            result[5] += -0.15241778;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1565489664)) {
              result[5] += 0.09932823;
            } else {
              result[5] += -0.12809059;
            }
          }
        } else {
          result[5] += -0.16589603;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
        result[5] += 0.12693816;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)63923)) {
              result[5] += -0.12093022;
            } else {
              result[5] += 0.08041622;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
              result[5] += 0.14594938;
            } else {
              result[5] += 0.015273368;
            }
          }
        } else {
          result[5] += -0.1183972;
        }
      }
    }
  } else {
    result[5] += -0.12646656;
  }
  result[6] += 5.1607076e-05;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4294947072)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[7] += 0.00043876874;
            } else {
              result[7] += 0.03502689;
            }
          } else {
            result[7] += -0.12566184;
          }
        } else {
          result[7] += -0.11243962;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          result[7] += -0.12694371;
        } else {
          result[7] += 0.080968544;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
        result[7] += 0.120990485;
      } else {
        result[7] += -0.09248386;
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
        result[7] += -0.027184777;
      } else {
        result[7] += -0.11744771;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
        result[7] += 0.0816835;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1499005440)) {
          result[7] += 0.023775892;
        } else {
          result[7] += -0.04914;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2882424576)) {
              result[8] += -0.014537978;
            } else {
              result[8] += 0.042476557;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
              result[8] += -0.16405149;
            } else {
              result[8] += 0.011735345;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
            result[8] += -0.20841263;
          } else {
            result[8] += 0.10765767;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
          result[8] += 0.14243232;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[8] += 0.08975286;
            } else {
              result[8] += -0.18519905;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50108)) {
              result[8] += 0.07274159;
            } else {
              result[8] += -0.14877617;
            }
          }
        }
      }
    } else {
      result[8] += -0.12688188;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)918588480)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
              result[8] += 0.019144153;
            } else {
              result[8] += 0.25604078;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
              result[8] += -0.15908323;
            } else {
              result[8] += -0.044979874;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2693712896)) {
              result[8] += 0.04750314;
            } else {
              result[8] += 0.1723651;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
              result[8] += -0.16176179;
            } else {
              result[8] += 0.060330343;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
            result[8] += 0.31777608;
          } else {
            result[8] += -0.10326642;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2744264704)) {
              result[8] += -0.080970965;
            } else {
              result[8] += 0.044190645;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
              result[8] += 0.04253263;
            } else {
              result[8] += -0.14404799;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[8] += -0.0041492525;
            } else {
              result[8] += 0.13014194;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
              result[8] += 0.045935415;
            } else {
              result[8] += -0.15228678;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[8] += -0.025069125;
            } else {
              result[8] += -0.23452677;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
              result[8] += 0.31776637;
            } else {
              result[8] += -0.11282625;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[8] += 0.026849944;
            } else {
              result[8] += -0.10455748;
            }
          } else {
            result[8] += 0.34458598;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
              result[8] += -0.0035557214;
            } else {
              result[8] += -0.07407361;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
              result[8] += 0.015638446;
            } else {
              result[8] += -4.6944235e-05;
            }
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)799135808)) {
              result[9] += 0.00041788846;
            } else {
              result[9] += -0.10066191;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
              result[9] += -0.05999477;
            } else {
              result[9] += 0.1344636;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1130557440)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)9329)) {
              result[9] += 0.11662957;
            } else {
              result[9] += -0.16888864;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
              result[9] += 0.13891432;
            } else {
              result[9] += -0.005765715;
            }
          }
        }
      } else {
        result[9] += -0.119927794;
      }
    } else {
      result[9] += -0.12072567;
    }
  } else {
    result[9] += -0.12103043;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)35706)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)34661)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2100655232)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2039111168)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
              result[10] += 3.7810994e-05;
            } else {
              result[10] += -0.17339468;
            }
          } else {
            result[10] += 0.17997469;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34379)) {
              result[10] += -0.39896742;
            } else {
              result[10] += 0.16885515;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[10] += -0.021502119;
            } else {
              result[10] += -0.09901114;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[10] += -0.24849233;
            } else {
              result[10] += -0.011083126;
            }
          } else {
            result[10] += -0.28579405;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34379)) {
              result[10] += 0.064613715;
            } else {
              result[10] += -0.26581523;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32405)) {
              result[10] += 0.012686889;
            } else {
              result[10] += -0.310766;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)35152)) {
            result[10] += -0.23360471;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35427)) {
              result[10] += -0.03607202;
            } else {
              result[10] += 0.018130252;
            }
          }
        } else {
          result[10] += 0.17298362;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)35427)) {
          result[10] += -0.32769206;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
            result[10] += -0.27407607;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
              result[10] += 0.19074023;
            } else {
              result[10] += -0.17616163;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)38249)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3172840704)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2694456320)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
              result[10] += 0.017029133;
            } else {
              result[10] += 0.09252534;
            }
          } else {
            result[10] += -0.3096341;
          }
        } else {
          result[10] += 0.18546072;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
            result[10] += -0.4302905;
          } else {
            result[10] += -0.14079529;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
            result[10] += 0.13840628;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
              result[10] += -0.16122285;
            } else {
              result[10] += 0.08456325;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3224507648)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2829588992)) {
              result[10] += -0.0014125392;
            } else {
              result[10] += -0.37683728;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
              result[10] += 0.19088583;
            } else {
              result[10] += -0.08835569;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2299985664)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40597)) {
              result[10] += -0.27380493;
            } else {
              result[10] += 0.03104445;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
              result[10] += -0.38696334;
            } else {
              result[10] += 0.089034624;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)42171)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41909)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
              result[10] += -0.0049720593;
            } else {
              result[10] += 0.080149785;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[10] += 0.20655309;
            } else {
              result[10] += -0.03751018;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42428)) {
              result[10] += -0.0061869016;
            } else {
              result[10] += -0.3346415;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43427)) {
              result[10] += 0.061151266;
            } else {
              result[10] += 0.0011494582;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
              result[11] += -4.471064e-05;
            } else {
              result[11] += 0.018123388;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[11] += -0.04318517;
            } else {
              result[11] += -0.0012605328;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
              result[11] += 0.050633956;
            } else {
              result[11] += -0.055830833;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
              result[11] += -0.010671694;
            } else {
              result[11] += 0.03404094;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
              result[11] += -0.07041739;
            } else {
              result[11] += 0.039178655;
            }
          } else {
            result[11] += 0.27947465;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1777797376)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
              result[11] += -0.091166176;
            } else {
              result[11] += -0.28187883;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[11] += 0.005316993;
            } else {
              result[11] += -0.08072581;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)19858)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
              result[11] += -0.016997963;
            } else {
              result[11] += 0.046750955;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
              result[11] += -0.20943782;
            } else {
              result[11] += -0.04462453;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2248229888)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1045826752)) {
              result[11] += 0.03815533;
            } else {
              result[11] += -0.034231123;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
              result[11] += 0.074902855;
            } else {
              result[11] += -0.044463925;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1434199552)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35706)) {
              result[11] += -0.08431725;
            } else {
              result[11] += 0.16324136;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21346)) {
              result[11] += 0.01718355;
            } else {
              result[11] += 0.2399982;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
            result[11] += -0.17765601;
          } else {
            result[11] += 0.17640117;
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
      result[11] += 0.21262725;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)414614720)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
            result[11] += -0.14798696;
          } else {
            result[11] += 0.2555865;
          }
        } else {
          result[11] += -0.17566195;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
          result[11] += 0.30859038;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
              result[11] += -0.11212475;
            } else {
              result[11] += 0.11335872;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
              result[11] += -0.1334013;
            } else {
              result[11] += -0.011828264;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
              result[12] += -0.00022173802;
            } else {
              result[12] += 0.07416191;
            }
          } else {
            result[12] += -0.1329404;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
            result[12] += -0.13930434;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.123608835;
            } else {
              result[12] += -0.05398905;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
            result[12] += 0.046895597;
          } else {
            result[12] += -0.07982379;
          }
        } else {
          result[12] += -0.13723905;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
              result[12] += 0.03168064;
            } else {
              result[12] += -0.08962071;
            }
          } else {
            result[12] += 0.14074187;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.15742758;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
              result[12] += 0.13289137;
            } else {
              result[12] += 0.0032059825;
            }
          }
        }
      } else {
        result[12] += -0.08765792;
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
        result[12] += -0.13030407;
      } else {
        result[12] += -0.037694916;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)35711)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[12] += 0.098151624;
          } else {
            result[12] += -0.03309228;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1532925184)) {
            result[12] += -0.11296299;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
              result[12] += 0.05205607;
            } else {
              result[12] += -0.10165593;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)188)) {
          result[12] += 0.07783784;
        } else {
          result[12] += 0.01846543;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2299985664)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2182743296)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2136418816)) {
              result[13] += -0.0013771383;
            } else {
              result[13] += 0.119820476;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
              result[13] += -0.05439908;
            } else {
              result[13] += -0.25914627;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2398005248)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
              result[13] += 0.26135966;
            } else {
              result[13] += 0.056058835;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
              result[13] += -0.012050398;
            } else {
              result[13] += 0.023623113;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)644409920)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)321)) {
              result[13] += 0.01634935;
            } else {
              result[13] += 0.1926007;
            }
          } else {
            result[13] += -0.12513703;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[13] += 0.31873313;
            } else {
              result[13] += 0.111878864;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
              result[13] += -0.07917646;
            } else {
              result[13] += 0.20283738;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)608)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
            result[13] += -0.14844891;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
              result[13] += 0.31509578;
            } else {
              result[13] += -0.14917159;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
            result[13] += 0.06671397;
          } else {
            result[13] += -0.038066935;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)5483)) {
          result[13] += 0.085698545;
        } else {
          result[13] += -0.09193167;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)52006)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47457)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3172840704)) {
              result[13] += 0.07037035;
            } else {
              result[13] += -0.013146944;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[13] += 0.26432976;
            } else {
              result[13] += -0.13762426;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
              result[13] += 0.24543385;
            } else {
              result[13] += -0.08625754;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
              result[13] += 0.41463917;
            } else {
              result[13] += -0.024700847;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2718478592)) {
              result[13] += -0.0109527875;
            } else {
              result[13] += 0.17444433;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31884)) {
              result[13] += -0.022089578;
            } else {
              result[13] += -0.12783353;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
              result[13] += 0.13905746;
            } else {
              result[13] += -0.11777358;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[13] += -0.13092946;
            } else {
              result[13] += 0.14654663;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[13] += -0.13494903;
            } else {
              result[13] += 0.14125441;
            }
          } else {
            result[13] += -0.14939646;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
              result[13] += -0.095117375;
            } else {
              result[13] += 0.061948385;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
              result[13] += 0.03902947;
            } else {
              result[13] += -0.008440942;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
          result[13] += -0.17331183;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46699)) {
              result[13] += 0.1881463;
            } else {
              result[13] += -0.0032298998;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
              result[13] += -0.13788919;
            } else {
              result[13] += 0.10537916;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9027)) {
              result[14] += 0.00082681543;
            } else {
              result[14] += 0.026096601;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
              result[14] += -0.16748713;
            } else {
              result[14] += 0.12622762;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
            result[14] += -0.19685988;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[14] += -0.12745495;
            } else {
              result[14] += 0.06149281;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)280175584)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
              result[14] += -0.19806206;
            } else {
              result[14] += 0.17681728;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
              result[14] += -0.04424301;
            } else {
              result[14] += -0.2692823;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
              result[14] += -0.070527114;
            } else {
              result[14] += 0.079386;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[14] += 0.006833379;
            } else {
              result[14] += -0.19135743;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
              result[14] += 0.013128493;
            } else {
              result[14] += -0.31892642;
            }
          } else {
            result[14] += 0.17766532;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[14] += 0.08567831;
            } else {
              result[14] += 0.375224;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[14] += 0.05007451;
            } else {
              result[14] += -0.17556551;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[14] += 0.28095224;
          } else {
            result[14] += 0.09582347;
          }
        } else {
          result[14] += -0.12794025;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)14735)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)832030464)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
              result[14] += -0.010118811;
            } else {
              result[14] += 0.07521643;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
              result[14] += 0.0026325718;
            } else {
              result[14] += -0.11950338;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1402044288)) {
              result[14] += -0.07856043;
            } else {
              result[14] += 0.23057836;
            }
          } else {
            result[14] += -0.1895047;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11906)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
              result[14] += -0.17894204;
            } else {
              result[14] += 0.035805102;
            }
          } else {
            result[14] += -0.18758102;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11619)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[14] += -0.2560679;
            } else {
              result[14] += 0.126044;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13727)) {
              result[14] += 0.07777023;
            } else {
              result[14] += -0.18296595;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1264832000)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
              result[14] += 0.037538376;
            } else {
              result[14] += 0.09027689;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
              result[14] += -0.16023946;
            } else {
              result[14] += 0.060815703;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2100655232)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
              result[14] += 0.12482963;
            } else {
              result[14] += 0.29950604;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3284568832)) {
              result[14] += -0.07500981;
            } else {
              result[14] += 0.1464626;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)19858)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
              result[14] += -0.0211334;
            } else {
              result[14] += 0.019626163;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
              result[14] += -0.15862672;
            } else {
              result[14] += 0.02171708;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20105)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[14] += 0.13156544;
            } else {
              result[14] += -0.04816286;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
              result[14] += -0.0014996923;
            } else {
              result[14] += 0.012980987;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.0021061073;
            } else {
              result[0] += -8.0275524e-05;
            }
          } else {
            result[0] += -0.10417956;
          }
        } else {
          result[0] += 0.003873787;
        }
      } else {
        result[0] += -0.11383925;
      }
    } else {
      result[0] += -0.14395657;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)19858)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)16803)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)16270)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15995)) {
              result[0] += 0.005676278;
            } else {
              result[0] += -0.09628076;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)16531)) {
              result[0] += 0.12240126;
            } else {
              result[0] += 0.069565535;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[0] += -0.10859459;
            } else {
              result[0] += -0.14158821;
            }
          } else {
            result[0] += 0.032363374;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)17809)) {
          result[0] += 0.2941116;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[0] += -0.15110618;
            } else {
              result[0] += 0.09547378;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
              result[0] += 0.20971376;
            } else {
              result[0] += 0.042532545;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20105)) {
          result[0] += -0.10488973;
        } else {
          result[0] += -0.19291477;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
          result[0] += 0.32205293;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
              result[0] += 0.045279082;
            } else {
              result[0] += -0.064473934;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
              result[0] += 0.11878178;
            } else {
              result[0] += 0.0022941672;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)5405)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39062)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
              result[1] += -0.014064737;
            } else {
              result[1] += -0.06758003;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
              result[1] += 0.046633266;
            } else {
              result[1] += -0.014118012;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
              result[1] += 0.0008441661;
            } else {
              result[1] += 0.06863498;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
              result[1] += -0.24275567;
            } else {
              result[1] += 0.024044624;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
              result[1] += -0.0012263723;
            } else {
              result[1] += 0.031409826;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[1] += -0.017122341;
            } else {
              result[1] += 0.008330147;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
              result[1] += 0.07230069;
            } else {
              result[1] += 0.037272092;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
              result[1] += -0.003526318;
            } else {
              result[1] += -0.009976395;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)38644)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
              result[1] += -0.04498468;
            } else {
              result[1] += 0.17797431;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[1] += 0.20456164;
            } else {
              result[1] += 0.028434038;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)323)) {
              result[1] += -0.06802554;
            } else {
              result[1] += 0.14406788;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
              result[1] += -0.13380352;
            } else {
              result[1] += 0.03301516;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
          result[1] += 0.13244145;
        } else {
          result[1] += 0.41227034;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3541748992)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2677389824)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1220404864)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)644409920)) {
              result[1] += 0.008294043;
            } else {
              result[1] += 0.063823424;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1295143936)) {
              result[1] += -0.15904969;
            } else {
              result[1] += -0.011412165;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7446)) {
              result[1] += 0.13297601;
            } else {
              result[1] += 0.0024576348;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
              result[1] += 0.17549512;
            } else {
              result[1] += 0.50763094;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)317)) {
              result[1] += -0.09824772;
            } else {
              result[1] += 0.086387664;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += 0.0758587;
            } else {
              result[1] += -0.15426865;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9820)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
              result[1] += 0.038587593;
            } else {
              result[1] += 0.23199263;
            }
          } else {
            result[1] += -0.13493788;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)12714)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
              result[1] += -0.019799877;
            } else {
              result[1] += -0.07046715;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11619)) {
              result[1] += -0.065054365;
            } else {
              result[1] += 0.23533234;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3172840704)) {
              result[1] += 0.40517715;
            } else {
              result[1] += -0.07606838;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
              result[1] += 0.0013645934;
            } else {
              result[1] += 0.06479082;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)37360)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)34126)) {
              result[1] += 0.030961925;
            } else {
              result[1] += 0.2206489;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
              result[1] += -0.058223944;
            } else {
              result[1] += -0.2709108;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)15995)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
              result[1] += -0.0016914586;
            } else {
              result[1] += -0.031186901;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
              result[1] += 0.0006084381;
            } else {
              result[1] += -0.033174146;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
            result[2] += -0.055560123;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
              result[2] += 0.0041583623;
            } else {
              result[2] += -0.046622727;
            }
          }
        } else {
          result[2] += -0.0013847486;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[2] += -0.0039116815;
        } else {
          result[2] += -0.009444619;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)41643)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)40191)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)39885)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39175)) {
              result[2] += 0.0004089004;
            } else {
              result[2] += -0.07039284;
            }
          } else {
            result[2] += 0.30827212;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)40395)) {
              result[2] += -0.123158015;
            } else {
              result[2] += 0.025101958;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)41361)) {
              result[2] += -0.11908363;
            } else {
              result[2] += -0.010448327;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)41991)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            result[2] += -0.005587045;
          } else {
            result[2] += 0.70594615;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)43546)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.07767036;
            } else {
              result[2] += -0.004190226;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)45044)) {
              result[2] += -0.046662897;
            } else {
              result[2] += 0.00091213954;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
      result[2] += 0.03911803;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
        result[2] += -0.01945153;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)3753)) {
          result[2] += 0.037025157;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)4057)) {
            result[2] += -0.03252321;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
              result[2] += 0.019735089;
            } else {
              result[2] += 0.005812279;
            }
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[3] += -0.086276315;
      } else {
        result[3] += 0.005677374;
      }
    } else {
      result[3] += 0.04513701;
    }
  } else {
    result[3] += 0.049912434;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)41059)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)40237)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)36088)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)26366)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)25201)) {
              result[4] += 0.0018362442;
            } else {
              result[4] += -0.051195737;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)27268)) {
              result[4] += 0.06002722;
            } else {
              result[4] += 0.003979685;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)37226)) {
            result[4] += -0.10271214;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)37772)) {
              result[4] += 0.0666884;
            } else {
              result[4] += -0.036170684;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)39125)) {
          result[4] += 0.05097166;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)39701)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)39447)) {
              result[4] += 0.015298864;
            } else {
              result[4] += -0.025418164;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)39962)) {
              result[4] += 0.042512834;
            } else {
              result[4] += -0.00022568722;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)40780)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)40516)) {
          result[4] += -0.09231445;
        } else {
          result[4] += 0.039406024;
        }
      } else {
        result[4] += -0.092569515;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)43113)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)42189)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)41591)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)41329)) {
            result[4] += 0.019181564;
          } else {
            result[4] += 0.05776776;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)41862)) {
            result[4] += -0.03348893;
          } else {
            result[4] += -0.014305134;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)42855)) {
          result[4] += 0.15939036;
        } else {
          result[4] += 0.027926225;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)45055)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)44806)) {
          result[4] += 0.0005384716;
        } else {
          result[4] += -0.11157908;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)47005)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)45844)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)45552)) {
              result[4] += 0.061808582;
            } else {
              result[4] += -0.056526218;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)46420)) {
              result[4] += 0.073686615;
            } else {
              result[4] += 0.015721088;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)47554)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)47291)) {
              result[4] += -0.062041074;
            } else {
              result[4] += -0.022959704;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
              result[4] += 0.030970713;
            } else {
              result[4] += 0.00041913852;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
              result[5] += -0.00014629638;
            } else {
              result[5] += -0.14562933;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
              result[5] += -0.06277627;
            } else {
              result[5] += 0.022017285;
            }
          }
        } else {
          result[5] += -0.14848205;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1220404864)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)18524)) {
            result[5] += -0.11882534;
          } else {
            result[5] += 0.019096274;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
            result[5] += 0.14501777;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
              result[5] += -0.10737945;
            } else {
              result[5] += 0.052565612;
            }
          }
        }
      }
    } else {
      result[5] += -0.14341311;
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)514242560)) {
        result[5] += 0.13671917;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          result[5] += -0.14654861;
        } else {
          result[5] += 0.1111862;
        }
      }
    } else {
      result[5] += -0.12919341;
    }
  }
  result[6] += 7.543994e-05;
}

