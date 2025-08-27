
#include "header.h"

void predict_unit7(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.0019862289;
            } else {
              result[14] += -0.08374736;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.019390006;
            } else {
              result[14] += -0.14582177;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += -0.15137291;
            } else {
              result[14] += 0.021156952;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.35152006;
            } else {
              result[14] += -0.034412872;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.04494177;
            } else {
              result[14] += -0.09376356;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.14358559;
            } else {
              result[14] += -0.08461854;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.15189514;
            } else {
              result[14] += 0.19123465;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[14] += 0.0820193;
            } else {
              result[14] += -0.14223382;
            }
          }
        }
      }
    } else {
      result[14] += -0.1482032;
    }
  } else {
    result[14] += -0.14850374;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.012973127;
            } else {
              result[0] += -0.14400838;
            }
          } else {
            result[0] += -0.14563894;
          }
        } else {
          result[0] += -0.14973423;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.035894237;
            } else {
              result[0] += 0.008963654;
            }
          } else {
            result[0] += -0.13725525;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[0] += -0.13368225;
          } else {
            result[0] += 0.11902319;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          result[0] += -0.1493944;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[0] += -0.117202096;
          } else {
            result[0] += 0.05561624;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[0] += 0.23412894;
            } else {
              result[0] += -0.1189884;
            }
          } else {
            result[0] += -0.14601026;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.10793232;
            } else {
              result[0] += 0.15316163;
            }
          } else {
            result[0] += -0.10251155;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[0] += -0.14529146;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[0] += -0.14659932;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[0] += 0.014966127;
            } else {
              result[0] += -0.10379586;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[0] += 0.3768006;
            } else {
              result[0] += 0.046915147;
            }
          } else {
            result[0] += -0.12385713;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            result[0] += -0.14338356;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.063914165;
            } else {
              result[0] += -0.12250987;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.13750608;
            } else {
              result[0] += -0.07808079;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.085390575;
            } else {
              result[0] += -0.15178438;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            result[0] += -0.11197975;
          } else {
            result[0] += 0.0347069;
          }
        } else {
          result[0] += -0.1469913;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            result[1] += -0.12599276;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.0081220865;
            } else {
              result[1] += -0.011634842;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.09597649;
            } else {
              result[1] += 0.04052206;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += -0.0062630107;
            } else {
              result[1] += -0.15932107;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[1] += -0.15454298;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[1] += -0.22186218;
          } else {
            result[1] += -0.14157818;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.9041738;
            } else {
              result[1] += -0.06764774;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[1] += 0.23403512;
            } else {
              result[1] += 0.02206324;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += -0.15282579;
            } else {
              result[1] += 0.11446938;
            }
          } else {
            result[1] += 0.24249305;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.051759854;
            } else {
              result[1] += -0.14056848;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[1] += -0.06927313;
            } else {
              result[1] += -0.14407223;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.15570435;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += -0.024808323;
            } else {
              result[1] += 0.09442266;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.15126844;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.002031845;
        } else {
          result[2] += 0.0070936615;
        }
      } else {
        result[2] += -0.14377293;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.1430573;
      } else {
        result[2] += -0.101284154;
      }
    }
  } else {
    result[2] += -0.14994995;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.14947021;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[3] += 0.1449612;
            } else {
              result[3] += -0.11827523;
            }
          } else {
            result[3] += 0.14798579;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.11681915;
          } else {
            result[3] += 0.14306706;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.1468802;
        } else {
          result[3] += 0.14773294;
        }
      }
    } else {
      result[3] += -0.1487628;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14958695;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            result[4] += 0.019308807;
          } else {
            result[4] += -0.112090886;
          }
        } else {
          result[4] += 0.15480259;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[4] += -0.13188641;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.033950664;
            } else {
              result[4] += 0.17012498;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[4] += -0.103330374;
            } else {
              result[4] += -0.011483893;
            }
          }
        }
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.02957907;
            } else {
              result[4] += -0.016025903;
            }
          } else {
            result[4] += 0.14298834;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)52239)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)44042)) {
              result[4] += 0.0056388555;
            } else {
              result[4] += -0.0054018963;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)54161)) {
              result[4] += 0.026348831;
            } else {
              result[4] += 0.005077934;
            }
          }
        }
      } else {
        result[4] += 0.1455463;
      }
    } else {
      result[4] += 0.14976628;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.00392205;
        } else {
          result[5] += 0.0096971905;
        }
      } else {
        result[5] += -0.1419904;
      }
    } else {
      result[5] += -0.14419076;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14993557;
      } else {
        result[5] += 0.10358999;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.14571564;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[5] += 0.23647594;
            } else {
              result[5] += 0.08028245;
            }
          } else {
            result[5] += -0.10547117;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.016172089;
            } else {
              result[5] += -0.09252654;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += 0.053919863;
            } else {
              result[5] += -0.11107661;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0058876285;
        } else {
          result[6] += 0.11866447;
        }
      } else {
        result[6] += -0.14241005;
      }
    } else {
      result[6] += -0.14419082;
    }
  } else {
    result[6] += -0.14994995;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += -0.0049151657;
            } else {
              result[7] += -0.04594909;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.15074587;
            } else {
              result[7] += -0.07979893;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -0.1538025;
            } else {
              result[7] += -0.22042489;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 0.012097247;
            } else {
              result[7] += -0.062251616;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[7] += 0.14971209;
          } else {
            result[7] += -0.07684502;
          }
        } else {
          result[7] += -0.084572956;
        }
      }
    } else {
      result[7] += 0.1499199;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[7] += 0.14984621;
        } else {
          result[7] += 0.0070972717;
        }
      } else {
        result[7] += -0.11114114;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          result[7] += -0.14941369;
        } else {
          result[7] += 0.116793424;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.08967123;
            } else {
              result[7] += 0.18303768;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.15784585;
            } else {
              result[7] += 0.18636164;
            }
          }
        } else {
          result[7] += 0.14994991;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[8] += -0.052728157;
        } else {
          result[8] += -0.14605287;
        }
      } else {
        result[8] += -0.14687628;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.002477571;
            } else {
              result[8] += 0.024216527;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += -0.17202517;
            } else {
              result[8] += -0.15003413;
            }
          }
        } else {
          result[8] += 0.19582051;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            result[8] += -0.16743004;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += -0.34244835;
            } else {
              result[8] += -0.12319466;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.16232532;
            } else {
              result[8] += -0.083921306;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.15444303;
            } else {
              result[8] += 0.10730024;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.1578217;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.14393833;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.14364225;
          } else {
            result[8] += -0.084170155;
          }
        }
      } else {
        result[8] += -0.15429088;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.009797085;
      } else {
        result[9] += -0.14300673;
      }
    } else {
      result[9] += -0.14467134;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.14975175;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 0.08481737;
          } else {
            result[9] += -0.13997787;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.07377942;
          } else {
            result[9] += 0.14555073;
          }
        } else {
          result[9] += -0.12352756;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.13193;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.09621411;
            } else {
              result[9] += 0.06543328;
            }
          } else {
            result[9] += -0.079891905;
          }
        }
      } else {
        result[9] += -0.1467165;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.0107945055;
            } else {
              result[10] += -0.14360029;
            }
          } else {
            result[10] += -0.14473511;
          }
        } else {
          result[10] += -0.14967427;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
              result[10] += 0.032234818;
            } else {
              result[10] += 0.014560734;
            }
          } else {
            result[10] += -0.13438867;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.14634109;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.122728474;
            } else {
              result[10] += 0.0183849;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[10] += -0.14886408;
      } else {
        result[10] += 0.11877661;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14829981;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.13272235;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.11359134;
            } else {
              result[10] += -0.13369796;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[10] += 0.25528616;
            } else {
              result[10] += 0.1367591;
            }
          } else {
            result[10] += -0.10539474;
          }
        }
      } else {
        result[10] += -0.1477675;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += 0.0040609553;
            } else {
              result[11] += -0.034018926;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[11] += 0.101142764;
            } else {
              result[11] += -0.16698115;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[11] += -0.22408572;
          } else {
            result[11] += -0.1465798;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.15099731;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.009122552;
            } else {
              result[11] += 0.10291604;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += -0.029040655;
            } else {
              result[11] += -0.12762001;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += 0.016118266;
            } else {
              result[11] += 0.10566517;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[11] += -0.02830848;
            } else {
              result[11] += 0.018456342;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += 0.13289814;
            } else {
              result[11] += -0.13181551;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.14809947;
            } else {
              result[11] += -0.060236745;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[11] += 0.022348948;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.04929731;
            } else {
              result[11] += -0.12744518;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += 0.09382433;
            } else {
              result[11] += -0.13991545;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.14951803;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.0054411287;
            } else {
              result[12] += -0.14399491;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.09921265;
            } else {
              result[12] += -0.14773573;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.13482168;
            } else {
              result[12] += 0.053803604;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += 0.03405213;
            } else {
              result[12] += -0.14766262;
            }
          }
        }
      } else {
        result[12] += -0.15880944;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            result[12] += 0.05912259;
          } else {
            result[12] += -0.13043915;
          }
        } else {
          result[12] += 0.15790963;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            result[12] += -0.15034983;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[12] += 0.15331315;
            } else {
              result[12] += -0.118394524;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[12] += 0.26832086;
            } else {
              result[12] += 0.13709664;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[12] += -0.14561082;
            } else {
              result[12] += 0.063276455;
            }
          }
        }
      }
    }
  } else {
    result[12] += -0.14819205;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[13] += -0.040085267;
          } else {
            result[13] += -0.14603166;
          }
        } else {
          result[13] += -0.1466032;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.0085207075;
            } else {
              result[13] += -0.03220376;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.0755173;
            } else {
              result[13] += -0.0003637784;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.15257293;
            } else {
              result[13] += -0.07033925;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[13] += 0.40632343;
            } else {
              result[13] += -0.05149941;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.14039634;
          } else {
            result[13] += -0.064847894;
          }
        } else {
          result[13] += 0.14924775;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.11913007;
          } else {
            result[13] += 0.025620809;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            result[13] += 0.09858539;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.008795188;
            } else {
              result[13] += 0.10921327;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        result[13] += -0.14874582;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          result[13] += 0.016986847;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            result[13] += -0.13644482;
          } else {
            result[13] += -0.06692829;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[13] += -0.12088853;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            result[13] += 0.039551966;
          } else {
            result[13] += 0.13073537;
          }
        }
      } else {
        result[13] += -0.145063;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.0049215844;
            } else {
              result[14] += 0.028978774;
            }
          } else {
            result[14] += -0.14564624;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[14] += -0.15031546;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[14] += -0.1114246;
            } else {
              result[14] += 0.17380056;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.041982293;
            } else {
              result[14] += -0.08569451;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.1371765;
            } else {
              result[14] += -0.077391654;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.15173323;
            } else {
              result[14] += 0.1579077;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[14] += 0.07314064;
            } else {
              result[14] += -0.13843423;
            }
          }
        }
      }
    } else {
      result[14] += -0.1475709;
    }
  } else {
    result[14] += -0.1479768;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.010627199;
            } else {
              result[0] += -0.14216991;
            }
          } else {
            result[0] += -0.14441228;
          }
        } else {
          result[0] += -0.14958975;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.032339066;
            } else {
              result[0] += 0.007899769;
            }
          } else {
            result[0] += -0.13451715;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[0] += -0.13101016;
          } else {
            result[0] += 0.102126814;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          result[0] += -0.14910044;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[0] += -0.108766235;
          } else {
            result[0] += 0.058721792;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[0] += -0.1452346;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[0] += 0.17327459;
            } else {
              result[0] += -0.110496536;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.1005961;
            } else {
              result[0] += 0.15054801;
            }
          } else {
            result[0] += -0.09659465;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[0] += -0.14398469;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[0] += -0.14598499;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[0] += -0.0012692285;
            } else {
              result[0] += -0.092786655;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[0] += 0.23219563;
            } else {
              result[0] += -0.04201235;
            }
          } else {
            result[0] += -0.12000358;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            result[0] += -0.14185965;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.057996944;
            } else {
              result[0] += -0.117765546;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            result[0] += 0.16633473;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += -0.14956245;
            } else {
              result[0] += 0.15960449;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.042540003;
          } else {
            result[0] += -0.10529375;
          }
        } else {
          result[0] += -0.14600104;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[1] += -0.1213604;
            } else {
              result[1] += 0.0063316044;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.037914127;
            } else {
              result[1] += 0.038604848;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[1] += -0.14959724;
          } else {
            result[1] += -0.31523526;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[1] += 0.022379987;
            } else {
              result[1] += -0.13558781;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.15349;
            } else {
              result[1] += 0.08692773;
            }
          }
        } else {
          result[1] += -0.15167117;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.029667808;
            } else {
              result[1] += -0.1705291;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.1651213;
            } else {
              result[1] += 0.066776626;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += -0.12117832;
            } else {
              result[1] += 0.06734459;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.13650487;
            } else {
              result[1] += -0.05649496;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[1] += -0.09237884;
            } else {
              result[1] += 0.11276338;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
              result[1] += 0.27298892;
            } else {
              result[1] += -0.1528865;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += 0.15658759;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[1] += -0.17965837;
            } else {
              result[1] += -0.0021559473;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.150643;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0015690366;
        } else {
          result[2] += 0.006505016;
        }
      } else {
        result[2] += -0.14210652;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.14116953;
      } else {
        result[2] += -0.09284368;
      }
    }
  } else {
    result[2] += -0.14988495;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.14929542;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[3] += 0.14321242;
            } else {
              result[3] += -0.11230609;
            }
          } else {
            result[3] += 0.14729923;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.1137085;
          } else {
            result[3] += 0.14090103;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.14625034;
        } else {
          result[3] += 0.14671949;
        }
      }
    } else {
      result[3] += -0.14840992;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14943784;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
            result[4] += 0.04234782;
          } else {
            result[4] += -0.091453016;
          }
        } else {
          result[4] += 0.06431715;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[4] += -0.12703337;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.01810089;
            } else {
              result[4] += 0.09855198;
            }
          } else {
            result[4] += -0.09669432;
          }
        }
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
          result[4] += -0.025655193;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            result[4] += 0.15207954;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.015914736;
            } else {
              result[4] += 0.0041033393;
            }
          }
        }
      } else {
        result[4] += 0.14424507;
      }
    } else {
      result[4] += 0.14956827;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.003149877;
        } else {
          result[5] += 0.008785147;
        }
      } else {
        result[5] += -0.13952957;
      }
    } else {
      result[5] += -0.14260566;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14986734;
      } else {
        result[5] += 0.09782209;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.1444891;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[5] += 0.19339754;
            } else {
              result[5] += 0.0787782;
            }
          } else {
            result[5] += -0.09730113;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.019979145;
            } else {
              result[5] += -0.08466351;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += 0.05447531;
            } else {
              result[5] += -0.102709;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0047700712;
        } else {
          result[6] += 0.11505636;
        }
      } else {
        result[6] += -0.14013611;
      }
    } else {
      result[6] += -0.14260574;
    }
  } else {
    result[6] += -0.14988497;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += -0.0034282918;
            } else {
              result[7] += -0.041725114;
            }
          } else {
            result[7] += 0.15033492;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -0.15286236;
            } else {
              result[7] += -0.20927124;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[7] += 0.002846412;
            } else {
              result[7] += -0.18288797;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          result[7] += 0.14760844;
        } else {
          result[7] += -0.07753795;
        }
      }
    } else {
      result[7] += 0.1497457;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.13902877;
            } else {
              result[7] += -0.09405504;
            }
          } else {
            result[7] += 0.14992885;
          }
        } else {
          result[7] += 0.010403374;
        }
      } else {
        result[7] += -0.104288496;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[7] += -0.14907771;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.044075552;
            } else {
              result[7] += -0.15665537;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[7] += -0.105931185;
            } else {
              result[7] += 0.10644316;
            }
          } else {
            result[7] += 0.15556614;
          }
        }
      } else {
        result[7] += 0.14980198;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.0007298318;
            } else {
              result[8] += 0.11806271;
            }
          } else {
            result[8] += -0.16284478;
          }
        } else {
          result[8] += 0.18351471;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[8] += -0.16266505;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += -0.27180958;
            } else {
              result[8] += -0.11119907;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.15804066;
            } else {
              result[8] += -0.0800661;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += -0.15202416;
            } else {
              result[8] += 0.091005094;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[8] += 0.028091341;
            } else {
              result[8] += -0.16567278;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[8] += 0.35059825;
            } else {
              result[8] += -0.17165375;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[8] += 0.037561532;
            } else {
              result[8] += -0.14634332;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[8] += -0.037180185;
            } else {
              result[8] += -0.14383955;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[8] += -0.12859552;
            } else {
              result[8] += 0.12783667;
            }
          } else {
            result[8] += 0.13344732;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[8] += 0.027953207;
            } else {
              result[8] += 0.1335504;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 0.14580293;
            } else {
              result[8] += -0.0078776255;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15683952;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.14237927;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.14156277;
          } else {
            result[8] += -0.08248869;
          }
        }
      } else {
        result[8] += -0.15422192;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.007824631;
      } else {
        result[9] += -0.14089325;
      }
    } else {
      result[9] += -0.14320537;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.1496336;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 0.07767415;
          } else {
            result[9] += -0.13684857;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.06723936;
          } else {
            result[9] += 0.14413883;
          }
        } else {
          result[9] += -0.11708293;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.12970383;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[9] += 0.06967739;
            } else {
              result[9] += 0.09575129;
            }
          } else {
            result[9] += 0.05138692;
          }
        }
      } else {
        result[9] += -0.1457472;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.008792132;
            } else {
              result[10] += -0.14164892;
            }
          } else {
            result[10] += -0.14328504;
          }
        } else {
          result[10] += -0.14952333;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
              result[10] += 0.030095926;
            } else {
              result[10] += 0.01265438;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.14550893;
            } else {
              result[10] += 0.020720132;
            }
          }
        } else {
          result[10] += -0.12897646;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[10] += -0.14856942;
      } else {
        result[10] += 0.118870795;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14784287;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[10] += -0.12854874;
            } else {
              result[10] += 0.09805733;
            }
          } else {
            result[10] += -0.1315323;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += 0.33156016;
            } else {
              result[10] += 0.13953897;
            }
          } else {
            result[10] += -0.098066404;
          }
        }
      } else {
        result[10] += -0.14705643;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += 0.0019497776;
            } else {
              result[11] += -0.059274055;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.5256723;
            } else {
              result[11] += -0.025155134;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.017398566;
            } else {
              result[11] += 0.06732555;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[11] += 0.022066252;
            } else {
              result[11] += -0.03615078;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.08908311;
            } else {
              result[11] += 0.060812224;
            }
          } else {
            result[11] += -0.16267656;
          }
        } else {
          result[11] += -0.14206754;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          result[11] += -0.13761851;
        } else {
          result[11] += -0.18613479;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[11] += 0.2600963;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.05479461;
            } else {
              result[11] += 0.029162377;
            }
          } else {
            result[11] += -0.15096983;
          }
        }
      }
    }
  } else {
    result[11] += -0.14937209;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[12] += -0.052463803;
      } else {
        result[12] += -0.14418054;
      }
    } else {
      result[12] += -0.14574783;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[12] += 0.007991313;
            } else {
              result[12] += 0.048406404;
            }
          } else {
            result[12] += -0.14948496;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += -0.0911046;
            } else {
              result[12] += 0.15220352;
            }
          } else {
            result[12] += -0.12714599;
          }
        }
      } else {
        result[12] += -0.1514866;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[12] += -0.1497906;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.15295367;
            } else {
              result[12] += 0.20424679;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.09585617;
            } else {
              result[12] += -0.10450549;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[12] += -0.15536052;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.05976521;
            } else {
              result[12] += -0.014166614;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[13] += -0.05541381;
            } else {
              result[13] += -0.14561868;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.023173949;
            } else {
              result[13] += -0.031336676;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.15214387;
            } else {
              result[13] += -0.12779103;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[13] += 0.026552802;
            } else {
              result[13] += -0.1694342;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.015736766;
            } else {
              result[13] += 0.11463548;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.09660952;
            } else {
              result[13] += 0.16618006;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.19070911;
            } else {
              result[13] += 0.14456162;
            }
          } else {
            result[13] += -0.10038124;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.13816851;
          } else {
            result[13] += -0.050042763;
          }
        } else {
          result[13] += 0.14781667;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.11401281;
          } else {
            result[13] += 0.025981762;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.093673;
            } else {
              result[13] += 0.041330233;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += -0.11504117;
            } else {
              result[13] += 0.10504592;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.14745125;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += 0.06742463;
            } else {
              result[13] += -0.10719032;
            }
          } else {
            result[13] += 0.28647685;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[13] += -0.12851964;
          } else {
            result[13] += 0.03094464;
          }
        }
      } else {
        result[13] += -0.13756277;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[14] += -0.00038080537;
            } else {
              result[14] += -0.1446031;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.13562888;
            } else {
              result[14] += -0.014045669;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.013182821;
            } else {
              result[14] += -0.14347975;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.17393512;
            } else {
              result[14] += -0.028952638;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[14] += -0.14960632;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.10900117;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.17681988;
            } else {
              result[14] += -0.047382444;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.03822449;
            } else {
              result[14] += 0.11054043;
            }
          } else {
            result[14] += 0.13296495;
          }
        } else {
          result[14] += -0.12178017;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.15068923;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += 0.21093069;
            } else {
              result[14] += -0.10123941;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.10607713;
            } else {
              result[14] += -0.0107091125;
            }
          } else {
            result[14] += -0.13216498;
          }
        }
      }
    }
  } else {
    result[14] += -0.14784326;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.0087816;
            } else {
              result[0] += -0.13985784;
            }
          } else {
            result[0] += -0.14291094;
          }
        } else {
          result[0] += -0.14942598;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[0] += 0.012464177;
            } else {
              result[0] += 0.04259186;
            }
          } else {
            result[0] += -0.1314994;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[0] += -0.12825312;
          } else {
            result[0] += 0.09255622;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          result[0] += -0.14884372;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[0] += -0.106454946;
          } else {
            result[0] += 0.04798309;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += -0.14743891;
            } else {
              result[0] += 0.030715143;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.11295917;
            } else {
              result[0] += -0.09046787;
            }
          }
        } else {
          result[0] += 0.93693525;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.14332817;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[0] += 0.21252748;
            } else {
              result[0] += -0.004172002;
            }
          } else {
            result[0] += -0.08990799;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[0] += -0.14587499;
          } else {
            result[0] += 0.017703276;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          result[0] += -0.12657888;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.16340086;
            } else {
              result[0] += -0.12270015;
            }
          } else {
            result[0] += 0.1734299;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)17327)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[0] += -0.1320892;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.17737752;
            } else {
              result[0] += -0.04633003;
            }
          }
        } else {
          result[0] += -0.14480963;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.0050305096;
            } else {
              result[1] += -0.015364932;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += 0.042571455;
            } else {
              result[1] += -0.15107976;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += -0.1542005;
            } else {
              result[1] += -0.2008545;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[1] += 0.03270357;
            } else {
              result[1] += -0.22213157;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[1] += 0.23414819;
            } else {
              result[1] += 0.02191966;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[1] += -0.15080322;
            } else {
              result[1] += 0.1804085;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.13749987;
            } else {
              result[1] += 0.019336034;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.15525796;
            } else {
              result[1] += 0.020108763;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.022507861;
            } else {
              result[1] += -0.16558133;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += 0.027108602;
            } else {
              result[1] += 0.10782392;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += -0.11414242;
            } else {
              result[1] += 0.058406163;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[1] += 0.1509624;
            } else {
              result[1] += -0.019817133;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[1] += -0.09298892;
            } else {
              result[1] += 0.10571356;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
              result[1] += 0.23715924;
            } else {
              result[1] += -0.1466876;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += 0.15656184;
            } else {
              result[1] += 0.047412205;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[1] += -0.17352206;
            } else {
              result[1] += 0.0012296094;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.1499192;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0012565649;
        } else {
          result[2] += 0.0059871953;
        }
      } else {
        result[2] += -0.14009596;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.13890772;
      } else {
        result[2] += -0.084250756;
      }
    }
  } else {
    result[2] += -0.14981212;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.14909218;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[3] += 0.13779262;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.10976631;
          } else {
            result[3] += 0.13840494;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.14549279;
        } else {
          result[3] += 0.1454802;
        }
      }
    } else {
      result[3] += -0.14797251;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14926408;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
            result[4] += 0.053267635;
          } else {
            result[4] += -0.08298037;
          }
        } else {
          result[4] += 0.07767207;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[4] += -0.1213222;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.0028066311;
            } else {
              result[4] += 0.106670864;
            }
          } else {
            result[4] += -0.08827921;
          }
        }
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[4] += -0.022973059;
            } else {
              result[4] += 0.018935066;
            }
          } else {
            result[4] += 0.14113376;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)41722)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)34214)) {
              result[4] += 0.003906732;
            } else {
              result[4] += -0.007743308;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)44042)) {
              result[4] += 0.033391148;
            } else {
              result[4] += -0.0015556249;
            }
          }
        }
      } else {
        result[4] += 0.14269745;
      }
    } else {
      result[4] += 0.14935887;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.002581402;
        } else {
          result[5] += 0.007986218;
        }
      } else {
        result[5] += -0.13644186;
      }
    } else {
      result[5] += -0.14068155;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14979036;
      } else {
        result[5] += 0.09070309;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.14295368;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[5] += 0.03756898;
            } else {
              result[5] += 0.09939008;
            }
          } else {
            result[5] += -0.08883439;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
              result[5] += -0.008831329;
            } else {
              result[5] += -0.08458501;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[5] += 0.13985734;
            } else {
              result[5] += -0.022937221;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.003920759;
        } else {
          result[6] += 0.1113679;
        }
      } else {
        result[6] += -0.13730595;
      }
    } else {
      result[6] += -0.14068164;
    }
  } else {
    result[6] += -0.14981212;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += 0.0024411539;
            } else {
              result[7] += 0.14445786;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.055246405;
            } else {
              result[7] += -0.25027397;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
              result[7] += 0.1414006;
            } else {
              result[7] += -0.13576756;
            }
          } else {
            result[7] += 0.15044832;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += -0.14720464;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[7] += 0.070966944;
          } else {
            result[7] += -0.095259115;
          }
        }
      }
    } else {
      result[7] += 0.14955135;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.13589752;
            } else {
              result[7] += -0.09212104;
            }
          } else {
            result[7] += 0.14980136;
          }
        } else {
          result[7] += 0.004838262;
        }
      } else {
        result[7] += -0.09735303;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          result[7] += -0.14884834;
        } else {
          result[7] += 0.09653456;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.07589965;
            } else {
              result[7] += 0.17152178;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.15449584;
            } else {
              result[7] += 0.16996734;
            }
          }
        } else {
          result[7] += 0.14965333;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[8] += -0.047464203;
        } else {
          result[8] += -0.14408255;
        }
      } else {
        result[8] += -0.14554287;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.0018708437;
            } else {
              result[8] += 0.01991618;
            }
          } else {
            result[8] += -0.1598269;
          }
        } else {
          result[8] += 0.17599073;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[8] += -0.16058509;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += -0.25464422;
            } else {
              result[8] += -0.1469448;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.15427554;
            } else {
              result[8] += -0.076772;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.15321706;
            } else {
              result[8] += 0.08664194;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15585507;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.14033361;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.13961819;
          } else {
            result[8] += -0.07883634;
          }
        }
      } else {
        result[8] += -0.15351199;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.0063149626;
      } else {
        result[9] += -0.13825254;
      }
    } else {
      result[9] += -0.14142142;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.14947914;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 0.073992595;
          } else {
            result[9] += -0.13296567;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.064371005;
          } else {
            result[9] += 0.14287487;
          }
        } else {
          result[9] += -0.10979093;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.12702864;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[9] += 0.061056964;
            } else {
              result[9] += 0.0867615;
            }
          } else {
            result[9] += 0.039513588;
          }
        }
      } else {
        result[9] += -0.14464481;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.007230123;
            } else {
              result[10] += -0.13920136;
            }
          } else {
            result[10] += -0.14151978;
          }
        } else {
          result[10] += -0.14935142;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[10] += 0.024946336;
            } else {
              result[10] += -0.10369154;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += -0.08359621;
            } else {
              result[10] += 0.027817568;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.14470471;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.118590936;
            } else {
              result[10] += 0.015839117;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.14841427;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.14306888;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.08239904;
            } else {
              result[10] += -0.13181563;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.12472899;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += 0.49487;
            } else {
              result[10] += 0.1343986;
            }
          } else {
            result[10] += -0.10881764;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14910696;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[10] += 0.0948649;
      } else {
        result[10] += -0.13945697;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += -0.0022393435;
            } else {
              result[11] += -0.24476449;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[11] += 0.014410247;
            } else {
              result[11] += -0.1458402;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[11] += 0.13611257;
            } else {
              result[11] += -0.15348485;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[11] += -0.3138434;
            } else {
              result[11] += 0.06624279;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.08006496;
            } else {
              result[11] += 0.05465876;
            }
          } else {
            result[11] += -0.15749392;
          }
        } else {
          result[11] += -0.13817362;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          result[11] += -0.13146879;
        } else {
          result[11] += -0.18154313;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[11] += 0.22563344;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.042670064;
            } else {
              result[11] += 0.02345285;
            }
          } else {
            result[11] += -0.15001678;
          }
        }
      }
    }
  } else {
    result[11] += -0.14919779;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[12] += 0.0058514094;
            } else {
              result[12] += -0.101568855;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.13798422;
            } else {
              result[12] += 0.1345016;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.038708407;
            } else {
              result[12] += -0.08720443;
            }
          } else {
            result[12] += -0.14315009;
          }
        }
      } else {
        result[12] += -0.15019119;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.15224114;
        } else {
          result[12] += -0.16570024;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.10113789;
            } else {
              result[12] += 0.15030254;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += -0.2158921;
            } else {
              result[12] += 0.10193532;
            }
          }
        } else {
          result[12] += -0.15716067;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14994395;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.1432655;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[12] += 0.27265528;
            } else {
              result[12] += 0.1433795;
            }
          } else {
            result[12] += -0.14000069;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.14442344;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.13219343;
            } else {
              result[12] += -0.13071409;
            }
          } else {
            result[12] += -0.13525787;
          }
        }
      } else {
        result[12] += -0.14577694;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.008551574;
            } else {
              result[13] += -0.15243986;
            }
          } else {
            result[13] += 0.16147341;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.15169553;
            } else {
              result[13] += -0.12179009;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.009099953;
            } else {
              result[13] += -0.20449169;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.014274725;
            } else {
              result[13] += 0.101896845;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.07230603;
            } else {
              result[13] += 0.1628255;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.18570799;
            } else {
              result[13] += 0.13791992;
            }
          } else {
            result[13] += -0.09211924;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.13575514;
          } else {
            result[13] += -0.035198238;
          }
        } else {
          result[13] += 0.14637722;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.106955685;
          } else {
            result[13] += 0.02565906;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += 0.036082562;
            } else {
              result[13] += 0.07954376;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += -0.10727425;
            } else {
              result[13] += 0.09566918;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
      result[13] += -0.14681216;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[13] += -0.020054787;
        } else {
          result[13] += 0.15388332;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          result[13] += -0.16326168;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[13] += 0.26654977;
          } else {
            result[13] += -0.14350371;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.00015837178;
            } else {
              result[14] += -0.105349496;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.009179393;
            } else {
              result[14] += 0.0884288;
            }
          }
        } else {
          result[14] += -0.14380181;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[14] += -0.14899972;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.105415754;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.1863229;
            } else {
              result[14] += 0.014663462;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.035580788;
            } else {
              result[14] += 0.10419854;
            }
          } else {
            result[14] += 0.12578945;
          }
        } else {
          result[14] += -0.115328126;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.15017551;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.2551861;
            } else {
              result[14] += -0.09491773;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[14] += 0.13965672;
            } else {
              result[14] += -0.11319912;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.08306389;
            } else {
              result[14] += -0.13911307;
            }
          }
        }
      }
    }
  } else {
    result[14] += -0.1471556;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.007813623;
            } else {
              result[0] += -0.13699633;
            }
          } else {
            result[0] += -0.14108494;
          }
        } else {
          result[0] += -0.14925867;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
              result[0] += 0.02694867;
            } else {
              result[0] += -0.26290655;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[0] += 0.053627335;
            } else {
              result[0] += 0.1353649;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
              result[0] += 0.014626384;
            } else {
              result[0] += -0.021687817;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[0] += 0.09521242;
            } else {
              result[0] += 0.012268926;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          result[0] += -0.14848588;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[0] += -0.104937814;
          } else {
            result[0] += 0.039091438;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[0] += -0.14341474;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[0] += 0.534599;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.14007773;
            } else {
              result[0] += 0.09755598;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[0] += -0.14157413;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.10430786;
          } else {
            result[0] += 0.10632231;
          }
        } else {
          result[0] += -0.13611072;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          result[0] += 0.16712923;
        } else {
          result[0] += -0.08939784;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[0] += -0.14161672;
            } else {
              result[0] += 0.06992046;
            }
          } else {
            result[0] += -0.14926349;
          }
        } else {
          result[0] += 0.1277311;
        }
      }
    }
  }
}

