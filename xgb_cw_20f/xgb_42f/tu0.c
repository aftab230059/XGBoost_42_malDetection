
#include "header.h"

void predict_unit0(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
              result[0] += -0.15867254;
            } else {
              result[0] += -0.14365734;
            }
          } else {
            result[0] += -0.07459354;
          }
        } else {
          result[0] += 0.097987324;
        }
      } else {
        result[0] += 1.8240997;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            result[0] += -0.1564805;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[0] += -0.14372946;
            } else {
              result[0] += 1.2061856;
            }
          }
        } else {
          result[0] += -0.16068482;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          result[0] += -0.15965228;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
            result[0] += 2.247397;
          } else {
            result[0] += -0.08490566;
          }
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
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
            result[0] += -0.15210664;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 2.160403;
            } else {
              result[0] += -0.09287055;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[0] += -0.13795806;
            } else {
              result[0] += 1.7618128;
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
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            result[1] += -0.1606142;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.041585922;
            } else {
              result[1] += -0.13984242;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += 1.196498;
            } else {
              result[1] += 2.047724;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[1] += -0.023778077;
            } else {
              result[1] += -0.15050682;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
            result[1] += 1.0711073;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[1] += 1.222319;
            } else {
              result[1] += 1.0259067;
            }
          }
        } else {
          result[1] += -0.16067313;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[1] += 2.2479832;
          } else {
            result[1] += -0.10912982;
          }
        } else {
          result[1] += -0.15085855;
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
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.1563791;
            } else {
              result[1] += -0.16056612;
            }
          } else {
            result[1] += 1.3904924;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.16065453;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.596302;
            } else {
              result[1] += -0.16057801;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.02501985;
            } else {
              result[1] += 0.2848101;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += -0.011512199;
            } else {
              result[1] += 0.16092627;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.056744732;
            } else {
              result[1] += -0.16067638;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[1] += -0.13214403;
            } else {
              result[1] += -0.16031621;
            }
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
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)796)) {
      result[2] += -0.16070199;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 2.152192;
      } else {
        result[2] += -0.16057427;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1556)) {
          result[2] += 0.33549434;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)58434)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)53285)) {
              result[2] += 1.0468483;
            } else {
              result[2] += 0.60923076;
            }
          } else {
            result[2] += 1.3831084;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
          result[2] += 1.5148196;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)58434)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)47387)) {
              result[2] += 0.44554454;
            } else {
              result[2] += -0.1227702;
            }
          } else {
            result[2] += 1.3520441;
          }
        }
      }
    } else {
      result[2] += 2.2498038;
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
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
        result[4] += 2.1006196;
      } else {
        result[4] += -0.15947966;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 2.2498138;
    } else {
      result[4] += -0.15893796;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[5] += -0.16062105;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.16070461;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.14271231;
            } else {
              result[5] += -0.16063643;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.13614011;
        } else {
          result[5] += -0.09525462;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)58434)) {
            result[5] += 1.0466243;
          } else {
            result[5] += 0.50152373;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)35073)) {
              result[5] += 0.5708202;
            } else {
              result[5] += 0.2770305;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)58434)) {
              result[5] += 1.620438;
            } else {
              result[5] += 0.43218687;
            }
          }
        }
      } else {
        result[5] += -0.16070026;
      }
    }
  } else {
    result[5] += 2.0749161;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[6] += 0.022131536;
            } else {
              result[6] += -0.16044027;
            }
          } else {
            result[6] += -0.1606996;
          }
        } else {
          result[6] += -0.16070165;
        }
      } else {
        result[6] += 1.6856186;
      }
    } else {
      result[6] += -0.16071346;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 2.1895378;
    } else {
      result[6] += -0.15998259;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += -0.040110588;
            } else {
              result[7] += -0.14930883;
            }
          } else {
            result[7] += -0.16070165;
          }
        } else {
          result[7] += 2.1120195;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[7] += 1.3589576;
        } else {
          result[7] += 0.3985859;
        }
      }
    } else {
      result[7] += 2.2397563;
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 2.1443493;
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
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.021482348;
            } else {
              result[7] += -0.15951963;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[7] += 2.0391252;
            } else {
              result[7] += -0.016131263;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.049815495;
            } else {
              result[7] += -0.15926975;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
              result[7] += 2.2455084;
            } else {
              result[7] += -0.10465116;
            }
          }
        }
      }
    } else {
      result[7] += -0.16066472;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1415)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[8] += -0.16017908;
            } else {
              result[8] += -0.15123329;
            }
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
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.1521563;
            } else {
              result[8] += -0.16071238;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[8] += 0.54480976;
            } else {
              result[8] += -0.112865604;
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
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += -0.15251195;
            } else {
              result[9] += -0.16068389;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[9] += 0.46289822;
            } else {
              result[9] += -0.16069278;
            }
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
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[9] += 0.4323013;
      } else {
        result[9] += 0.85924345;
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
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += -0.15338941;
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
              result[10] += -0.16063075;
            } else {
              result[10] += -0.13611071;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[10] += -0.15743837;
            } else {
              result[10] += 0.047133308;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[10] += -0.016504632;
        } else {
          result[10] += 0.23657498;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[10] += -0.16041535;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 2.2310882;
            } else {
              result[10] += -0.09932089;
            }
          }
        } else {
          result[10] += -0.16070352;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[10] += 2.2422202;
          } else {
            result[10] += -0.1455271;
          }
        } else {
          result[10] += -0.16059597;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
              result[10] += -0.15952075;
            } else {
              result[10] += 2.2234714;
            }
          } else {
            result[10] += -0.16027442;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[10] += -0.09625669;
          } else {
            result[10] += 2.2424634;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
          result[10] += -0.16038525;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
            result[10] += -0.14767401;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[10] += -0.12845674;
            } else {
              result[10] += 0.08345221;
            }
          }
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
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[11] += -0.16064246;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += 0.08504193;
            } else {
              result[11] += 1.4028013;
            }
          } else {
            result[11] += -0.16069667;
          }
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
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[11] += 0.5882852;
            } else {
              result[11] += 2.2443936;
            }
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
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += -0.15696768;
            } else {
              result[12] += -0.11515527;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[12] += 1.5394078;
            } else {
              result[12] += -0.15700963;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.1502296;
            } else {
              result[12] += 0.33952186;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 1.9508677;
            } else {
              result[12] += -0.15606937;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
              result[12] += 0.016448962;
            } else {
              result[12] += -0.09836066;
            }
          } else {
            result[12] += -0.1606951;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 2.24602;
          } else {
            result[12] += -0.15968853;
          }
        }
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
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[12] += -0.13798262;
            } else {
              result[12] += -0.16070881;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.03534803;
            } else {
              result[12] += 1.3530345;
            }
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
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[13] += -0.1602008;
            } else {
              result[13] += -0.14600503;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[13] += -0.12075402;
            } else {
              result[13] += 1.4294976;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[13] += -0.1607038;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += -0.10341228;
            } else {
              result[13] += -0.1606563;
            }
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
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[13] += -0.05775094;
            } else {
              result[13] += 1.8394159;
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
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 1.3904924;
            } else {
              result[13] += -0.15107913;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[13] += -0.16047125;
            } else {
              result[13] += 0.17974322;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[13] += -0.1534194;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
              result[13] += 1.8572536;
            } else {
              result[13] += -0.08490566;
            }
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
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
              result[13] += -0.15765423;
            } else {
              result[13] += 0.044554453;
            }
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
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[14] += -0.015191754;
            } else {
              result[14] += -0.13588831;
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
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[14] += -0.1368;
            } else {
              result[14] += -0.16056217;
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
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[14] += -0.16071066;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[14] += 0.4663692;
            } else {
              result[14] += 0.94357944;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.1602928;
            } else {
              result[14] += -0.081381954;
            }
          }
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
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.154971;
            } else {
              result[0] += -0.14070556;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.15701495;
            } else {
              result[0] += 1.9602373;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[0] += -0.16852412;
          } else {
            result[0] += 0.42692426;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[0] += -0.056362037;
        } else {
          result[0] += 0.08506588;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            result[0] += -0.15218875;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[0] += -0.11496907;
            } else {
              result[0] += 0.9036363;
            }
          }
        } else {
          result[0] += -0.15626751;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          result[0] += -0.15715541;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
            result[0] += 0.3390074;
          } else {
            result[0] += -0.087446354;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[0] += -0.15720043;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
          result[0] += -0.15731208;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[0] += 0.2902025;
            } else {
              result[0] += 0.35678148;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[0] += -0.15152875;
            } else {
              result[0] += 0.12786512;
            }
          }
        }
      }
    } else {
      result[0] += -0.15626486;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15635118;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
              result[1] += 0.35938376;
            } else {
              result[1] += 0.33737332;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.039873175;
            } else {
              result[1] += 0.29723495;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.32658488;
            } else {
              result[1] += 1.536084;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[1] += 0.34166136;
            } else {
              result[1] += 1.4152651;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += 0.3545583;
            } else {
              result[1] += -0.12652321;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.18483555;
            } else {
              result[1] += 0.33998725;
            }
          }
        } else {
          result[1] += -0.15615624;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.14982629;
            } else {
              result[1] += -0.15598233;
            }
          } else {
            result[1] += 0.49463257;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.1560796;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.4341625;
            } else {
              result[1] += -0.15628648;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.10416291;
            } else {
              result[1] += 0.22410952;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.02945448;
            } else {
              result[1] += 0.27364022;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.0046871216;
            } else {
              result[1] += -0.15642506;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[1] += -0.11303065;
            } else {
              result[1] += -0.15584514;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += 0.043244284;
            } else {
              result[1] += 0.37686616;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.16508107;
            } else {
              result[1] += 0.92943823;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
              result[1] += -0.13782355;
            } else {
              result[1] += 0.54961073;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += 0.07498269;
            } else {
              result[1] += 0.6642846;
            }
          }
        }
      } else {
        result[1] += -0.15625432;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.15647134;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.3443116;
      } else {
        result[2] += -0.15599504;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)29495)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)28740)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)8198)) {
            result[2] += 0.4079433;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)9506)) {
              result[2] += -0.016290134;
            } else {
              result[2] += 0.30427417;
            }
          }
        } else {
          result[2] += -0.030361585;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)63974)) {
          result[2] += 0.4220064;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
            result[2] += 0.0085955;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
              result[2] += 0.117610656;
            } else {
              result[2] += 0.28908706;
            }
          }
        }
      }
    } else {
      result[2] += 0.33875057;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          result[3] += -0.15645383;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            result[3] += -0.15582897;
          } else {
            result[3] += 0.415;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[3] += -0.15626164;
        } else {
          result[3] += 0.35165828;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.15642898;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[3] += 0.34931192;
        } else {
          result[3] += -0.17094761;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.15603533;
    } else {
      result[3] += 0.33892784;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[4] += -0.15646915;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
        result[4] += 0.36281273;
      } else {
        result[4] += -0.15430677;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.34037256;
    } else {
      result[4] += -0.15346721;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.14283128;
            } else {
              result[5] += -0.15615977;
            }
          } else {
            result[5] += -0.15647645;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15630025;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.13235652;
            } else {
              result[5] += -0.15589851;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.12727267;
        } else {
          result[5] += -0.084680416;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
          result[5] += 0.46595034;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)5438)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.111247264;
            } else {
              result[5] += -0.087324716;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
              result[5] += 0.38755977;
            } else {
              result[5] += 0.33105308;
            }
          }
        }
      } else {
        result[5] += -0.15618762;
      }
    }
  } else {
    result[5] += 0.50231856;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[6] += -0.0003117257;
            } else {
              result[6] += -0.15784468;
            }
          } else {
            result[6] += -0.15615186;
          }
        } else {
          result[6] += -0.15619865;
        }
      } else {
        result[6] += 0.44510666;
      }
    } else {
      result[6] += -0.1564681;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 0.3521488;
    } else {
      result[6] += -0.15508986;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[7] += 1.1238729;
            } else {
              result[7] += -0.15614021;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
              result[7] += -0.14117238;
            } else {
              result[7] += 0.37694955;
            }
          }
        } else {
          result[7] += -0.15691632;
        }
      } else {
        result[7] += 0.34037152;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[7] += 0.33596194;
      } else {
        result[7] += 0.24003763;
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[7] += 0.359856;
          } else {
            result[7] += 0.33856595;
          }
        } else {
          result[7] += -0.15497889;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[7] += -0.21219075;
            } else {
              result[7] += -0.24497353;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += -0.17067191;
            } else {
              result[7] += -0.15671632;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.3390941;
            } else {
              result[7] += -0.15983313;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[7] += 0.33710447;
            } else {
              result[7] += -0.13657299;
            }
          }
        }
      }
    } else {
      result[7] += -0.15643767;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[8] += -0.15561175;
          } else {
            result[8] += -0.14635004;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[8] += 0.33423468;
            } else {
              result[8] += -0.16219446;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.10419092;
            } else {
              result[8] += -0.15854321;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += -0.1510477;
            } else {
              result[8] += -0.1563013;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 3.3869846;
            } else {
              result[8] += -0.15619767;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += 0.43562984;
            } else {
              result[8] += 0.83037907;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[8] += -0.06631299;
            } else {
              result[8] += -0.15549423;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
        result[8] += 1.2715495;
      } else {
        result[8] += -0.15171207;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[8] += 0.35000867;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[8] += 0.18169469;
            } else {
              result[8] += 0.34963685;
            }
          }
        } else {
          result[8] += -0.16098988;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[8] += -0.16100454;
            } else {
              result[8] += 1.0019741;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[8] += 1.2833897;
            } else {
              result[8] += 0.73838276;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[8] += 0.34211606;
            } else {
              result[8] += 0.37515685;
            }
          } else {
            result[8] += -0.15832236;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[8] += -0.15788586;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.15638149;
            } else {
              result[8] += 0.3444986;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.22291297;
            } else {
              result[8] += -0.15717538;
            }
          }
        }
      } else {
        result[8] += -0.15630835;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += -0.13089417;
            } else {
              result[9] += -0.15625206;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[9] += -0.15648305;
            } else {
              result[9] += -0.14618203;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 1.2683737;
            } else {
              result[9] += -0.16106482;
            }
          } else {
            result[9] += -0.1561885;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[9] += 0.27724817;
        } else {
          result[9] += 0.32157576;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15884717;
          } else {
            result[9] += 0.348315;
          }
        } else {
          result[9] += -0.15556361;
        }
      } else {
        result[9] += -0.15636446;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.3394795;
      } else {
        result[9] += -0.15468566;
      }
    } else {
      result[9] += -0.15612817;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)9179)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[10] += -0.14540103;
            } else {
              result[10] += -0.15694346;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[10] += 0.49384844;
            } else {
              result[10] += -0.1344937;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[10] += -0.15636098;
            } else {
              result[10] += -0.12454356;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[10] += -0.15115392;
            } else {
              result[10] += 0.081167266;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[10] += 0.0030859117;
        } else {
          result[10] += 0.17026179;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[10] += -0.15633395;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 1.9431207;
            } else {
              result[10] += -0.11734444;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.34040922;
            } else {
              result[10] += -0.09421695;
            }
          }
        } else {
          result[10] += -0.15617456;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[10] += -0.15611905;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += 0.22552535;
            } else {
              result[10] += 0.34045833;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
              result[10] += -0.14253221;
            } else {
              result[10] += 0.30052924;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
          result[10] += -0.15597633;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
            result[10] += -0.13795726;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[10] += -0.11429851;
            } else {
              result[10] += 0.12015361;
            }
          }
        }
      }
    } else {
      result[10] += -0.15624109;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        result[11] += -0.15555593;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.19021936;
            } else {
              result[11] += 0.716384;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += -0.15309155;
            } else {
              result[11] += 0.21085599;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.28200027;
            } else {
              result[11] += 0.38836068;
            }
          } else {
            result[11] += -0.14804946;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[11] += -0.15624699;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.15635936;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += 0.7603237;
            } else {
              result[11] += 0.5777449;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
              result[11] += 0.110815585;
            } else {
              result[11] += 0.24190971;
            }
          } else {
            result[11] += -0.15644552;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += -0.1200346;
            } else {
              result[11] += 0.35192993;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[11] += 0.36707646;
            } else {
              result[11] += -0.107078224;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.038783662;
            } else {
              result[11] += 0.32000846;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[11] += 0.38697422;
            } else {
              result[11] += -0.18021707;
            }
          }
        }
      } else {
        result[11] += -0.15778916;
      }
    } else {
      result[11] += -0.1562949;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.13150306;
            } else {
              result[12] += -0.156093;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 2.1687994;
            } else {
              result[12] += -0.12016065;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += 0.34030098;
            } else {
              result[12] += -0.12629163;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.15643361;
            } else {
              result[12] += 0.20352167;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[12] += -0.15622208;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 2.1053886;
            } else {
              result[12] += -0.11651021;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[12] += -0.1602558;
            } else {
              result[12] += -0.22960395;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[12] += 1.13303;
            } else {
              result[12] += 0.33154637;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += 0.33562103;
            } else {
              result[12] += -0.15597463;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[12] += -0.15872067;
            } else {
              result[12] += -0.22821337;
            }
          }
        } else {
          result[12] += -0.15590021;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.15707085;
            } else {
              result[12] += 2.0744855;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[12] += -0.1525235;
            } else {
              result[12] += 0.68444955;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[12] += -0.1645354;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += 0.35307482;
            } else {
              result[12] += -0.13319008;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[12] += 0.033434574;
            } else {
              result[12] += 0.054837503;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
              result[12] += 0.024238614;
            } else {
              result[12] += -0.087315485;
            }
          }
        } else {
          result[12] += -0.15628882;
        }
      } else {
        result[12] += -0.15647496;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[12] += 0.46149012;
      } else {
        result[12] += -0.15428813;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[13] += -0.15568094;
            } else {
              result[13] += -0.14119184;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.09420305;
            } else {
              result[13] += -0.14610006;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[13] += -0.1563074;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += -0.06594031;
            } else {
              result[13] += -0.15638511;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[13] += -0.15673283;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.150641;
            } else {
              result[13] += 0.67430735;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.33237225;
            } else {
              result[13] += -0.15550709;
            }
          } else {
            result[13] += -0.15639563;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += 0.10152196;
            } else {
              result[13] += -0.14684315;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.35262847;
            } else {
              result[13] += -0.16112007;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += 0.08546828;
            } else {
              result[13] += 0.43362305;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.7723699;
            } else {
              result[13] += -0.16313888;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.71567327;
            } else {
              result[13] += -0.14556357;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[13] += -0.15603758;
            } else {
              result[13] += -0.053425636;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[13] += -0.14901824;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
              result[13] += 0.40704265;
            } else {
              result[13] += -0.087446354;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        result[13] += 0.38418177;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
              result[13] += -0.15856384;
            } else {
              result[13] += 0.40156272;
            }
          } else {
            result[13] += -0.15617193;
          }
        } else {
          result[13] += 0.4463705;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.37582973;
            } else {
              result[13] += 0.51670986;
            }
          } else {
            result[13] += 0.33910072;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.15156358;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.13629925;
            } else {
              result[13] += 0.32460192;
            }
          }
        }
      } else {
        result[13] += -0.15324074;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[14] += -0.026715508;
            } else {
              result[14] += -0.12763731;
            }
          } else {
            result[14] += -0.15615353;
          }
        } else {
          result[14] += -0.15619865;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.04331117;
            } else {
              result[14] += 1.1163201;
            }
          } else {
            result[14] += -0.15872064;
          }
        } else {
          result[14] += -0.1562888;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.034631804;
            } else {
              result[14] += 0.5311839;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[14] += -0.124447405;
            } else {
              result[14] += -0.15717837;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[14] += -0.1556768;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[14] += 0.36640787;
            } else {
              result[14] += -0.124729045;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += -0.14379717;
            } else {
              result[14] += -0.17493632;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.13598695;
            } else {
              result[14] += -0.15651545;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[14] += -0.14315648;
            } else {
              result[14] += -0.15536147;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += 0.35867193;
            } else {
              result[14] += -0.13834395;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15633029;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += 0.30038318;
            } else {
              result[14] += -0.15630311;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
              result[14] += 0.33142835;
            } else {
              result[14] += 0.5784013;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.1238557;
            } else {
              result[14] += -0.15620224;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.35346478;
          } else {
            result[14] += -0.23085545;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.1366813;
            } else {
              result[14] += 1.5968305;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.14341967;
            } else {
              result[14] += -0.1560607;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.009190686;
            } else {
              result[14] += -0.1562979;
            }
          } else {
            result[14] += 1.8454746;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.3533331;
            } else {
              result[14] += 0.46918538;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.14690605;
            } else {
              result[14] += -0.21194123;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            result[14] += -0.15538543;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.15411904;
            } else {
              result[14] += 0.2808463;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            result[14] += 0.28056636;
          } else {
            result[14] += 1.0170583;
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.15314221;
            } else {
              result[0] += -0.13537478;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.1554995;
            } else {
              result[0] += 0.24784221;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[0] += -0.16224787;
          } else {
            result[0] += 0.30353102;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[0] += -0.04565676;
        } else {
          result[0] += 0.0708446;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            result[0] += -0.14975938;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[0] += -0.10610453;
            } else {
              result[0] += 0.47529837;
            }
          }
        } else {
          result[0] += -0.15481295;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          result[0] += -0.15517944;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
            result[0] += 0.2694984;
          } else {
            result[0] += -0.08910741;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[0] += -0.15571949;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
          result[0] += -0.15581734;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[0] += 0.43744802;
            } else {
              result[0] += 0.28482997;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
              result[0] += -0.18505764;
            } else {
              result[0] += 0.27207246;
            }
          }
        }
      }
    } else {
      result[0] += -0.15483764;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15486743;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[1] += 0.21906659;
            } else {
              result[1] += 0.22707674;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.037702106;
            } else {
              result[1] += 0.21749878;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.063167006;
            } else {
              result[1] += 0.49913862;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += 0.44611415;
            } else {
              result[1] += 0.26738104;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.15538481;
            } else {
              result[1] += -0.02032587;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.18098554;
            } else {
              result[1] += 0.26677892;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[1] += -0.036877554;
            } else {
              result[1] += -0.122354165;
            }
          } else {
            result[1] += -0.1547566;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.14666627;
            } else {
              result[1] += -0.154502;
            }
          } else {
            result[1] += 0.3352213;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += -0.15444693;
            } else {
              result[1] += 0.07844259;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[1] += -0.15096995;
            } else {
              result[1] += 0.0017858437;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24813)) {
              result[1] += 0.268739;
            } else {
              result[1] += 0.13357985;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.07506854;
            } else {
              result[1] += 0.13468395;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[1] += -0.15497838;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[1] += -0.10255136;
            } else {
              result[1] += -0.15428723;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += 0.05656061;
            } else {
              result[1] += 0.26718023;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.16168362;
            } else {
              result[1] += 0.3968165;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.14824103;
            } else {
              result[1] += 0.03412454;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += 0.001912159;
            } else {
              result[1] += 0.41042903;
            }
          }
        }
      } else {
        result[1] += -0.15482298;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.15502979;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.2868205;
      } else {
        result[2] += -0.15451136;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[2] += 0.2854385;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += 0.1737727;
            } else {
              result[2] += -0.0037857995;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)3906)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.03435017;
            } else {
              result[2] += 0.11957877;
            }
          } else {
            result[2] += -0.046744965;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)5438)) {
          result[2] += 0.35730875;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.035040237;
            } else {
              result[2] += 0.23679717;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
              result[2] += 0.24711521;
            } else {
              result[2] += 0.04281996;
            }
          }
        }
      }
    } else {
      result[2] += 0.26535752;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          result[3] += -0.15500787;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            result[3] += -0.15431836;
          } else {
            result[3] += 0.29772997;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[3] += -0.15480544;
        } else {
          result[3] += 0.2713336;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.15497015;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            result[3] += 0.2704643;
          } else {
            result[3] += 0.27835044;
          }
        } else {
          result[3] += -0.1551494;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.15456933;
    } else {
      result[3] += 0.26525345;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[4] += -0.15502599;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
        result[4] += 0.27609506;
      } else {
        result[4] += -0.15238826;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.26636297;
    } else {
      result[4] += -0.15134408;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.1376518;
            } else {
              result[5] += -0.15473713;
            }
          } else {
            result[5] += -0.15504201;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15486632;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.12485891;
            } else {
              result[5] += -0.15446259;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.12059022;
        } else {
          result[5] += -0.07573442;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)53285)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41676)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
              result[5] += 0.23770134;
            } else {
              result[5] += 0.44871512;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41951)) {
              result[5] += -0.123568185;
            } else {
              result[5] += 0.17898224;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
            result[5] += 0.41103867;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
              result[5] += 0.19190988;
            } else {
              result[5] += 0.29218158;
            }
          }
        }
      } else {
        result[5] += -0.15476018;
      }
    }
  } else {
    result[5] += 0.44082272;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[6] += 0.0066211154;
            } else {
              result[6] += -0.15627371;
            }
          } else {
            result[6] += -0.15472999;
          }
        } else {
          result[6] += -0.15476944;
        }
      } else {
        result[6] += 0.34649822;
      }
    } else {
      result[6] += -0.15503225;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 0.29794696;
    } else {
      result[6] += -0.15336636;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[7] += 0.32780805;
            } else {
              result[7] += -0.15494129;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
              result[7] += -0.13629422;
            } else {
              result[7] += 0.2956861;
            }
          }
        } else {
          result[7] += -0.15531099;
        }
      } else {
        result[7] += 0.26635373;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[7] += 0.22353658;
      } else {
        result[7] += 0.16561072;
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[7] += 0.26532954;
            } else {
              result[7] += -0.15310803;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[7] += -0.14232805;
            } else {
              result[7] += 0.26465306;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[7] += -0.15878184;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[7] += -0.23894483;
            } else {
              result[7] += -0.14122455;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.20845518;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.25878677;
            } else {
              result[7] += 0.17168501;
            }
          } else {
            result[7] += 0.27988687;
          }
        }
      }
    } else {
      result[7] += -0.15495983;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[8] += -0.15394376;
        } else {
          result[8] += -0.14266124;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[8] += 0.18438214;
            } else {
              result[8] += 0.58864284;
            }
          } else {
            result[8] += -0.159424;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.23867662;
            } else {
              result[8] += -0.15704654;
            }
          } else {
            result[8] += -0.15678199;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[8] += -0.15505183;
            } else {
              result[8] += -0.13669963;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += 0.21331938;
            } else {
              result[8] += 0.268413;
            }
          }
        } else {
          result[8] += -0.15486738;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += 0.0070992564;
            } else {
              result[8] += 0.28062105;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += 0.4664637;
            } else {
              result[8] += 0.334697;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[8] += 0.054198887;
            } else {
              result[8] += -0.051182255;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[8] += -0.115243204;
            } else {
              result[8] += -0.15516265;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.26397517;
            } else {
              result[8] += -0.15895042;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += 0.2874828;
            } else {
              result[8] += 0.39220452;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[8] += -0.15631199;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.25549063;
            } else {
              result[8] += -0.15842123;
            }
          }
        }
      } else {
        result[8] += -0.15787655;
      }
    } else {
      result[8] += -0.15487161;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += -0.12350275;
            } else {
              result[9] += -0.15481007;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[9] += -0.15504637;
            } else {
              result[9] += -0.14221586;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.42009193;
            } else {
              result[9] += -0.1581692;
            }
          } else {
            result[9] += -0.1547622;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[9] += 0.18942562;
        } else {
          result[9] += 0.20623155;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15684086;
          } else {
            result[9] += 0.27041557;
          }
        } else {
          result[9] += -0.154055;
        }
      } else {
        result[9] += -0.15491012;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.26551768;
      } else {
        result[9] += -0.15290594;
      }
    } else {
      result[9] += -0.15468678;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[10] += -0.1411752;
            } else {
              result[10] += -0.15544423;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[10] += 0.31542313;
            } else {
              result[10] += -0.12252681;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[10] += -0.15501885;
            } else {
              result[10] += -0.13189097;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[10] += -0.14832892;
            } else {
              result[10] += 0.07504724;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[10] += 0.009346394;
        } else {
          result[10] += 0.12679678;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[10] += -0.15489773;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)9179)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 1.6042768;
            } else {
              result[10] += -0.09153552;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.26812628;
            } else {
              result[10] += -0.12390558;
            }
          }
        } else {
          result[10] += -0.15472895;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[10] += -0.15415677;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1924085632)) {
              result[10] += 0.19312698;
            } else {
              result[10] += 0.28554347;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
              result[10] += -0.138649;
            } else {
              result[10] += 0.26548883;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
          result[10] += -0.15439764;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
            result[10] += -0.13415992;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[10] += -0.10943677;
            } else {
              result[10] += 0.107499234;
            }
          }
        }
      }
    } else {
      result[10] += -0.1548172;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[11] += -0.15397787;
        } else {
          result[11] += -0.13889451;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.15910721;
            } else {
              result[11] += -0.05677858;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[11] += 0.2728533;
            } else {
              result[11] += -0.14224271;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.40404454;
            } else {
              result[11] += -0.15080729;
            }
          } else {
            result[11] += -0.15574643;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[11] += -0.15477745;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.15320623;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.3149643;
            } else {
              result[11] += 0.113918684;
            }
          }
        } else {
          result[11] += -0.15501246;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += -0.10487805;
            } else {
              result[11] += 0.27072963;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[11] += 0.3261242;
            } else {
              result[11] += -0.09843614;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.33369434;
            } else {
              result[11] += 0.2712192;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += 0.108442195;
            } else {
              result[11] += 0.24238239;
            }
          }
        }
      } else {
        result[11] += -0.15591721;
      }
    } else {
      result[11] += -0.15486884;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.12458714;
            } else {
              result[12] += -0.15459728;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.24208477;
            } else {
              result[12] += -0.11108253;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.24842711;
            } else {
              result[12] += -0.11657802;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.15531804;
            } else {
              result[12] += 0.15065184;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += -0.122478895;
            } else {
              result[12] += -0.1548501;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.16056345;
            } else {
              result[12] += 0.33647692;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[12] += -0.15786546;
            } else {
              result[12] += -0.2214334;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.34206825;
            } else {
              result[12] += -0.19600973;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += 0.25875574;
            } else {
              result[12] += -0.1536574;
            }
          } else {
            result[12] += -0.15773404;
          }
        } else {
          result[12] += -0.15446426;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.1555179;
            } else {
              result[12] += 0.3854471;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += -0.123046406;
            } else {
              result[12] += -0.1548422;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[12] += -0.15781638;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += 0.28265655;
            } else {
              result[12] += -0.12737282;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[12] += 0.031802908;
            } else {
              result[12] += 0.17890798;
            }
          } else {
            result[12] += -0.078183524;
          }
        } else {
          result[12] += -0.15480316;
        }
      } else {
        result[12] += -0.15498854;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[12] += 0.31401932;
      } else {
        result[12] += -0.1521019;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[13] += -0.15402395;
            } else {
              result[13] += -0.13687025;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.0857729;
            } else {
              result[13] += -0.14266793;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[13] += -0.15487581;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += -0.051156837;
            } else {
              result[13] += -0.15493342;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[13] += -0.1552169;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.14780031;
            } else {
              result[13] += 0.39110568;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.23982055;
            } else {
              result[13] += -0.15384443;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += -0.017913243;
            } else {
              result[13] += -0.15468465;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += 0.0981917;
            } else {
              result[13] += -0.14196318;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.2537941;
            } else {
              result[13] += -0.15935619;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += 0.08049116;
            } else {
              result[13] += 0.30296543;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[13] += -0.15865801;
            } else {
              result[13] += 0.11480026;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
              result[13] += 0.045304175;
            } else {
              result[13] += -0.15453519;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.12325568;
            } else {
              result[13] += 0.4004693;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.15203199;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[13] += 1.1711153;
            } else {
              result[13] += 0.2943461;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        result[13] += 0.29805532;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
              result[13] += -0.15512833;
            } else {
              result[13] += 0.30670145;
            }
          } else {
            result[13] += -0.15449107;
          }
        } else {
          result[13] += 0.32724753;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[13] += 0.2934613;
          } else {
            result[13] += 0.26538113;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.14772151;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += 0.12945282;
            } else {
              result[13] += 0.27594632;
            }
          }
        }
      } else {
        result[13] += -0.14890815;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[14] += -0.016621849;
            } else {
              result[14] += -0.12114772;
            }
          } else {
            result[14] += -0.15473148;
          }
        } else {
          result[14] += -0.15476944;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.03201254;
            } else {
              result[14] += 0.4518728;
            }
          } else {
            result[14] += -0.15660371;
          }
        } else {
          result[14] += -0.15480313;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.03115764;
            } else {
              result[14] += 0.34148005;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[14] += -0.11690051;
            } else {
              result[14] += -0.15570998;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[14] += -0.15412515;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += 0.27771026;
            } else {
              result[14] += -0.09373524;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += -0.13655023;
            } else {
              result[14] += -0.17500938;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[14] += -0.15676743;
            } else {
              result[14] += 0.12235951;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[14] += -0.13843393;
            } else {
              result[14] += -0.15355602;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += 0.29629308;
            } else {
              result[14] += -0.13450599;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15489717;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += 0.19621716;
            } else {
              result[14] += -0.1548835;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[14] += -0.09014481;
            } else {
              result[14] += 0.40192246;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.109580465;
            } else {
              result[14] += -0.15476368;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.2718673;
          } else {
            result[14] += -0.21364522;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)303)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.12488306;
            } else {
              result[14] += -0.1543302;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 1.931879;
            } else {
              result[14] += -0.15341714;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.054751743;
            } else {
              result[14] += 0.16757944;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.1551503;
            } else {
              result[14] += 0.24833928;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.27880973;
            } else {
              result[14] += -0.19532923;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += -0.15599929;
            } else {
              result[14] += -0.19506447;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.15213925;
            } else {
              result[14] += -0.15480734;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.15208906;
            } else {
              result[14] += 0.21108568;
            }
          }
        } else {
          result[14] += 0.32949758;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[0] += -0.15151563;
            } else {
              result[0] += 0.24502268;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[0] += -0.14153686;
            } else {
              result[0] += 0.44666424;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.15433113;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.23805764;
            } else {
              result[0] += -0.1713646;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[0] += -0.0358184;
        } else {
          result[0] += 0.05967018;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            result[0] += -0.14740999;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[0] += 0.39086306;
            } else {
              result[0] += -0.13748622;
            }
          }
        } else {
          result[0] += -0.15368393;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          result[0] += -0.15391184;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
            result[0] += 0.22838403;
          } else {
            result[0] += -0.088801235;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[0] += -0.15442279;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
          result[0] += -0.15474285;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[0] += 0.33233497;
            } else {
              result[0] += 0.23916624;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
              result[0] += -0.17871302;
            } else {
              result[0] += 0.22863452;
            }
          }
        }
      }
    } else {
      result[0] += -0.15371358;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15370968;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[1] += 0.16307098;
            } else {
              result[1] += 0.17592663;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.0355217;
            } else {
              result[1] += 0.16992348;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.05340568;
            } else {
              result[1] += 0.3053081;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += 0.3138895;
            } else {
              result[1] += 0.22743131;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            result[1] += -0.15518078;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[1] += 1.2665933;
            } else {
              result[1] += 0.06806119;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[1] += -0.036023006;
            } else {
              result[1] += -0.119833834;
            }
          } else {
            result[1] += -0.15360096;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.14331128;
            } else {
              result[1] += -0.1532942;
            }
          } else {
            result[1] += 0.261763;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.1535646;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.30184487;
            } else {
              result[1] += -0.15438825;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[1] += 0.21745752;
            } else {
              result[1] += 0.11211369;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.030015543;
            } else {
              result[1] += 0.14314702;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.017245235;
            } else {
              result[1] += -0.15382287;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[1] += -0.09181252;
            } else {
              result[1] += -0.1529065;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += 0.162938;
            } else {
              result[1] += 0.26688185;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.15957958;
            } else {
              result[1] += 0.2830042;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.1447737;
            } else {
              result[1] += 0.03874178;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.20064138;
            } else {
              result[1] += -0.15308973;
            }
          }
        }
      } else {
        result[1] += -0.15370384;
      }
    }
  }
}

