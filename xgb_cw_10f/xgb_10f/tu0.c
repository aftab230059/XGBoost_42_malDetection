
#include "header.h"

void predict_unit0(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += -0.15240791;
            } else {
              result[0] += -0.16070165;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 1.2322909;
            } else {
              result[0] += -0.14967959;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[0] += -0.1606491;
            } else {
              result[0] += -0.12384606;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.1606865;
            } else {
              result[0] += -0.10800338;
            }
          }
        }
      } else {
        result[0] += 1.8240997;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.15521957;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 1.7027026;
            } else {
              result[0] += -0.14754099;
            }
          }
        } else {
          result[0] += -0.16067863;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          result[0] += 2.247397;
        } else {
          result[0] += -0.16065837;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[0] += -0.16057608;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            result[0] += 1.8282325;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.26717874;
            } else {
              result[0] += -0.12683357;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            result[0] += 2.2366216;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[0] += 1.4208573;
            } else {
              result[0] += 2.1942968;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += -0.13877518;
            } else {
              result[0] += 0.14325258;
            }
          } else {
            result[0] += 2.2279685;
          }
        }
      }
    } else {
      result[0] += -0.16070673;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        result[1] += -0.1606142;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[1] += 1.0785602;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.028588355;
            } else {
              result[1] += 1.2603762;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.020081649;
            } else {
              result[1] += -0.15065761;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 1.7553431;
            } else {
              result[1] += -0.14791118;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
              result[1] += 0.2535211;
            } else {
              result[1] += 0.99168557;
            }
          } else {
            result[1] += 1.8656036;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[1] += 2.2479548;
          } else {
            result[1] += -0.10912982;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.16046685;
            } else {
              result[1] += 2.0057886;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[1] += 2.1112208;
            } else {
              result[1] += 0.0251011;
            }
          }
        } else {
          result[1] += -0.16063704;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[1] += -0.16070835;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.14958449;
            } else {
              result[1] += 1.9780375;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[1] += -0.08804859;
            } else {
              result[1] += -0.15007491;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          result[1] += -0.16071236;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[1] += 0.73850614;
            } else {
              result[1] += -0.15907961;
            }
          } else {
            result[1] += -0.16033696;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += 0.20740043;
            } else {
              result[1] += 1.4111748;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[1] += 1.9540052;
            } else {
              result[1] += 0.67273474;
            }
          }
        } else {
          result[1] += -0.16061053;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += -0.1074141;
            } else {
              result[1] += 0.43958488;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[1] += -0.14416476;
            } else {
              result[1] += 2.142476;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[1] += -0.16067874;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 1.6050955;
            } else {
              result[1] += -0.15893552;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.094941586;
        } else {
          result[2] += -0.15671642;
        }
      } else {
        result[2] += -0.16069989;
      }
    } else {
      result[2] += -0.16071346;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 1.393146;
      } else {
        result[2] += 2.2495964;
      }
    } else {
      result[2] += -0.16057524;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
            result[3] += -0.16068792;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
              result[3] += -0.16046812;
            } else {
              result[3] += 1.8093994;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[3] += -0.16069305;
          } else {
            result[3] += 2.2415395;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[3] += -0.16035703;
        } else {
          result[3] += 2.239049;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.16070549;
      } else {
        result[3] += 2.248057;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      result[3] += -0.16052285;
    } else {
      result[3] += 2.2490728;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[4] += -0.16070057;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[4] += -0.11427519;
      } else {
        result[4] += 2.07105;
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 2.1253386;
            } else {
              result[4] += 0.8768336;
            }
          } else {
            result[4] += 2.227707;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)54161)) {
            result[4] += 1.2910309;
          } else {
            result[4] += 1.080189;
          }
        }
      } else {
        result[4] += 2.2478988;
      }
    } else {
      result[4] += 2.2497911;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[5] += -0.07707915;
            } else {
              result[5] += -0.15671642;
            }
          } else {
            result[5] += -0.16069989;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[5] += 0.65242255;
          } else {
            result[5] += -0.12584378;
          }
        }
      } else {
        result[5] += -0.1607016;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.16071337;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.1607046;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[5] += -0.1438616;
            } else {
              result[5] += 0.2429094;
            }
          } else {
            result[5] += -0.16063718;
          }
        }
      }
    }
  } else {
    result[5] += 2.0749161;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[6] += -0.042256407;
          } else {
            result[6] += -0.16069989;
          }
        } else {
          result[6] += -0.16070165;
        }
      } else {
        result[6] += 1.648038;
      }
    } else {
      result[6] += -0.16071346;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[6] += 2.1899393;
    } else {
      result[6] += -0.16032529;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 1.1622856;
            } else {
              result[7] += -0.15671642;
            }
          } else {
            result[7] += 2.1878119;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
              result[7] += -0.010673844;
            } else {
              result[7] += 0.84020823;
            }
          } else {
            result[7] += -0.16069928;
          }
        }
      } else {
        result[7] += -0.16070165;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.14235349;
            } else {
              result[7] += 1.122749;
            }
          } else {
            result[7] += -0.16041563;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 2.2036443;
            } else {
              result[7] += -0.15542221;
            }
          } else {
            result[7] += -0.16060367;
          }
        }
      } else {
        result[7] += -0.16036215;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 1.9873033;
            } else {
              result[7] += 2.2338617;
            }
          } else {
            result[7] += -0.16061886;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            result[7] += 2.249969;
          } else {
            result[7] += -0.106983654;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.16062215;
        } else {
          result[7] += 0.46494463;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[7] += -0.14957154;
            } else {
              result[7] += 0.8048384;
            }
          } else {
            result[7] += 2.247073;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[7] += -0.16050768;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[7] += -0.14566383;
            } else {
              result[7] += 2.02095;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[7] += -0.15848778;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[7] += 2.2496061;
            } else {
              result[7] += -0.13807139;
            }
          } else {
            result[7] += -0.14054658;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1415)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[8] += -0.15997998;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.2571948;
            } else {
              result[8] += -0.16067313;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[8] += 0.4618566;
            } else {
              result[8] += 2.229412;
            }
          } else {
            result[8] += -0.16068068;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.16069663;
            } else {
              result[8] += -0.05162934;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.14993931;
            } else {
              result[8] += -0.16071238;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 2.165876;
            } else {
              result[8] += -0.089108914;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.36612183;
            } else {
              result[8] += -0.1607096;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[8] += -0.15582308;
        } else {
          result[8] += 2.2370322;
        }
      } else {
        result[8] += -0.15990664;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      result[8] += 2.240163;
    } else {
      result[8] += -0.11623617;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += -0.13551508;
            } else {
              result[9] += -0.16070165;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 2.2264895;
            } else {
              result[9] += -0.16012216;
            }
          }
        } else {
          result[9] += -0.16071327;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 2.218936;
          } else {
            result[9] += -0.15968527;
          }
        } else {
          result[9] += -0.16033855;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15991415;
          } else {
            result[9] += 2.2368555;
          }
        } else {
          result[9] += -0.16043021;
        }
      } else {
        result[9] += -0.16070566;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 2.2473125;
      } else {
        result[9] += -0.10210697;
      }
    } else {
      result[9] += -0.16064808;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[10] += -0.13753104;
            } else {
              result[10] += -0.16070035;
            }
          } else {
            result[10] += -0.16070165;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[10] += 0.84239614;
          } else {
            result[10] += -0.14967959;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[10] += -0.16069353;
            } else {
              result[10] += -0.14805958;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.29770425;
            } else {
              result[10] += -0.16054572;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.16065973;
            } else {
              result[10] += 0.5316045;
            }
          } else {
            result[10] += -0.16070496;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[10] += -0.16070172;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[10] += 2.2444742;
          } else {
            result[10] += -0.11623617;
          }
        } else {
          result[10] += -0.16067456;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[10] += -0.15769713;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 1.0564866;
            } else {
              result[10] += -0.054774906;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[10] += -0.16002332;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[10] += -0.07728935;
            } else {
              result[10] += -0.14613126;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[10] += 0.1981132;
          } else {
            result[10] += 2.2002668;
          }
        } else {
          result[10] += -0.15285833;
        }
      }
    } else {
      result[10] += -0.1607061;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          result[11] += -0.16010919;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.3890978;
            } else {
              result[11] += -0.16042203;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += -0.15786155;
            } else {
              result[11] += 0.4086039;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.16069686;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 1.3857048;
            } else {
              result[11] += -0.15522306;
            }
          }
        } else {
          result[11] += -0.16063713;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[11] += 2.0604947;
            } else {
              result[11] += -0.1299915;
            }
          } else {
            result[11] += -0.15438473;
          }
        } else {
          result[11] += -0.1566149;
        }
      } else {
        result[11] += -0.1606134;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[11] += 0.9170667;
            } else {
              result[11] += -0.1602717;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.16052887;
            } else {
              result[11] += 0.026874164;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            result[11] += 2.2392046;
          } else {
            result[11] += -0.15789473;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += 2.1539621;
            } else {
              result[11] += -0.1463705;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.37285417;
            } else {
              result[11] += 0.0019705081;
            }
          }
        } else {
          result[11] += -0.15979382;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[11] += 0.1078084;
            } else {
              result[11] += 1.6453649;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.14303179;
            } else {
              result[11] += 1.8330414;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += 0.7648982;
            } else {
              result[11] += -0.15422574;
            }
          } else {
            result[11] += -0.16004826;
          }
        }
      } else {
        result[11] += -0.16071005;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.13121147;
            } else {
              result[12] += -0.16070786;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[12] += 1.5434233;
            } else {
              result[12] += -0.16057749;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += 2.2460601;
            } else {
              result[12] += -0.15910004;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.13745701;
            } else {
              result[12] += 0.30809844;
            }
          }
        }
      } else {
        result[12] += -0.16065505;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            result[12] += 2.2144353;
          } else {
            result[12] += -0.12676057;
          }
        } else {
          result[12] += -0.13883847;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[12] += 2.2449167;
            } else {
              result[12] += -0.15719567;
            }
          } else {
            result[12] += -0.16065526;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.14655803;
            } else {
              result[12] += -0.089266986;
            }
          } else {
            result[12] += -0.16070881;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[12] += -0.1600756;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[12] += -0.13681428;
        } else {
          result[12] += 1.3703704;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        result[12] += -0.1571764;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += 2.1720443;
        } else {
          result[12] += -0.15358059;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            result[13] += -0.16012178;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[13] += -0.12075402;
            } else {
              result[13] += 1.4294976;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.16063783;
            } else {
              result[13] += -0.14789209;
            }
          } else {
            result[13] += -0.160703;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[13] += -0.16064435;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.15741092;
            } else {
              result[13] += 1.5555556;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.82453275;
            } else {
              result[13] += -0.16016799;
            }
          } else {
            result[13] += -0.16044015;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.13926397;
            } else {
              result[13] += 0.06096633;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += -0.11517623;
            } else {
              result[13] += 1.7246531;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[13] += -0.15934771;
            } else {
              result[13] += 0.4879518;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 2.1010551;
            } else {
              result[13] += -0.122164376;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.16043578;
            } else {
              result[13] += 0.13690951;
            }
          } else {
            result[13] += -0.16070837;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.15892318;
          } else {
            result[13] += 1.9329993;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        result[13] += 2.168935;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
              result[13] += -0.15925673;
            } else {
              result[13] += 2.0900474;
            }
          } else {
            result[13] += -0.16025075;
          }
        } else {
          result[13] += 1.7618128;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[13] += 2.1112416;
          } else {
            result[13] += -0.13681428;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += -0.13266098;
            } else {
              result[13] += 0.59016395;
            }
          } else {
            result[13] += -0.15214516;
          }
        }
      } else {
        result[13] += 2.2494092;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[14] += -0.054345127;
            } else {
              result[14] += -0.15671642;
            }
          } else {
            result[14] += -0.16069989;
          }
        } else {
          result[14] += -0.16070165;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[14] += 0.0030902398;
            } else {
              result[14] += 2.1869574;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[14] += -0.16055855;
            } else {
              result[14] += -0.1430396;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += 0.3948891;
            } else {
              result[14] += -0.15816723;
            }
          } else {
            result[14] += -0.16059494;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[14] += -0.16069658;
            } else {
              result[14] += -0.15471089;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[14] += 0.03402061;
            } else {
              result[14] += -0.15751295;
            }
          }
        } else {
          result[14] += -0.16071036;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[14] += 1.5016911;
            } else {
              result[14] += 2.2056892;
            }
          } else {
            result[14] += -0.13138686;
          }
        } else {
          result[14] += -0.16063459;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        result[14] += 2.2137938;
      } else {
        result[14] += -0.09287055;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.15147458;
            } else {
              result[14] += 0.09242297;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[14] += 0.072616786;
            } else {
              result[14] += 1.7785017;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.1598061;
            } else {
              result[14] += 2.1531417;
            }
          } else {
            result[14] += -0.1606062;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[14] += -0.15907304;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.11461568;
            } else {
              result[14] += -0.15859261;
            }
          }
        } else {
          result[14] += -0.16070981;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -0.1439229;
            } else {
              result[0] += -0.15727235;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.51737607;
            } else {
              result[0] += -0.135436;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[0] += -0.15634593;
            } else {
              result[0] += -0.10095916;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.15624811;
            } else {
              result[0] += -0.08203094;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[0] += -0.16852288;
        } else {
          result[0] += 0.4300926;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[0] += -0.15316975;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[0] += -0.115125805;
            } else {
              result[0] += 0.6373389;
            }
          }
        } else {
          result[0] += -0.15625376;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          result[0] += 0.33909005;
        } else {
          result[0] += -0.15612043;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[0] += -0.15721396;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[0] += 0.316262;
            } else {
              result[0] += 0.3620381;
            }
          } else {
            result[0] += -0.21169725;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += -0.12386082;
            } else {
              result[0] += 0.21535167;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.35372883;
            } else {
              result[0] += -0.10593652;
            }
          }
        }
      }
    } else {
      result[0] += -0.15625557;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15628101;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[1] += 0.33546406;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.034593318;
            } else {
              result[1] += 0.29698852;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.020893132;
            } else {
              result[1] += 0.3298854;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 1.9475682;
            } else {
              result[1] += 0.34701595;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += 0.35963228;
            } else {
              result[1] += -0.12618168;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.21488835;
            } else {
              result[1] += 0.4156836;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[1] += -0.10013579;
          } else {
            result[1] += -0.15618032;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[1] += -0.15644786;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += 0.09854497;
            } else {
              result[1] += -0.14643608;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[1] += 3.476134;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += -0.15630795;
            } else {
              result[1] += -0.008279691;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          result[1] += -0.15621465;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[1] += 0.32112724;
            } else {
              result[1] += -0.15472572;
            }
          } else {
            result[1] += -0.15574706;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += 0.043168694;
            } else {
              result[1] += 0.37663957;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.16509375;
            } else {
              result[1] += 0.92948;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
              result[1] += -0.1378428;
            } else {
              result[1] += 0.5637647;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += 0.07433413;
            } else {
              result[1] += 0.66852117;
            }
          }
        }
      } else {
        result[1] += -0.15624304;
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.085104965;
        } else {
          result[2] += -0.15050854;
        }
      } else {
        result[2] += -0.15621564;
      }
    } else {
      result[2] += -0.15647139;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[2] += 0.33895773;
    } else {
      result[2] += -0.15599695;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          result[3] += -0.1564449;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            result[3] += -0.1558089;
          } else {
            result[3] += 0.41498336;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[3] += -0.15617846;
        } else {
          result[3] += 0.33990765;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.15649188;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[3] += 0.35020816;
        } else {
          result[3] += -0.16941813;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.15602596;
    } else {
      result[3] += 0.33891222;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[4] += -0.15646058;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[4] += -0.08610152;
      } else {
        result[4] += 0.36768705;
      }
    }
  } else {
    result[4] += 0.3398732;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[5] += -0.06669123;
            } else {
              result[5] += -0.15050854;
            }
          } else {
            result[5] += -0.15621564;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[5] += 0.34123433;
          } else {
            result[5] += -0.10882941;
          }
        }
      } else {
        result[5] += -0.15618704;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15647313;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.1562773;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += -0.13627651;
            } else {
              result[5] += 0.8133482;
            }
          } else {
            result[5] += -0.15588315;
          }
        }
      }
    }
  } else {
    result[5] += 0.481048;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[6] += -0.032614183;
          } else {
            result[6] += -0.15621564;
          }
        } else {
          result[6] += -0.15619482;
        }
      } else {
        result[6] += 0.44821024;
      }
    } else {
      result[6] += -0.15647182;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[6] += 0.34861413;
    } else {
      result[6] += -0.15565847;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)54161)) {
              result[7] += 0.3130899;
            } else {
              result[7] += 0.4114154;
            }
          } else {
            result[7] += -0.15050854;
          }
        } else {
          result[7] += -0.15616721;
        }
      } else {
        result[7] += -0.15619482;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.13717315;
            } else {
              result[7] += 0.38386282;
            }
          } else {
            result[7] += -0.1572456;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.37048173;
            } else {
              result[7] += -0.14750049;
            }
          } else {
            result[7] += -0.15669537;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.1560789;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[7] += 0.06436262;
          } else {
            result[7] += -0.1291133;
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[7] += 0.39568597;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += 0.3416894;
            } else {
              result[7] += 0.3384851;
            }
          } else {
            result[7] += -0.15481946;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[7] += -0.20314002;
            } else {
              result[7] += -0.21790631;
            }
          } else {
            result[7] += -0.1579151;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.33771136;
            } else {
              result[7] += -0.15677577;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[7] += 0.33703434;
            } else {
              result[7] += -0.13871992;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[7] += -0.23117416;
      } else {
        result[7] += -0.15635477;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[8] += -0.15527895;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[8] += 0.33189893;
            } else {
              result[8] += -0.16220246;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.10188935;
            } else {
              result[8] += -0.15789822;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[8] += -0.15680076;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[8] += 0.8823374;
            } else {
              result[8] += -0.09381113;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += -0.12043162;
            } else {
              result[8] += -0.15653375;
            }
          } else {
            result[8] += -0.15621792;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
        result[8] += 1.2702351;
      } else {
        result[8] += -0.15145233;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[8] += 0.3502578;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[8] += 0.16869879;
            } else {
              result[8] += 0.34962878;
            }
          }
        } else {
          result[8] += -0.16097139;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[8] += -0.1610168;
            } else {
              result[8] += 1.0014236;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[8] += 1.2819269;
            } else {
              result[8] += 0.7381208;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[8] += 0.34211457;
            } else {
              result[8] += 0.37515423;
            }
          } else {
            result[8] += -0.15835436;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[8] += -0.1579032;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.15638313;
            } else {
              result[8] += 0.3440364;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.22307478;
            } else {
              result[8] += -0.15716344;
            }
          }
        }
      } else {
        result[8] += -0.15628591;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += -0.083859384;
            } else {
              result[9] += -0.15619482;
            }
          } else {
            result[9] += -0.15738586;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[9] += 0.34219453;
          } else {
            result[9] += -0.15536904;
          }
        }
      } else {
        result[9] += -0.1564195;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15841605;
          } else {
            result[9] += 0.3458524;
          }
        } else {
          result[9] += -0.15556462;
        }
      } else {
        result[9] += -0.15643126;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.33946386;
      } else {
        result[9] += -0.15462242;
      }
    } else {
      result[9] += -0.15612692;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)9179)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += -0.12157125;
            } else {
              result[10] += -0.15619482;
            }
          } else {
            result[10] += -0.15720908;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[10] += 0.53076744;
          } else {
            result[10] += -0.135436;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[10] += -0.156427;
            } else {
              result[10] += -0.13662365;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.13430592;
            } else {
              result[10] += -0.15585849;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.1566841;
            } else {
              result[10] += 0.30604422;
            }
          } else {
            result[10] += -0.15635915;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[10] += -0.1563038;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 1.353348;
            } else {
              result[10] += -0.121480994;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.33940598;
            } else {
              result[10] += -0.104543194;
            }
          }
        } else {
          result[10] += -0.15618439;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[10] += -0.15592763;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += 0.2741242;
            } else {
              result[10] += 0.35207665;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += -0.10859083;
            } else {
              result[10] += 0.28018367;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[10] += -0.15389304;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
              result[10] += -0.095961496;
            } else {
              result[10] += -0.13542171;
            }
          }
        }
      }
    } else {
      result[10] += -0.156233;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        result[11] += -0.15548304;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.18966804;
            } else {
              result[11] += 0.7519521;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += -0.15307197;
            } else {
              result[11] += 0.21065053;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.28177658;
            } else {
              result[11] += 0.388011;
            }
          } else {
            result[11] += -0.1480582;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.15680413;
            } else {
              result[11] += 0.11541516;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.53002125;
            } else {
              result[11] += 0.88410014;
            }
          }
        } else {
          result[11] += -0.15690255;
        }
      } else {
        result[11] += -0.15617418;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += -0.12010699;
            } else {
              result[11] += 0.3497103;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[11] += 0.3668865;
            } else {
              result[11] += -0.10578407;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.03880979;
            } else {
              result[11] += 0.31885862;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[11] += 0.38684955;
            } else {
              result[11] += -0.18027127;
            }
          }
        }
      } else {
        result[11] += -0.15780337;
      }
    } else {
      result[11] += -0.15627308;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[12] += -0.155742;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[12] += 0.10082333;
            } else {
              result[12] += -0.15651841;
            }
          } else {
            result[12] += -0.15649268;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.4436167;
            } else {
              result[12] += -0.1285115;
            }
          } else {
            result[12] += 2.2019975;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[12] += -0.156186;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.116035685;
            } else {
              result[12] += 0.173777;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          result[12] += -0.1574001;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[12] += 1.2946705;
          } else {
            result[12] += -0.15107487;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[12] += 1.1185343;
            } else {
              result[12] += 1.4612124;
            }
          } else {
            result[12] += -0.16486904;
          }
        } else {
          result[12] += -0.15557575;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[12] += -0.15148951;
          } else {
            result[12] += 0.35165942;
          }
        } else {
          result[12] += -0.15607004;
        }
      } else {
        result[12] += -0.15718248;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[12] += -0.15623973;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 2.1748729;
            } else {
              result[12] += 0.35584792;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 1.9807417;
            } else {
              result[12] += -0.15207806;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.1509903;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.34549436;
            } else {
              result[12] += -0.13464214;
            }
          } else {
            result[12] += -0.14662412;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            result[13] += -0.15550154;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.09432128;
            } else {
              result[13] += -0.14608033;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15666083;
            } else {
              result[13] += -0.1382056;
            }
          } else {
            result[13] += -0.156239;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[13] += -0.1566638;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.15065373;
            } else {
              result[13] += 0.6732153;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.33202487;
            } else {
              result[13] += -0.15548486;
            }
          } else {
            result[13] += -0.15639634;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += 0.11243517;
            } else {
              result[13] += -0.14680354;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.35743266;
            } else {
              result[13] += -0.16114037;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += 0.085141204;
            } else {
              result[13] += 0.4181833;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.77341545;
            } else {
              result[13] += -0.16269454;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15587953;
            } else {
              result[13] += 0.109380916;
            }
          } else {
            result[13] += -0.15620834;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.15361454;
          } else {
            result[13] += 0.392192;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        result[13] += 0.38394162;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
              result[13] += -0.1585764;
            } else {
              result[13] += 0.4013112;
            }
          } else {
            result[13] += -0.15616813;
          }
        } else {
          result[13] += 0.446371;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.3756874;
            } else {
              result[13] += 0.5173103;
            }
          } else {
            result[13] += 0.3389915;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.1515369;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.13581796;
            } else {
              result[13] += 0.32426268;
            }
          }
        }
      } else {
        result[13] += -0.15324531;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[14] += -0.044176906;
            } else {
              result[14] += -0.15050854;
            }
          } else {
            result[14] += -0.15621564;
          }
        } else {
          result[14] += -0.15619482;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.044213913;
            } else {
              result[14] += 1.111313;
            }
          } else {
            result[14] += -0.15827966;
          }
        } else {
          result[14] += -0.15616031;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.033925742;
            } else {
              result[14] += 0.53145844;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[14] += -0.15726319;
            } else {
              result[14] += -0.12949398;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[14] += -0.15568697;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[14] += 0.36592114;
            } else {
              result[14] += -0.124673516;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[14] += -0.15876925;
            } else {
              result[14] += 0.3663357;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.23400831;
            } else {
              result[14] += -0.1555498;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[14] += -0.1539642;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += 0.35956904;
            } else {
              result[14] += -0.13835675;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[14] += -0.15680279;
            } else {
              result[14] += -0.14790745;
            }
          } else {
            result[14] += -0.15626425;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.49983978;
            } else {
              result[14] += -0.1785565;
            }
          } else {
            result[14] += -0.15622914;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.3538743;
          } else {
            result[14] += -0.23797745;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.13663642;
            } else {
              result[14] += 1.7101861;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.14342333;
            } else {
              result[14] += -0.15605852;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.07797194;
            } else {
              result[14] += 0.09697618;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15619448;
            } else {
              result[14] += 0.3088028;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[14] += 0.30187365;
            } else {
              result[14] += 1.6203011;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += -0.15668848;
            } else {
              result[14] += -0.21018891;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.15507764;
            } else {
              result[14] += 0.37193972;
            }
          } else {
            result[14] += -0.15620676;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            result[14] += 0.280816;
          } else {
            result[14] += 1.035744;
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -0.13950528;
            } else {
              result[0] += -0.15569064;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.2959877;
            } else {
              result[0] += -0.12760422;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[0] += -0.154897;
            } else {
              result[0] += -0.08816517;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.15480618;
            } else {
              result[0] += -0.065458134;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[0] += -0.16248581;
        } else {
          result[0] += 0.30454922;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[0] += -0.15079279;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[0] += -0.106907696;
            } else {
              result[0] += 0.4421969;
            }
          }
        } else {
          result[0] += -0.15480095;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          result[0] += 0.27043933;
        } else {
          result[0] += -0.1546862;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[0] += -0.15574759;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.26846415;
            } else {
              result[0] += 0.19077723;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.26947278;
            } else {
              result[0] += 0.28929177;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[0] += -0.16615164;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[0] += 0.35581863;
            } else {
              result[0] += -0.13896666;
            }
          }
        }
      }
    } else {
      result[0] += -0.15482761;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15485518;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[1] += 0.22353205;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.049082506;
            } else {
              result[1] += 0.21719028;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += 0.08357023;
            } else {
              result[1] += 0.37779066;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += 0.3873778;
            } else {
              result[1] += 0.2682926;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.15531982;
            } else {
              result[1] += -0.019276064;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.20662767;
            } else {
              result[1] += 0.3040129;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[1] += -0.09666219;
          } else {
            result[1] += -0.15473458;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[1] += -0.15497129;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.1270114;
            } else {
              result[1] += 0.31571877;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[1] += -0.038728047;
            } else {
              result[1] += -0.13626626;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          result[1] += -0.15479696;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[1] += 0.23344225;
            } else {
              result[1] += -0.1529237;
            }
          } else {
            result[1] += -0.15419741;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += 0.05285793;
            } else {
              result[1] += 0.26723188;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.16142325;
            } else {
              result[1] += 0.3971419;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.14818537;
            } else {
              result[1] += 0.03401528;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.24258554;
            } else {
              result[1] += -0.1536127;
            }
          }
        }
      } else {
        result[1] += -0.15481025;
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.079101875;
        } else {
          result[2] += -0.14762217;
        }
      } else {
        result[2] += -0.15477927;
      }
    } else {
      result[2] += -0.15503247;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.23454602;
      } else {
        result[2] += 0.26524353;
      }
    } else {
      result[2] += -0.1545199;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          result[3] += -0.1550071;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            result[3] += -0.15427561;
          } else {
            result[3] += 0.2974527;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[3] += -0.15475562;
        } else {
          result[3] += 0.26556793;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.15498656;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[3] += 0.27145535;
          } else {
            result[3] += 0.27895206;
          }
        } else {
          result[3] += -0.15479383;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.15452804;
    } else {
      result[3] += 0.26512116;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15502226;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[4] += -0.073253654;
      } else {
        result[4] += 0.27794656;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += 0.2461759;
            } else {
              result[4] += 0.2756733;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 0.2366889;
            } else {
              result[4] += 0.192366;
            }
          }
        } else {
          result[4] += 0.26533428;
        }
      } else {
        result[4] += 0.2665853;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[5] += -0.061233316;
            } else {
              result[5] += -0.14762217;
            }
          } else {
            result[5] += 0.22182037;
          }
        } else {
          result[5] += -0.15477943;
        }
      } else {
        result[5] += -0.15476456;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15504034;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15484327;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += -0.12830763;
            } else {
              result[5] += 0.4856208;
            }
          } else {
            result[5] += -0.15443963;
          }
        }
      }
    }
  } else {
    result[5] += 0.36864546;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += -0.029876864;
          } else {
            result[6] += 0.31256407;
          }
        } else {
          result[6] += -0.15477927;
        }
      } else {
        result[6] += -0.15477225;
      }
    } else {
      result[6] += -0.15503298;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[6] += 0.27036986;
    } else {
      result[6] += -0.15400076;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[7] += 0.1945181;
            } else {
              result[7] += 0.22378846;
            }
          } else {
            result[7] += -0.14762217;
          }
        } else {
          result[7] += -0.15473026;
        }
      } else {
        result[7] += -0.15477225;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.13224217;
            } else {
              result[7] += 0.24363737;
            }
          } else {
            result[7] += -0.1558145;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.28668767;
            } else {
              result[7] += -0.1468087;
            }
          } else {
            result[7] += -0.15514746;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.15448457;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[7] += 0.06354012;
          } else {
            result[7] += -0.12503913;
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[7] += 0.29140493;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += 0.26664078;
            } else {
              result[7] += 0.26491392;
            }
          } else {
            result[7] += -0.15302855;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[7] += -0.18883409;
          } else {
            result[7] += -0.15625502;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.26393506;
            } else {
              result[7] += -0.14538209;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[7] += 0.26133108;
            } else {
              result[7] += -0.1331731;
            }
          }
        }
      }
    } else {
      result[7] += -0.15499407;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[8] += -0.15359561;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[8] += 0.18462896;
            } else {
              result[8] += 0.58854777;
            }
          } else {
            result[8] += -0.1594354;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[8] += 0.7533988;
            } else {
              result[8] += -0.11503727;
            }
          } else {
            result[8] += -0.15581433;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[8] += -0.15525159;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.12174839;
            } else {
              result[8] += 0.34989965;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[8] += -0.06265745;
            } else {
              result[8] += -0.15521324;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.13675885;
            } else {
              result[8] += 3.2573867;
            }
          } else {
            result[8] += -0.15502112;
          }
        } else {
          result[8] += -0.15480116;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.26203576;
            } else {
              result[8] += -0.15888767;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += 0.2869755;
            } else {
              result[8] += 0.3918998;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[8] += -0.15631533;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.25517872;
            } else {
              result[8] += -0.15842104;
            }
          }
        }
      } else {
        result[8] += -0.15783453;
      }
    } else {
      result[8] += -0.15485325;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[9] += -0.06612387;
            } else {
              result[9] += -0.15524916;
            }
          } else {
            result[9] += -0.15577853;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[9] += 0.26903838;
          } else {
            result[9] += -0.1537387;
          }
        }
      } else {
        result[9] += -0.15499616;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15654656;
          } else {
            result[9] += 0.26964414;
          }
        } else {
          result[9] += -0.15404502;
        }
      } else {
        result[9] += -0.15492931;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.2678027;
      } else {
        result[9] += -0.15283243;
      }
    } else {
      result[9] += -0.15468776;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += -0.11200307;
            } else {
              result[10] += -0.15505165;
            }
          } else {
            result[10] += -0.15564184;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[10] += 0.2922811;
          } else {
            result[10] += -0.12760422;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
            result[10] += -0.15499605;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += -0.11342093;
            } else {
              result[10] += -0.15373978;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.15515462;
            } else {
              result[10] += 0.21993749;
            }
          } else {
            result[10] += -0.15487279;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[10] += -0.15487355;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)9179)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.9611304;
            } else {
              result[10] += -0.09628886;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.2682209;
            } else {
              result[10] += -0.12823054;
            }
          }
        } else {
          result[10] += -0.15473723;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[10] += -0.15429975;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[10] += 0.25567445;
            } else {
              result[10] += -0.11014048;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[10] += 0.26645;
            } else {
              result[10] += -0.21998116;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[10] += -0.15195106;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += -0.10359707;
            } else {
              result[10] += -0.14881928;
            }
          }
        }
      }
    } else {
      result[10] += -0.15480816;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        result[11] += -0.15385193;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.16011429;
            } else {
              result[11] += -0.058144595;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[11] += 0.27258027;
            } else {
              result[11] += -0.14226136;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.40803182;
            } else {
              result[11] += -0.15164901;
            }
          } else {
            result[11] += -0.15484929;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.15526712;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += 0.07996842;
            } else {
              result[11] += 0.30885077;
            }
          }
        } else {
          result[11] += -0.15547611;
        }
      } else {
        result[11] += -0.15470427;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += -0.105043165;
            } else {
              result[11] += 0.26887834;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[11] += 0.32597256;
            } else {
              result[11] += -0.09683471;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.33344373;
            } else {
              result[11] += 0.27115336;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += 0.10861962;
            } else {
              result[11] += 0.24153896;
            }
          }
        }
      } else {
        result[11] += -0.15592234;
      }
    } else {
      result[11] += -0.15485099;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[12] += -0.15408213;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.07417114;
            } else {
              result[12] += 0.30181482;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += -0.15454477;
            } else {
              result[12] += -0.009057462;
            }
          }
        } else {
          result[12] += -0.15485339;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        result[12] += -0.1556168;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += 0.524272;
            } else {
              result[12] += 0.37518594;
            }
          } else {
            result[12] += -0.1638208;
          }
        } else {
          result[12] += -0.15404171;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[12] += -0.14923641;
          } else {
            result[12] += 0.27533337;
          }
        } else {
          result[12] += -0.1545711;
        }
      } else {
        result[12] += -0.15561512;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[12] += -0.15481931;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.35540876;
            } else {
              result[12] += 0.27874327;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.41477647;
            } else {
              result[12] += -0.1493435;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.14825472;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.27334347;
            } else {
              result[12] += -0.12170581;
            }
          } else {
            result[12] += -0.14236465;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            result[13] += -0.15387519;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.08521891;
            } else {
              result[13] += -0.14272882;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15512276;
            } else {
              result[13] += -0.13287427;
            }
          } else {
            result[13] += -0.15481046;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[13] += -0.15517505;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.14775543;
            } else {
              result[13] += 0.39056724;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.2388582;
            } else {
              result[13] += -0.15384007;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += -0.016881349;
            } else {
              result[13] += -0.15467118;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += 0.11024193;
            } else {
              result[13] += -0.14191915;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.25678706;
            } else {
              result[13] += -0.1593815;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += 0.07995072;
            } else {
              result[13] += 0.29280084;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
              result[13] += -0.15379965;
            } else {
              result[13] += -0.20479618;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15441915;
            } else {
              result[13] += 0.07564195;
            }
          } else {
            result[13] += -0.1547948;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.15135327;
          } else {
            result[13] += 0.29302302;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        result[13] += 0.29780325;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
              result[13] += -0.15514502;
            } else {
              result[13] += 0.30643335;
            }
          } else {
            result[13] += -0.15441118;
          }
        } else {
          result[13] += 0.32724822;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[13] += 0.2956958;
          } else {
            result[13] += 0.265242;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.14769427;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += 0.12950647;
            } else {
              result[13] += 0.27568138;
            }
          }
        }
      } else {
        result[13] += -0.14888006;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[14] += -0.040272832;
            } else {
              result[14] += -0.14762217;
            }
          } else {
            result[14] += -0.15477927;
          }
        } else {
          result[14] += -0.15477225;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.03250307;
            } else {
              result[14] += 0.3791591;
            }
          } else {
            result[14] += -0.15630788;
          }
        } else {
          result[14] += -0.15471664;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.028350428;
            } else {
              result[14] += 0.3176348;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[14] += -0.1558013;
            } else {
              result[14] += -0.12148348;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[14] += -0.15413639;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += 0.2773483;
            } else {
              result[14] += -0.09382085;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[14] += -0.15575111;
            } else {
              result[14] += 0.27899885;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.2225518;
            } else {
              result[14] += -0.15393792;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[14] += -0.15181613;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += 0.29042193;
            } else {
              result[14] += -0.13451567;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += -0.1552534;
            } else {
              result[14] += -0.14461629;
            }
          } else {
            result[14] += -0.15483311;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.36136854;
            } else {
              result[14] += -0.16969123;
            }
          } else {
            result[14] += -0.15481031;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.27535072;
          } else {
            result[14] += -0.22635128;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
              result[14] += -0.12203734;
            } else {
              result[14] += 1.948239;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.1369135;
            } else {
              result[14] += -0.15433049;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[14] += 0.08076966;
            } else {
              result[14] += -0.11347125;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
              result[14] += 0.27334693;
            } else {
              result[14] += 0.45240057;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.28385127;
            } else {
              result[14] += 0.37774706;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.14964527;
            } else {
              result[14] += -0.22108176;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.153328;
            } else {
              result[14] += 0.28117463;
            }
          } else {
            result[14] += -0.15479086;
          }
        } else {
          result[14] += 0.33215794;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += -0.1172129;
            } else {
              result[0] += -0.15374005;
            }
          } else {
            result[0] += -0.15446797;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[0] += 0.21086226;
          } else {
            result[0] += -0.11895662;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[0] += -0.15375647;
            } else {
              result[0] += -0.07878528;
            }
          } else {
            result[0] += 0.24525893;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[0] += -0.1537045;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.13040613;
            } else {
              result[0] += 0.87593335;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[0] += -0.14892648;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[0] += -0.098756954;
            } else {
              result[0] += 0.35904104;
            }
          }
        } else {
          result[0] += -0.15367073;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
            result[0] += 0.23530851;
          } else {
            result[0] += 0.2275008;
          }
        } else {
          result[0] += -0.15354525;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[0] += -0.15444121;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.22696225;
            } else {
              result[0] += -0.1014547;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.06151752;
            } else {
              result[0] += 0.21686828;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += 0.218895;
            } else {
              result[0] += 0.23764339;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += -0.016682377;
            } else {
              result[0] += 0.2273575;
            }
          }
        }
      }
    } else {
      result[0] += -0.15370882;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15371731;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[1] += 0.16179779;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.045104116;
            } else {
              result[1] += 0.17020564;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.021790305;
            } else {
              result[1] += 0.1884442;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[1] += 0.22938742;
            } else {
              result[1] += 0.8191243;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += -0.1539352;
            } else {
              result[1] += -0.1989517;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[1] += 1.267842;
            } else {
              result[1] += 0.07908151;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[1] += -0.09301163;
          } else {
            result[1] += -0.15358073;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[1] += -0.15380506;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.14976527;
            } else {
              result[1] += -0.11328986;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[1] += -0.13895781;
            } else {
              result[1] += 0.0457691;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          result[1] += -0.15368143;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[1] += -0.15314502;
            } else {
              result[1] += -0.1857171;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[1] += 0.5325849;
            } else {
              result[1] += -0.14118594;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += 0.16279921;
            } else {
              result[1] += 0.27364883;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.15918021;
            } else {
              result[1] += 0.2840595;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.14462355;
            } else {
              result[1] += 0.044796072;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.18610282;
            } else {
              result[1] += -0.15104559;
            }
          }
        }
      } else {
        result[1] += -0.15369181;
      }
    }
  }
}

