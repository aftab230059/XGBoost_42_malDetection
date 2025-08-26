
#include "header.h"

void predict_unit4(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[8] += -0.09145631;
            } else {
              result[8] += -0.13610542;
            }
          } else {
            result[8] += -0.14981975;
          }
        } else {
          result[8] += -0.14989054;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.000542155;
            } else {
              result[8] += 0.047955647;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.053570177;
            } else {
              result[8] += -0.14327128;
            }
          }
        } else {
          result[8] += -0.15024607;
        }
      }
    } else {
      result[8] += -0.15018606;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
          result[8] += -0.14726463;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
              result[8] += 0.09799317;
            } else {
              result[8] += -0.089519836;
            }
          } else {
            result[8] += -0.12690301;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
          result[8] += -0.018630367;
        } else {
          result[8] += 0.031070134;
        }
      }
    } else {
      result[8] += 0.08776745;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += 0.3226023;
            } else {
              result[9] += -0.116562076;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[9] += 0.018618789;
            } else {
              result[9] += 0.007185574;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.15102507;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.15803918;
            } else {
              result[9] += -0.14940351;
            }
          }
        }
      } else {
        result[9] += -0.15006003;
      }
    } else {
      result[9] += -0.15012427;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.15049146;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14777137;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.10463106;
            } else {
              result[9] += 0.147985;
            }
          } else {
            result[9] += -0.141487;
          }
        }
      } else {
        result[9] += -0.15019894;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.020579658;
            } else {
              result[10] += -0.14984246;
            }
          } else {
            result[10] += -0.14990674;
          }
        } else {
          result[10] += -0.15079476;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += 0.021667056;
            } else {
              result[10] += 0.08212982;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.14045109;
            } else {
              result[10] += -0.10212173;
            }
          }
        } else {
          result[10] += -0.14937034;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        result[10] += -0.15030107;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
          result[10] += -0.1114391;
        } else {
          result[10] += 0.22012328;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[10] += -0.15015334;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[10] += -0.11831467;
            } else {
              result[10] += 0.15523024;
            }
          } else {
            result[10] += -0.14560027;
          }
        } else {
          result[10] += -0.14921473;
        }
      }
    } else {
      result[10] += -0.15033469;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            result[11] += -0.098786004;
          } else {
            result[11] += -0.13541593;
          }
        } else {
          result[11] += -0.14982979;
        }
      } else {
        result[11] += -0.14988433;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.016283544;
            } else {
              result[11] += -0.13495925;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += 0.09433541;
            } else {
              result[11] += -0.152976;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[11] += -0.14852539;
            } else {
              result[11] += -0.2728996;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.25881794;
            } else {
              result[11] += -0.122816175;
            }
          }
        }
      } else {
        result[11] += -0.15008944;
      }
    }
  } else {
    result[11] += -0.1503428;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[12] += -0.09807874;
            } else {
              result[12] += -0.13702324;
            }
          } else {
            result[12] += -0.124192126;
          }
        } else {
          result[12] += -0.14985171;
        }
      } else {
        result[12] += -0.14992028;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.00036640317;
            } else {
              result[12] += 0.0676044;
            }
          } else {
            result[12] += -0.1529941;
          }
        } else {
          result[12] += -0.1505587;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += 0.17172821;
            } else {
              result[12] += 0.9231253;
            }
          } else {
            result[12] += -0.14681412;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[12] += -0.14712296;
            } else {
              result[12] += 0.098738424;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += 0.014523337;
            } else {
              result[12] += 0.17574257;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
              result[12] += 0.52151626;
            } else {
              result[12] += 0.026695551;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
              result[12] += 0.17154492;
            } else {
              result[12] += -0.015031897;
            }
          }
        } else {
          result[12] += -0.14996362;
        }
      } else {
        result[12] += -0.15038499;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.15328738;
            } else {
              result[12] += 0.07301274;
            }
          } else {
            result[12] += -0.15762079;
          }
        } else {
          result[12] += -0.14813353;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.13807027;
            } else {
              result[12] += 0.11575791;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.37505192;
            } else {
              result[12] += -0.14941199;
            }
          }
        } else {
          result[12] += -0.15026891;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[13] += -0.13901946;
            } else {
              result[13] += -0.015874613;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[13] += -0.15009595;
            } else {
              result[13] += -0.089878425;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.60215676;
            } else {
              result[13] += 0.040864717;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[13] += -0.1502336;
            } else {
              result[13] += 0.05163936;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[13] += 0.032519393;
            } else {
              result[13] += 0.1750892;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.16519728;
            } else {
              result[13] += -0.14777069;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += 0.19130884;
            } else {
              result[13] += -0.054720324;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
              result[13] += 0.29228672;
            } else {
              result[13] += 0.1682014;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[13] += -0.14657927;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
            result[13] += 0.3077387;
          } else {
            result[13] += -0.015422338;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[13] += -0.15034994;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.13967544;
            } else {
              result[13] += 0.28617498;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[13] += -0.2138741;
            } else {
              result[13] += -0.034080226;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
              result[13] += -0.15036254;
            } else {
              result[13] += -0.085586086;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.13986258;
            } else {
              result[13] += -0.119673856;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.17874405;
            } else {
              result[13] += -0.08298001;
            }
          }
        } else {
          result[13] += 0.1544798;
        }
      } else {
        result[13] += -0.12642466;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[13] += -0.14230584;
        } else {
          result[13] += 0.085033335;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.098900884;
            } else {
              result[13] += -0.09818169;
            }
          } else {
            result[13] += 0.1494091;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.09919773;
          } else {
            result[13] += 0.16505606;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.00011144715;
            } else {
              result[14] += 0.124026716;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.15374054;
            } else {
              result[14] += -0.05421454;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[14] += -0.14767402;
            } else {
              result[14] += -0.0006658559;
            }
          } else {
            result[14] += -0.1499541;
          }
        }
      } else {
        result[14] += -0.1498074;
      }
    } else {
      result[14] += -0.14987889;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15027736;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.047990784;
            } else {
              result[14] += -0.22397433;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.021053804;
            } else {
              result[14] += -0.062461436;
            }
          } else {
            result[14] += -0.14818507;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.17298397;
            } else {
              result[14] += -0.073816024;
            }
          } else {
            result[14] += -0.14805114;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.079935715;
            } else {
              result[14] += -0.14389706;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
              result[14] += 0.54277444;
            } else {
              result[14] += -0.11342983;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.002407596;
            } else {
              result[14] += 0.16632323;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[14] += -0.11825831;
            } else {
              result[14] += 0.1468481;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.20805079;
            } else {
              result[14] += -0.14951926;
            }
          } else {
            result[14] += -0.14974815;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.025980987;
            } else {
              result[14] += 0.2178575;
            }
          } else {
            result[14] += -0.14997892;
          }
        } else {
          result[14] += -0.15012239;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += -0.016397288;
            } else {
              result[0] += -0.14967725;
            }
          } else {
            result[0] += -0.15036641;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
              result[0] += 0.03574354;
            } else {
              result[0] += -0.09561003;
            }
          } else {
            result[0] += 0.11113273;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += -0.15009363;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[0] += -0.039322123;
            } else {
              result[0] += 0.73943746;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.1500971;
            } else {
              result[0] += -0.015694197;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.17756169;
            } else {
              result[0] += -0.46616045;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
        result[0] += -0.14724077;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          result[0] += 0.15761858;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            result[0] += -0.15448152;
          } else {
            result[0] += 0.15335968;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[0] += -0.1493224;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[0] += -0.09534324;
            } else {
              result[0] += 0.014266395;
            }
          } else {
            result[0] += -0.14814818;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += -0.13196416;
            } else {
              result[0] += 0.06810083;
            }
          } else {
            result[0] += 0.6430893;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
            result[0] += -0.14799424;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[0] += 0.14551707;
            } else {
              result[0] += -0.13559653;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            result[0] += -0.15005985;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[0] += 0.06564776;
            } else {
              result[0] += -0.10769672;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          result[0] += -0.15025985;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 1.3684611;
            } else {
              result[0] += 0.004156666;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
              result[0] += 0.15246293;
            } else {
              result[0] += 0.21174468;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[1] += -0.1482489;
        } else {
          result[1] += -0.103529364;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.018812876;
            } else {
              result[1] += -0.03980692;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += 0.039280828;
            } else {
              result[1] += 0.14568713;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[1] += -0.14326112;
            } else {
              result[1] += -0.06326245;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.122421585;
            } else {
              result[1] += -0.13197942;
            }
          }
        }
      }
    } else {
      result[1] += -0.15006498;
    }
  } else {
    result[1] += -0.14947893;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.15034617;
      } else {
        result[2] += -0.12552187;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
              result[2] += 0.11349272;
            } else {
              result[2] += 0.041204087;
            }
          } else {
            result[2] += -0.10380485;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[2] += 0.13758162;
            } else {
              result[2] += 0.06794649;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
              result[2] += -0.07165297;
            } else {
              result[2] += 0.12244474;
            }
          }
        }
      } else {
        result[2] += -0.14448589;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)5683)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
              result[2] += 0.07680813;
            } else {
              result[2] += -0.04191461;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5162)) {
              result[2] += 0.14936377;
            } else {
              result[2] += 0.041411486;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6201)) {
              result[2] += -0.11464768;
            } else {
              result[2] += -0.029403575;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)7454)) {
              result[2] += 0.16828229;
            } else {
              result[2] += 0.032090783;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3906)) {
              result[2] += 0.00043374408;
            } else {
              result[2] += -0.15802614;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[2] += 0.15147753;
            } else {
              result[2] += 0.04729245;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)28222)) {
              result[2] += -0.018887106;
            } else {
              result[2] += -0.1209018;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)39115)) {
              result[2] += 0.056761023;
            } else {
              result[2] += 0.002707127;
            }
          }
        }
      }
    } else {
      result[2] += 0.15300086;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15036936;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.1494469;
            } else {
              result[3] += 0.15405709;
            }
          } else {
            result[3] += 0.15314841;
          }
        } else {
          result[3] += -0.14342485;
        }
      } else {
        result[3] += -0.14964992;
      }
    } else {
      result[3] += -0.15030599;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.15041004;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        result[4] += 0.9712852;
      } else {
        result[4] += -0.14954449;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.15307963;
    } else {
      result[4] += -0.12593694;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.07838251;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.040652253;
            } else {
              result[5] += -0.009421576;
            }
          }
        } else {
          result[5] += -0.14957884;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)53285)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50927)) {
              result[5] += 0.03248322;
            } else {
              result[5] += 0.14597674;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)51715)) {
              result[5] += -0.13966334;
            } else {
              result[5] += 0.009374594;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)54081)) {
              result[5] += 0.1457322;
            } else {
              result[5] += 0.069949865;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)56134)) {
              result[5] += -0.083281;
            } else {
              result[5] += 0.037315704;
            }
          }
        }
      }
    } else {
      result[5] += -0.14965962;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15042667;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
          result[5] += -0.14998198;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.03920359;
            } else {
              result[5] += -0.12136502;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
              result[5] += 0.45259652;
            } else {
              result[5] += -0.12761189;
            }
          }
        }
      }
    } else {
      result[5] += 0.14510801;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.0045643128;
            } else {
              result[6] += -0.1391261;
            }
          } else {
            result[6] += 0.1603163;
          }
        } else {
          result[6] += -0.14850609;
        }
      } else {
        result[6] += -0.14957897;
      }
    } else {
      result[6] += -0.14967208;
    }
  } else {
    result[6] += -0.15042782;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
              result[7] += 0.01115802;
            } else {
              result[7] += 0.15102695;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.069357276;
            } else {
              result[7] += -0.1488354;
            }
          }
        } else {
          result[7] += -0.14964856;
        }
      } else {
        result[7] += -0.14974606;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.1539998;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[7] += -0.16556092;
          } else {
            result[7] += -0.15526412;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.060953382;
            } else {
              result[7] += -0.008185532;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.15112527;
            } else {
              result[7] += 0.15417229;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.071158744;
            } else {
              result[7] += -0.14845213;
            }
          } else {
            result[7] += 0.16119534;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[7] += 0.2510925;
            } else {
              result[7] += 0.17433679;
            }
          } else {
            result[7] += -0.14118196;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.15049647;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[7] += -0.1135659;
            } else {
              result[7] += 0.4053673;
            }
          } else {
            result[7] += -0.14854144;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += 0.13576046;
            } else {
              result[7] += -0.18612151;
            }
          } else {
            result[7] += -0.15103012;
          }
        } else {
          result[7] += -0.15719998;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[7] += 0.15297881;
          } else {
            result[7] += -0.08056647;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.15839529;
            } else {
              result[7] += 0.16206862;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[7] += -0.15812662;
            } else {
              result[7] += 0.15354899;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[8] += -0.08513622;
            } else {
              result[8] += -0.13374642;
            }
          } else {
            result[8] += -0.14959252;
          }
        } else {
          result[8] += -0.14968482;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.013927316;
            } else {
              result[8] += -0.18381442;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[8] += 0.15416458;
            } else {
              result[8] += -0.15695938;
            }
          }
        } else {
          result[8] += -0.15008771;
        }
      }
    } else {
      result[8] += -0.1500598;
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
        result[8] += -0.14560431;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
            result[8] += 0.09878134;
          } else {
            result[8] += -0.081020795;
          }
        } else {
          result[8] += -0.12119525;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
        result[8] += -0.01590584;
      } else {
        result[8] += 0.028883217;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += 0.19628678;
            } else {
              result[9] += -0.111413546;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[9] += 0.015740292;
            } else {
              result[9] += 0.005174305;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.15083675;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.15664196;
            } else {
              result[9] += -0.14891641;
            }
          }
        }
      } else {
        result[9] += -0.14985678;
      }
    } else {
      result[9] += -0.14992273;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.15040456;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14660719;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.09426457;
            } else {
              result[9] += 0.14415738;
            }
          } else {
            result[9] += -0.13870734;
          }
        }
      } else {
        result[9] += -0.15006284;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.017943792;
            } else {
              result[10] += -0.14961776;
            }
          } else {
            result[10] += -0.14970244;
          }
        } else {
          result[10] += -0.15066284;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[10] += 0.083330065;
            } else {
              result[10] += -0.1469967;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.15331449;
            } else {
              result[10] += 0.0675363;
            }
          }
        } else {
          result[10] += -0.14889497;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        result[10] += -0.1501881;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
          result[10] += -0.108429655;
        } else {
          result[10] += 0.17783694;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[10] += -0.14993107;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[10] += -0.116123505;
            } else {
              result[10] += 0.15099722;
            }
          } else {
            result[10] += -0.14419362;
          }
        } else {
          result[10] += -0.14875847;
        }
      }
    } else {
      result[10] += -0.15024327;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[11] += -0.09437754;
            } else {
              result[11] += -0.07415458;
            }
          } else {
            result[11] += -0.13299084;
          }
        } else {
          result[11] += -0.1496037;
        }
      } else {
        result[11] += -0.14967804;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[11] += 0.016505558;
            } else {
              result[11] += -0.07874565;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.14236073;
            } else {
              result[11] += -0.16641028;
            }
          }
        } else {
          result[11] += -0.1503173;
        }
      } else {
        result[11] += -0.14995177;
      }
    }
  } else {
    result[11] += -0.15025419;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[12] += -0.10102548;
            } else {
              result[12] += -0.14962795;
            }
          } else {
            result[12] += -0.14971709;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += 0.026486307;
            } else {
              result[12] += -0.06415101;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.15022463;
            } else {
              result[12] += 0.0031013435;
            }
          }
        }
      } else {
        result[12] += -0.15002869;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
              result[12] += 0.3053178;
            } else {
              result[12] += 0.46614134;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[12] += 0.2698317;
            } else {
              result[12] += 0.15970203;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25066)) {
              result[12] += 0.3558812;
            } else {
              result[12] += 0.8244727;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35047)) {
              result[12] += 0.1674523;
            } else {
              result[12] += 0.47585723;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[12] += -0.1548935;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.16374901;
            } else {
              result[12] += -0.14173174;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[12] += 0.1497677;
            } else {
              result[12] += 0.03839412;
            }
          } else {
            result[12] += -0.15678868;
          }
        }
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[12] += -0.14825687;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
              result[12] += 0.22114953;
            } else {
              result[12] += -0.03746988;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
              result[12] += 0.5309529;
            } else {
              result[12] += -0.09672438;
            }
          }
        } else {
          result[12] += -0.15019783;
        }
      }
    } else {
      result[12] += 0.08738797;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[13] += -0.13565448;
            } else {
              result[13] += -0.011456113;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[13] += -0.14993104;
            } else {
              result[13] += -0.08523278;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.087972544;
            } else {
              result[13] += -6.3536856e-05;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += -0.15118834;
            } else {
              result[13] += 0.102011174;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[13] += 0.037602037;
            } else {
              result[13] += 0.1619958;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += -0.14040755;
            } else {
              result[13] += -0.1610067;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.62897587;
            } else {
              result[13] += -0.095870316;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += 0.5494144;
            } else {
              result[13] += 0.17368686;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[13] += -0.1452149;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
            result[13] += 0.24970485;
          } else {
            result[13] += -0.021988409;
          }
        }
      } else {
        result[13] += -0.15135139;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.13535437;
            } else {
              result[13] += -0.11468258;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[13] += 0.17438878;
            } else {
              result[13] += -0.03763014;
            }
          }
        } else {
          result[13] += 0.15336174;
        }
      } else {
        result[13] += -0.12026669;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)301)) {
          result[13] += -0.018757928;
        } else {
          result[13] += -0.12765579;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.08855834;
            } else {
              result[13] += -0.088052005;
            }
          } else {
            result[13] += 0.1444292;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.09513951;
          } else {
            result[13] += 0.15827906;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.0059950063;
            } else {
              result[14] += -0.15079744;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.053472716;
            } else {
              result[14] += 0.13906264;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[14] += -0.12340193;
            } else {
              result[14] += 0.14007053;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += -0.17329706;
            } else {
              result[14] += -0.08292066;
            }
          }
        }
      } else {
        result[14] += -0.14957872;
      }
    } else {
      result[14] += -0.14967208;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        result[14] += -0.15018135;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.20528576;
            } else {
              result[14] += -0.1223358;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.030420804;
            } else {
              result[14] += -0.14375316;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[14] += -0.08797806;
            } else {
              result[14] += 0.17287582;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.15181845;
            } else {
              result[14] += -0.119821824;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.042420126;
            } else {
              result[14] += 0.048177402;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.12665437;
            } else {
              result[14] += 0.03975168;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.2437941;
            } else {
              result[14] += -0.14652088;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[14] += -0.1519937;
            } else {
              result[14] += 0.081331275;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[14] += 0.06899576;
            } else {
              result[14] += 0.4282107;
            }
          } else {
            result[14] += -0.1492289;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.1495659;
            } else {
              result[14] += 0.18219803;
            }
          } else {
            result[14] += -0.14996836;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += 0.01482921;
            } else {
              result[0] += -0.044911306;
            }
          } else {
            result[0] += -0.14941855;
          }
        } else {
          result[0] += -0.14950244;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += -0.14987923;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[0] += -0.045612548;
            } else {
              result[0] += 0.740213;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.14993012;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.30326343;
            } else {
              result[0] += -0.029100396;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
        result[0] += -0.14387816;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          result[0] += 0.15653343;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            result[0] += -0.15211788;
          } else {
            result[0] += 0.15217954;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          result[0] += -0.14946221;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[0] += 0.417038;
          } else {
            result[0] += -0.1473978;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[0] += -0.09290885;
            } else {
              result[0] += 0.007100146;
            }
          } else {
            result[0] += -0.14757171;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += -0.12868153;
            } else {
              result[0] += 0.063464105;
            }
          } else {
            result[0] += 0.5400007;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
            result[0] += -0.14720757;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[0] += 0.12740444;
            } else {
              result[0] += -0.13244742;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            result[0] += -0.14993449;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[0] += 0.06202086;
            } else {
              result[0] += -0.10046144;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          result[0] += -0.14980474;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.50281215;
            } else {
              result[0] += 0.015803603;
            }
          } else {
            result[0] += 0.15315266;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[1] += -0.1475354;
        } else {
          result[1] += -0.098658785;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.012226773;
            } else {
              result[1] += -0.055265386;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[1] += 0.08167739;
            } else {
              result[1] += -0.12977824;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[1] += -0.13988137;
            } else {
              result[1] += -0.053698357;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.11089167;
            } else {
              result[1] += -0.12972233;
            }
          }
        }
      }
    } else {
      result[1] += -0.14994524;
    }
  } else {
    result[1] += -0.1491369;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.15024912;
      } else {
        result[2] += -0.1220417;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
              result[2] += 0.0024561267;
            } else {
              result[2] += 0.079262316;
            }
          } else {
            result[2] += -0.096210465;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[2] += 0.13375284;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[2] += -0.032439016;
            } else {
              result[2] += 0.08972071;
            }
          }
        }
      } else {
        result[2] += -0.14259438;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)63974)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)62739)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)61981)) {
              result[2] += 0.03201908;
            } else {
              result[2] += -0.061253335;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
              result[2] += 0.13343345;
            } else {
              result[2] += 0.03353452;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
              result[2] += -0.0074072494;
            } else {
              result[2] += -0.11296045;
            }
          } else {
            result[2] += 0.055384774;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)62485)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)60225)) {
              result[2] += 0.015581506;
            } else {
              result[2] += 0.091233924;
            }
          } else {
            result[2] += -0.14417064;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
            result[2] += 0.17224;
          } else {
            result[2] += -0.051852994;
          }
        }
      }
    } else {
      result[2] += 0.15219489;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15028457;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[3] += 0.13053057;
            } else {
              result[3] += 0.15230007;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.14849728;
            } else {
              result[3] += 0.15327308;
            }
          }
        } else {
          result[3] += -0.14176537;
        }
      } else {
        result[3] += -0.1492857;
      }
    } else {
      result[3] += -0.15020043;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.1503256;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        result[4] += 0.45866755;
      } else {
        result[4] += -0.149267;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.15227833;
    } else {
      result[4] += -0.11985047;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.071890295;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.035735935;
            } else {
              result[5] += -0.008520703;
            }
          }
        } else {
          result[5] += -0.14931312;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)18664)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)17404)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)15623)) {
              result[5] += 0.03684839;
            } else {
              result[5] += -0.027206821;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.18062054;
            } else {
              result[5] += 0.048523653;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)23105)) {
              result[5] += 0.0066877673;
            } else {
              result[5] += -0.078337066;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)25397)) {
              result[5] += 0.0750797;
            } else {
              result[5] += 0.030876053;
            }
          }
        }
      }
    } else {
      result[5] += -0.14942089;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.15035586;
      } else {
        result[5] += 0.15222175;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        result[5] += -0.14981583;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[5] += 0.10310394;
            } else {
              result[5] += 1.1180103;
            }
          } else {
            result[5] += -0.14551657;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[5] += 0.10838792;
            } else {
              result[5] += -0.11948453;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += 0.43794665;
            } else {
              result[5] += -0.14666122;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.0045501925;
            } else {
              result[6] += -0.13701361;
            }
          } else {
            result[6] += 0.15736988;
          }
        } else {
          result[6] += -0.14798413;
        }
      } else {
        result[6] += -0.14931324;
      }
    } else {
      result[6] += -0.14943667;
    }
  } else {
    result[6] += -0.15035932;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
              result[7] += 0.008663211;
            } else {
              result[7] += 0.1495811;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.06274652;
            } else {
              result[7] += -0.1482694;
            }
          }
        } else {
          result[7] += -0.14939158;
        }
      } else {
        result[7] += -0.14951268;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.15314111;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.15998954;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
              result[7] += 0.049020864;
            } else {
              result[7] += -0.0031195937;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.14565443;
            } else {
              result[7] += 0.1529932;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.065009795;
            } else {
              result[7] += -0.14782238;
            }
          } else {
            result[7] += 0.15752237;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[7] += 0.5844691;
            } else {
              result[7] += 0.16961214;
            }
          } else {
            result[7] += -0.13726185;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.15021634;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[7] += -0.10887962;
            } else {
              result[7] += 0.29571062;
            }
          } else {
            result[7] += -0.1476363;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += 0.12974931;
            } else {
              result[7] += -0.17434719;
            }
          } else {
            result[7] += -0.1504835;
          }
        } else {
          result[7] += -0.15644485;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[7] += 0.1522408;
          } else {
            result[7] += 0.016782185;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.15162651;
            } else {
              result[7] += 0.16027522;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[7] += -0.15631363;
            } else {
              result[7] += 0.15268353;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[8] += -0.07888378;
            } else {
              result[8] += -0.13110186;
            }
          } else {
            result[8] += -0.1493294;
          }
        } else {
          result[8] += -0.14945158;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.0064667133;
            } else {
              result[8] += 0.065400116;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += 0.056518752;
            } else {
              result[8] += -0.027463458;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.15007865;
            } else {
              result[8] += -0.1190654;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.127801;
            } else {
              result[8] += -0.14979622;
            }
          }
        }
      }
    } else {
      result[8] += -0.14995255;
    }
  } else {
    result[8] += -0.15003821;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.13634303;
            } else {
              result[9] += -0.110426664;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[9] += 0.013092643;
            } else {
              result[9] += 0.0030206058;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.15065186;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.15544716;
            } else {
              result[9] += -0.14833732;
            }
          }
        }
      } else {
        result[9] += -0.14963907;
      }
    } else {
      result[9] += -0.14971441;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.15033396;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14568958;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.08429932;
            } else {
              result[9] += 0.14033328;
            }
          } else {
            result[9] += -0.1352228;
          }
        }
      } else {
        result[9] += -0.14991872;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.017739328;
            } else {
              result[10] += -0.14943323;
            }
          } else {
            result[10] += -0.14978144;
          }
        } else {
          result[10] += -0.15054618;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[10] += 0.064673096;
            } else {
              result[10] += 0.014440394;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.1321451;
            } else {
              result[10] += -0.093237;
            }
          }
        } else {
          result[10] += -0.14847998;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        result[10] += -0.15007785;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          result[10] += 0.17172718;
        } else {
          result[10] += -0.10745499;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[10] += -0.14969179;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
              result[10] += -0.117295824;
            } else {
              result[10] += 0.1471299;
            }
          } else {
            result[10] += -0.14225283;
          }
        } else {
          result[10] += -0.14819176;
        }
      }
    } else {
      result[10] += -0.15016794;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.08829072;
            } else {
              result[11] += -0.14934267;
            }
          } else {
            result[11] += -0.14944364;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.011539802;
            } else {
              result[11] += -0.1271063;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.07587746;
            } else {
              result[11] += -0.103556365;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[11] += -0.15045534;
          } else {
            result[11] += -0.15878004;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
              result[11] += -0.00045754775;
            } else {
              result[11] += 0.3319564;
            }
          } else {
            result[11] += -0.15425757;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[11] += -0.090982184;
            } else {
              result[11] += 0.83019495;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[11] += 0.41359642;
            } else {
              result[11] += -0.090982184;
            }
          }
        } else {
          result[11] += -0.13419192;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[11] += 0.05327918;
            } else {
              result[11] += -0.014007354;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[11] += 0.14474964;
            } else {
              result[11] += -0.1602377;
            }
          }
        } else {
          result[11] += -0.16074331;
        }
      }
    }
  } else {
    result[11] += -0.15017925;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[12] += -0.09526984;
            } else {
              result[12] += -0.14937139;
            }
          } else {
            result[12] += -0.14948912;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[12] += 0.007822294;
            } else {
              result[12] += -0.14995503;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.15058613;
            } else {
              result[12] += -0.18806775;
            }
          }
        }
      } else {
        result[12] += -0.14990321;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[12] += 0.35973725;
            } else {
              result[12] += 0.05619292;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
              result[12] += 0.00033314456;
            } else {
              result[12] += 0.15348557;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
              result[12] += 0.06674552;
            } else {
              result[12] += 0.18842568;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += 0.32455593;
            } else {
              result[12] += 0.16826819;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[12] += -0.15437591;
            } else {
              result[12] += -0.103626326;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.16253978;
            } else {
              result[12] += -0.14075133;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[12] += 0.14444953;
            } else {
              result[12] += 0.030423297;
            }
          } else {
            result[12] += -0.15461306;
          }
        }
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[12] += -0.14721082;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)683239424)) {
              result[12] += 0.14269325;
            } else {
              result[12] += -0.04138735;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
              result[12] += 0.30482778;
            } else {
              result[12] += -0.093398005;
            }
          }
        } else {
          result[12] += -0.1496768;
        }
      }
    } else {
      result[12] += 0.08089157;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[13] += -0.13156298;
            } else {
              result[13] += -0.008248337;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[13] += -0.1497562;
            } else {
              result[13] += -0.07975295;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.052718647;
            } else {
              result[13] += -0.07882032;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += -0.15076433;
            } else {
              result[13] += 0.09293737;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.14621256;
            } else {
              result[13] += 0.02909731;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
              result[13] += -0.12613283;
            } else {
              result[13] += -0.15860933;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[13] += 0.16308734;
            } else {
              result[13] += -0.026799679;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[13] += 0.20724863;
            } else {
              result[13] += 0.41207394;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[13] += -0.14353415;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1278356224)) {
            result[13] += 0.20796184;
          } else {
            result[13] += -0.034878217;
          }
        }
      } else {
        result[13] += -0.15101466;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.13056833;
            } else {
              result[13] += -0.1102914;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[13] += 0.17022723;
            } else {
              result[13] += -0.033637412;
            }
          }
        } else {
          result[13] += 0.15251324;
        }
      } else {
        result[13] += -0.11640386;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[13] += -0.13341592;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
            result[13] += -0.09172323;
          } else {
            result[13] += 0.000264805;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15945633;
            } else {
              result[13] += 0.019870546;
            }
          } else {
            result[13] += 0.1384042;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.088070415;
          } else {
            result[13] += 0.15550134;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[14] += 0.0029330435;
            } else {
              result[14] += -0.14931294;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += -0.16012008;
            } else {
              result[14] += 0.7571106;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[14] += 0.100943215;
            } else {
              result[14] += 0.16881418;
            }
          } else {
            result[14] += -0.14775361;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            result[14] += -0.15268926;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2361869312)) {
              result[14] += -0.090476334;
            } else {
              result[14] += 0.04558916;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[14] += 0.5149132;
            } else {
              result[14] += 0.010458466;
            }
          } else {
            result[14] += -0.13932317;
          }
        }
      }
    } else {
      result[14] += -0.14943667;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        result[14] += -0.15010142;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += -0.024228109;
            } else {
              result[14] += 0.0815658;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.21012124;
            } else {
              result[14] += -0.15592173;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.14973071;
            } else {
              result[14] += -0.17019635;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.1097383;
            } else {
              result[14] += -0.11283437;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.0034705338;
            } else {
              result[14] += 0.16085988;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.106207624;
            } else {
              result[14] += 0.13596524;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.2229383;
            } else {
              result[14] += -0.1433585;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[14] += -0.1513359;
            } else {
              result[14] += 0.06802757;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.030453157;
            } else {
              result[14] += 0.19933164;
            }
          } else {
            result[14] += -0.14883411;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.14927164;
            } else {
              result[14] += 0.17306086;
            }
          } else {
            result[14] += -0.14980288;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[0] += -0.0051050647;
            } else {
              result[0] += -0.14922886;
            }
          } else {
            result[0] += -0.15015961;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[0] += 0.041175306;
            } else {
              result[0] += 0.12375403;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
              result[0] += -0.14768708;
            } else {
              result[0] += 0.032482266;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += -0.14964768;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[0] += -0.04310542;
            } else {
              result[0] += 0.43131626;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.14975795;
            } else {
              result[0] += -0.022837263;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.16207606;
            } else {
              result[0] += -0.41071388;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
        result[0] += -0.1409972;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          result[0] += 0.15580036;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            result[0] += -0.15049227;
          } else {
            result[0] += 0.15124713;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[0] += -0.14966293;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[0] += -0.14617437;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[0] += 0.14183037;
            } else {
              result[0] += -0.07839417;
            }
          }
        } else {
          result[0] += -0.14905633;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        result[0] += -0.14983372;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            result[0] += 0.1955034;
          } else {
            result[0] += -0.14902331;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
              result[0] += 0.15505362;
            } else {
              result[0] += -0.17264912;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.3498355;
            } else {
              result[0] += -0.114855036;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[1] += -0.1466652;
        } else {
          result[1] += -0.093477026;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.011595729;
            } else {
              result[1] += -0.025384488;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += 0.031500198;
            } else {
              result[1] += 0.13124722;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.11915;
            } else {
              result[1] += -0.023049148;
            }
          } else {
            result[1] += -0.14999646;
          }
        }
      }
    } else {
      result[1] += -0.14982218;
    }
  } else {
    result[1] += -0.14872709;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.15015775;
      } else {
        result[2] += -0.11822383;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[2] += 0.019811403;
            } else {
              result[2] += 0.100336485;
            }
          } else {
            result[2] += -0.082668476;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[2] += 0.1307729;
            } else {
              result[2] += 0.060858414;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
              result[2] += -0.07995363;
            } else {
              result[2] += 0.11428229;
            }
          }
        }
      } else {
        result[2] += -0.14017625;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)5683)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
              result[2] += 0.06501591;
            } else {
              result[2] += -0.037258536;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5162)) {
              result[2] += 0.13373598;
            } else {
              result[2] += 0.035426922;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6201)) {
              result[2] += -0.10418705;
            } else {
              result[2] += -0.025587695;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)7454)) {
              result[2] += 0.14900564;
            } else {
              result[2] += 0.025889345;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)13838)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)13573)) {
              result[2] += 0.011857462;
            } else {
              result[2] += -0.14203802;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)26669)) {
              result[2] += 0.054518208;
            } else {
              result[2] += 0.147585;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)28222)) {
              result[2] += -0.017753048;
            } else {
              result[2] += -0.10618148;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
              result[2] += 0.008051641;
            } else {
              result[2] += 0.09482715;
            }
          }
        }
      }
    } else {
      result[2] += 0.15159246;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15020593;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.14876631;
            } else {
              result[3] += 0.1524402;
            }
          } else {
            result[3] += 0.151642;
          }
        } else {
          result[3] += -0.14009283;
        }
      } else {
        result[3] += -0.14891493;
      }
    } else {
      result[3] += -0.15010281;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.15025036;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          result[4] += 0.33579054;
        } else {
          result[4] += 0.060588345;
        }
      } else {
        result[4] += -0.14892548;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.15165992;
    } else {
      result[4] += -0.11289702;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[5] += -0.065440714;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.031178989;
            } else {
              result[5] += -0.0073698624;
            }
          }
        } else {
          result[5] += -0.14898749;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)10262)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)9760)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)8735)) {
              result[5] += 0.01817149;
            } else {
              result[5] += 0.07115328;
            }
          } else {
            result[5] += -0.13825636;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)13573)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)11049)) {
              result[5] += 0.029596737;
            } else {
              result[5] += 0.08883859;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)16405)) {
              result[5] += -0.0021802466;
            } else {
              result[5] += 0.027575223;
            }
          }
        }
      }
    } else {
      result[5] += -0.14913161;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.150299;
      } else {
        result[5] += 0.14681044;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        result[5] += -0.14961664;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[5] += 0.035409164;
            } else {
              result[5] += 0.5302173;
            }
          } else {
            result[5] += -0.1485636;
          }
        } else {
          result[5] += -0.14822862;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.0045429943;
            } else {
              result[6] += -0.1347544;
            }
          } else {
            result[6] += 0.15454388;
          }
        } else {
          result[6] += -0.14741985;
        }
      } else {
        result[6] += -0.14898762;
      }
    } else {
      result[6] += -0.14915244;
    }
  } else {
    result[6] += -0.15030372;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[7] += -0.0019354916;
            } else {
              result[7] += 0.023724144;
            }
          } else {
            result[7] += -0.14908764;
          }
        } else {
          result[7] += -0.14637825;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.056908775;
            } else {
              result[7] += -0.14754876;
            }
          } else {
            result[7] += 0.1524856;
          }
        } else {
          result[7] += -0.16057572;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[7] += -0.14013895;
      } else {
        result[7] += 0.1521558;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.05980873;
            } else {
              result[7] += -0.14713936;
            }
          } else {
            result[7] += 0.15423387;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[7] += 0.40750793;
            } else {
              result[7] += 0.16469863;
            }
          } else {
            result[7] += -0.13403781;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.14995703;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[7] += -0.13079377;
            } else {
              result[7] += 0.21320167;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[7] += -0.13126507;
            } else {
              result[7] += -0.0066697835;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += 0.12295847;
            } else {
              result[7] += -0.1612938;
            }
          } else {
            result[7] += -0.14982493;
          }
        } else {
          result[7] += -0.1556729;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[7] += 0.15168658;
          } else {
            result[7] += 0.009708304;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.14384186;
            } else {
              result[7] += 0.15765741;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[7] += -0.15458393;
            } else {
              result[7] += 0.15200576;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[8] += -0.07251065;
            } else {
              result[8] += -0.12829944;
            }
          } else {
            result[8] += -0.14900777;
          }
        } else {
          result[8] += -0.14917079;
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.0012686665;
            } else {
              result[8] += 0.040509857;
            }
          } else {
            result[8] += -0.15043464;
          }
        } else {
          result[8] += -0.1496357;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.20873901;
            } else {
              result[8] += 0.17140004;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += 0.1321166;
            } else {
              result[8] += 0.20096669;
            }
          }
        } else {
          result[8] += -0.1151409;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          result[8] += -0.013697066;
        } else {
          result[8] += -0.12101983;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[8] += -0.15078896;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
              result[8] += 0.017319078;
            } else {
              result[8] += 0.40445986;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.005647011;
            } else {
              result[8] += -0.14918093;
            }
          }
        }
      } else {
        result[8] += -0.15027624;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.15247035;
            } else {
              result[8] += 0.10062659;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += -0.21312527;
            } else {
              result[8] += -0.15041098;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[8] += 0.15774657;
          } else {
            result[8] += -0.14888367;
          }
        }
      } else {
        result[8] += -0.15111016;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += 0.10101033;
            } else {
              result[9] += -0.109029286;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[9] += 0.011039902;
            } else {
              result[9] += 0.0020921188;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.15048236;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.1545113;
            } else {
              result[9] += -0.14761819;
            }
          }
        }
      } else {
        result[9] += -0.14938925;
      }
    } else {
      result[9] += -0.1494811;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.15027702;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14447758;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.07656218;
            } else {
              result[9] += 0.13702835;
            }
          } else {
            result[9] += -0.13129522;
          }
        }
      } else {
        result[9] += -0.1497528;
      }
    }
  }
}

