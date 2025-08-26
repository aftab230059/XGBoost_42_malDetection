
#include "header.h"

void predict_unit9(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.1498728;
    } else {
      result[3] += -0.10341929;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[3] += -0.14370866;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[3] += -0.11126346;
            } else {
              result[3] += 0.14791022;
            }
          }
        } else {
          result[3] += 0.14862856;
        }
      } else {
        result[3] += -0.1442136;
      }
    } else {
      result[3] += -0.14720055;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.07189464;
          } else {
            result[4] += -0.14478064;
          }
        } else {
          result[4] += -0.14645134;
        }
      } else {
        result[4] += -0.14983462;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)26366)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)25771)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)24654)) {
              result[4] += 0.024172792;
            } else {
              result[4] += 0.070783384;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)26071)) {
              result[4] += -0.14114057;
            } else {
              result[4] += -0.0026069;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)27268)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)26973)) {
              result[4] += 0.03829686;
            } else {
              result[4] += 0.16298835;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)27511)) {
              result[4] += -0.15671037;
            } else {
              result[4] += 0.030358557;
            }
          }
        }
      } else {
        result[4] += -0.11943763;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.14972171;
    } else {
      result[4] += -0.07977652;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[5] += 0.0029564754;
            } else {
              result[5] += -0.1494842;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
              result[5] += -0.15930842;
            } else {
              result[5] += -0.080951475;
            }
          }
        } else {
          result[5] += -0.17624576;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3615)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[5] += -0.19982079;
          } else {
            result[5] += 0.12158444;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[5] += 0.07488268;
            } else {
              result[5] += 0.25158983;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21346)) {
              result[5] += -0.058894265;
            } else {
              result[5] += 0.07159795;
            }
          }
        }
      }
    } else {
      result[5] += -0.15002257;
    }
  } else {
    result[5] += -0.14950342;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += -0.0010141613;
            } else {
              result[6] += -0.113546304;
            }
          } else {
            result[6] += -0.11943449;
          }
        } else {
          result[6] += -0.14530833;
        }
      } else {
        result[6] += -0.14637002;
      }
    } else {
      result[6] += 0.14816868;
    }
  } else {
    result[6] += -0.14983438;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
              result[7] += -0.014695377;
            } else {
              result[7] += 0.14142041;
            }
          } else {
            result[7] += -0.14663546;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[7] += -0.12981825;
            } else {
              result[7] += -0.10255286;
            }
          } else {
            result[7] += 0.081923455;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
          result[7] += 0.14998287;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
              result[7] += -0.14896214;
            } else {
              result[7] += 0.03337678;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[7] += 0.014701099;
            } else {
              result[7] += -0.14884356;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[7] += -0.023101417;
            } else {
              result[7] += 0.14541037;
            }
          } else {
            result[7] += -0.13911644;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            result[7] += -0.15705886;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[7] += -0.06097426;
            } else {
              result[7] += -0.039376438;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          result[7] += 0.1544453;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            result[7] += -0.14668119;
          } else {
            result[7] += 0.14850144;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[7] += 0.16975088;
            } else {
              result[7] += 0.08263068;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += 0.06630561;
            } else {
              result[7] += -0.11242475;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1763358336)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28010)) {
              result[7] += -0.24266332;
            } else {
              result[7] += 0.15543471;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[7] += 0.09242954;
            } else {
              result[7] += -0.038598314;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[7] += 0.1654765;
        } else {
          result[7] += 0.10587597;
        }
      }
    } else {
      result[7] += -0.14590333;
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += 0.00056581706;
            } else {
              result[8] += 0.10787258;
            }
          } else {
            result[8] += -0.15777689;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
              result[8] += 0.1690467;
            } else {
              result[8] += 0.08891441;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
              result[8] += 0.2244557;
            } else {
              result[8] += 0.1721842;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
            result[8] += -0.15150404;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[8] += -0.21587078;
            } else {
              result[8] += -0.15786287;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[8] += 0.17265046;
            } else {
              result[8] += -0.06605344;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[8] += -0.28176928;
            } else {
              result[8] += -0.013799595;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
              result[8] += 0.071590275;
            } else {
              result[8] += 0.38564864;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
              result[8] += -0.13694431;
            } else {
              result[8] += 0.15454717;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            result[8] += -0.1815552;
          } else {
            result[8] += 0.14997251;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
              result[8] += -0.09052839;
            } else {
              result[8] += 0.24685323;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[8] += -0.15170583;
            } else {
              result[8] += -0.10507516;
            }
          }
        } else {
          result[8] += 0.15068913;
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
        result[8] += -0.15269081;
      } else {
        result[8] += -0.17423692;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[8] += -0.08839285;
          } else {
            result[8] += 0.14887002;
          }
        } else {
          result[8] += -0.14563085;
        }
      } else {
        result[8] += -0.15047957;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[9] += 0.0033317404;
            } else {
              result[9] += -0.07018346;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.12621972;
            } else {
              result[9] += 0.15784883;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53768)) {
              result[9] += -0.2430545;
            } else {
              result[9] += 0.05878018;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[9] += -1.2641146;
            } else {
              result[9] += -0.31176978;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
              result[9] += 0.14761958;
            } else {
              result[9] += 0.000676121;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
              result[9] += -0.54201347;
            } else {
              result[9] += 0.16783449;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.1288462;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[9] += 0.16383883;
            } else {
              result[9] += -0.088349715;
            }
          }
        }
      }
    } else {
      result[9] += -0.14893237;
    }
  } else {
    result[9] += -0.14956574;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[10] += 0.0019059078;
            } else {
              result[10] += -0.14450985;
            }
          } else {
            result[10] += -0.14743625;
          }
        } else {
          result[10] += -0.1497761;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)20977)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.071259335;
            } else {
              result[10] += 0.018425984;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
              result[10] += 0.16801637;
            } else {
              result[10] += 0.021639016;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[10] += 0.14783011;
          } else {
            result[10] += -0.09456569;
          }
        }
      }
    } else {
      result[10] += -0.1484173;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14888695;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        result[10] += 0.08505513;
      } else {
        result[10] += -0.10927287;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)16)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
              result[11] += -0.043659925;
            } else {
              result[11] += -0.23758888;
            }
          } else {
            result[11] += -0.1459608;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[11] += -0.0010978583;
            } else {
              result[11] += -0.14478157;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
              result[11] += 0.15175165;
            } else {
              result[11] += -0.010131183;
            }
          }
        }
      } else {
        result[11] += -0.15163894;
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[11] += 0.020557936;
            } else {
              result[11] += -0.17739187;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.15664;
            } else {
              result[11] += 0.012202651;
            }
          }
        } else {
          result[11] += -0.14909461;
        }
      } else {
        result[11] += -0.14897971;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
              result[11] += -0.06981531;
            } else {
              result[11] += 0.000326682;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
              result[11] += -0.14650886;
            } else {
              result[11] += 0.15823275;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)26416)) {
            result[11] += 0.43030205;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
              result[11] += 0.25809038;
            } else {
              result[11] += -0.12010341;
            }
          }
        }
      } else {
        result[11] += -0.18745342;
      }
    } else {
      result[11] += -0.14910443;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.0065395124;
            } else {
              result[12] += -0.071716055;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.15485114;
            } else {
              result[12] += -0.03082409;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)17502)) {
              result[12] += -0.1471055;
            } else {
              result[12] += 0.11958811;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41909)) {
              result[12] += 0.055688478;
            } else {
              result[12] += 0.0074077775;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)24)) {
              result[12] += -0.16255972;
            } else {
              result[12] += -0.05639253;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[12] += 0.12104537;
            } else {
              result[12] += -0.09505614;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
            result[12] += 0.14459775;
          } else {
            result[12] += -0.12670845;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[12] += -0.12632303;
            } else {
              result[12] += 0.3273611;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
              result[12] += -0.18059085;
            } else {
              result[12] += 0.031017562;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
              result[12] += 0.08265662;
            } else {
              result[12] += 0.017409664;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[12] += -0.1375014;
            } else {
              result[12] += 0.125157;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[12] += -0.1575471;
            } else {
              result[12] += -0.15016785;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[12] += 0.0397394;
            } else {
              result[12] += -0.15694484;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
              result[12] += 0.025639521;
            } else {
              result[12] += 0.29144534;
            }
          } else {
            result[12] += -0.16177803;
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[12] += -0.14970344;
            } else {
              result[12] += 0.045287192;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.15086466;
            } else {
              result[12] += 0.03859258;
            }
          }
        } else {
          result[12] += -0.14759795;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
              result[12] += -0.025765589;
            } else {
              result[12] += -0.15192121;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[12] += 0.5030131;
            } else {
              result[12] += -0.011351549;
            }
          }
        } else {
          result[12] += -0.15170059;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
        result[12] += -0.15838586;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          result[12] += 0.1476614;
        } else {
          result[12] += -0.13728787;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[13] += -0.052652396;
            } else {
              result[13] += -0.0660806;
            }
          } else {
            result[13] += -0.033080813;
          }
        } else {
          result[13] += -0.1229374;
        }
      } else {
        result[13] += -0.14532281;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[13] += 0.01014503;
            } else {
              result[13] += 0.06367206;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)862)) {
              result[13] += -0.15223028;
            } else {
              result[13] += -0.046701327;
            }
          }
        } else {
          result[13] += 0.14856982;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)608)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
              result[13] += -0.15151343;
            } else {
              result[13] += -0.055114467;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
              result[13] += 0.13866453;
            } else {
              result[13] += -0.13634804;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[13] += 0.022501584;
            } else {
              result[13] += -0.07579435;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[13] += 0.058880307;
            } else {
              result[13] += 0.15609759;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
      result[13] += -0.14045516;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
            result[13] += -0.06646102;
          } else {
            result[13] += -0.013597332;
          }
        } else {
          result[13] += 0.2679712;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
          result[13] += -0.14447339;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
            result[13] += 0.061249062;
          } else {
            result[13] += -0.11389231;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += 0.005724474;
            } else {
              result[14] += -0.15124439;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[14] += -0.15036619;
            } else {
              result[14] += -0.0065033305;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[14] += -0.15295717;
          } else {
            result[14] += 0.6316292;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          result[14] += -0.15791449;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[14] += 0.12887958;
          } else {
            result[14] += -0.14080502;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
          result[14] += 0.14955345;
        } else {
          result[14] += -0.07986396;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
          result[14] += -0.15054852;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[14] += 0.121976554;
            } else {
              result[14] += -0.039419122;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.12953334;
            } else {
              result[14] += 0.036616564;
            }
          }
        }
      }
    }
  } else {
    result[14] += -0.14885852;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.0044382764;
            } else {
              result[0] += 0.00901463;
            }
          } else {
            result[0] += -0.14595938;
          }
        } else {
          result[0] += -0.14958076;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[0] += 0.02221687;
            } else {
              result[0] += -0.14666635;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
              result[0] += -0.1272388;
            } else {
              result[0] += 0.0015626133;
            }
          }
        } else {
          result[0] += -0.15053755;
        }
      }
    } else {
      result[0] += -0.1482461;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
        result[0] += -0.1435658;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          result[0] += 0.19472192;
        } else {
          result[0] += -0.107430495;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
        result[0] += 0.15168867;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2213215232)) {
          result[0] += -0.14348456;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[0] += -0.12351355;
            } else {
              result[0] += 0.13443062;
            }
          } else {
            result[0] += -0.14201763;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.12610522;
    } else {
      result[1] += -0.06235241;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)34126)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
              result[1] += -0.0016395322;
            } else {
              result[1] += 0.1133732;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[1] += -0.17729175;
            } else {
              result[1] += -0.075624645;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.14442898;
            } else {
              result[1] += -0.014346401;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[1] += -0.13530746;
            } else {
              result[1] += 0.15895759;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35427)) {
              result[1] += 0.075227916;
            } else {
              result[1] += 0.028905509;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)38644)) {
              result[1] += -0.053734038;
            } else {
              result[1] += 0.011655176;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
            result[1] += -0.15094665;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[1] += 0.14909947;
            } else {
              result[1] += 0.02751872;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)14357)) {
          result[1] += 0.3211686;
        } else {
          result[1] += -0.083078645;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
          result[1] += -0.14854865;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
            result[1] += 0.337709;
          } else {
            result[1] += -0.14134218;
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          result[2] += -0.14274782;
        } else {
          result[2] += -0.103394724;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)35998)) {
              result[2] += 0.007847821;
            } else {
              result[2] += 0.03660671;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.02845471;
            } else {
              result[2] += -0.1382537;
            }
          }
        } else {
          result[2] += -0.11914415;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4355)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)3172)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
              result[2] += 0.004658888;
            } else {
              result[2] += 0.052742507;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
              result[2] += -0.13057736;
            } else {
              result[2] += 0.0068246988;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5213)) {
              result[2] += 0.024921166;
            } else {
              result[2] += 0.15525162;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)7343)) {
              result[2] += -0.04078438;
            } else {
              result[2] += 0.024409791;
            }
          }
        }
      } else {
        result[2] += 0.14892879;
      }
    }
  } else {
    result[2] += -0.1497724;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.1498166;
    } else {
      result[3] += -0.09843009;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[3] += -0.14267297;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[3] += -0.107432716;
            } else {
              result[3] += 0.14747852;
            }
          }
        } else {
          result[3] += 0.14830226;
        }
      } else {
        result[3] += -0.14315775;
      }
    } else {
      result[3] += -0.14657904;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.066034704;
          } else {
            result[4] += -0.14397629;
          }
        } else {
          result[4] += -0.14586635;
        }
      } else {
        result[4] += -0.14976948;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)10755)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
              result[4] += 0.018315932;
            } else {
              result[4] += 0.059306934;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)8891)) {
              result[4] += -0.12948975;
            } else {
              result[4] += -0.012330669;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)16637)) {
              result[4] += 0.029149229;
            } else {
              result[4] += 0.20602918;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)18628)) {
              result[4] += -0.086411625;
            } else {
              result[4] += 0.026470276;
            }
          }
        }
      } else {
        result[4] += -0.11238506;
      }
    }
  } else {
    result[4] += 0.14861341;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
              result[5] += 0.0029784895;
            } else {
              result[5] += -0.16852984;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
              result[5] += 0.42486474;
            } else {
              result[5] += 0.123611495;
            }
          }
        } else {
          result[5] += -0.17035225;
        }
      } else {
        result[5] += -0.14921808;
      }
    } else {
      result[5] += -0.14981213;
    }
  } else {
    result[5] += -0.14987443;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[6] += -0.0007928386;
            } else {
              result[6] += -0.109550394;
            }
          } else {
            result[6] += -0.11246299;
          }
        } else {
          result[6] += -0.1444953;
        }
      } else {
        result[6] += -0.14577378;
      }
    } else {
      result[6] += 0.14780831;
    }
  } else {
    result[6] += -0.14976922;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
              result[7] += -0.016021047;
            } else {
              result[7] += -0.119016975;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
              result[7] += 0.15021528;
            } else {
              result[7] += 0.006719578;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[7] += -0.044837594;
            } else {
              result[7] += -0.15572569;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[7] += 0.1524349;
            } else {
              result[7] += -0.06692002;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            result[7] += -0.14750248;
          } else {
            result[7] += -0.03388022;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
              result[7] += 0.36936176;
            } else {
              result[7] += 0.10406941;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
              result[7] += -0.10596212;
            } else {
              result[7] += 0.13724661;
            }
          }
        }
      }
    } else {
      result[7] += 0.14961606;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)984983168)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[7] += 0.16367456;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += 0.060718052;
            } else {
              result[7] += -0.10524352;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[7] += 0.028294599;
            } else {
              result[7] += -0.21061336;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[7] += 0.1439246;
            } else {
              result[7] += -0.020035602;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[7] += 0.16210687;
        } else {
          result[7] += 0.09796488;
        }
      }
    } else {
      result[7] += -0.14502805;
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
              result[8] += -0.0002531991;
            } else {
              result[8] += 0.043473817;
            }
          } else {
            result[8] += -0.15487108;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
              result[8] += 0.13038687;
            } else {
              result[8] += 0.059801202;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
              result[8] += -0.15400207;
            } else {
              result[8] += 0.11942976;
            }
          }
        }
      } else {
        result[8] += -0.15285733;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.15968214;
            } else {
              result[8] += -0.11342846;
            }
          } else {
            result[8] += -0.11631743;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            result[8] += -0.17576917;
          } else {
            result[8] += 0.14955984;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)265767216)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
              result[8] += -0.07961255;
            } else {
              result[8] += 0.28779492;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[8] += -0.15502766;
            } else {
              result[8] += -0.09105177;
            }
          }
        } else {
          result[8] += 0.15023842;
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      result[8] += -0.15753749;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)432)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[8] += 0.008457102;
            } else {
              result[8] += 0.1494769;
            }
          } else {
            result[8] += -0.08903329;
          }
        } else {
          result[8] += -0.14149773;
        }
      } else {
        result[8] += -0.14964469;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[9] += 0.0024936157;
            } else {
              result[9] += 0.072080545;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
              result[9] += -0.23083097;
            } else {
              result[9] += -0.0045763445;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
            result[9] += 0.15686277;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
              result[9] += -0.024157366;
            } else {
              result[9] += 0.17404728;
            }
          }
        }
      } else {
        result[9] += -0.14869119;
      }
    } else {
      result[9] += -0.14869642;
    }
  } else {
    result[9] += -0.14942655;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[10] += -0.00175373;
            } else {
              result[10] += 0.007310037;
            }
          } else {
            result[10] += -0.14696793;
          }
        } else {
          result[10] += -0.14969075;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)464)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
              result[10] += 0.010999848;
            } else {
              result[10] += 0.10812371;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[10] += 0.12599096;
            } else {
              result[10] += -0.080275424;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)129921)) {
            result[10] += -0.14627223;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
              result[10] += 0.07805333;
            } else {
              result[10] += -0.11874978;
            }
          }
        }
      }
    } else {
      result[10] += -0.1479522;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14861786;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        result[10] += 0.08277319;
      } else {
        result[10] += -0.10198649;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[11] += 0.0035197318;
            } else {
              result[11] += -0.14946146;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[11] += -0.15896118;
            } else {
              result[11] += -0.056281805;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[11] += 0.0048759812;
            } else {
              result[11] += 0.14593986;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[11] += -0.178774;
            } else {
              result[11] += 0.022983804;
            }
          }
        }
      } else {
        result[11] += -0.15073706;
      }
    } else {
      result[11] += -0.14902946;
    }
  } else {
    result[11] += -0.14887862;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          result[12] += -0.064505115;
        } else {
          result[12] += -0.13114226;
        }
      } else {
        result[12] += -0.08851576;
      }
    } else {
      result[12] += -0.14782573;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[12] += -0.002269097;
            } else {
              result[12] += -0.14503863;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[12] += -0.055025976;
            } else {
              result[12] += 0.14790559;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
              result[12] += -0.13268998;
            } else {
              result[12] += 0.13590369;
            }
          } else {
            result[12] += -0.15236028;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
              result[12] += 0.15084863;
            } else {
              result[12] += 0.112454325;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[12] += -0.10571615;
            } else {
              result[12] += -0.24514772;
            }
          }
        } else {
          result[12] += -0.13933082;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)14357)) {
          result[12] += -0.15093921;
        } else {
          result[12] += 0.11437347;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[12] += -0.14713472;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            result[12] += 0.15299875;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[12] += -0.14666782;
            } else {
              result[12] += 0.014179658;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
              result[13] += -0.03765559;
            } else {
              result[13] += -0.08562459;
            }
          } else {
            result[13] += -0.14451207;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[13] += 0.088225;
            } else {
              result[13] += -0.02508367;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50108)) {
              result[13] += -0.18205918;
            } else {
              result[13] += 0.0335628;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
              result[13] += 0.00033842554;
            } else {
              result[13] += 0.04655759;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[13] += -0.13941832;
            } else {
              result[13] += 0.14022799;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            result[13] += -0.15043241;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[13] += 0.12737569;
            } else {
              result[13] += -0.016343137;
            }
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[13] += 0.01745082;
            } else {
              result[13] += -0.14095254;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[13] += 0.089790516;
            } else {
              result[13] += -0.008487116;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[13] += 0.027285177;
            } else {
              result[13] += -0.11606037;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += 0.0014751658;
            } else {
              result[13] += 0.19306152;
            }
          }
        }
      } else {
        result[13] += -0.14885761;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2372243968)) {
      result[13] += -0.14834943;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)32643)) {
          result[13] += -0.0670444;
        } else {
          result[13] += 0.76744014;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)311)) {
            result[13] += -0.14715351;
          } else {
            result[13] += -0.040438987;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            result[13] += -0.024661468;
          } else {
            result[13] += 0.09607925;
          }
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += 0.011050475;
            } else {
              result[14] += 0.16217291;
            }
          } else {
            result[14] += -0.15121648;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[14] += -0.15061143;
            } else {
              result[14] += 0.047700282;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[14] += 0.14419912;
            } else {
              result[14] += -0.124774076;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[14] += -0.0021622153;
            } else {
              result[14] += -0.13663954;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
              result[14] += 0.15474552;
            } else {
              result[14] += 0.00062688737;
            }
          }
        } else {
          result[14] += -0.15071641;
        }
      }
    } else {
      result[14] += -0.14862098;
    }
  } else {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[14] += -0.043344103;
    } else {
      result[14] += -0.040571284;
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += 0.005193943;
            } else {
              result[0] += -0.087188095;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
              result[0] += 0.010522942;
            } else {
              result[0] += 0.26546782;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
              result[0] += -0.18881619;
            } else {
              result[0] += -0.05355678;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
              result[0] += 1.0072782;
            } else {
              result[0] += 0.10502406;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            result[0] += -0.14641587;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.17559783;
            } else {
              result[0] += -0.13586137;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
              result[0] += -0.16715586;
            } else {
              result[0] += 0.09118254;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
              result[0] += 0.25438315;
            } else {
              result[0] += -0.14361231;
            }
          }
        }
      }
    } else {
      result[0] += -0.14791587;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
        result[0] += -0.1420881;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          result[0] += 0.17774785;
        } else {
          result[0] += -0.098285444;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
        result[0] += 0.15128069;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2213215232)) {
          result[0] += -0.14214873;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[0] += -0.119954236;
            } else {
              result[0] += 0.12681337;
            }
          } else {
            result[0] += -0.13793527;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        result[1] += -0.117934115;
      } else {
        result[1] += -0.14431;
      }
    } else {
      result[1] += -0.056669183;
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)25)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)50)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
              result[1] += 0.0005600108;
            } else {
              result[1] += 0.1770074;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += -0.1540564;
            } else {
              result[1] += -0.10367788;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
            result[1] += 0.15289767;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)309)) {
              result[1] += -0.061240587;
            } else {
              result[1] += 0.041396644;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
              result[1] += -0.15038332;
            } else {
              result[1] += -0.07356494;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)9392)) {
              result[1] += 0.08133695;
            } else {
              result[1] += -0.14357181;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)299)) {
              result[1] += 0.1653208;
            } else {
              result[1] += -0.027036475;
            }
          } else {
            result[1] += 0.15870443;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)400)) {
          result[1] += 0.14584443;
        } else {
          result[1] += 0.22745109;
        }
      } else {
        result[1] += -0.101715155;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          result[2] += -0.14159802;
        } else {
          result[2] += -0.098318174;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)58063)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)53284)) {
              result[2] += 0.013149281;
            } else {
              result[2] += -0.06079011;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.05162799;
            } else {
              result[2] += -0.13957441;
            }
          }
        } else {
          result[2] += -0.11605115;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
          result[2] += 0.061341744;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
            result[2] += -0.028790398;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
              result[2] += 0.06730545;
            } else {
              result[2] += 0.022919055;
            }
          }
        }
      } else {
        result[2] += 0.14865783;
      }
    }
  } else {
    result[2] += -0.14970225;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.14975742;
    } else {
      result[3] += -0.09324207;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[3] += -0.1414453;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[3] += -0.10294123;
            } else {
              result[3] += 0.14678273;
            }
          }
        } else {
          result[3] += 0.1477977;
        }
      } else {
        result[3] += -0.14159144;
      }
    } else {
      result[3] += -0.14584965;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.060279265;
          } else {
            result[4] += -0.14306188;
          }
        } else {
          result[4] += -0.14520134;
        }
      } else {
        result[4] += -0.149699;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)12366)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)7636)) {
              result[4] += 0.02271008;
            } else {
              result[4] += 0.09243721;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)8891)) {
              result[4] += -0.122286536;
            } else {
              result[4] += 0.0011801776;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)12683)) {
            result[4] += 0.14873527;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
              result[4] += -0.058797345;
            } else {
              result[4] += 0.026559522;
            }
          }
        }
      } else {
        result[4] += -0.10455785;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.14949651;
    } else {
      result[4] += -0.07767075;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[5] += 0.0032046633;
            } else {
              result[5] += -0.05050077;
            }
          } else {
            result[5] += -0.17148677;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
              result[5] += -0.1717585;
            } else {
              result[5] += 0.21692783;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
              result[5] += -0.17745674;
            } else {
              result[5] += 0.042350996;
            }
          }
        }
      } else {
        result[5] += -0.14951003;
      }
    } else {
      result[5] += -0.14957376;
    }
  } else {
    result[5] += -0.14929318;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += -0.00068012276;
            } else {
              result[6] += -0.10817025;
            }
          } else {
            result[6] += -0.109855585;
          }
        } else {
          result[6] += -0.14356738;
        }
      } else {
        result[6] += -0.14509602;
      }
    } else {
      result[6] += 0.14729865;
    }
  } else {
    result[6] += -0.14969873;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[7] += -0.029914122;
            } else {
              result[7] += 0.011127993;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[7] += -0.042300757;
            } else {
              result[7] += 0.1513342;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            result[7] += -0.14426973;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
              result[7] += 0.04845546;
            } else {
              result[7] += 0.15956788;
            }
          }
        }
      } else {
        result[7] += -0.14971699;
      }
    } else {
      result[7] += -0.15007848;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)608)) {
          result[7] += 0.15001601;
        } else {
          result[7] += -0.1007485;
        }
      } else {
        result[7] += -0.12108195;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
        result[7] += -0.1487802;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10568)) {
            result[7] += -0.01203543;
          } else {
            result[7] += -0.12178291;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2384619520)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[7] += 0.24049579;
            } else {
              result[7] += 0.09315157;
            }
          } else {
            result[7] += -0.1216297;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          result[8] += -0.06905899;
        } else {
          result[8] += -0.1260133;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[8] += -0.043177657;
        } else {
          result[8] += -0.058768693;
        }
      }
    } else {
      result[8] += -0.14746909;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[8] += 0.00016626637;
            } else {
              result[8] += 0.13301578;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
              result[8] += -0.11742955;
            } else {
              result[8] += -0.15247606;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[8] += -0.15486467;
            } else {
              result[8] += 0.055196658;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
              result[8] += 0.16514981;
            } else {
              result[8] += -0.041470055;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)304)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
              result[8] += 0.020278122;
            } else {
              result[8] += 0.080396;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[8] += -0.030850185;
            } else {
              result[8] += -0.14250222;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1404)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[8] += -0.150746;
            } else {
              result[8] += -0.19135696;
            }
          } else {
            result[8] += 0.14164919;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[8] += 0.15795426;
            } else {
              result[8] += 0.02342862;
            }
          } else {
            result[8] += -0.14422461;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57147)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15721)) {
              result[8] += -0.1623792;
            } else {
              result[8] += -0.07575083;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
              result[8] += 0.325167;
            } else {
              result[8] += -0.017189443;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
            result[8] += -0.30857936;
          } else {
            result[8] += -0.13142435;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15020621;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.12110047;
            } else {
              result[8] += -0.13729528;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1577985)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[9] += 0.0023034103;
            } else {
              result[9] += 0.044694148;
            }
          } else {
            result[9] += -0.14843605;
          }
        } else {
          result[9] += -0.14923449;
        }
      } else {
        result[9] += 0.14717063;
      }
    } else {
      result[9] += -0.14877926;
    }
  } else {
    result[9] += -0.14927481;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[10] += 0.0014681529;
            } else {
              result[10] += -0.14280842;
            }
          } else {
            result[10] += -0.14642932;
          }
        } else {
          result[10] += -0.14959602;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)296821792)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
              result[10] += 0.01938187;
            } else {
              result[10] += 0.14212862;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.07388457;
            } else {
              result[10] += 0.02085035;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)315034144)) {
            result[10] += -0.23579767;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
              result[10] += -0.2999508;
            } else {
              result[10] += 0.03765262;
            }
          }
        }
      }
    } else {
      result[10] += -0.14742693;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14834836;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        result[10] += 0.079594366;
      } else {
        result[10] += -0.09813733;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[11] += -0.053891715;
            } else {
              result[11] += -0.14519082;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[11] += -0.0014180855;
            } else {
              result[11] += -0.14302793;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
            result[11] += -0.15498309;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
              result[11] += 0.0071868626;
            } else {
              result[11] += -0.21961594;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)38174)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
              result[11] += -0.0033524684;
            } else {
              result[11] += -0.36013332;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48198)) {
              result[11] += 0.14791447;
            } else {
              result[11] += 0.020642538;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
              result[11] += -0.0034273586;
            } else {
              result[11] += 0.016825784;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1095392640)) {
              result[11] += 0.09959161;
            } else {
              result[11] += 0.22564876;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)25)) {
              result[11] += 0.010776319;
            } else {
              result[11] += -0.20908175;
            }
          } else {
            result[11] += -0.15018636;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[11] += -0.07881454;
            } else {
              result[11] += 0.18453434;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)323)) {
              result[11] += 0.166416;
            } else {
              result[11] += 0.07413303;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[11] += -0.15446767;
            } else {
              result[11] += -0.056417536;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
              result[11] += 0.1091324;
            } else {
              result[11] += -0.109763764;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[11] += -0.035664678;
            } else {
              result[11] += 0.108388275;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
              result[11] += -0.0048640054;
            } else {
              result[11] += -0.22571753;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.14865366;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)152)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[12] += -0.049167294;
            } else {
              result[12] += -0.21970373;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[12] += -0.067169435;
            } else {
              result[12] += 0.060212;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[12] += -0.018724868;
            } else {
              result[12] += 0.03182321;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[12] += 0.011618514;
            } else {
              result[12] += -0.091430366;
            }
          }
        }
      } else {
        result[12] += -0.15287563;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
              result[12] += 0.14131187;
            } else {
              result[12] += 0.0038640774;
            }
          } else {
            result[12] += -0.34761322;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[12] += 0.06897052;
            } else {
              result[12] += 0.16087861;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[12] += -0.12298687;
            } else {
              result[12] += 0.13168265;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2430779136)) {
            result[12] += 0.095045164;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[12] += -0.60250914;
            } else {
              result[12] += 0.06828109;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)849185600)) {
              result[12] += 0.07368455;
            } else {
              result[12] += 0.1486397;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1680521472)) {
              result[12] += -0.35968384;
            } else {
              result[12] += 0.044679277;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)39287)) {
        result[12] += -0.15090625;
      } else {
        result[12] += 0.058097098;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[12] += 0.11167314;
          } else {
            result[12] += -0.09984841;
          }
        } else {
          result[12] += -0.13886538;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)450602464)) {
              result[12] += -0.042360812;
            } else {
              result[12] += 0.1296055;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
              result[12] += 0.093887724;
            } else {
              result[12] += -0.33504;
            }
          }
        } else {
          result[12] += -0.12364092;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
              result[13] += -0.0356335;
            } else {
              result[13] += -0.09723791;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += 0.0037778893;
            } else {
              result[13] += -0.058724526;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[13] += 0.032776885;
            } else {
              result[13] += -0.05595143;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[13] += -0.13699012;
            } else {
              result[13] += 0.020228732;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3467)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
              result[13] += -0.14905654;
            } else {
              result[13] += 0.31220382;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.16782783;
            } else {
              result[13] += -0.13343644;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)217)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[13] += 0.6225773;
            } else {
              result[13] += 0.07545307;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
              result[13] += -0.123062804;
            } else {
              result[13] += 0.1599041;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
            result[13] += 0.14518397;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)39)) {
              result[13] += -0.13613161;
            } else {
              result[13] += 0.23947324;
            }
          }
        } else {
          result[13] += 0.1457615;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[13] += 0.10563227;
            } else {
              result[13] += -0.08524495;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
              result[13] += 0.119786315;
            } else {
              result[13] += 0.3132199;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)883932608)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
              result[13] += 0.081357025;
            } else {
              result[13] += -0.21371883;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[13] += 0.0808901;
            } else {
              result[13] += -0.093792796;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2372243968)) {
      result[13] += -0.14789042;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
          result[13] += 0.7030239;
        } else {
          result[13] += -0.099357;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)311)) {
            result[13] += -0.14645554;
          } else {
            result[13] += -0.03625477;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            result[13] += -0.019177534;
          } else {
            result[13] += 0.08721395;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += 0.009164541;
            } else {
              result[14] += 0.14395532;
            }
          } else {
            result[14] += -0.15075497;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += -0.14717829;
            } else {
              result[14] += 0.05603173;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[14] += 0.13790812;
            } else {
              result[14] += -0.11912321;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[14] += -0.0030465974;
            } else {
              result[14] += -0.15263699;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
              result[14] += 0.14622784;
            } else {
              result[14] += 0.014930668;
            }
          }
        } else {
          result[14] += -0.15048668;
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[14] += -0.03821378;
      } else {
        result[14] += -0.035589557;
      }
    }
  } else {
    result[14] += -0.14834887;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[0] += -0.0024734198;
            } else {
              result[0] += -0.13527095;
            }
          } else {
            result[0] += 0.011754216;
          }
        } else {
          result[0] += -0.14034107;
        }
      } else {
        result[0] += -0.14521329;
      }
    } else {
      result[0] += -0.1494891;
    }
  } else {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)41648)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)38249)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35936)) {
              result[0] += 0.02467358;
            } else {
              result[0] += -0.050524984;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.15639007;
            } else {
              result[0] += -0.068027705;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[0] += 0.023062078;
            } else {
              result[0] += -0.23328564;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[0] += -0.0064231534;
            } else {
              result[0] += 0.0947093;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1450752896)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[0] += 0.25229597;
            } else {
              result[0] += -0.13754141;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
              result[0] += 0.22426988;
            } else {
              result[0] += 0.11893428;
            }
          }
        } else {
          result[0] += -0.14614515;
        }
      }
    } else {
      result[0] += -0.14753596;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        result[1] += -0.11383513;
      } else {
        result[1] += -0.14336345;
      }
    } else {
      result[1] += -0.051318005;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)34126)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[1] += 0.00047582306;
            } else {
              result[1] += -0.1578809;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[1] += 0.0599479;
            } else {
              result[1] += 0.18021354;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
              result[1] += -0.18584636;
            } else {
              result[1] += -0.15378092;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
              result[1] += -0.1896862;
            } else {
              result[1] += 0.24227981;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
            result[1] += -0.1504793;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
              result[1] += 0.3675699;
            } else {
              result[1] += -0.086027466;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[1] += -0.009561895;
            } else {
              result[1] += -0.14946325;
            }
          } else {
            result[1] += 0.15716088;
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[1] += 0.021222593;
            } else {
              result[1] += -0.016457558;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[1] += -0.030361732;
            } else {
              result[1] += -0.14918819;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[1] += 0.17560579;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
              result[1] += 0.24096668;
            } else {
              result[1] += -0.11262581;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
          result[1] += -0.15038991;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.16402784;
            } else {
              result[1] += -0.070290454;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
              result[1] += -0.07148804;
            } else {
              result[1] += 0.07052766;
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
          result[2] += -0.14028755;
        } else {
          result[2] += -0.09306857;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)63988)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)62881)) {
              result[2] += 0.008606118;
            } else {
              result[2] += 0.13624762;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)64550)) {
              result[2] += -0.01603499;
            } else {
              result[2] += -0.03957701;
            }
          }
        } else {
          result[2] += -0.11282487;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64882)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)64539)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
              result[2] += 0.023838285;
            } else {
              result[2] += 0.015832078;
            }
          } else {
            result[2] += 0.072189465;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)65213)) {
            result[2] += -0.065629184;
          } else {
            result[2] += 0.046986677;
          }
        }
      } else {
        result[2] += 0.14834073;
      }
    }
  } else {
    result[2] += -0.14962403;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.1496911;
    } else {
      result[3] += -0.08795929;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[3] += -0.14745198;
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[3] += -0.10735422;
        } else {
          result[3] += 0.14594394;
        }
      }
    } else {
      result[3] += 0.14717746;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.054669462;
          } else {
            result[4] += -0.14202341;
          }
        } else {
          result[4] += -0.14445265;
        }
      } else {
        result[4] += -0.14962041;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)58776)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)58457)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
              result[4] += 0.022495504;
            } else {
              result[4] += 0.036239143;
            }
          } else {
            result[4] += 0.10596101;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)59067)) {
            result[4] += -0.029848387;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)59651)) {
              result[4] += 0.06997144;
            } else {
              result[4] += 0.013420218;
            }
          }
        }
      } else {
        result[4] += -0.096165545;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.14936735;
    } else {
      result[4] += -0.07586025;
    }
  }
}

