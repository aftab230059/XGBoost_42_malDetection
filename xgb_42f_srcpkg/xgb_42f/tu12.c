
#include "header.h"

void predict_unit12(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[9] += 0.002118342;
            } else {
              result[9] += -0.050400224;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
              result[9] += 0.15410903;
            } else {
              result[9] += 0.007878855;
            }
          }
        } else {
          result[9] += -0.14731707;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
          result[9] += -0.14918911;
        } else {
          result[9] += 0.14286308;
        }
      }
    } else {
      result[9] += -0.14736441;
    }
  } else {
    result[9] += -0.14789797;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[10] += -0.002590607;
            } else {
              result[10] += -0.13986412;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[10] += 0.0040952847;
            } else {
              result[10] += 0.005186537;
            }
          }
        } else {
          result[10] += -0.1423419;
        }
      } else {
        result[10] += -0.14907028;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += 0.0072088903;
            } else {
              result[10] += 0.038454715;
            }
          } else {
            result[10] += 0.1426587;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1532925184)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[10] += -0.08706424;
            } else {
              result[10] += -0.29198307;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[10] += -0.014380298;
            } else {
              result[10] += 0.030290999;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)315034144)) {
          result[10] += -0.20126165;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
            result[10] += -0.21883045;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40113)) {
              result[10] += 0.07488893;
            } else {
              result[10] += -0.04982734;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.14499988;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
              result[11] += -0.0025104587;
            } else {
              result[11] += 0.0064559532;
            }
          } else {
            result[11] += -0.14842294;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
            result[11] += -0.15785739;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45676)) {
              result[11] += -0.015397017;
            } else {
              result[11] += -0.15059759;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)334)) {
              result[11] += 0.11085899;
            } else {
              result[11] += -0.014260597;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[11] += 0.15047573;
            } else {
              result[11] += -0.093955524;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
            result[11] += -0.16357234;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
              result[11] += 0.14971049;
            } else {
              result[11] += -0.19104321;
            }
          }
        }
      }
    } else {
      result[11] += -0.1460887;
    }
  } else {
    result[11] += -0.14752114;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[12] += -0.007827644;
            } else {
              result[12] += -0.10551996;
            }
          } else {
            result[12] += -0.14493749;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
              result[12] += 0.013534076;
            } else {
              result[12] += -0.17300132;
            }
          } else {
            result[12] += -0.14925519;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
            result[12] += -0.14120068;
          } else {
            result[12] += 0.1824443;
          }
        } else {
          result[12] += -0.15178359;
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[12] += 0.15183985;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
            result[12] += 0.25792015;
          } else {
            result[12] += 0.13807483;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
          result[12] += -0.15079871;
        } else {
          result[12] += 0.08095255;
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
      result[12] += -0.1520419;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
              result[12] += 0.031003581;
            } else {
              result[12] += 0.13852134;
            }
          } else {
            result[12] += -0.1470318;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
            result[12] += -0.15555295;
          } else {
            result[12] += 0.12045201;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
          result[12] += -0.15370925;
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[12] += -0.1306731;
            } else {
              result[12] += 0.014970936;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[12] += 0.018612282;
            } else {
              result[12] += -0.14907552;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
              result[13] += 0.0008914387;
            } else {
              result[13] += 0.058012277;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
              result[13] += -0.15320504;
            } else {
              result[13] += 0.06415388;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
              result[13] += 0.079533644;
            } else {
              result[13] += -0.034078497;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[13] += -0.1495172;
            } else {
              result[13] += -0.015543532;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
              result[13] += -0.052701633;
            } else {
              result[13] += -0.24561405;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
              result[13] += -0.12736145;
            } else {
              result[13] += 0.15634646;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[13] += 0.14438093;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[13] += -0.106514074;
            } else {
              result[13] += 0.104122065;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            result[13] += -0.14886628;
          } else {
            result[13] += -0.23179814;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2299985664)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[13] += 0.20813067;
            } else {
              result[13] += 0.047352128;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
              result[13] += -0.11948806;
            } else {
              result[13] += -0.013986911;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)217)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.2773043;
            } else {
              result[13] += -0.07263477;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1878)) {
              result[13] += -0.13384174;
            } else {
              result[13] += 0.018882107;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[13] += -0.11800601;
            } else {
              result[13] += 0.10356079;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
              result[13] += -0.021213809;
            } else {
              result[13] += 0.18423198;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
          result[13] += 0.13502413;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)39)) {
            result[13] += -0.12369268;
          } else {
            result[13] += 0.15030263;
          }
        }
      } else {
        result[13] += 0.1383793;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
            result[13] += 0.13937539;
          } else {
            result[13] += -0.093354486;
          }
        } else {
          result[13] += 0.20780249;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)883932608)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)644409920)) {
            result[13] += -0.1909632;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)799135808)) {
              result[13] += 0.0698141;
            } else {
              result[13] += -0.12973644;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2299985664)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[13] += 0.12104144;
            } else {
              result[13] += -0.07140481;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)29825)) {
              result[13] += 0.07633236;
            } else {
              result[13] += -0.070502825;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
              result[14] += 0.006385552;
            } else {
              result[14] += -0.0019268413;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
              result[14] += 0.021081557;
            } else {
              result[14] += -0.07231774;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
              result[14] += -0.018269083;
            } else {
              result[14] += 0.089599505;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += -0.15057841;
            } else {
              result[14] += -0.26736376;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
              result[14] += 0.029240659;
            } else {
              result[14] += 0.26565778;
            }
          } else {
            result[14] += -0.17958614;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[14] += 0.18506274;
            } else {
              result[14] += -0.084872;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
              result[14] += 0.6638451;
            } else {
              result[14] += 0.009298089;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          result[14] += -0.16726884;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            result[14] += 0.45586172;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5909)) {
              result[14] += -0.112772815;
            } else {
              result[14] += 0.2912175;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)30078)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += -0.17385824;
            } else {
              result[14] += -0.3167163;
            }
          } else {
            result[14] += 0.06528089;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30862)) {
            result[14] += 0.43044013;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
              result[14] += -0.1434469;
            } else {
              result[14] += 0.08254962;
            }
          }
        }
      }
    }
  } else {
    result[14] += -0.147014;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[0] += -0.0008874706;
            } else {
              result[0] += -0.14128955;
            }
          } else {
            result[0] += -0.14866383;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[0] += 0.009203869;
            } else {
              result[0] += -0.111681856;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
              result[0] += 0.043142527;
            } else {
              result[0] += 0.3063638;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[0] += -0.14716189;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            result[0] += 0.1589878;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[0] += -0.14517792;
            } else {
              result[0] += 0.12432841;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)122)) {
        result[0] += -0.083893776;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
          result[0] += -0.048221145;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
            result[0] += 0.24590959;
          } else {
            result[0] += 0.15296027;
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      result[0] += -0.14549093;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          result[0] += 0.105791435;
        } else {
          result[0] += -0.13683869;
        }
      } else {
        result[0] += 0.10758255;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
              result[1] += -0.0002500751;
            } else {
              result[1] += -0.081207156;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28010)) {
              result[1] += -0.083050504;
            } else {
              result[1] += -0.02367718;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)862)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[1] += 0.02946256;
            } else {
              result[1] += -0.0067545525;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[1] += 0.11908734;
            } else {
              result[1] += -0.19916452;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)54077)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[1] += -0.15595163;
            } else {
              result[1] += 0.09964719;
            }
          } else {
            result[1] += -0.15471429;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
            result[1] += -0.14736964;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[1] += 0.530986;
            } else {
              result[1] += 0.03908458;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
              result[1] += 0.065137796;
            } else {
              result[1] += 0.17491467;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)262)) {
              result[1] += -0.25360495;
            } else {
              result[1] += 0.066092364;
            }
          }
        } else {
          result[1] += -0.1540994;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
              result[1] += -0.012261176;
            } else {
              result[1] += 0.30873078;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
              result[1] += 0.12696952;
            } else {
              result[1] += 0.0031550291;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
            result[1] += -0.18258283;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[1] += 0.13331288;
            } else {
              result[1] += -0.040927015;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
              result[1] += -0.0837538;
            } else {
              result[1] += 0.19192334;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
              result[1] += 0.5131091;
            } else {
              result[1] += -0.12641345;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45184)) {
            result[1] += -0.15233529;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
              result[1] += 0.02323787;
            } else {
              result[1] += -0.14645311;
            }
          }
        }
      } else {
        result[1] += 0.13642867;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
              result[1] += 0.008147984;
            } else {
              result[1] += -0.12750618;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
              result[1] += 0.02406598;
            } else {
              result[1] += 0.33692658;
            }
          }
        } else {
          result[1] += -0.14645836;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          result[1] += -0.14832793;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.14072481;
            } else {
              result[1] += 0.061084498;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[1] += -0.66141474;
            } else {
              result[1] += 0.09171821;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          result[2] += -0.12513179;
        } else {
          result[2] += -0.05418504;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)63665)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)62881)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)61706)) {
              result[2] += 0.0033549774;
            } else {
              result[2] += -0.0745009;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.21345161;
            } else {
              result[2] += -0.12036076;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)64550)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)64324)) {
              result[2] += -0.033581804;
            } else {
              result[2] += 0.0123635875;
            }
          } else {
            result[2] += -0.034063827;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)54906)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)54009)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
              result[2] += 0.014864939;
            } else {
              result[2] += 0.035580743;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)54324)) {
              result[2] += -0.12388935;
            } else {
              result[2] += -0.042564392;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)55440)) {
              result[2] += 0.016343324;
            } else {
              result[2] += 0.10810842;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56868)) {
              result[2] += -0.1486336;
            } else {
              result[2] += 0.018351933;
            }
          }
        }
      } else {
        result[2] += 0.14425358;
      }
    }
  } else {
    result[2] += -0.1486163;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.1488833;
    } else {
      result[3] += -0.050773237;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[3] += -0.14146467;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[3] += -0.07725906;
        } else {
          result[3] += 0.13304654;
        }
      }
    } else {
      result[3] += 0.13938823;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
              result[4] += -0.023942722;
            } else {
              result[4] += -0.006337016;
            }
          } else {
            result[4] += -0.13070215;
          }
        } else {
          result[4] += -0.13576338;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)3172)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
              result[4] += 0.044956118;
            } else {
              result[4] += -0.0035031545;
            }
          } else {
            result[4] += 0.12582949;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)3753)) {
            result[4] += -0.04785451;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)4057)) {
              result[4] += 0.08313581;
            } else {
              result[4] += 0.017535187;
            }
          }
        }
      }
    } else {
      if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
        result[4] += 0.14784485;
      } else {
        result[4] += -0.08158379;
      }
    }
  } else {
    result[4] += -0.14860627;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)3615)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
              result[5] += 0.0018217805;
            } else {
              result[5] += -0.14672698;
            }
          } else {
            result[5] += -0.16933525;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[5] += -0.16057347;
            } else {
              result[5] += 0.21410507;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[5] += -0.17305125;
            } else {
              result[5] += 0.08968882;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
              result[5] += -0.1524953;
            } else {
              result[5] += -0.18828203;
            }
          } else {
            result[5] += 0.15090013;
          }
        } else {
          result[5] += -0.17942098;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            result[5] += -0.14044774;
          } else {
            result[5] += -0.030707462;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)8581)) {
              result[5] += 0.13915835;
            } else {
              result[5] += 0.26228625;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
              result[5] += 0.2564455;
            } else {
              result[5] += -0.11158929;
            }
          }
        }
      } else {
        result[5] += -0.15671231;
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
        result[5] += -0.15203221;
      } else {
        result[5] += 0.1473076;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[5] += 0.13851379;
            } else {
              result[5] += -0.123012125;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)63923)) {
              result[5] += -0.15407704;
            } else {
              result[5] += 0.12084557;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
              result[5] += 0.06180172;
            } else {
              result[5] += -0.16949378;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
              result[5] += 0.23920652;
            } else {
              result[5] += 0.016717823;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
              result[5] += -0.17524827;
            } else {
              result[5] += 0.3248537;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[5] += 0.2023676;
            } else {
              result[5] += -0.0028301012;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28526)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)9329)) {
              result[5] += -0.16930833;
            } else {
              result[5] += -0.03519611;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28765)) {
              result[5] += 0.22408618;
            } else {
              result[5] += 0.0120415;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
            result[6] += -0.00049216766;
          } else {
            result[6] += -0.08441351;
          }
        } else {
          result[6] += -0.13090074;
        }
      } else {
        result[6] += -0.13549757;
      }
    } else {
      result[6] += 0.13919272;
    }
  } else {
    result[6] += -0.14860542;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[7] += 0.005806165;
            } else {
              result[7] += -0.1398161;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[7] += 0.122493304;
            } else {
              result[7] += -0.0839906;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[7] += -0.011027595;
            } else {
              result[7] += 0.09577664;
            }
          } else {
            result[7] += -0.18483642;
          }
        }
      } else {
        result[7] += 0.15007639;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        result[7] += -0.11147254;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
          result[7] += 0.14600144;
        } else {
          result[7] += -0.14545503;
        }
      }
    }
  } else {
    result[7] += -0.14470807;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[8] += -3.8701495e-05;
            } else {
              result[8] += 0.060166832;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
              result[8] += 0.114946485;
            } else {
              result[8] += 0.025806123;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)34135)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
              result[8] += -0.14238274;
            } else {
              result[8] += -0.25971866;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += 0.024831302;
            } else {
              result[8] += -0.14811426;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          result[8] += -0.15096274;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1878)) {
              result[8] += 0.07852024;
            } else {
              result[8] += 0.1422957;
            }
          } else {
            result[8] += -0.14182355;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
              result[8] += 0.115687646;
            } else {
              result[8] += 0.16279073;
            }
          } else {
            result[8] += -0.076171026;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            result[8] += -0.15976638;
          } else {
            result[8] += 0.14542317;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)265767216)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
              result[8] += -0.15830126;
            } else {
              result[8] += -0.0069788094;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[8] += -0.14978786;
            } else {
              result[8] += -0.06401131;
            }
          }
        } else {
          result[8] += 0.14830975;
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      result[8] += -0.15521324;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)311)) {
            result[8] += 0.14528596;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
              result[8] += 0.06712591;
            } else {
              result[8] += 0.0040499335;
            }
          }
        } else {
          result[8] += -0.10675105;
        }
      } else {
        result[8] += -0.14284113;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
              result[9] += 0.002062214;
            } else {
              result[9] += -0.14685588;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.14277361;
            } else {
              result[9] += 0.1508256;
            }
          }
        } else {
          result[9] += -0.1468103;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
          result[9] += -0.14900981;
        } else {
          result[9] += 0.14146025;
        }
      }
    } else {
      result[9] += -0.14692399;
    }
  } else {
    result[9] += -0.14762864;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35306)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
              result[10] += 0.0012671201;
            } else {
              result[10] += -0.14609008;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)265767216)) {
              result[10] += 1.1473284;
            } else {
              result[10] += 0.14992407;
            }
          }
        } else {
          result[10] += -0.15557969;
        }
      } else {
        result[10] += -0.1503818;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[10] += -0.15002206;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[10] += -0.38542742;
            } else {
              result[10] += 0.12533194;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
              result[10] += -0.092643745;
            } else {
              result[10] += 0.014764049;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[10] += -0.13909698;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[10] += 0.1434856;
            } else {
              result[10] += -0.09874039;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[10] += 0.563488;
            } else {
              result[10] += 0.21202606;
            }
          } else {
            result[10] += -0.101528175;
          }
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14469181;
    } else {
      result[10] += 0.019343395;
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[11] += -0.0022316477;
            } else {
              result[11] += -0.15260017;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42428)) {
              result[11] += 0.0011699265;
            } else {
              result[11] += 0.016148087;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2221068800)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)304)) {
              result[11] += 0.009052126;
            } else {
              result[11] += 0.040516123;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[11] += 0.0005652161;
            } else {
              result[11] += -0.027363172;
            }
          }
        }
      } else {
        result[11] += -0.15041782;
      }
    } else {
      result[11] += -0.14543663;
    }
  } else {
    result[11] += -0.14667591;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += 0.0009875076;
            } else {
              result[12] += -0.1443495;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[12] += 0.15268241;
            } else {
              result[12] += -0.15025985;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
            result[12] += -0.15169618;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
              result[12] += 0.020612687;
            } else {
              result[12] += -0.006450191;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += -0.11491584;
            } else {
              result[12] += -0.14871158;
            }
          } else {
            result[12] += -0.00918328;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            result[12] += 0.15987214;
          } else {
            result[12] += -0.12574795;
          }
        }
      }
    } else {
      result[12] += -0.15086249;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)151)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.14957686;
            } else {
              result[12] += -0.13338503;
            }
          } else {
            result[12] += 0.14936621;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
            result[12] += 0.07329673;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[12] += -0.38314655;
            } else {
              result[12] += -0.12011411;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
            result[12] += -0.24985737;
          } else {
            result[12] += -0.15701404;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.14743736;
            } else {
              result[12] += 0.02934772;
            }
          } else {
            result[12] += -0.13781;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          result[12] += -0.14433311;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.13242508;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.13220102;
            } else {
              result[12] += -0.117392;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          result[12] += 0.13923195;
        } else {
          result[12] += -0.087460056;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.002774702;
            } else {
              result[13] += -0.048167307;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[13] += 0.012381251;
            } else {
              result[13] += -0.14614941;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2538908928)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
              result[13] += -0.007535214;
            } else {
              result[13] += 0.24643974;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
              result[13] += -0.13245973;
            } else {
              result[13] += -0.038425326;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1878)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)296821792)) {
              result[13] += 0.010276264;
            } else {
              result[13] += -0.13391098;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[13] += -0.06498771;
            } else {
              result[13] += 0.15517418;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)32)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[13] += 0.1474129;
            } else {
              result[13] += -0.02848587;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5742)) {
              result[13] += -0.094180785;
            } else {
              result[13] += 0.103272475;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
            result[13] += 0.13361429;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)39)) {
              result[13] += -0.11846225;
            } else {
              result[13] += 0.13077231;
            }
          }
        } else {
          result[13] += 0.1356329;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
              result[13] += 0.13375024;
            } else {
              result[13] += -0.08775191;
            }
          } else {
            result[13] += 0.18937439;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)883932608)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)644409920)) {
              result[13] += -0.17220813;
            } else {
              result[13] += -0.05259094;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
              result[13] += 0.08244864;
            } else {
              result[13] += -0.012476114;
            }
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
      result[13] += -0.14347306;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
        result[13] += -0.07847947;
      } else {
        result[13] += 0.034854654;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[14] += 0.0016940094;
            } else {
              result[14] += -0.1470947;
            }
          } else {
            result[14] += -0.15351936;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
            result[14] += 0.14539115;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[14] += 0.034160275;
            } else {
              result[14] += -0.04652097;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
            result[14] += -0.14994663;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[14] += 0.43790624;
            } else {
              result[14] += -0.122811444;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)104)) {
              result[14] += 0.14483055;
            } else {
              result[14] += -0.006101684;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1879)) {
              result[14] += -0.14933881;
            } else {
              result[14] += 0.030030822;
            }
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[14] += -0.023364428;
      } else {
        result[14] += -0.021437889;
      }
    }
  } else {
    result[14] += -0.14531705;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)27219)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22343)) {
              result[0] += -0.0013608371;
            } else {
              result[0] += 0.054059487;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
              result[0] += -0.04907199;
            } else {
              result[0] += -0.17165162;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)35706)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += 0.044473518;
            } else {
              result[0] += 0.19607262;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[0] += -0.070914656;
            } else {
              result[0] += 0.00435529;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)122)) {
          result[0] += -0.075902306;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
            result[0] += -0.0475397;
          } else {
            result[0] += 0.19187875;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[0] += -0.14372016;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            result[0] += 0.102069244;
          } else {
            result[0] += -0.13489982;
          }
        } else {
          result[0] += 0.10388202;
        }
      }
    }
  } else {
    result[0] += -0.14383532;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)25)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)320)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.0013622189;
            } else {
              result[1] += 0.07936996;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)323)) {
              result[1] += -0.111979194;
            } else {
              result[1] += -0.023474578;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
              result[1] += 0.03662962;
            } else {
              result[1] += -0.012130958;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
              result[1] += -0.09069492;
            } else {
              result[1] += -0.008068584;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
          result[1] += -0.15146968;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
            result[1] += 0.7380704;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1095392640)) {
              result[1] += 0.14250052;
            } else {
              result[1] += 0.044044994;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
              result[1] += -0.15042369;
            } else {
              result[1] += -0.068611614;
            }
          } else {
            result[1] += 0.10521105;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)316)) {
            result[1] += 0.17191154;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
              result[1] += -0.14911449;
            } else {
              result[1] += 0.08228195;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
          result[1] += -0.13597003;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)262)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
              result[1] += 0.14703354;
            } else {
              result[1] += -0.08953951;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[1] += 0.17459068;
            } else {
              result[1] += 0.025551386;
            }
          }
        }
      }
    }
  } else {
    result[1] += 0.16788235;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)837)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
            result[2] += -0.12188817;
          } else {
            result[2] += -0.037668735;
          }
        } else {
          result[2] += -0.049002502;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)19951)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)16519)) {
              result[2] += 0.020647537;
            } else {
              result[2] += -0.05207323;
            }
          } else {
            result[2] += -0.144312;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)23587)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)23202)) {
              result[2] += 0.012097466;
            } else {
              result[2] += 1.3662484;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
              result[2] += -0.018404713;
            } else {
              result[2] += 0.0065217726;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)41059)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)40237)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
              result[2] += 0.019043501;
            } else {
              result[2] += -0.026769536;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)40780)) {
              result[2] += 0.050403453;
            } else {
              result[2] += 0.12692215;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)43113)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42189)) {
              result[2] += 0.004589483;
            } else {
              result[2] += -0.10115959;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)45055)) {
              result[2] += 0.052972518;
            } else {
              result[2] += 0.014292885;
            }
          }
        }
      } else {
        result[2] += 0.14257741;
      }
    }
  } else {
    result[2] += -0.14837182;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.14869174;
    } else {
      result[3] += -0.046021026;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[3] += -0.13997167;
      } else {
        result[3] += 0.103164926;
      }
    } else {
      result[3] += 0.1373125;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
              result[4] += -0.02087582;
            } else {
              result[4] += -0.0047285594;
            }
          } else {
            result[4] += -0.12836231;
          }
        } else {
          result[4] += -0.13389364;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)31100)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)29953)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)22390)) {
              result[4] += 0.022845227;
            } else {
              result[4] += 0.0016995871;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)30238)) {
              result[4] += -0.1494117;
            } else {
              result[4] += -0.0022422513;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32230)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)31693)) {
              result[4] += 0.024399525;
            } else {
              result[4] += 0.15583192;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)34318)) {
              result[4] += -0.07755659;
            } else {
              result[4] += 0.021081418;
            }
          }
        }
      }
    } else {
      if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
        result[4] += 0.14749102;
      } else {
        result[4] += -0.078286864;
      }
    }
  } else {
    result[4] += -0.14836015;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1402044288)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
              result[5] += 0.00020163285;
            } else {
              result[5] += 0.22317216;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
              result[5] += -0.12700877;
            } else {
              result[5] += 0.17111623;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[5] += 0.04529025;
            } else {
              result[5] += 0.23951592;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
              result[5] += -0.09350826;
            } else {
              result[5] += 0.039247245;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          result[5] += -0.15661924;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
              result[5] += 0.7151373;
            } else {
              result[5] += -0.15225035;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
              result[5] += -0.077886164;
            } else {
              result[5] += 0.058750857;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
          result[5] += -0.15596817;
        } else {
          result[5] += -0.18887505;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)18597)) {
          result[5] += 0.29106748;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)29825)) {
            result[5] += -0.16367683;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += -0.15023592;
            } else {
              result[5] += 0.090506665;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1418493568)) {
            result[5] += 0.09918796;
          } else {
            result[5] += -0.15211244;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            result[5] += -0.15519512;
          } else {
            result[5] += -0.17986688;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
            result[5] += -0.08113885;
          } else {
            result[5] += 0.1429887;
          }
        } else {
          result[5] += -0.15054676;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)36194)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
              result[5] += -0.111261636;
            } else {
              result[5] += 0.03517936;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1893026944)) {
              result[5] += -0.17271563;
            } else {
              result[5] += -0.10650903;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[5] += 0.09100359;
            } else {
              result[5] += 0.40244234;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
              result[5] += -0.13715105;
            } else {
              result[5] += 0.25225535;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32920)) {
            result[5] += -0.15223998;
          } else {
            result[5] += -0.17641443;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
              result[5] += 0.101212814;
            } else {
              result[5] += -0.09984012;
            }
          } else {
            result[5] += -0.1394569;
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
            result[6] += -0.00023140179;
          } else {
            result[6] += -0.08104047;
          }
        } else {
          result[6] += -0.12850556;
        }
      } else {
        result[6] += -0.13360125;
      }
    } else {
      result[6] += 0.137671;
    }
  } else {
    result[6] += -0.14835915;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[7] += -0.012807662;
            } else {
              result[7] += 0.08596431;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
              result[7] += 0.042739492;
            } else {
              result[7] += 0.003499231;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)350)) {
            result[7] += -0.16009057;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
              result[7] += 0.028289607;
            } else {
              result[7] += -0.09603298;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
              result[7] += -0.013621444;
            } else {
              result[7] += -0.046292767;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
              result[7] += -0.007799194;
            } else {
              result[7] += 0.066358715;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            result[7] += 0.14763974;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[7] += -0.13538714;
            } else {
              result[7] += 0.14586757;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[7] += 0.15047759;
        } else {
          result[7] += 0.042425178;
        }
      } else {
        result[7] += -0.13111268;
      }
    }
  } else {
    result[7] += -0.14386465;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[8] += -0.040016722;
            } else {
              result[8] += -0.14511406;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[8] += 0.099422276;
            } else {
              result[8] += -0.14705732;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[8] += 0.0013569944;
            } else {
              result[8] += 0.042596392;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[8] += -0.15199725;
            } else {
              result[8] += 0.04713377;
            }
          }
        }
      } else {
        result[8] += -0.15738091;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        result[8] += 0.16035372;
      } else {
        result[8] += -0.11475284;
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
      result[8] += -0.15356418;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
          result[8] += 0.15262228;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)239)) {
              result[8] += -0.42084548;
            } else {
              result[8] += -0.12426237;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)39)) {
              result[8] += 0.14691113;
            } else {
              result[8] += -0.12044881;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          result[8] += -0.15053532;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[8] += 0.115593225;
            } else {
              result[8] += -0.12542014;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1404)) {
              result[8] += -0.14300482;
            } else {
              result[8] += 0.11401607;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[9] += 3.819489e-05;
            } else {
              result[9] += 0.0966432;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1532925184)) {
              result[9] += 0.13037175;
            } else {
              result[9] += -0.22263087;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
              result[9] += -0.14570764;
            } else {
              result[9] += 0.09167037;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[9] += 0.037607737;
            } else {
              result[9] += 0.16265966;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[9] += -0.085089214;
            } else {
              result[9] += -0.25529757;
            }
          } else {
            result[9] += 0.15882048;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
              result[9] += -0.15017292;
            } else {
              result[9] += 0.13692807;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[9] += 0.047109656;
            } else {
              result[9] += -0.029999327;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
        result[9] += 0.15365507;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)398755392)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)382589280)) {
            result[9] += 0.16921306;
          } else {
            result[9] += -0.24031071;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45184)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44233)) {
              result[9] += 0.0504088;
            } else {
              result[9] += -0.21089657;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
              result[9] += 0.19576918;
            } else {
              result[9] += 0.15640764;
            }
          }
        }
      }
    }
  } else {
    result[9] += -0.14734834;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
              result[10] += 0.000102651065;
            } else {
              result[10] += -0.101094395;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42171)) {
              result[10] += 0.11411978;
            } else {
              result[10] += 0.0071812286;
            }
          }
        } else {
          result[10] += -0.14115727;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)36194)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33879)) {
              result[10] += -0.3271275;
            } else {
              result[10] += 0.14718603;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.11194322;
            } else {
              result[10] += -0.5090109;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
              result[10] += 0.09942035;
            } else {
              result[10] += -0.4089914;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[10] += -0.49528947;
            } else {
              result[10] += -0.035401817;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
            result[10] += -0.37017727;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
              result[10] += 0.15512766;
            } else {
              result[10] += -0.284019;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
              result[10] += -0.46927923;
            } else {
              result[10] += 0.16756359;
            }
          } else {
            result[10] += 0.16905403;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
              result[10] += -0.37881103;
            } else {
              result[10] += 0.039527208;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58145)) {
              result[10] += -0.1609624;
            } else {
              result[10] += -0.48734766;
            }
          }
        } else {
          result[10] += 0.15460311;
        }
      }
    }
  } else {
    result[10] += -0.14331748;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)25)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
              result[11] += 0.0017018542;
            } else {
              result[11] += -0.03387468;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[11] += 0.015016741;
            } else {
              result[11] += 0.13375562;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[11] += -0.16000736;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)19087)) {
              result[11] += -0.01926779;
            } else {
              result[11] += -0.10874524;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
              result[11] += 0.19513333;
            } else {
              result[11] += 0.038014043;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
              result[11] += 0.12782726;
            } else {
              result[11] += -0.007453646;
            }
          }
        } else {
          result[11] += -0.18870662;
        }
      }
    } else {
      result[11] += -0.14534506;
    }
  } else {
    result[11] += -0.16985649;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
              result[12] += -0.007713763;
            } else {
              result[12] += 0.15096378;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[12] += -0.15148774;
            } else {
              result[12] += 0.00023087654;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[12] += -0.18202265;
            } else {
              result[12] += 0.029510899;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
              result[12] += -0.24229586;
            } else {
              result[12] += 0.13577205;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
          result[12] += -0.15294549;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
              result[12] += -0.06958244;
            } else {
              result[12] += -0.13467367;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[12] += 0.4640069;
            } else {
              result[12] += -0.09355979;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[12] += 0.012324688;
            } else {
              result[12] += 0.19786768;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)27752)) {
              result[12] += -0.012499281;
            } else {
              result[12] += -0.15957719;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
              result[12] += 0.06293463;
            } else {
              result[12] += -0.032524038;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
              result[12] += 0.2813833;
            } else {
              result[12] += 0.082397744;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9027)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
              result[12] += -0.13451308;
            } else {
              result[12] += 0.4080244;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[12] += -0.15056022;
            } else {
              result[12] += -0.08010679;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
            result[12] += 0.49255204;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43961)) {
              result[12] += 0.03339036;
            } else {
              result[12] += -0.14897783;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[12] += -0.00012266339;
            } else {
              result[12] += 0.13422519;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
              result[12] += 0.11074551;
            } else {
              result[12] += -0.17273359;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[12] += -0.12316249;
            } else {
              result[12] += 0.17987895;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)5483)) {
              result[12] += -0.15438893;
            } else {
              result[12] += 0.08055928;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
              result[12] += 0.07206912;
            } else {
              result[12] += 0.011624129;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[12] += 0.15799445;
            } else {
              result[12] += -0.054451533;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58670)) {
              result[12] += 0.16666394;
            } else {
              result[12] += -0.21291323;
            }
          } else {
            result[12] += 0.17229718;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)24)) {
            result[12] += -0.15339643;
          } else {
            result[12] += -0.020238511;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            result[12] += 0.1385014;
          } else {
            result[12] += -0.1245787;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
          result[12] += 0.1466851;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.1444555;
            } else {
              result[12] += -0.02017279;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)151)) {
              result[12] += 0.14009736;
            } else {
              result[12] += -0.092151016;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)16)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
              result[13] += -0.02282298;
            } else {
              result[13] += 0.02709687;
            }
          } else {
            result[13] += -0.13874136;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[13] += -0.13352345;
            } else {
              result[13] += -0.05441228;
            }
          } else {
            result[13] += -0.14755574;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
              result[13] += 0.07338654;
            } else {
              result[13] += 0.2777811;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
              result[13] += -0.13406633;
            } else {
              result[13] += 0.07367161;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5405)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
              result[13] += -0.00889494;
            } else {
              result[13] += -0.1291099;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
              result[13] += -0.00303513;
            } else {
              result[13] += 0.07220772;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
              result[13] += 0.030599004;
            } else {
              result[13] += 0.12715793;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
              result[13] += 0.27328816;
            } else {
              result[13] += 0.017764658;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
              result[13] += 0.01517093;
            } else {
              result[13] += 0.48836488;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3284568832)) {
              result[13] += -0.14753972;
            } else {
              result[13] += -0.03980516;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5909)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[13] += 0.028416488;
            } else {
              result[13] += -0.13565974;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
              result[13] += -0.15000781;
            } else {
              result[13] += -0.11054253;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[13] += -0.13191697;
            } else {
              result[13] += 0.17591624;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[13] += -0.15201929;
            } else {
              result[13] += 0.021177247;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)1311)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)608)) {
              result[13] += -0.14325686;
            } else {
              result[13] += -0.017916612;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
              result[13] += -0.16056979;
            } else {
              result[13] += -0.23647887;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            result[13] += -0.13847537;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
              result[13] += 0.18314217;
            } else {
              result[13] += -0.08194278;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
            result[13] += 0.3147867;
          } else {
            result[13] += 0.023133056;
          }
        } else {
          result[13] += -0.118042216;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[13] += 0.03502484;
            } else {
              result[13] += 0.15678066;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[13] += -0.023079187;
            } else {
              result[13] += 0.16306075;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
            result[13] += -0.20352192;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[13] += -0.10376491;
            } else {
              result[13] += 0.16423875;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
              result[13] += -0.0022168234;
            } else {
              result[13] += 0.100361176;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[13] += -0.138018;
            } else {
              result[13] += 0.1609323;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            result[13] += 0.16535437;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
              result[13] += -0.11966185;
            } else {
              result[13] += -0.012102162;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[14] += 0.0008881327;
            } else {
              result[14] += 0.023205264;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[14] += -0.014399004;
            } else {
              result[14] += -0.20303252;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[14] += 0.04454775;
            } else {
              result[14] += -0.047225337;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
              result[14] += 0.1572512;
            } else {
              result[14] += 0.34240282;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
            result[14] += -0.16244015;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
              result[14] += 0.2750538;
            } else {
              result[14] += 0.08537603;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30078)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
              result[14] += -0.20419364;
            } else {
              result[14] += 0.06348432;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30862)) {
              result[14] += 0.33594164;
            } else {
              result[14] += -0.08969534;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
        result[14] += -0.15004286;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23856)) {
              result[14] += 0.13109514;
            } else {
              result[14] += -0.10141688;
            }
          } else {
            result[14] += 0.16303575;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += 0.06487324;
            } else {
              result[14] += -0.14965917;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += -0.13958806;
            } else {
              result[14] += 0.121474706;
            }
          }
        }
      }
    }
  } else {
    result[14] += -0.14580044;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
              result[0] += 0.002058354;
            } else {
              result[0] += -0.067917936;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[0] += 0.13650766;
            } else {
              result[0] += -0.05438421;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[0] += -0.015030103;
            } else {
              result[0] += -0.1474719;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
              result[0] += -0.02792587;
            } else {
              result[0] += 0.23629971;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)122)) {
          result[0] += -0.0722778;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
            result[0] += -0.046296865;
          } else {
            result[0] += 0.18015589;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[0] += -0.14246102;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          result[0] += 0.09711632;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            result[0] += -0.13126132;
          } else {
            result[0] += 0.0955069;
          }
        }
      }
    }
  } else {
    result[0] += -0.14289457;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          result[1] += -0.091503635;
        } else {
          result[1] += -0.13611071;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[1] += -0.05643973;
        } else {
          result[1] += -0.02625064;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)19087)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
              result[1] += -0.0034451995;
            } else {
              result[1] += -0.044265606;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
              result[1] += 0.061167043;
            } else {
              result[1] += -0.011045121;
            }
          }
        } else {
          result[1] += -0.14255215;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)47076)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1532925184)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[1] += -0.029332148;
            } else {
              result[1] += 0.20580462;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[1] += 0.044713914;
            } else {
              result[1] += -0.1591566;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2221068800)) {
              result[1] += -0.07713348;
            } else {
              result[1] += -0.18273702;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)382589280)) {
              result[1] += 0.15028632;
            } else {
              result[1] += -0.07646372;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[1] += 0.0013565047;
            } else {
              result[1] += 0.028392281;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
              result[1] += -0.034897447;
            } else {
              result[1] += 0.16843642;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
              result[1] += -0.10099568;
            } else {
              result[1] += 0.24419664;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[1] += -0.024728019;
            } else {
              result[1] += 0.112775564;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43961)) {
              result[1] += 0.081174225;
            } else {
              result[1] += -0.06857619;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[1] += -0.1798607;
            } else {
              result[1] += 0.024008896;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[1] += -0.13397442;
            } else {
              result[1] += -0.21455137;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)350)) {
              result[1] += 0.27881178;
            } else {
              result[1] += -0.048383154;
            }
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[1] += 0.11933996;
            } else {
              result[1] += 0.36703095;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
              result[1] += -0.08327894;
            } else {
              result[1] += 0.07781321;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[1] += 0.07051401;
            } else {
              result[1] += 0.014663417;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.14981808;
            } else {
              result[1] += 0.004613867;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
              result[1] += 0.4486259;
            } else {
              result[1] += 0.04837758;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
              result[1] += -0.017169256;
            } else {
              result[1] += 0.031909645;
            }
          }
        } else {
          result[1] += -0.14638017;
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          result[2] += -0.118267454;
        } else {
          result[2] += -0.044213865;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)42608)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37429)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)29481)) {
              result[2] += -0.007124717;
            } else {
              result[2] += 0.03274514;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)40395)) {
              result[2] += -0.086407974;
            } else {
              result[2] += -0.029040826;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)52145)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)51388)) {
              result[2] += 0.04764079;
            } else {
              result[2] += 0.41239563;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)55824)) {
              result[2] += -0.05144739;
            } else {
              result[2] += 0.022987556;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)44853)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)35051)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)27786)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)23202)) {
              result[2] += 0.008357835;
            } else {
              result[2] += 0.22142653;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
              result[2] += -0.07415066;
            } else {
              result[2] += 0.0032179437;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)38428)) {
            result[2] += 0.6491037;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39175)) {
              result[2] += 0.2114882;
            } else {
              result[2] += 0.061852865;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
          result[2] += -0.13487606;
        } else {
          result[2] += 0.12566963;
        }
      }
    }
  } else {
    result[2] += -0.14808221;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.14846456;
    } else {
      result[3] += -0.041653484;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[3] += -0.13839415;
      } else {
        result[3] += 0.09902704;
      }
    } else {
      result[3] += 0.13541836;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)6065)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.018208757;
          } else {
            result[4] += -0.12586802;
          }
        } else {
          result[4] += -0.13186437;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)54906)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)54009)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)53394)) {
              result[4] += 0.017654728;
            } else {
              result[4] += -0.027649147;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)54613)) {
              result[4] += 0.052823056;
            } else {
              result[4] += 0.13573594;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56012)) {
              result[4] += -0.008696109;
            } else {
              result[4] += -0.10868126;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56868)) {
              result[4] += 0.14916031;
            } else {
              result[4] += 0.012123315;
            }
          }
        }
      }
    } else {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)60938)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          result[4] += 0.0012469519;
        } else {
          result[4] += 0.113207184;
        }
      } else {
        result[4] += 0.14679071;
      }
    }
  } else {
    result[4] += -0.1480686;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
              result[5] += 0.0010725155;
            } else {
              result[5] += 0.1456381;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
              result[5] += -0.15529287;
            } else {
              result[5] += 0.14654873;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
              result[5] += 0.05915895;
            } else {
              result[5] += 0.2196957;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
              result[5] += 0.13060975;
            } else {
              result[5] += -0.17826934;
            }
          }
        }
      } else {
        result[5] += -0.17601544;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)24100)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
              result[5] += -0.14698252;
            } else {
              result[5] += 0.18461831;
            }
          } else {
            result[5] += -0.1695594;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
            result[5] += 0.4006384;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[5] += 0.22956286;
            } else {
              result[5] += -0.15425487;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)8581)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
              result[5] += -0.18849064;
            } else {
              result[5] += -0.25033623;
            }
          } else {
            result[5] += -0.15422584;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)23688)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
              result[5] += -0.22705255;
            } else {
              result[5] += 0.18067777;
            }
          } else {
            result[5] += -0.17803966;
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      result[5] += -0.15148298;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)315034144)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
              result[5] += -0.17527984;
            } else {
              result[5] += 0.21073668;
            }
          } else {
            result[5] += -0.16351223;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24342)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24100)) {
              result[5] += -0.09585928;
            } else {
              result[5] += 0.11339221;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[5] += -0.10466884;
            } else {
              result[5] += -0.20136985;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)28526)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3615)) {
              result[5] += -0.056182794;
            } else {
              result[5] += 0.18393207;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1631175168)) {
              result[5] += -0.094250925;
            } else {
              result[5] += 0.009188871;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28765)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[5] += 0.23254304;
            } else {
              result[5] += -0.18039912;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
              result[5] += 0.023187058;
            } else {
              result[5] += -0.14503442;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
            result[6] += -0.00029564745;
          } else {
            result[6] += -0.078461275;
          }
        } else {
          result[6] += -0.12595627;
        }
      } else {
        result[6] += -0.13154516;
      }
    } else {
      result[6] += 0.1358345;
    }
  } else {
    result[6] += -0.14806744;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[7] += 0.005125274;
            } else {
              result[7] += -0.090680115;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)350)) {
              result[7] += -0.15717329;
            } else {
              result[7] += -0.031984232;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[7] += -0.022896616;
            } else {
              result[7] += 0.023938285;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[7] += 0.14660381;
            } else {
              result[7] += -0.04304294;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[7] += 0.14934348;
        } else {
          result[7] += 0.03714944;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        result[7] += -0.106418505;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
          result[7] += 0.14524513;
        } else {
          result[7] += -0.1436727;
        }
      }
    }
  } else {
    result[7] += -0.14291486;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 0.0011014326;
            } else {
              result[8] += -0.15597558;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
              result[8] += 0.15000106;
            } else {
              result[8] += -0.010894719;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)34135)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
              result[8] += -0.13878043;
            } else {
              result[8] += -0.26537728;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[8] += 0.03148104;
            } else {
              result[8] += -0.14701094;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          result[8] += -0.15040731;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1878)) {
              result[8] += 0.0692457;
            } else {
              result[8] += 0.14027329;
            }
          } else {
            result[8] += -0.13898379;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11906)) {
              result[8] += 0.15663314;
            } else {
              result[8] += -0.12388374;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.21501158;
            } else {
              result[8] += 0.14549111;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            result[8] += -0.15310173;
          } else {
            result[8] += 0.14427526;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57147)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15721)) {
              result[8] += -0.15423161;
            } else {
              result[8] += -0.07911818;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
              result[8] += 0.23840669;
            } else {
              result[8] += -0.033162847;
            }
          }
        } else {
          result[8] += 0.14749633;
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      result[8] += -0.1542575;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)311)) {
            result[8] += 0.1436721;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
              result[8] += 0.05420657;
            } else {
              result[8] += -0.008234057;
            }
          }
        } else {
          result[8] += -0.09737872;
        }
      } else {
        result[8] += -0.13992086;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1631175168)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
              result[9] += 0.0008071732;
            } else {
              result[9] += -0.09812543;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31372)) {
              result[9] += 0.014055721;
            } else {
              result[9] += 0.15361582;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36194)) {
              result[9] += -0.020716336;
            } else {
              result[9] += -0.17185175;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.10846389;
            } else {
              result[9] += 0.15421575;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[9] += -0.20837077;
            } else {
              result[9] += 0.15455747;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[9] += 0.21114445;
            } else {
              result[9] += 0.15548098;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
              result[9] += -0.23072936;
            } else {
              result[9] += 0.14400785;
            }
          } else {
            result[9] += 0.16054758;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
            result[9] += 0.17449981;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[9] += -0.16423388;
            } else {
              result[9] += 0.00953685;
            }
          }
        } else {
          result[9] += 0.15567863;
        }
      } else {
        result[9] += 0.16039532;
      }
    }
  } else {
    result[9] += -0.1468804;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)627447552)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[10] += 0.0011739796;
            } else {
              result[10] += -0.14876354;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
              result[10] += 0.16763435;
            } else {
              result[10] += 0.04885212;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[10] += -0.38897493;
            } else {
              result[10] += 0.12972648;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.08054409;
            } else {
              result[10] += -0.0070734895;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
              result[10] += -0.37536243;
            } else {
              result[10] += 0.00074776245;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15721)) {
              result[10] += 0.019659763;
            } else {
              result[10] += -0.38211027;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
            result[10] += -0.43409204;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)901448896)) {
              result[10] += 0.12438334;
            } else {
              result[10] += 0.021100255;
            }
          }
        }
      }
    } else {
      result[10] += -0.14085534;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14336902;
    } else {
      result[10] += 0.023138572;
    }
  }
}

