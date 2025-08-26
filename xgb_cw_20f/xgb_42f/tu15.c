
#include "header.h"

void predict_unit15(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.00038791302;
            } else {
              result[0] += 0.032724455;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += -0.020475755;
            } else {
              result[0] += -0.09467119;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            result[0] += 0.037847877;
          } else {
            result[0] += 0.09800545;
          }
        }
      } else {
        result[0] += 0.10357696;
      }
    } else {
      result[0] += -0.11151196;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
            result[0] += 0.0071957703;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[0] += -0.13723102;
            } else {
              result[0] += -0.013294764;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[0] += -0.116771236;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[0] += 0.0750164;
            } else {
              result[0] += -0.019580256;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
          result[0] += -0.13529477;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
            result[0] += -0.06338428;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += 0.0051049376;
            } else {
              result[0] += 0.11027444;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
        result[0] += 0.097073294;
      } else {
        result[0] += -0.038122673;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.0012520447;
            } else {
              result[1] += -0.14019445;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.04741974;
            } else {
              result[1] += -0.0022480485;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += -0.15012488;
            } else {
              result[1] += -0.021284208;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.031099452;
            } else {
              result[1] += -0.15365449;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[1] += 0.021015566;
            } else {
              result[1] += 0.06778208;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[1] += -0.14664975;
            } else {
              result[1] += 0.08586336;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41485)) {
              result[1] += 0.14189197;
            } else {
              result[1] += 0.041950688;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[1] += -0.11314401;
            } else {
              result[1] += -0.020019023;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
            result[1] += 0.0099797025;
          } else {
            result[1] += -0.08005707;
          }
        } else {
          result[1] += 0.3199617;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
              result[1] += -0.119366534;
            } else {
              result[1] += 0.08214488;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
              result[1] += -0.08215363;
            } else {
              result[1] += -0.14825782;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
            result[1] += 0.2752836;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += -0.05052564;
            } else {
              result[1] += 0.014985213;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
              result[1] += -0.11560852;
            } else {
              result[1] += 0.07140031;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
              result[1] += 0.014661086;
            } else {
              result[1] += -0.12200951;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
              result[1] += 0.10988327;
            } else {
              result[1] += -0.05728954;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[1] += 0.23565073;
            } else {
              result[1] += 0.07287072;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            result[1] += -0.14507805;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.13356638;
            } else {
              result[1] += -0.011457916;
            }
          }
        } else {
          result[1] += 0.1520617;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
              result[1] += -0.088825084;
            } else {
              result[1] += 0.0090335645;
            }
          } else {
            result[1] += -0.15477735;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
            result[1] += -0.18609762;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += 0.02811469;
            } else {
              result[1] += 0.1416659;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += 0.15630837;
            } else {
              result[1] += -0.03994932;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[1] += 0.20532805;
            } else {
              result[1] += 0.0012327158;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[1] += -0.14457297;
            } else {
              result[1] += 0.12524946;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.006987467;
            } else {
              result[1] += 0.06401186;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += -0.0029051588;
            } else {
              result[2] += -0.06368205;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.08342903;
            } else {
              result[2] += -0.058758076;
            }
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3906)) {
              result[2] += -0.056862444;
            } else {
              result[2] += -0.010923764;
            }
          } else {
            result[2] += -0.007968035;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)4908)) {
          result[2] += 0.11595912;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6201)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[2] += 0.013123463;
            } else {
              result[2] += -0.15072432;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6453)) {
              result[2] += 0.11094325;
            } else {
              result[2] += 0.0017905714;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            result[2] += 0.015211647;
          } else {
            result[2] += 0.09975034;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)40611)) {
              result[2] += 0.0030956718;
            } else {
              result[2] += -0.06443287;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[2] += 0.09137086;
            } else {
              result[2] += 0.010485675;
            }
          }
        }
      } else {
        result[2] += 0.116839774;
      }
    }
  } else {
    result[2] += -0.13617119;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.13631694;
    } else {
      result[3] += -0.008400673;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[3] += 0.02200885;
        } else {
          result[3] += 0.09607386;
        }
      } else {
        result[3] += -0.023109226;
      }
    } else {
      result[3] += -0.09183132;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.044917244;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[4] += 0.054605257;
            } else {
              result[4] += -0.08017866;
            }
          } else {
            result[4] += 0.064345516;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            result[4] += -0.077011354;
          } else {
            result[4] += 0.033497814;
          }
        }
      }
    } else {
      result[4] += 0.111110255;
    }
  } else {
    result[4] += -0.13643369;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[5] += 0.0005669539;
            } else {
              result[5] += 0.026587462;
            }
          } else {
            result[5] += -0.110197924;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
              result[5] += 0.051114354;
            } else {
              result[5] += 0.2022739;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += -0.11000351;
            } else {
              result[5] += 0.107642524;
            }
          }
        }
      } else {
        result[5] += -0.10466131;
      }
    } else {
      result[5] += -0.10681009;
    }
  } else {
    result[5] += -0.1219645;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00043549982;
  } else {
    result[6] += -0.13606584;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.00207285;
            } else {
              result[7] += -0.005492625;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += -0.037058916;
            } else {
              result[7] += 0.015220256;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
              result[7] += -0.010136905;
            } else {
              result[7] += -0.06990327;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
              result[7] += -0.28822228;
            } else {
              result[7] += -0.057231404;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)16666)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
              result[7] += 0.0164127;
            } else {
              result[7] += 0.10203429;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[7] += -0.00026048502;
            } else {
              result[7] += 0.15150198;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[7] += 0.1389243;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[7] += -0.06830128;
            } else {
              result[7] += 0.0991927;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[7] += 0.033071455;
      } else {
        result[7] += 0.12705776;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[7] += 0.009530751;
      } else {
        result[7] += -0.14417665;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[7] += 0.12009496;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
          result[7] += 0.03713198;
        } else {
          result[7] += -0.11768198;
        }
      }
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[8] += 0.0013579265;
            } else {
              result[8] += 0.021824794;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2835)) {
              result[8] += -0.033807006;
            } else {
              result[8] += -0.0029071267;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[8] += -0.1500473;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.14038269;
            } else {
              result[8] += -0.0012485271;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[8] += 0.11166844;
            } else {
              result[8] += -0.114239566;
            }
          } else {
            result[8] += -0.118416585;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30457)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.13905828;
            } else {
              result[8] += -0.03226465;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.057067677;
            } else {
              result[8] += -0.105729714;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.14642331;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[8] += -0.09612938;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[8] += 0.12819731;
            } else {
              result[8] += -0.089367256;
            }
          }
        } else {
          result[8] += -0.111609325;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12324)) {
              result[8] += 0.08411557;
            } else {
              result[8] += -7.8632234e-05;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[8] += -0.24141774;
            } else {
              result[8] += 0.014118421;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.14751278;
            } else {
              result[8] += 0.04658057;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += -0.0036477947;
            } else {
              result[8] += -0.09383682;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
              result[8] += 0.06485381;
            } else {
              result[8] += -0.0923428;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[8] += -0.22868717;
            } else {
              result[8] += -0.016458597;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
              result[8] += -0.025018988;
            } else {
              result[8] += 0.09450541;
            }
          } else {
            result[8] += -0.084272675;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[8] += 0.17982545;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
            result[8] += -0.06737622;
          } else {
            result[8] += 0.08262034;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[8] += -0.12092616;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.10258898;
            } else {
              result[8] += -0.102867566;
            }
          }
        } else {
          result[8] += 0.09683297;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
              result[9] += 0.00045565795;
            } else {
              result[9] += 0.08909613;
            }
          } else {
            result[9] += -0.09917791;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[9] += 0.013058648;
          } else {
            result[9] += 0.09562313;
          }
        }
      } else {
        result[9] += -0.09579135;
      }
    } else {
      result[9] += -0.10131765;
    }
  } else {
    result[9] += -0.12422498;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[10] += 0.00016054475;
            } else {
              result[10] += 0.01083138;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[10] += -0.012130697;
            } else {
              result[10] += -0.103567034;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
              result[10] += -0.022966072;
            } else {
              result[10] += 0.09330223;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[10] += -0.09950326;
            } else {
              result[10] += 0.034114067;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
          result[10] += 0.009288006;
        } else {
          result[10] += -0.12035329;
        }
      }
    } else {
      result[10] += -0.1149697;
    }
  } else {
    result[10] += -0.12286512;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 8.6255124e-05;
            } else {
              result[11] += -0.059123445;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.031948846;
            } else {
              result[11] += -0.0015917876;
            }
          }
        } else {
          result[11] += -0.12173306;
        }
      } else {
        result[11] += -0.122389846;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23300)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
              result[11] += 0.07438766;
            } else {
              result[11] += -0.1079081;
            }
          } else {
            result[11] += 0.10015661;
          }
        } else {
          result[11] += 0.115285784;
        }
      } else {
        result[11] += -0.09042584;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
      result[11] += -0.189779;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
        result[11] += -0.16128966;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          result[11] += 0.12280583;
        } else {
          result[11] += -0.10411424;
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2476456192)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
              result[12] += -0.00032744426;
            } else {
              result[12] += -0.03519676;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1788612096)) {
              result[12] += 0.046577673;
            } else {
              result[12] += 0.19054523;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[12] += -0.093941994;
            } else {
              result[12] += 0.022012372;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.08627114;
            } else {
              result[12] += 0.12495627;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[12] += 0.02126599;
            } else {
              result[12] += 0.33751896;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
              result[12] += -0.16816059;
            } else {
              result[12] += -0.042301554;
            }
          }
        } else {
          result[12] += 0.21022658;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
              result[12] += 0.005536542;
            } else {
              result[12] += -0.11481467;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
              result[12] += -0.15794787;
            } else {
              result[12] += 0.09325408;
            }
          }
        } else {
          result[12] += 0.13786861;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
              result[12] += -0.005331166;
            } else {
              result[12] += 0.13445963;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.22029865;
            } else {
              result[12] += 0.025313456;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += -0.16501786;
            } else {
              result[12] += -0.018113645;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
              result[12] += 0.19019493;
            } else {
              result[12] += -0.03674346;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[12] += 0.0044322186;
            } else {
              result[12] += 0.051316086;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56836)) {
              result[12] += 0.18648964;
            } else {
              result[12] += 0.034588985;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[12] += -0.09502662;
            } else {
              result[12] += 0.025128959;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
              result[12] += -0.017388295;
            } else {
              result[12] += 0.19709979;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[12] += -0.0005630612;
            } else {
              result[12] += -0.03251178;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
              result[12] += 0.025035655;
            } else {
              result[12] += 0.14954482;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
              result[12] += -0.10012035;
            } else {
              result[12] += 0.069153205;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35300)) {
              result[12] += 0.05251625;
            } else {
              result[12] += -0.11613789;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
            result[12] += 0.2061643;
          } else {
            result[12] += -0.1052517;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
            result[12] += -0.081686944;
          } else {
            result[12] += 0.36500373;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3151783168)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16666)) {
              result[12] += 0.12166343;
            } else {
              result[12] += -0.114196554;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
              result[12] += -0.16172288;
            } else {
              result[12] += -0.06674132;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[12] += 0.124504305;
            } else {
              result[12] += -0.028893206;
            }
          } else {
            result[12] += -0.18045382;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[13] += -0.0004836465;
            } else {
              result[13] += -0.028264288;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
              result[13] += 0.041463323;
            } else {
              result[13] += 0.003171101;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
              result[13] += 0.20446315;
            } else {
              result[13] += 0.05524193;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[13] += -0.091456875;
            } else {
              result[13] += 0.12046455;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[13] += 0.016400088;
            } else {
              result[13] += -0.025920188;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.14939131;
            } else {
              result[13] += -0.027655886;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += -0.041770667;
            } else {
              result[13] += -0.11679114;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
              result[13] += -0.045150384;
            } else {
              result[13] += 0.070041426;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
          result[13] += -0.0016711621;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
            result[13] += -0.13766061;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
              result[13] += -0.0005338842;
            } else {
              result[13] += -0.09887164;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
              result[13] += 0.15913346;
            } else {
              result[13] += -0.06417944;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
              result[13] += -0.03526519;
            } else {
              result[13] += 0.1356484;
            }
          }
        } else {
          result[13] += 0.16348471;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.016031839;
            } else {
              result[13] += 0.118870124;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[13] += -0.028929474;
            } else {
              result[13] += -0.14454964;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
            result[13] += -0.12006029;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
              result[13] += 0.27861375;
            } else {
              result[13] += -0.14036389;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
              result[13] += 0.014758803;
            } else {
              result[13] += 0.10412332;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[13] += -0.105103396;
            } else {
              result[13] += 0.057898536;
            }
          }
        } else {
          result[13] += 0.17769927;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        result[13] += -0.14466846;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43534)) {
              result[13] += -0.09640625;
            } else {
              result[13] += 0.020790333;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
              result[13] += 0.29366577;
            } else {
              result[13] += 0.014860205;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[13] += -0.063793;
            } else {
              result[13] += -0.13364597;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[13] += -0.0754555;
            } else {
              result[13] += 0.035110574;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
              result[14] += 0.005704496;
            } else {
              result[14] += 0.040146988;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
              result[14] += -0.074192256;
            } else {
              result[14] += -0.0046878187;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
              result[14] += -0.010953259;
            } else {
              result[14] += 0.0109569095;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
              result[14] += 0.111687444;
            } else {
              result[14] += 0.0015324109;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[14] += -0.033035472;
        } else {
          result[14] += -0.010906635;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += 0.02250628;
            } else {
              result[14] += 0.19184273;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[14] += -0.13103503;
            } else {
              result[14] += -0.020257078;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
              result[14] += 0.12277827;
            } else {
              result[14] += 0.37514976;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[14] += 0.05817353;
            } else {
              result[14] += -0.11093672;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
          result[14] += -0.13816857;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[14] += -0.10893328;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[14] += 0.25851747;
            } else {
              result[14] += 0.050193664;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[14] += -0.030159837;
            } else {
              result[14] += -0.12985003;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[14] += 0.11962991;
            } else {
              result[14] += -0.016260033;
            }
          }
        } else {
          result[14] += -0.12450786;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[14] += 0.055654287;
        } else {
          result[14] += 0.1676518;
        }
      }
    } else {
      result[14] += -0.1354713;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[0] += 0.0011834219;
            } else {
              result[0] += -0.06950895;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[0] += 0.08129467;
            } else {
              result[0] += -0.049101185;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[0] += -0.13629465;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
              result[0] += 0.10413829;
            } else {
              result[0] += -0.039299536;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
            result[0] += -0.043662604;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.22415262;
            } else {
              result[0] += 0.044123836;
            }
          }
        } else {
          result[0] += -0.077127516;
        }
      }
    } else {
      result[0] += -0.09007367;
    }
  } else {
    result[0] += -0.11043014;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[1] += -0.065844975;
    } else {
      result[1] += -0.0041548256;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[1] += 0.0005128868;
            } else {
              result[1] += 0.08574948;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1278356224)) {
              result[1] += -0.015617317;
            } else {
              result[1] += -0.00043365368;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
              result[1] += -0.09842966;
            } else {
              result[1] += 0.016076608;
            }
          } else {
            result[1] += -0.1400643;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.9965074;
            } else {
              result[1] += 0.017170299;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[1] += 0.028362744;
            } else {
              result[1] += -0.04004852;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
              result[1] += 0.027445028;
            } else {
              result[1] += -0.13145092;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
              result[1] += 0.105940826;
            } else {
              result[1] += -0.0628085;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[1] += -0.029357016;
            } else {
              result[1] += -0.17429797;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[1] += -0.030474233;
            } else {
              result[1] += 0.14126308;
            }
          }
        } else {
          result[1] += -0.157164;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[1] += -0.14553289;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
              result[1] += 0.19086954;
            } else {
              result[1] += 0.020438785;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1885973376)) {
              result[1] += 0.015848484;
            } else {
              result[1] += -0.012116247;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.1508134;
            } else {
              result[1] += -0.0023214773;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)29495)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)27196)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.008195668;
            } else {
              result[2] += 0.01633348;
            }
          } else {
            result[2] += 0.22005859;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)28740)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)28222)) {
              result[2] += -0.07357323;
            } else {
              result[2] += -0.002348944;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)28998)) {
              result[2] += -0.123909734;
            } else {
              result[2] += -0.04400662;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)30252)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)29984)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)29742)) {
              result[2] += 0.08875118;
            } else {
              result[2] += -0.050863635;
            }
          } else {
            result[2] += 0.09075083;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)30522)) {
              result[2] += -0.0066806334;
            } else {
              result[2] += -0.1564009;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)31053)) {
              result[2] += 0.14700587;
            } else {
              result[2] += 0.0018806527;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
          result[2] += 0.07596511;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[2] += 0.022221595;
            } else {
              result[2] += -0.03315138;
            }
          } else {
            result[2] += 0.07526858;
          }
        }
      } else {
        result[2] += 0.11825067;
      }
    }
  } else {
    result[2] += -0.13431183;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.13449131;
    } else {
      result[3] += -0.007532047;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[3] += 0.018432077;
        } else {
          result[3] += 0.090460025;
        }
      } else {
        result[3] += -0.021720707;
      }
    } else {
      result[3] += -0.087943286;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.033926524;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += 0.013429705;
          } else {
            result[4] += 0.054228064;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
            result[4] += -0.076266855;
          } else {
            result[4] += 0.05453905;
          }
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        result[4] += 0.047035266;
      } else {
        result[4] += 0.12254375;
      }
    }
  } else {
    result[4] += -0.13460195;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[5] += 0.0025508762;
            } else {
              result[5] += -0.030884882;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[5] += -0.06645029;
            } else {
              result[5] += 0.05612002;
            }
          }
        } else {
          result[5] += -0.1237315;
        }
      } else {
        result[5] += 0.23114304;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
        result[5] += -0.128425;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
          result[5] += 0.15000951;
        } else {
          result[5] += -0.08678622;
        }
      }
    }
  } else {
    result[5] += -0.11895151;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00065338984;
  } else {
    result[6] += -0.13419546;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[7] += -0.004465865;
            } else {
              result[7] += 0.005566726;
            }
          } else {
            result[7] += 0.34833935;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[7] += -0.013952636;
            } else {
              result[7] += -0.10638064;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40194)) {
              result[7] += -0.025198264;
            } else {
              result[7] += 0.15662588;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28379)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[7] += 0.35066965;
            } else {
              result[7] += 0.04120308;
            }
          } else {
            result[7] += 0.079672985;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            result[7] += -0.104184665;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
              result[7] += 0.06537529;
            } else {
              result[7] += -0.031013122;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46583)) {
              result[7] += -0.10169299;
            } else {
              result[7] += -0.035593875;
            }
          } else {
            result[7] += 0.083454;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51470)) {
              result[7] += -0.1388646;
            } else {
              result[7] += -0.08670193;
            }
          } else {
            result[7] += -0.008759757;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
          result[7] += 0.18228197;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
              result[7] += -0.030840658;
            } else {
              result[7] += 0.112919055;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
              result[7] += -0.1284984;
            } else {
              result[7] += 0.023526296;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      result[7] += 0.1493416;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[7] += -0.14812548;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.2404354;
            } else {
              result[7] += -0.13901374;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[7] += 0.013218139;
            } else {
              result[7] += 0.33359164;
            }
          } else {
            result[7] += -0.13068089;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += 0.005146988;
            } else {
              result[7] += 0.14877582;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
              result[7] += -0.06360397;
            } else {
              result[7] += 0.0007552544;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[7] += -0.13950257;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[7] += 0.016302386;
            } else {
              result[7] += 0.093107134;
            }
          }
        }
      }
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.00014661907;
            } else {
              result[8] += 0.038644157;
            }
          } else {
            result[8] += -0.13235404;
          }
        } else {
          result[8] += 0.13357362;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          result[8] += -0.14385398;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
              result[8] += 0.11415935;
            } else {
              result[8] += 0.033942;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[8] += -0.06812087;
            } else {
              result[8] += 0.055413198;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.14505385;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[8] += -0.004120019;
            } else {
              result[8] += 0.116986685;
            }
          } else {
            result[8] += -0.08447689;
          }
        } else {
          result[8] += -0.108446635;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24813)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += 0.035316333;
            } else {
              result[8] += -0.061518077;
            }
          } else {
            result[8] += -0.2205226;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.1341867;
            } else {
              result[8] += 0.03727763;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += -0.0027014976;
            } else {
              result[8] += -0.09553862;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
              result[8] += -0.09780772;
            } else {
              result[8] += 0.11904474;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[8] += -0.32765356;
            } else {
              result[8] += -0.05466511;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.08235295;
            } else {
              result[8] += -0.03796277;
            }
          } else {
            result[8] += -0.073549874;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        result[8] += 0.16878457;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[8] += 0.11503419;
          } else {
            result[8] += -0.011767278;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.11574404;
            } else {
              result[8] += -0.01334622;
            }
          } else {
            result[8] += 0.08900409;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[9] += 0.00095716014;
            } else {
              result[9] += -0.19865465;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[9] += -0.08815155;
            } else {
              result[9] += 0.12964788;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
            result[9] += 0.10321906;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
              result[9] += -0.3095554;
            } else {
              result[9] += 0.084195815;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[9] += -0.087383166;
        } else {
          result[9] += 0.12600985;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)320583)) {
          result[9] += -0.13709824;
        } else {
          result[9] += 0.04326905;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[9] += 0.07606985;
            } else {
              result[9] += -0.16313973;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
              result[9] += 0.08252334;
            } else {
              result[9] += -0.10736177;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[9] += 0.087989755;
            } else {
              result[9] += 0.0052925483;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
              result[9] += -0.36392468;
            } else {
              result[9] += 0.018838126;
            }
          }
        }
      }
    }
  } else {
    result[9] += -0.12133866;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[10] += 0.0011204008;
            } else {
              result[10] += -0.08434355;
            }
          } else {
            result[10] += -0.13798709;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
              result[10] += 0.027121384;
            } else {
              result[10] += 0.08545213;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
              result[10] += -0.10982619;
            } else {
              result[10] += 0.008574441;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.14510296;
            } else {
              result[10] += 0.0051215775;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[10] += 0.12303227;
            } else {
              result[10] += -0.021342155;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34542)) {
              result[10] += 0.0025160257;
            } else {
              result[10] += -0.11793036;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
              result[10] += -0.035590544;
            } else {
              result[10] += 0.029076708;
            }
          }
        }
      }
    } else {
      result[10] += -0.112330765;
    }
  } else {
    result[10] += -0.11691325;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
              result[11] += -0.00047025888;
            } else {
              result[11] += 0.008205286;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += -0.05492542;
            } else {
              result[11] += 0.08634703;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += -0.008973529;
            } else {
              result[11] += -0.044993415;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += 0.0045621125;
            } else {
              result[11] += -0.07720678;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[11] += 0.023806274;
            } else {
              result[11] += -0.11235806;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
              result[11] += 0.0031658998;
            } else {
              result[11] += -0.052289095;
            }
          }
        } else {
          result[11] += 0.1749274;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
            result[11] += 0.094440095;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23300)) {
              result[11] += -0.09616975;
            } else {
              result[11] += 0.07107832;
            }
          }
        } else {
          result[11] += 0.1093365;
        }
      } else {
        result[11] += -0.08635986;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[11] += -0.1779488;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          result[11] += -0.22182272;
        } else {
          result[11] += 0.08814814;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        result[11] += 0.11567653;
      } else {
        result[11] += -0.10456173;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
              result[12] += -0.010448571;
            } else {
              result[12] += -0.06807703;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
              result[12] += 0.026733574;
            } else {
              result[12] += -0.002410747;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[12] += 0.014664435;
            } else {
              result[12] += -0.0005678205;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
              result[12] += 0.093536094;
            } else {
              result[12] += 0.008042918;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[12] += -0.13649638;
        } else {
          result[12] += 0.06561196;
        }
      }
    } else {
      result[12] += 0.13297619;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[12] += -0.00079971785;
      } else {
        result[12] += -0.13790528;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[12] += 0.10717693;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[12] += -0.14277335;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.096720934;
            } else {
              result[12] += 0.05797594;
            }
          } else {
            result[12] += 0.056634415;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.0014884776;
            } else {
              result[13] += 0.007661954;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.09867124;
            } else {
              result[13] += 0.09765863;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[13] += 0.10432619;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += 0.053282533;
            } else {
              result[13] += 0.010519051;
            }
          }
        }
      } else {
        result[13] += -0.111638784;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[13] += -0.14046302;
        } else {
          result[13] += 0.03669443;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[13] += 0.15339755;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35300)) {
              result[13] += 0.020726556;
            } else {
              result[13] += -0.0154627105;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
              result[13] += 0.022902127;
            } else {
              result[13] += -0.10670241;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.13587521;
            } else {
              result[13] += -0.11933925;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
          result[13] += 0.12565696;
        } else {
          result[13] += -0.0849099;
        }
      } else {
        result[13] += 0.15690234;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        result[13] += -0.08557771;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[13] += 0.02660042;
          } else {
            result[13] += 0.12290958;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
              result[13] += -0.015062891;
            } else {
              result[13] += -0.15753566;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
              result[13] += 0.087317996;
            } else {
              result[13] += -0.014965075;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[14] += 0.0015948431;
            } else {
              result[14] += -0.0097179925;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[14] += -0.10267223;
            } else {
              result[14] += 0.20082872;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
              result[14] += 0.14419457;
            } else {
              result[14] += 0.012905056;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
              result[14] += -0.009931286;
            } else {
              result[14] += 0.044147357;
            }
          }
        }
      } else {
        result[14] += -0.118126385;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
              result[14] += -0.038088135;
            } else {
              result[14] += 0.05049057;
            }
          } else {
            result[14] += -0.15282184;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[14] += 0.015265405;
            } else {
              result[14] += 0.26831752;
            }
          } else {
            result[14] += -0.10643873;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2361869312)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
              result[14] += 0.17300738;
            } else {
              result[14] += 0.026094047;
            }
          } else {
            result[14] += -0.21230751;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
              result[14] += 0.33262402;
            } else {
              result[14] += 0.11655885;
            }
          } else {
            result[14] += -0.00720114;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1316757248)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
              result[14] += -0.027099269;
            } else {
              result[14] += 0.086356;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[14] += -0.1857034;
            } else {
              result[14] += -0.023873175;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[14] += 0.064320736;
            } else {
              result[14] += -0.08363672;
            }
          } else {
            result[14] += 0.2870198;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
              result[14] += -0.13199693;
            } else {
              result[14] += 0.034862857;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
              result[14] += 0.024791962;
            } else {
              result[14] += -0.10618885;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
              result[14] += -0.027930621;
            } else {
              result[14] += 0.31021917;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[14] += 0.034491956;
            } else {
              result[14] += -0.114663325;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
              result[14] += 0.16849962;
            } else {
              result[14] += 0.025979148;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[14] += -0.031887602;
            } else {
              result[14] += -0.14855434;
            }
          }
        } else {
          result[14] += 0.25759578;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          result[14] += -0.14090742;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
            result[14] += -0.08823461;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
              result[14] += 0.16546033;
            } else {
              result[14] += -0.01521488;
            }
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[0] += 0.002394619;
            } else {
              result[0] += -0.0056868964;
            }
          } else {
            result[0] += 0.0068797423;
          }
        } else {
          result[0] += -0.0776094;
        }
      } else {
        result[0] += -0.14567131;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
              result[0] += 0.002939171;
            } else {
              result[0] += -0.033317793;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.060295004;
            } else {
              result[0] += 0.1542863;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20245)) {
              result[0] += -0.124165736;
            } else {
              result[0] += -0.018297864;
            }
          } else {
            result[0] += -0.17229152;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += 0.0049787574;
            } else {
              result[0] += 0.07752079;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[0] += 0.15031841;
            } else {
              result[0] += 0.018983489;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
              result[0] += -0.010506431;
            } else {
              result[0] += -0.06611509;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
              result[0] += 0.054464657;
            } else {
              result[0] += 0.0036093534;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.107105084;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.00045128894;
            } else {
              result[1] += 0.030125998;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)683239424)) {
              result[1] += -0.12423816;
            } else {
              result[1] += -0.025931783;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[1] += -0.04018948;
            } else {
              result[1] += -0.14739187;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
              result[1] += 0.1077813;
            } else {
              result[1] += 0.011335438;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += -0.14860924;
            } else {
              result[1] += 0.020193512;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.15697117;
            } else {
              result[1] += -0.058272474;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
              result[1] += 0.09473906;
            } else {
              result[1] += -0.02243343;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[1] += 0.09805894;
            } else {
              result[1] += 0.023296593;
            }
          }
        }
      }
    } else {
      result[1] += 0.11018896;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
          result[1] += -0.024821823;
        } else {
          result[1] += -0.14840783;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
          result[1] += -0.0779502;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
            result[1] += 0.027006773;
          } else {
            result[1] += -0.023768572;
          }
        }
      }
    } else {
      result[1] += 0.027719771;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)64235)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)63462)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)62485)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
              result[2] += 0.00060160854;
            } else {
              result[2] += 0.01645002;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.009808954;
            } else {
              result[2] += -0.10425363;
            }
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
              result[2] += 0.12661779;
            } else {
              result[2] += -0.015565765;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
              result[2] += -0.113083884;
            } else {
              result[2] += 0.11361166;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
          result[2] += -0.15536022;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[2] += -0.00086861535;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
              result[2] += 0.11139911;
            } else {
              result[2] += -0.043697353;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.08497558;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.02129265;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[2] += 0.0403414;
            } else {
              result[2] += -0.016619205;
            }
          }
        }
      } else {
        result[2] += 0.10996973;
      }
    }
  } else {
    result[2] += -0.13215986;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.132359;
    } else {
      result[3] += -0.0065988624;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[3] += 0.016539903;
        } else {
          result[3] += 0.086960785;
        }
      } else {
        result[3] += -0.020925716;
      }
    } else {
      result[3] += -0.084355675;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.038333546;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[4] += 0.006629571;
          } else {
            result[4] += 0.06703826;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += -0.033553753;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[4] += 0.06696658;
            } else {
              result[4] += -0.003570004;
            }
          }
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        result[4] += 0.044747792;
      } else {
        result[4] += 0.11954978;
      }
    }
  } else {
    result[4] += -0.13248004;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[5] += -0.014648749;
            } else {
              result[5] += -0.0016315329;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.0018707474;
            } else {
              result[5] += -0.000122013014;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)60991)) {
              result[5] += 0.006285722;
            } else {
              result[5] += -0.10447938;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)63462)) {
              result[5] += 0.03730256;
            } else {
              result[5] += 0.0041645747;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          result[5] += -0.13653766;
        } else {
          result[5] += -0.039941564;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
              result[5] += 0.03621037;
            } else {
              result[5] += -0.10886906;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[5] += 0.09933908;
            } else {
              result[5] += -0.1011785;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
              result[5] += -0.090767115;
            } else {
              result[5] += 0.25677687;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
              result[5] += -0.07432313;
            } else {
              result[5] += 0.10607592;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
            result[5] += 0.35267043;
          } else {
            result[5] += -0.094717264;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[5] += 0.002269707;
            } else {
              result[5] += -0.10045443;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[5] += -0.03437462;
            } else {
              result[5] += 0.10739931;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
      result[5] += 0.014120845;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
        result[5] += -0.1262242;
      } else {
        result[5] += -0.015281301;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00014447859;
  } else {
    result[6] += -0.13203155;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[7] += -8.092201e-05;
            } else {
              result[7] += -0.15006028;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[7] += -0.00096018286;
            } else {
              result[7] += 0.13001072;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2192098560)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
              result[7] += -0.05195726;
            } else {
              result[7] += -0.38593423;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
              result[7] += 0.06793752;
            } else {
              result[7] += -0.091211595;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
              result[7] += -0.006654201;
            } else {
              result[7] += 0.09253557;
            }
          } else {
            result[7] += -0.08657448;
          }
        } else {
          result[7] += 0.14317453;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[7] += 0.011678681;
        } else {
          result[7] += -0.13711005;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.10959182;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
            result[7] += 0.028039303;
          } else {
            result[7] += -0.111583665;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[7] += 0.03333676;
    } else {
      result[7] += 0.124018885;
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += 0.00048305333;
            } else {
              result[8] += -0.06791353;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
              result[8] += 0.013191167;
            } else {
              result[8] += -0.03568518;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
              result[8] += 0.0069269957;
            } else {
              result[8] += 0.06865889;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54299)) {
              result[8] += -0.061305404;
            } else {
              result[8] += -0.13761173;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            result[8] += 0.006137334;
          } else {
            result[8] += -0.12903696;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
              result[8] += -0.01284705;
            } else {
              result[8] += 0.21677011;
            }
          } else {
            result[8] += -0.13184969;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.14329776;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[8] += 0.0039174124;
            } else {
              result[8] += 0.11065418;
            }
          } else {
            result[8] += -0.09005445;
          }
        } else {
          result[8] += -0.1035538;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.052212287;
            } else {
              result[8] += -0.07038319;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[8] += -0.088355556;
            } else {
              result[8] += 0.09478447;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.14321266;
            } else {
              result[8] += 0.036390647;
            }
          } else {
            result[8] += -0.06485291;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += -0.04044741;
            } else {
              result[8] += -0.12290987;
            }
          } else {
            result[8] += 0.088929385;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
            result[8] += 0.10901048;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
              result[8] += -0.21006168;
            } else {
              result[8] += 0.039076425;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        result[8] += 0.16723868;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53824)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.072494216;
            } else {
              result[8] += -0.021461956;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[8] += -0.112715416;
            } else {
              result[8] += -0.0008477818;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[8] += 0.10376669;
          } else {
            result[8] += 0.01996913;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += 0.0010300948;
            } else {
              result[9] += -0.061583646;
            }
          } else {
            result[9] += 0.10158422;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
              result[9] += 0.02281413;
            } else {
              result[9] += -0.1767627;
            }
          } else {
            result[9] += 0.088349484;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[9] += -0.08148457;
        } else {
          result[9] += 0.12212305;
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)320583)) {
          result[9] += -0.13520633;
        } else {
          result[9] += 0.042104322;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[9] += -0.022420216;
            } else {
              result[9] += 0.05505764;
            }
          } else {
            result[9] += -0.1472647;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
              result[9] += 0.09301018;
            } else {
              result[9] += -0.087575436;
            }
          } else {
            result[9] += 0.122543834;
          }
        }
      }
    }
  } else {
    result[9] += -0.11823232;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[10] += 0.0007627947;
            } else {
              result[10] += -0.09853297;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.008390642;
            } else {
              result[10] += 0.070412725;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
            result[10] += 0.011604423;
          } else {
            result[10] += -0.10976783;
          }
        }
      } else {
        result[10] += -0.08290769;
      }
    } else {
      result[10] += -0.10966275;
    }
  } else {
    result[10] += -0.11001558;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[11] += -0.0010009459;
            } else {
              result[11] += 0.0049761645;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.20471203;
            } else {
              result[11] += 0.14368495;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.20077293;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.05401848;
            } else {
              result[11] += -0.17327982;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[11] += -0.014768653;
            } else {
              result[11] += 0.2520336;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)410017792)) {
              result[11] += -0.03158933;
            } else {
              result[11] += -0.41163135;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[11] += 0.008307093;
            } else {
              result[11] += -0.13511565;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
              result[11] += 0.071132496;
            } else {
              result[11] += 0.013892258;
            }
          }
        }
      }
    } else {
      result[11] += -0.12513188;
    }
  } else {
    result[11] += -0.119828075;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += -3.244572e-05;
            } else {
              result[12] += -0.12054028;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[12] += 0.02786883;
            } else {
              result[12] += 0.14340593;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[12] += -0.1359548;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.09160739;
            } else {
              result[12] += 0.039984837;
            }
          }
        }
      } else {
        result[12] += 0.1781346;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        result[12] += -0.13486718;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.057024755;
        } else {
          result[12] += 0.010412738;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
        result[12] += 0.15494305;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
          result[12] += 0.08892208;
        } else {
          result[12] += -0.09748581;
        }
      }
    } else {
      result[12] += -0.06490444;
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[13] += 0.0014821171;
            } else {
              result[13] += 0.11117329;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
              result[13] += -0.13257913;
            } else {
              result[13] += 0.030934298;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.058102142;
            } else {
              result[13] += -0.016850274;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += -0.005901713;
            } else {
              result[13] += 0.12684882;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
            result[13] += -0.13370422;
          } else {
            result[13] += -0.03765239;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
            result[13] += 0.16911487;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[13] += -0.11693514;
            } else {
              result[13] += 0.008364976;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += 0.09509634;
            } else {
              result[13] += -0.123204105;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[13] += 0.047989935;
            } else {
              result[13] += 0.21271618;
            }
          }
        } else {
          result[13] += -0.11198274;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
            result[13] += -0.001810714;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[13] += -0.16558857;
            } else {
              result[13] += -0.03859625;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[13] += 0.0040002237;
            } else {
              result[13] += 0.24786752;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[13] += -0.013737735;
            } else {
              result[13] += -0.14426994;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
          result[13] += -0.13724983;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += -0.114912234;
            } else {
              result[13] += 0.003697623;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[13] += -0.018450396;
            } else {
              result[13] += -0.113579206;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[13] += 0.07049985;
            } else {
              result[13] += -0.05357481;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += 0.08890883;
            } else {
              result[13] += -0.044350892;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
              result[13] += 0.030719269;
            } else {
              result[13] += 0.32963055;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[13] += 0.13063325;
            } else {
              result[13] += -0.0055823573;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[13] += -0.0998724;
        } else {
          result[13] += 0.15438043;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[13] += -0.1477202;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
            result[13] += 0.006001528;
          } else {
            result[13] += 0.10997536;
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += -0.00016361962;
            } else {
              result[14] += -0.02765273;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[14] += 4.6497746e-05;
            } else {
              result[14] += 0.0686386;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[14] += -0.026290318;
            } else {
              result[14] += -0.13914022;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
              result[14] += -0.013723648;
            } else {
              result[14] += 0.055314142;
            }
          }
        }
      } else {
        result[14] += -0.114748485;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        result[14] += -0.12763518;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          result[14] += 0.11561275;
        } else {
          result[14] += -0.030385364;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)545895936)) {
            result[14] += 0.10458914;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
              result[14] += -0.05760078;
            } else {
              result[14] += -0.13792096;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
            result[14] += 0.15515004;
          } else {
            result[14] += -0.10211267;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
            result[14] += -0.02053863;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
              result[14] += 0.10946597;
            } else {
              result[14] += 0.28687313;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
              result[14] += 0.010757303;
            } else {
              result[14] += 0.06228159;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
              result[14] += -0.016875096;
            } else {
              result[14] += 0.043371048;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.13941795;
        } else {
          result[14] += -0.048581704;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            result[14] += 0.21203677;
          } else {
            result[14] += 0.066982545;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[14] += -0.12579136;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.11545901;
            } else {
              result[14] += -0.0069161584;
            }
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[0] += 0.0018415769;
          } else {
            result[0] += -0.0048310687;
          }
        } else {
          result[0] += 0.005910767;
        }
      } else {
        result[0] += -0.1449981;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[0] += -0.097189784;
            } else {
              result[0] += -0.0035812936;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
              result[0] += 0.20299321;
            } else {
              result[0] += -0.028774679;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
              result[0] += -0.13766281;
            } else {
              result[0] += 0.0070997276;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[0] += 0.10191616;
            } else {
              result[0] += -0.070095345;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
          result[0] += 0.10540126;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
              result[0] += -0.08233646;
            } else {
              result[0] += -0.024742758;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14362)) {
              result[0] += 0.05992536;
            } else {
              result[0] += 0.006465553;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.10375499;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += -0.0011765743;
            } else {
              result[1] += 0.009892889;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
              result[1] += -0.14251694;
            } else {
              result[1] += -0.0016715341;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.038972843;
            } else {
              result[1] += -0.13425024;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
              result[1] += 0.014588449;
            } else {
              result[1] += -0.06888456;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[1] += -0.15652391;
          } else {
            result[1] += 0.024307467;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
              result[1] += 0.15321341;
            } else {
              result[1] += -0.0269488;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += -0.07619908;
            } else {
              result[1] += 0.1170486;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[1] += 0.14502046;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[1] += 0.015293715;
            } else {
              result[1] += 0.082743265;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1195706368)) {
              result[1] += -0.03867521;
            } else {
              result[1] += -0.12840655;
            }
          } else {
            result[1] += 0.14241792;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[1] += -0.15104346;
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.040326737;
            } else {
              result[1] += 0.111628585;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += 0.11287557;
            } else {
              result[1] += 0.005336891;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += -0.013554008;
            } else {
              result[1] += 0.0096662175;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[1] += -0.13669865;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          result[1] += -0.097414725;
        } else {
          result[1] += 0.009703101;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
        result[1] += -0.03822804;
      } else {
        result[1] += 0.051175684;
      }
    }
  }
}

