
#include "header.h"

void predict_unit23(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[1] += -0.049041834;
      } else {
        result[1] += 0.011174164;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += 1.0453406e-05;
            } else {
              result[1] += 0.022496704;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.017265404;
            } else {
              result[1] += -0.0074425195;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
              result[1] += -0.14244758;
            } else {
              result[1] += 0.025229821;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += 0.09653618;
            } else {
              result[1] += -0.008713997;
            }
          }
        }
      } else {
        result[1] += 0.082914494;
      }
    }
  } else {
    result[1] += -0.09492321;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)3906)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.02127491;
            } else {
              result[2] += -0.008547579;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[2] += -0.0008800794;
            } else {
              result[2] += 0.00069331087;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1051)) {
            result[2] += 0.029342487;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
              result[2] += -0.007464531;
            } else {
              result[2] += 0.0069505526;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
          result[2] += -0.04755907;
        } else {
          result[2] += -0.0040134178;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)4908)) {
        result[2] += 0.09569182;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6453)) {
              result[2] += -0.008238642;
            } else {
              result[2] += -0.10094782;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[2] += 0.10654383;
            } else {
              result[2] += 0.0067418423;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6956)) {
            result[2] += 0.11574522;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)7212)) {
              result[2] += -0.07652712;
            } else {
              result[2] += 0.001306314;
            }
          }
        }
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
      result[2] += 0.0481675;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
          result[2] += -0.01637007;
        } else {
          result[2] += 0.008060669;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
          result[2] += 0.082205564;
        } else {
          result[2] += -0.009840257;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.034523554;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      result[3] += 0.024501517;
    } else {
      result[3] += -0.01315271;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += -0.012170035;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
      result[4] += 0.035618145;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[4] += -0.016416514;
          } else {
            result[4] += 0.031345338;
          }
        } else {
          result[4] += -0.022647928;
        }
      } else {
        result[4] += 0.03559513;
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[5] += -0.00071760267;
            } else {
              result[5] += 0.013418232;
            }
          } else {
            result[5] += -0.08644286;
          }
        } else {
          result[5] += 0.16905202;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          result[5] += -0.124066845;
        } else {
          result[5] += 0.0075288755;
        }
      }
    } else {
      result[5] += 0.13214095;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
      result[5] += -0.1080859;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[5] += 0.04967443;
          } else {
            result[5] += -0.092482686;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
            result[5] += 0.12930895;
          } else {
            result[5] += -0.024057947;
          }
        }
      } else {
        result[5] += -0.08553259;
      }
    }
  }
  result[6] += -0.00013077263;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += -0.00015147879;
            } else {
              result[7] += -0.108889356;
            }
          } else {
            result[7] += 0.09914022;
          }
        } else {
          result[7] += -0.17240755;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54154)) {
            result[7] += -0.050354935;
          } else {
            result[7] += -0.17825666;
          }
        } else {
          result[7] += 0.09044039;
        }
      }
    } else {
      result[7] += -0.12030197;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        result[7] += 0.14449003;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
          result[7] += -0.1059497;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.070773095;
            } else {
              result[7] += -0.09500057;
            }
          } else {
            result[7] += -0.10263336;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
              result[7] += 0.09591545;
            } else {
              result[7] += -0.07558737;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[7] += -0.38186222;
            } else {
              result[7] += -0.06708189;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
              result[7] += -0.014950748;
            } else {
              result[7] += -0.1883945;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[7] += 0.06870073;
            } else {
              result[7] += -0.00090343185;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.14320804;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[7] += -0.08806532;
          } else {
            result[7] += 0.02585687;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 6.0062008e-05;
            } else {
              result[8] += -0.13099371;
            }
          } else {
            result[8] += -0.11547328;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25575)) {
              result[8] += 0.10495875;
            } else {
              result[8] += -0.19453187;
            }
          } else {
            result[8] += 0.18683326;
          }
        }
      } else {
        result[8] += -0.131691;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.0025514304;
            } else {
              result[8] += -0.12345062;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
              result[8] += 0.15483837;
            } else {
              result[8] += 0.02040993;
            }
          }
        } else {
          result[8] += -0.15162313;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[8] += 0.14274468;
          } else {
            result[8] += 0.038976967;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[8] += -0.12631859;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
              result[8] += -0.022717062;
            } else {
              result[8] += 0.08354172;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.13210945;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            result[8] += 0.016565025;
          } else {
            result[8] += 0.11158166;
          }
        } else {
          result[8] += 0.010577949;
        }
      } else {
        result[8] += -0.089875616;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
              result[9] += -4.710528e-05;
            } else {
              result[9] += 0.06357854;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
              result[9] += 0.018364029;
            } else {
              result[9] += -0.13505435;
            }
          }
        } else {
          result[9] += 0.10412393;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[9] += -0.0842269;
            } else {
              result[9] += 0.016411278;
            }
          } else {
            result[9] += 0.095258005;
          }
        } else {
          result[9] += -0.108304374;
        }
      }
    } else {
      result[9] += 0.08894323;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
            result[9] += -0.18110901;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += -0.07568152;
            } else {
              result[9] += 0.07495554;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
              result[9] += 0.11303339;
            } else {
              result[9] += -0.048488967;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
              result[9] += -0.08495497;
            } else {
              result[9] += -0.016669502;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
          result[9] += -0.21762607;
        } else {
          result[9] += -0.04694059;
        }
      }
    } else {
      result[9] += 0.0726382;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[10] += 0.00028162973;
            } else {
              result[10] += -0.09871288;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
              result[10] += 0.124835484;
            } else {
              result[10] += -0.017233789;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
            result[10] += 0.07068245;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
              result[10] += -0.06932953;
            } else {
              result[10] += 0.0054570343;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
          result[10] += 0.1356548;
        } else {
          result[10] += -0.07344805;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        result[10] += -0.12690069;
      } else {
        result[10] += -0.011625018;
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
          result[10] += 0.122513056;
        } else {
          result[10] += -0.070789054;
        }
      } else {
        result[10] += 0.13631004;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
          result[10] += -0.039058294;
        } else {
          result[10] += -0.12723543;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
          result[10] += 0.13146949;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[10] += 0.01957196;
            } else {
              result[10] += -0.1883561;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[10] += 0.14413844;
            } else {
              result[10] += -0.032327745;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.00014859744;
            } else {
              result[11] += -0.010867737;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.14287864;
            } else {
              result[11] += 0.0058482075;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[11] += -0.041947525;
            } else {
              result[11] += -0.13330758;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
              result[11] += 0.058561336;
            } else {
              result[11] += -0.033507593;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
              result[11] += -0.10540069;
            } else {
              result[11] += 0.02478002;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
              result[11] += 0.088998795;
            } else {
              result[11] += 0.0067498665;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
              result[11] += -0.09879074;
            } else {
              result[11] += -0.009169721;
            }
          } else {
            result[11] += -0.12751591;
          }
        }
      }
    } else {
      result[11] += -0.0920811;
    }
  } else {
    result[11] += -0.09425373;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
              result[12] += -0.0004134259;
            } else {
              result[12] += 0.01685222;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2476456192)) {
              result[12] += 0.0008998526;
            } else {
              result[12] += -0.04445243;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.019785075;
            } else {
              result[12] += -0.16164632;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[12] += 0.12071518;
            } else {
              result[12] += -0.09660922;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += -0.012282929;
            } else {
              result[12] += -0.18870153;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[12] += 0.18914147;
            } else {
              result[12] += -0.08034105;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[12] += -0.15077531;
            } else {
              result[12] += 0.02904139;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[12] += 0.11690293;
            } else {
              result[12] += -0.087341614;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
              result[12] += 0.059350584;
            } else {
              result[12] += -0.03451209;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[12] += -0.052378085;
            } else {
              result[12] += 0.1432616;
            }
          }
        } else {
          result[12] += 0.12303504;
        }
      } else {
        result[12] += -0.09636213;
      }
    }
  } else {
    result[12] += -0.09113004;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.0007438577;
            } else {
              result[13] += 0.11381759;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[13] += 0.020895861;
            } else {
              result[13] += -0.09404794;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
              result[13] += 0.1050167;
            } else {
              result[13] += -0.08153096;
            }
          } else {
            result[13] += 0.31907105;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
              result[13] += -0.10541128;
            } else {
              result[13] += -0.0115242945;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
              result[13] += -0.12383508;
            } else {
              result[13] += 0.008093952;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
              result[13] += -0.01179775;
            } else {
              result[13] += -0.13166954;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2361869312)) {
              result[13] += 0.22010571;
            } else {
              result[13] += 0.011187062;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
            result[13] += -0.14383958;
          } else {
            result[13] += 0.06262607;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
              result[13] += 0.14863695;
            } else {
              result[13] += -0.00823763;
            }
          } else {
            result[13] += -0.10773944;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            result[13] += 0.18941613;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
              result[13] += -0.033296056;
            } else {
              result[13] += 0.14751023;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
            result[13] += -0.0023890184;
          } else {
            result[13] += -0.10249374;
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2361869312)) {
              result[13] += 0.027889414;
            } else {
              result[13] += -0.13550065;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.34933034;
            } else {
              result[13] += -0.10627987;
            }
          }
        } else {
          result[13] += -0.13548844;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
          result[13] += 0.5023259;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[13] += 0.1695278;
          } else {
            result[13] += -0.104898274;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
              result[13] += -0.03625593;
            } else {
              result[13] += -0.113445394;
            }
          } else {
            result[13] += -0.16332074;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
              result[13] += -0.026962051;
            } else {
              result[13] += 0.18997051;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
              result[13] += -0.0028972286;
            } else {
              result[13] += -0.14014661;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
              result[13] += -0.019298594;
            } else {
              result[13] += 0.08116464;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[13] += 0.14373143;
            } else {
              result[13] += -0.009306138;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[13] += -0.04001727;
            } else {
              result[13] += 0.069121525;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
              result[13] += 0.04638347;
            } else {
              result[13] += 1.5130027e-05;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2433490688)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += -0.000292912;
            } else {
              result[14] += -0.13082565;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[14] += 0.0058117067;
            } else {
              result[14] += 0.11691886;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.09315364;
            } else {
              result[14] += -0.018730763;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[14] += 0.25643617;
            } else {
              result[14] += 0.014898024;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += 0.039380744;
            } else {
              result[14] += -0.0013252704;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[14] += 0.32255825;
            } else {
              result[14] += -0.09792976;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
              result[14] += -0.013122974;
            } else {
              result[14] += -0.14691138;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
              result[14] += 0.0888332;
            } else {
              result[14] += -0.06280959;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[14] += 0.20514591;
            } else {
              result[14] += -0.058894996;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
              result[14] += 0.075714394;
            } else {
              result[14] += -0.043125927;
            }
          }
        } else {
          result[14] += -0.1424074;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2454180352)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
              result[14] += 0.062587604;
            } else {
              result[14] += -0.1311674;
            }
          } else {
            result[14] += -0.17107353;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2476456192)) {
              result[14] += -0.00437999;
            } else {
              result[14] += -0.09820722;
            }
          } else {
            result[14] += 0.06707909;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
          result[14] += 0.27146232;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[14] += -0.10477193;
            } else {
              result[14] += 0.08824367;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
              result[14] += 0.019450272;
            } else {
              result[14] += -0.11337743;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
            result[14] += 0.1263411;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
              result[14] += -0.04184132;
            } else {
              result[14] += 0.015519174;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31746)) {
              result[14] += 0.092776865;
            } else {
              result[14] += -0.09655308;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
              result[14] += 0.31192917;
            } else {
              result[14] += 0.10331201;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56836)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
              result[14] += -0.066106305;
            } else {
              result[14] += 0.020512078;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
              result[14] += -0.15729153;
            } else {
              result[14] += 0.040228836;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
              result[14] += -0.10589163;
            } else {
              result[14] += -0.023093356;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
              result[14] += 0.2727928;
            } else {
              result[14] += -0.08849622;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
              result[14] += 0.23668607;
            } else {
              result[14] += -0.004199716;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[14] += 0.0661445;
            } else {
              result[14] += -0.07369568;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
              result[14] += 0.13114941;
            } else {
              result[14] += -0.0476877;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.0025997532;
            } else {
              result[14] += 0.039103806;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)35802)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29424)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
              result[0] += -0.00016540944;
            } else {
              result[0] += -0.07881951;
            }
          } else {
            result[0] += 0.13608603;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
              result[0] += -0.11989669;
            } else {
              result[0] += -0.015386232;
            }
          } else {
            result[0] += 0.037923865;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32233)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.08131665;
            } else {
              result[0] += -0.0015688706;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32530)) {
              result[0] += -0.0025420815;
            } else {
              result[0] += 0.05252302;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
              result[0] += -0.0910254;
            } else {
              result[0] += -0.01843287;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34029)) {
              result[0] += 0.10967712;
            } else {
              result[0] += 0.017428601;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
            result[0] += -0.108717054;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)978331136)) {
              result[0] += 0.008648557;
            } else {
              result[0] += -0.061195794;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
            result[0] += -0.1260264;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
              result[0] += 0.0077574924;
            } else {
              result[0] += -0.07178556;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
            result[0] += 0.010322416;
          } else {
            result[0] += 0.09399629;
          }
        } else {
          result[0] += -0.072722174;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)41485)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)39929)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
          result[0] += 0.09449295;
        } else {
          result[0] += -0.013022115;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
          result[0] += 0.13039133;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[0] += -0.0010502128;
            } else {
              result[0] += 0.060216356;
            }
          } else {
            result[0] += 0.09966169;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)41745)) {
        result[0] += -0.15111034;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[0] += -0.097186565;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
              result[0] += 0.0053259963;
            } else {
              result[0] += 0.0857187;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
              result[0] += -0.11087321;
            } else {
              result[0] += -0.008906831;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += -0.0006787391;
            } else {
              result[1] += -0.13218091;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.06104906;
            } else {
              result[1] += 0.0013995729;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
              result[1] += -0.06772316;
            } else {
              result[1] += 0.38023323;
            }
          } else {
            result[1] += -0.14700422;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18700)) {
            result[1] += 0.08175308;
          } else {
            result[1] += 0.3731555;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
            result[1] += -0.12993646;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34288)) {
              result[1] += 0.12949908;
            } else {
              result[1] += -0.08871218;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
              result[1] += -0.11800367;
            } else {
              result[1] += -0.0020202522;
            }
          } else {
            result[1] += -0.14445062;
          }
        } else {
          result[1] += -0.007526107;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1788612096)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1159214080)) {
              result[1] += -0.098065734;
            } else {
              result[1] += 0.15446806;
            }
          } else {
            result[1] += -0.1135217;
          }
        } else {
          result[1] += 0.2795812;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
              result[1] += 0.031219749;
            } else {
              result[1] += -0.11647818;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.43995264;
            } else {
              result[1] += -0.050669122;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
            result[1] += 0.13834876;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
              result[1] += -0.12176517;
            } else {
              result[1] += 0.05390625;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
          result[1] += 0.42180213;
        } else {
          result[1] += -0.10915225;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
          result[1] += -0.13069902;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[1] += 0.28845593;
            } else {
              result[1] += -0.06814907;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22532)) {
              result[1] += -0.07770214;
            } else {
              result[1] += 0.056864407;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[1] += -0.05632147;
            } else {
              result[1] += 0.17819977;
            }
          } else {
            result[1] += -0.107046686;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[1] += -0.13207631;
          } else {
            result[1] += -0.02826683;
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)55071)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)36088)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)35330)) {
              result[2] += 8.256806e-05;
            } else {
              result[2] += -0.04264903;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)36623)) {
              result[2] += 0.10038417;
            } else {
              result[2] += -0.00012310497;
            }
          }
        } else {
          result[2] += -0.10877827;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)56134)) {
          result[2] += 0.06873789;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)56394)) {
            result[2] += -0.048554793;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)56897)) {
              result[2] += 0.07248399;
            } else {
              result[2] += 0.0022216798;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          result[2] += -0.09030222;
        } else {
          result[2] += 0.01894797;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
          result[2] += 0.09042084;
        } else {
          result[2] += -0.032268263;
        }
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
              result[2] += 0.03956114;
            } else {
              result[2] += -0.03569659;
            }
          } else {
            result[2] += 0.043056127;
          }
        } else {
          result[2] += -0.03866519;
        }
      } else {
        result[2] += 0.04889176;
      }
    } else {
      result[2] += 0.0029031357;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.03144755;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      result[3] += 0.023049178;
    } else {
      result[3] += -0.011527298;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += -0.010915562;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
        result[4] += 0.044951472;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.020350803;
        } else {
          result[4] += 0.029194966;
        }
      }
    } else {
      result[4] += -0.0076439376;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
              result[5] += 0.0016842461;
            } else {
              result[5] += -0.12945756;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
              result[5] += 0.27296898;
            } else {
              result[5] += 0.052602384;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
              result[5] += -0.085552216;
            } else {
              result[5] += -0.0098920055;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
              result[5] += 0.10227798;
            } else {
              result[5] += 0.005700076;
            }
          }
        }
      } else {
        result[5] += -0.11517937;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
            result[5] += 0.12810233;
          } else {
            result[5] += -0.09200824;
          }
        } else {
          result[5] += -0.116936795;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
            result[5] += 0.024073772;
          } else {
            result[5] += 0.25377354;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
            result[5] += 0.28233948;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
              result[5] += -0.10528593;
            } else {
              result[5] += 0.025217183;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
      result[5] += 0.02716502;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
        result[5] += -0.10833009;
      } else {
        result[5] += -0.0067649162;
      }
    }
  }
  result[6] += -0.00013087569;
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += -0.0021636449;
            } else {
              result[7] += 0.14734966;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[7] += -0.1551595;
            } else {
              result[7] += -0.003719488;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.24607314;
            } else {
              result[7] += 0.1293308;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
              result[7] += -0.10046823;
            } else {
              result[7] += 0.027236557;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[7] += 0.08836183;
            } else {
              result[7] += -0.052296717;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[7] += -0.035661597;
            } else {
              result[7] += 0.0152608855;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
              result[7] += -0.053217903;
            } else {
              result[7] += 0.13770215;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
              result[7] += -0.00089513295;
            } else {
              result[7] += 0.016998813;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[7] += 0.0034092858;
      } else {
        result[7] += 0.0014293534;
      }
    }
  } else {
    result[7] += 0.09344138;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
              result[8] += -0.0028104673;
            } else {
              result[8] += 0.104392685;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
              result[8] += -0.13880019;
            } else {
              result[8] += 0.03111133;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[8] += 0.019635338;
            } else {
              result[8] += 0.15002497;
            }
          } else {
            result[8] += -0.130312;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[8] += 0.1299872;
          } else {
            result[8] += -0.005760246;
          }
        } else {
          result[8] += -0.06740633;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
              result[8] += -0.016495919;
            } else {
              result[8] += -0.06460066;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
              result[8] += -0.05586864;
            } else {
              result[8] += 0.10747957;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
              result[8] += 0.03857275;
            } else {
              result[8] += 0.34690258;
            }
          } else {
            result[8] += -0.10198705;
          }
        }
      } else {
        result[8] += -0.20982449;
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
              result[8] += -0.011572071;
            } else {
              result[8] += 0.033986244;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
              result[8] += -0.19251306;
            } else {
              result[8] += -0.005518998;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
              result[8] += 0.26866984;
            } else {
              result[8] += 0.082214475;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
              result[8] += 0.17592077;
            } else {
              result[8] += -0.070873596;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
            result[8] += -0.14885789;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
              result[8] += -0.014497006;
            } else {
              result[8] += 0.18395433;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += 0.024432031;
            } else {
              result[8] += 0.13196567;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[8] += -0.10189504;
            } else {
              result[8] += 0.1640004;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
              result[8] += 0.0023334792;
            } else {
              result[8] += -0.024297075;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
              result[8] += 0.23911746;
            } else {
              result[8] += -0.07828063;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[8] += -0.15171066;
            } else {
              result[8] += 0.0006839193;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[8] += -0.13232785;
            } else {
              result[8] += -0.017553134;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
              result[8] += 0.01639513;
            } else {
              result[8] += 0.13722198;
            }
          } else {
            result[8] += -0.15765433;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57688)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[8] += 0.00040122296;
            } else {
              result[8] += 0.019824244;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[8] += -0.1255274;
            } else {
              result[8] += -0.0068920315;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[9] += 0.00010965988;
            } else {
              result[9] += -0.067818366;
            }
          } else {
            result[9] += 0.081172265;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
            result[9] += 0.06684029;
          } else {
            result[9] += -0.31976017;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[9] += 0.02101957;
          } else {
            result[9] += 0.1143644;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[9] += -0.13744077;
            } else {
              result[9] += 0.07222826;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
              result[9] += 0.10273693;
            } else {
              result[9] += -0.010207034;
            }
          }
        }
      }
    } else {
      result[9] += 0.08857092;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
          result[9] += -0.19251272;
        } else {
          result[9] += 0.05680547;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[9] += 0.09750569;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
            result[9] += 0.09812789;
          } else {
            result[9] += -0.2400584;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[9] += 0.043701354;
            } else {
              result[9] += -0.062745005;
            }
          } else {
            result[9] += 0.09350927;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
            result[9] += -0.21072875;
          } else {
            result[9] += -0.018739766;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
          result[9] += 0.10916259;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
            result[9] += -0.10447409;
          } else {
            result[9] += 0.069722004;
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
              result[10] += 0.000797465;
            } else {
              result[10] += -0.069186725;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
              result[10] += 0.116600916;
            } else {
              result[10] += -0.07241772;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
              result[10] += -0.15330967;
            } else {
              result[10] += -0.0643563;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
              result[10] += 0.14827424;
            } else {
              result[10] += -0.019621287;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)34288)) {
          result[10] += 0.0019394265;
        } else {
          result[10] += 0.16446991;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
        result[10] += 0.041741956;
      } else {
        result[10] += -0.17500281;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
        result[10] += 0.0033538535;
      } else {
        result[10] += 0.16993937;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        result[10] += -0.11594444;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[10] += -0.076029755;
            } else {
              result[10] += 0.015718034;
            }
          } else {
            result[10] += -0.18835622;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27865)) {
              result[10] += -0.1252471;
            } else {
              result[10] += 0.1168725;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[10] += 0.16432792;
            } else {
              result[10] += -0.0064173504;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += 0.0003434791;
            } else {
              result[11] += -0.14645405;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.15863912;
            } else {
              result[11] += -0.004206169;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26842)) {
              result[11] += 0.0038165178;
            } else {
              result[11] += -0.05375003;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[11] += 0.019829538;
            } else {
              result[11] += -0.02756313;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += -0.14347275;
        } else {
          result[11] += 0.13225396;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[11] += -0.167044;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.15452863;
            } else {
              result[11] += 0.14404817;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.06320426;
            } else {
              result[11] += 0.13645226;
            }
          }
        } else {
          result[11] += -0.15300749;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[11] += 0.007898668;
            } else {
              result[11] += -0.16848041;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
              result[11] += 0.11626374;
            } else {
              result[11] += 0.31568685;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[11] += -0.035250124;
            } else {
              result[11] += -0.23651536;
            }
          } else {
            result[11] += 0.13390289;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[11] += 0.001435704;
            } else {
              result[11] += -0.075060345;
            }
          } else {
            result[11] += -0.35308665;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[11] += 0.13285609;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
              result[11] += 0.04354232;
            } else {
              result[11] += -0.08554675;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[11] += 0.02621814;
            } else {
              result[11] += 0.27858278;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
              result[11] += 0.11996029;
            } else {
              result[11] += -0.020002902;
            }
          }
        } else {
          result[11] += 0.3207037;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[11] += -0.07151816;
            } else {
              result[11] += -0.013724997;
            }
          } else {
            result[11] += -0.30244046;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1885973376)) {
              result[11] += 0.14944616;
            } else {
              result[11] += -0.018565796;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.027406467;
            } else {
              result[11] += -0.04835088;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[12] += 2.2202375e-06;
            } else {
              result[12] += -0.13637583;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
              result[12] += 0.046250626;
            } else {
              result[12] += -0.013330563;
            }
          }
        } else {
          result[12] += -0.096668094;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[12] += -0.111543566;
        } else {
          result[12] += 0.014448867;
        }
      }
    } else {
      result[12] += 0.11438225;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[12] += 0.101283714;
          } else {
            result[12] += -0.036018595;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
            result[12] += 0.0041437494;
          } else {
            result[12] += -0.1058058;
          }
        }
      } else {
        result[12] += -0.12157136;
      }
    } else {
      result[12] += 0.05779714;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[13] += -0.00031342055;
            } else {
              result[13] += 0.024381941;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[13] += 0.07787651;
            } else {
              result[13] += 0.0018486135;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
              result[13] += -0.0422014;
            } else {
              result[13] += 0.00037246905;
            }
          } else {
            result[13] += -0.124172315;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            result[13] += 0.013325441;
          } else {
            result[13] += -0.12343528;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[13] += 0.15357666;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
              result[13] += -0.0784114;
            } else {
              result[13] += -0.0063236253;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[13] += -0.059969313;
      } else {
        result[13] += 0.024268288;
      }
    }
  } else {
    result[13] += -0.090627275;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[14] += -0.0032532585;
            } else {
              result[14] += 0.002123004;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
              result[14] += 0.012496668;
            } else {
              result[14] += -0.04585427;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
              result[14] += -0.011317806;
            } else {
              result[14] += 0.101812474;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[14] += 0.018119562;
            } else {
              result[14] += -0.0042159357;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += -0.023446543;
            } else {
              result[14] += 0.040818088;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[14] += -0.13015065;
            } else {
              result[14] += -0.0074147102;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[14] += 0.016045354;
            } else {
              result[14] += 0.16026561;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
              result[14] += 0.05975494;
            } else {
              result[14] += -0.09160623;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[14] += -0.03652253;
            } else {
              result[14] += 0.039034832;
            }
          } else {
            result[14] += -0.124488056;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[14] += 0.26556563;
            } else {
              result[14] += 0.058680914;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[14] += -0.12299751;
            } else {
              result[14] += 0.032506436;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += -0.097606756;
          } else {
            result[14] += 0.07641618;
          }
        } else {
          result[14] += -0.12560555;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      result[14] += -0.0986558;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
        result[14] += 0.32847446;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
          result[14] += -0.13698995;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += 0.11702432;
            } else {
              result[14] += -0.08108107;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[14] += 0.002318951;
            } else {
              result[14] += -0.14297698;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[0] += -0.00040294527;
            } else {
              result[0] += 0.13708459;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
              result[0] += -0.038376708;
            } else {
              result[0] += -0.14006995;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.11621316;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[0] += 0.047553346;
            } else {
              result[0] += 0.0041692974;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += -0.09033972;
        } else {
          result[0] += 0.012457301;
        }
      }
    } else {
      result[0] += -0.107942134;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        result[0] += -0.09304686;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          result[0] += 0.09410502;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[0] += -0.07573633;
          } else {
            result[0] += 0.04101255;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
        result[0] += 0.1400377;
      } else {
        result[0] += -0.019948246;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += 0.00063332665;
            } else {
              result[1] += -0.0067793382;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
              result[1] += 0.10531141;
            } else {
              result[1] += -0.101124145;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.08545382;
            } else {
              result[1] += 0.010037927;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += -0.037641644;
            } else {
              result[1] += 0.06825458;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[1] += 0.0035734747;
            } else {
              result[1] += -0.16497913;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += 0.22392099;
            } else {
              result[1] += 0.022673901;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)34288)) {
            result[1] += -0.0651931;
          } else {
            result[1] += -0.22131275;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)28120)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
              result[1] += 0.22130026;
            } else {
              result[1] += -0.11338242;
            }
          } else {
            result[1] += 0.5647501;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
              result[1] += 0.16606554;
            } else {
              result[1] += -0.061823;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.1261981;
            } else {
              result[1] += -0.033329997;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
              result[1] += -0.19064233;
            } else {
              result[1] += 0.104190804;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.1517444;
            } else {
              result[1] += -0.062504746;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
              result[1] += 0.16293955;
            } else {
              result[1] += 0.029745627;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
              result[1] += -0.12343569;
            } else {
              result[1] += 0.13053125;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)39668)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[1] += -0.029960696;
            } else {
              result[1] += -0.19139482;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[1] += 0.30628252;
            } else {
              result[1] += -0.09017984;
            }
          }
        } else {
          result[1] += 0.2663763;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
          result[1] += -0.16838163;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
              result[1] += -0.03891626;
            } else {
              result[1] += 0.14180563;
            }
          } else {
            result[1] += -0.17347881;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22283)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[1] += -0.058586426;
            } else {
              result[1] += 0.15580593;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
              result[1] += -0.12270442;
            } else {
              result[1] += -0.04828476;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += -0.042503476;
            } else {
              result[1] += 0.0945868;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
              result[1] += 0.29602474;
            } else {
              result[1] += 0.116122164;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
              result[1] += -0.07433377;
            } else {
              result[1] += 0.18923023;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += -0.017802149;
            } else {
              result[1] += 0.007688053;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[1] += 0.0015491543;
            } else {
              result[1] += -0.06138576;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
              result[1] += 0.28093213;
            } else {
              result[1] += 0.018331187;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)46100)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)45299)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)44284)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)43510)) {
              result[2] += -0.00030574185;
            } else {
              result[2] += 0.05512234;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.079106204;
            } else {
              result[2] += 0.056058712;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)45575)) {
            result[2] += 0.13897341;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)45840)) {
              result[2] += -0.028522624;
            } else {
              result[2] += 0.04673907;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)49419)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)49160)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.0116835255;
            } else {
              result[2] += -0.030579114;
            }
          } else {
            result[2] += -0.08767841;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)50397)) {
            result[2] += 0.07145442;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50669)) {
              result[2] += -0.12601024;
            } else {
              result[2] += 0.001213901;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[2] += 0.008967367;
      } else {
        result[2] += 0.028589439;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
      result[2] += 0.044876236;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[2] += 0.01132309;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            result[2] += -0.027110538;
          } else {
            result[2] += 0.00026993855;
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
          result[2] += 0.0795544;
        } else {
          result[2] += -0.007041575;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.028549582;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      result[3] += 0.021554481;
    } else {
      result[3] += -0.011079207;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += -0.009265026;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
      result[4] += 0.03612497;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        result[4] += -0.014782205;
      } else {
        result[4] += 0.026896862;
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[5] += -0.000812459;
            } else {
              result[5] += 0.0122344345;
            }
          } else {
            result[5] += -0.081488594;
          }
        } else {
          result[5] += 0.14052555;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          result[5] += -0.11852149;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
            result[5] += -0.023319148;
          } else {
            result[5] += 0.031680115;
          }
        }
      }
    } else {
      result[5] += 0.115561984;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
      result[5] += -0.10253423;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
              result[5] += 0.11538218;
            } else {
              result[5] += -0.030568613;
            }
          } else {
            result[5] += 0.11073115;
          }
        } else {
          result[5] += -0.03318416;
        }
      } else {
        result[5] += -0.08081897;
      }
    }
  }
  result[6] += -0.0003517175;
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[7] += -0.00016134718;
            } else {
              result[7] += 0.015341182;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2454180352)) {
              result[7] += 0.00959687;
            } else {
              result[7] += -0.10545447;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[7] += -0.06255724;
            } else {
              result[7] += 0.027577974;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[7] += 0.09254839;
            } else {
              result[7] += -0.2715838;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)410017792)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[7] += -0.055353872;
            } else {
              result[7] += -0.4056803;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[7] += 0.043910258;
            } else {
              result[7] += -0.08398486;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
              result[7] += -0.060790427;
            } else {
              result[7] += 0.017847637;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[7] += -0.13772361;
            } else {
              result[7] += 0.015077085;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[7] += 0.048068017;
            } else {
              result[7] += 0.16563773;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
              result[7] += -0.25850978;
            } else {
              result[7] += 0.008490704;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
            result[7] += 0.15546562;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[7] += 0.1176459;
            } else {
              result[7] += -0.01368338;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
              result[7] += 0.047214936;
            } else {
              result[7] += -0.11990572;
            }
          } else {
            result[7] += 0.1371173;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[7] += -0.14923398;
            } else {
              result[7] += 0.15757492;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[7] += -0.27482983;
            } else {
              result[7] += -0.042391367;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += 0.025005814;
            } else {
              result[7] += 0.07890866;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
              result[7] += -0.07909516;
            } else {
              result[7] += -0.22076069;
            }
          }
        } else {
          result[7] += 0.12266304;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57688)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
              result[7] += -0.22003281;
            } else {
              result[7] += 0.099294834;
            }
          } else {
            result[7] += -0.46034864;
          }
        } else {
          result[7] += 0.09178451;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
              result[7] += -0.0023496633;
            } else {
              result[7] += -0.08678593;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
              result[7] += 0.21393609;
            } else {
              result[7] += -0.00347344;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[7] += 0.12674974;
            } else {
              result[7] += -0.11235412;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[7] += -0.055747263;
            } else {
              result[7] += -0.27078196;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56523)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[7] += 0.046718754;
            } else {
              result[7] += -0.28904366;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
              result[7] += -0.048524458;
            } else {
              result[7] += 0.099114574;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
              result[7] += 0.044012766;
            } else {
              result[7] += -0.20325492;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
              result[7] += 0.12347931;
            } else {
              result[7] += -0.0030986296;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2722185728)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[8] += 0.0008255077;
            } else {
              result[8] += -0.016189378;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39407)) {
              result[8] += 3.506832e-05;
            } else {
              result[8] += 0.05021177;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41485)) {
              result[8] += -0.0040161316;
            } else {
              result[8] += -0.03247426;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += -0.0026411372;
            } else {
              result[8] += 0.023072137;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[8] += -0.02642837;
            } else {
              result[8] += -0.117751464;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
              result[8] += 0.30651113;
            } else {
              result[8] += 0.015753679;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
              result[8] += 0.0010079967;
            } else {
              result[8] += -0.12129975;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3694567680)) {
              result[8] += 0.20038834;
            } else {
              result[8] += 0.0050325966;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.0669697;
            } else {
              result[8] += 0.048715685;
            }
          } else {
            result[8] += -0.17991874;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.02930112;
            } else {
              result[8] += 0.17728037;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
              result[8] += -0.028873842;
            } else {
              result[8] += -0.107720636;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2192098560)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
              result[8] += 0.073289186;
            } else {
              result[8] += -0.051751357;
            }
          } else {
            result[8] += 0.39729393;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
            result[8] += 0.17602447;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
              result[8] += -0.014010335;
            } else {
              result[8] += -0.10460887;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
              result[8] += 0.00927873;
            } else {
              result[8] += -0.08514013;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[8] += 0.1706043;
            } else {
              result[8] += 0.020199697;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            result[8] += -0.1330985;
          } else {
            result[8] += 0.027548289;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
              result[8] += 0.028898261;
            } else {
              result[8] += -0.14345789;
            }
          } else {
            result[8] += 0.25097018;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
            result[8] += -0.004529516;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[8] += -0.178482;
            } else {
              result[8] += -0.04966227;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
          result[8] += -0.08552594;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
            result[8] += 0.37694117;
          } else {
            result[8] += 0.05933651;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
          result[8] += 0.25175518;
        } else {
          result[8] += -0.12566923;
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
              result[9] += 8.8273955e-06;
            } else {
              result[9] += 0.07251278;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1250727680)) {
              result[9] += 0.0013489847;
            } else {
              result[9] += -0.18439664;
            }
          }
        } else {
          result[9] += 0.08385993;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
          result[9] += -0.21351139;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
            result[9] += 0.08798855;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
              result[9] += -0.111075394;
            } else {
              result[9] += 0.009242509;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
        result[9] += 0.075883314;
      } else {
        result[9] += -0.022694495;
      }
    }
  } else {
    result[9] += -0.045791674;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[10] += 1.0444806e-05;
            } else {
              result[10] += 0.04690392;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.12219189;
            } else {
              result[10] += -0.009427413;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
              result[10] += 0.018185409;
            } else {
              result[10] += 0.12949415;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[10] += -0.09583508;
            } else {
              result[10] += 0.019400964;
            }
          }
        }
      } else {
        result[10] += -0.08968219;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2372346624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          result[10] += 0.07481702;
        } else {
          result[10] += -0.09105433;
        }
      } else {
        result[10] += 0.10860858;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
      result[10] += -0.098744355;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
        result[10] += 0.08211966;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
          result[10] += -0.09243204;
        } else {
          result[10] += 0.03116562;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)410017792)) {
              result[11] += -0.00017191944;
            } else {
              result[11] += -0.060159408;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[11] += 0.08845341;
            } else {
              result[11] += -0.026391655;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[11] += -0.018187629;
            } else {
              result[11] += 0.028639706;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[11] += -0.21873608;
            } else {
              result[11] += 0.009770627;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[11] += -0.04309896;
            } else {
              result[11] += 0.14941454;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[11] += -0.10915913;
            } else {
              result[11] += 0.08323544;
            }
          }
        } else {
          result[11] += -0.24260946;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)39929)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
              result[11] += -0.016061015;
            } else {
              result[11] += 0.08185323;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41999)) {
              result[11] += -0.20533864;
            } else {
              result[11] += -0.05987262;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[11] += 0.0759032;
            } else {
              result[11] += 0.174445;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[11] += 0.10812125;
            } else {
              result[11] += -0.20637469;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[11] += 0.018689418;
            } else {
              result[11] += -0.113198176;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
              result[11] += -0.07302021;
            } else {
              result[11] += 0.09927831;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
              result[11] += 0.0019783685;
            } else {
              result[11] += 0.067675896;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
              result[11] += -0.022901632;
            } else {
              result[11] += 0.00019344989;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.09091856;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
              result[12] += 0.0030767268;
            } else {
              result[12] += -0.016182879;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53520)) {
              result[12] += 0.15269302;
            } else {
              result[12] += -0.07002685;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
            result[12] += -0.15542431;
          } else {
            result[12] += 0.04462675;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[12] += 0.04152958;
            } else {
              result[12] += -0.03153084;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += 0.24241318;
            } else {
              result[12] += 0.003942552;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[12] += -0.030163242;
            } else {
              result[12] += 0.19876471;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[12] += 0.0066552972;
            } else {
              result[12] += -0.00060301647;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
          result[12] += -0.018758984;
        } else {
          result[12] += 0.19922101;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
            result[12] += 0.068827294;
          } else {
            result[12] += -0.15927698;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20245)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
              result[12] += 0.0316805;
            } else {
              result[12] += 0.1834656;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27096)) {
              result[12] += -0.096559726;
            } else {
              result[12] += 0.012014389;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[12] += 0.042914037;
            } else {
              result[12] += -0.17292388;
            }
          } else {
            result[12] += 0.18162486;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
            result[12] += -0.16901506;
          } else {
            result[12] += -0.03317822;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.13708474;
            } else {
              result[12] += -0.11486667;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += -0.051726047;
            } else {
              result[12] += 0.11883418;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
            result[12] += -0.017855179;
          } else {
            result[12] += 0.35715914;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)22532)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[12] += -0.13053618;
        } else {
          result[12] += -0.0024814566;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
          result[12] += 0.14883211;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
            result[12] += -0.12641042;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[12] += -0.017332071;
            } else {
              result[12] += -0.11621622;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[13] += -0.0013250528;
            } else {
              result[13] += 0.0039150543;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
              result[13] += 0.008320879;
            } else {
              result[13] += -0.028666202;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.041611366;
            } else {
              result[13] += -0.105233505;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += 0.02058917;
            } else {
              result[13] += 0.32571793;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1159214080)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.033659827;
            } else {
              result[13] += -0.12696138;
            }
          } else {
            result[13] += 0.22532888;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            result[13] += -0.13875772;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
              result[13] += 0.03725718;
            } else {
              result[13] += -0.05237613;
            }
          }
        }
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
              result[13] += 0.04796528;
            } else {
              result[13] += -0.093338996;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
              result[13] += 0.28700545;
            } else {
              result[13] += 0.03839723;
            }
          }
        } else {
          result[13] += -0.11046123;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
          result[13] += 0.024107827;
        } else {
          result[13] += -0.13562337;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
      result[13] += -0.09368102;
    } else {
      result[13] += -0.011063777;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2476456192)) {
              result[14] += -0.00072141143;
            } else {
              result[14] += 0.13476516;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[14] += 0.04762776;
            } else {
              result[14] += -0.1281963;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2835)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[14] += 0.060160976;
            } else {
              result[14] += 0.0024979548;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
              result[14] += -0.008609528;
            } else {
              result[14] += 0.06219806;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[14] += -0.05191524;
            } else {
              result[14] += 0.21854283;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
              result[14] += 0.20163915;
            } else {
              result[14] += -0.09786906;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[14] += 0.20183313;
            } else {
              result[14] += -0.06508984;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
              result[14] += -0.049551804;
            } else {
              result[14] += 0.2287495;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
              result[14] += 0.097889505;
            } else {
              result[14] += 0.16406727;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[14] += -0.09280294;
            } else {
              result[14] += 0.06250455;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.0016951271;
            } else {
              result[14] += 0.12618433;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
              result[14] += -0.078403905;
            } else {
              result[14] += 0.30663097;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1353621248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[14] += -0.06474937;
            } else {
              result[14] += 0.069694735;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
              result[14] += -0.10902519;
            } else {
              result[14] += 0.002485115;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
            result[14] += 0.2854275;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
              result[14] += -0.043014262;
            } else {
              result[14] += 0.06339029;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
              result[14] += -0.057917576;
            } else {
              result[14] += 0.06866329;
            }
          } else {
            result[14] += -0.12535858;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2361869312)) {
            result[14] += 0.08625431;
          } else {
            result[14] += 0.30324152;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
          result[14] += -0.13674557;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            result[14] += 0.030428732;
          } else {
            result[14] += -0.11543616;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
              result[14] += -0.04493212;
            } else {
              result[14] += 0.044850465;
            }
          } else {
            result[14] += -0.12948054;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[14] += 0.09182288;
            } else {
              result[14] += 0.31327906;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[14] += 0.0038827078;
            } else {
              result[14] += 0.19946663;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
              result[14] += 0.016945323;
            } else {
              result[14] += -0.04458041;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[14] += -0.06966593;
            } else {
              result[14] += -0.1400058;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[14] += -0.002368553;
            } else {
              result[14] += 0.060274694;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12324)) {
              result[14] += -0.032318998;
            } else {
              result[14] += -0.00023820106;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
              result[0] += -0.00043881588;
            } else {
              result[0] += 0.007818898;
            }
          } else {
            result[0] += -0.14342825;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[0] += -0.098396905;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
              result[0] += 0.06836935;
            } else {
              result[0] += -0.008285458;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          result[0] += -0.11707309;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
              result[0] += -0.05048774;
            } else {
              result[0] += 0.077399954;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
              result[0] += 0.054307204;
            } else {
              result[0] += -0.07698737;
            }
          }
        }
      }
    } else {
      result[0] += -0.097352065;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
      result[0] += 0.11902712;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
        result[0] += -0.069692686;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            result[0] += 0.10524547;
          } else {
            result[0] += 0.0022177396;
          }
        } else {
          result[0] += -0.046518188;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[1] += -6.9406756e-06;
            } else {
              result[1] += -0.043250203;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[1] += 0.2343737;
            } else {
              result[1] += -0.029250128;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += -0.1177515;
            } else {
              result[1] += -0.006617353;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
              result[1] += -0.11281868;
            } else {
              result[1] += 0.124209955;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
              result[1] += 0.020233523;
            } else {
              result[1] += 0.21223707;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[1] += 0.004241916;
            } else {
              result[1] += -0.119963594;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[1] += 0.35042912;
            } else {
              result[1] += 0.11329878;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
              result[1] += -0.10907618;
            } else {
              result[1] += 0.12213566;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
              result[1] += -0.11851404;
            } else {
              result[1] += 0.1635735;
            }
          } else {
            result[1] += -0.10834125;
          }
        } else {
          result[1] += 0.31719005;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
          result[1] += -0.13846308;
        } else {
          result[1] += 0.06990718;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[1] += 0.08489248;
            } else {
              result[1] += -0.03701705;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
              result[1] += 0.3975355;
            } else {
              result[1] += 0.050354484;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
            result[1] += -0.11583131;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
              result[1] += 0.053035174;
            } else {
              result[1] += -0.08020393;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
          result[1] += 0.09256162;
        } else {
          result[1] += 0.34810415;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[1] += -0.12380294;
      } else {
        result[1] += 0.025519138;
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += -0.0016265059;
            } else {
              result[2] += -0.046871588;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.06474562;
            } else {
              result[2] += -0.054903284;
            }
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
              result[2] += -0.0023163948;
            } else {
              result[2] += -0.05227206;
            }
          } else {
            result[2] += -0.0030660846;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)5162)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4908)) {
            result[2] += 0.09149654;
          } else {
            result[2] += 0.026852943;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6201)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[2] += 0.0059026545;
            } else {
              result[2] += -0.13209279;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6453)) {
              result[2] += 0.09053907;
            } else {
              result[2] += 0.0007010777;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          result[2] += -0.082674295;
        } else {
          result[2] += 0.016042069;
        }
      } else {
        result[2] += 0.02545735;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[2] += 0.03350912;
        } else {
          result[2] += -0.021793818;
        }
      } else {
        result[2] += 0.046463322;
      }
    } else {
      result[2] += 0.0045182733;
    }
  }
}

