
#include "header.h"

void predict_unit12(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += 0.0010990264;
            } else {
              result[9] += -0.09259077;
            }
          } else {
            result[9] += -0.09792098;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.14289671;
          } else {
            result[9] += 0.0836604;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[9] += 0.00065284106;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[9] += 0.019144567;
            } else {
              result[9] += 0.114478685;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.028721733;
            } else {
              result[9] += 0.017233685;
            }
          }
        }
      }
    } else {
      result[9] += -0.12917906;
    }
  } else {
    result[9] += -0.14326634;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.0011755888;
            } else {
              result[10] += -0.09096647;
            }
          } else {
            result[10] += -0.14325446;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.015642665;
            } else {
              result[10] += -0.112873115;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
              result[10] += 0.08362035;
            } else {
              result[10] += 0.0008875274;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[10] += -0.13234518;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[10] += -0.11283205;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
              result[10] += -0.0054174806;
            } else {
              result[10] += 0.13507396;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[10] += -0.13195458;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.099918224;
          } else {
            result[10] += 0.0036472029;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += -0.0036682955;
            } else {
              result[10] += -0.08698157;
            }
          } else {
            result[10] += 0.11067033;
          }
        } else {
          result[10] += -0.10729108;
        }
      }
    }
  } else {
    result[10] += -0.13868272;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += 0.0005351241;
            } else {
              result[11] += -0.13007082;
            }
          } else {
            result[11] += -0.13112077;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            result[11] += -0.044133373;
          } else {
            result[11] += 0.012494032;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[11] += 0.13478431;
          } else {
            result[11] += -0.12753178;
          }
        } else {
          result[11] += -0.13996433;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += -0.5151767;
        } else {
          result[11] += -0.103843674;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[11] += 0.008690253;
          } else {
            result[11] += 0.13333462;
          }
        } else {
          result[11] += -0.14180431;
        }
      }
    }
  } else {
    result[11] += -0.14050442;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.0030497431;
            } else {
              result[12] += -0.14096445;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.1482297;
            } else {
              result[12] += -0.0018229126;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            result[12] += -0.14260955;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
              result[12] += 0.10688778;
            } else {
              result[12] += -0.017303774;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[12] += -0.0024893691;
          } else {
            result[12] += 0.092913285;
          }
        } else {
          result[12] += -0.1429526;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[12] += -0.12039576;
          } else {
            result[12] += -0.029167486;
          }
        } else {
          result[12] += 0.13131106;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[12] += 0.14502475;
          } else {
            result[12] += 0.010365067;
          }
        } else {
          result[12] += -0.08181663;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
        result[12] += -0.14356871;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          result[12] += 0.11249928;
        } else {
          result[12] += -0.08261195;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
            result[12] += 0.0971614;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[12] += 0.0057796;
            } else {
              result[12] += -0.2055069;
            }
          }
        } else {
          result[12] += -0.12920271;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[12] += 0.13395764;
        } else {
          result[12] += -0.09499531;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.0006073403;
            } else {
              result[13] += 0.020249471;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += -0.10353931;
            } else {
              result[13] += 0.02399782;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[13] += -0.032899935;
            } else {
              result[13] += 0.24302542;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.13448921;
            } else {
              result[13] += -0.054508492;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.10321267;
            } else {
              result[13] += 0.004125257;
            }
          } else {
            result[13] += 0.1886668;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.05761715;
            } else {
              result[13] += -0.08296188;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.15150952;
            } else {
              result[13] += 0.048820306;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        result[13] += 0.1158728;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[13] += -0.03649486;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += 0.015564896;
            } else {
              result[13] += 0.033975612;
            }
          } else {
            result[13] += -0.02485998;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[13] += -0.13818227;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[13] += 0.017667191;
      } else {
        result[13] += -0.019070033;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 0.0012711892;
            } else {
              result[14] += -0.07541588;
            }
          } else {
            result[14] += -0.14335833;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.026822835;
            } else {
              result[14] += 0.1537054;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.11694719;
            } else {
              result[14] += 0.005888835;
            }
          }
        }
      } else {
        result[14] += -0.12173703;
      }
    } else {
      result[14] += -0.121247984;
    }
  } else {
    result[14] += -0.123168625;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[0] += 0.0011698819;
        } else {
          result[0] += -0.0915141;
        }
      } else {
        result[0] += -0.14381455;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
              result[0] += 0.011553724;
            } else {
              result[0] += 0.04727273;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[0] += 0.13206732;
            } else {
              result[0] += 0.030636333;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[0] += -0.121565215;
            } else {
              result[0] += -0.03945822;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[0] += 0.12377714;
            } else {
              result[0] += -0.1076128;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[0] += -0.03165226;
            } else {
              result[0] += -0.121851616;
            }
          } else {
            result[0] += 0.09411172;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)689205)) {
              result[0] += 0.011458103;
            } else {
              result[0] += -0.010858369;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[0] += 0.04093396;
            } else {
              result[0] += 0.009584753;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.14118603;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.1230633;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[0] += 0.0544439;
            } else {
              result[0] += -0.068170615;
            }
          } else {
            result[0] += 0.18635464;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += -0.0053838324;
            } else {
              result[0] += -0.20840783;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.20440269;
            } else {
              result[0] += -0.021843553;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[1] += -0.06460081;
    } else {
      result[1] += -0.11565196;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.0003791786;
            } else {
              result[1] += 0.04148861;
            }
          } else {
            result[1] += -0.058559325;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            result[1] += 0.039360028;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[1] += -0.014797755;
            } else {
              result[1] += 0.03492025;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += -0.14854667;
            } else {
              result[1] += -0.04404093;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += -0.06229088;
            } else {
              result[1] += 0.19195585;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[1] += 0.13510558;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[1] += -0.025084293;
            } else {
              result[1] += 0.06442373;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        result[1] += 0.040969796;
      } else {
        result[1] += 0.14929678;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.001065695;
      } else {
        result[2] += -0.085030176;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.11183859;
          } else {
            result[2] += 0.029578472;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[2] += 0.121498406;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)48682)) {
              result[2] += 0.0015901062;
            } else {
              result[2] += 0.09625256;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          result[2] += 0.018483704;
        } else {
          result[2] += 0.09538457;
        }
      }
    }
  } else {
    result[2] += -0.14624882;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[3] += -0.087216154;
      } else {
        result[3] += -0.14565782;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.10709501;
      } else {
        result[3] += 0.110747755;
      }
    }
  } else {
    result[3] += 0.06951366;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.09182689;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)44042)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)41722)) {
              result[4] += -0.0018710521;
            } else {
              result[4] += 0.027970383;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)46306)) {
              result[4] += -0.025694173;
            } else {
              result[4] += -0.00031086864;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          result[4] += 0.1254456;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += -0.05725163;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.110062025;
            } else {
              result[4] += 0.040302772;
            }
          }
        }
      }
    } else {
      result[4] += 0.13777299;
    }
  } else {
    result[4] += -0.1462755;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[5] += 0.0011155268;
        } else {
          result[5] += -0.083954826;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[5] += -0.14453977;
        } else {
          result[5] += 0.028497076;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.08657638;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[5] += 0.017818488;
            } else {
              result[5] += 0.0384168;
            }
          } else {
            result[5] += 0.09998428;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += -0.0008990487;
            } else {
              result[5] += -0.059019882;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
              result[5] += 0.08751653;
            } else {
              result[5] += 0.016872581;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.13738823;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 0.0008310436;
    } else {
      result[6] += -0.08395513;
    }
  } else {
    result[6] += -0.14624888;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += -0.00028868538;
            } else {
              result[7] += 0.12783109;
            }
          } else {
            result[7] += -0.13888134;
          }
        } else {
          result[7] += 0.13136965;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
          result[7] += -0.18418953;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            result[7] += 0.11684925;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[7] += -0.194306;
            } else {
              result[7] += -0.02983311;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        result[7] += 0.0032445297;
      } else {
        result[7] += -0.14146797;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
              result[7] += 0.071826026;
            } else {
              result[7] += -0.08848071;
            }
          } else {
            result[7] += 0.14821109;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[7] += 0.1432395;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += -0.0070412676;
            } else {
              result[7] += 0.12125089;
            }
          }
        }
      } else {
        result[7] += -0.037497055;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[7] += -0.13858427;
          } else {
            result[7] += -0.016224412;
          }
        } else {
          result[7] += 0.062063247;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[7] += -0.11018142;
            } else {
              result[7] += 0.03493359;
            }
          } else {
            result[7] += -0.13395417;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += 0.07344945;
            } else {
              result[7] += 0.36520222;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.13526392;
            } else {
              result[7] += 0.13185191;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[8] += -0.029583225;
            } else {
              result[8] += -0.12368902;
            }
          } else {
            result[8] += -0.13624871;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.0044510667;
            } else {
              result[8] += -0.14734799;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.010138568;
            } else {
              result[8] += 0.008810006;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += 0.14793661;
            } else {
              result[8] += 0.33808;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[8] += -0.011230754;
            } else {
              result[8] += -0.15128264;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.057095945;
            } else {
              result[8] += 0.06363465;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.06975358;
            } else {
              result[8] += -0.13592096;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += 0.14534698;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.047558594;
            } else {
              result[8] += -0.13591741;
            }
          } else {
            result[8] += 0.115682855;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.048701085;
            } else {
              result[8] += -0.01167942;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[8] += 0.0043951985;
            } else {
              result[8] += 0.022382436;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.13343748;
            } else {
              result[8] += 0.02400882;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[8] += -0.049196538;
            } else {
              result[8] += -0.01723165;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      result[8] += -0.14785108;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += 0.13921697;
        } else {
          result[8] += -0.19320281;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          result[8] += -0.14771667;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[8] += 0.011648556;
            } else {
              result[8] += 0.14063436;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1404)) {
              result[8] += -0.15221667;
            } else {
              result[8] += 0.1033121;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += 0.00096153823;
            } else {
              result[9] += -0.08726786;
            }
          } else {
            result[9] += -0.09355936;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
              result[9] += -0.14160788;
            } else {
              result[9] += 0.07905497;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += 0.00057640916;
            } else {
              result[9] += 0.016859522;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[9] += 0.09311955;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[9] += 0.029046668;
          } else {
            result[9] += 0.017950498;
          }
        }
      }
    } else {
      result[9] += -0.12617792;
    }
  } else {
    result[9] += -0.14214712;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.0010419054;
            } else {
              result[10] += -0.08665724;
            }
          } else {
            result[10] += -0.14222728;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
              result[10] += 0.0119714355;
            } else {
              result[10] += 0.08072111;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
              result[10] += 0.072281145;
            } else {
              result[10] += 0.0015261824;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[10] += -0.12994847;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[10] += -0.10926261;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[10] += -0.00496924;
            } else {
              result[10] += 0.1045529;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[10] += -0.12918457;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.09561893;
          } else {
            result[10] += 0.0018533265;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[10] += -0.0046586148;
            } else {
              result[10] += 0.11705145;
            }
          } else {
            result[10] += -0.09211683;
          }
        } else {
          result[10] += -0.100636475;
        }
      }
    }
  } else {
    result[10] += -0.13682257;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.0026965484;
            } else {
              result[11] += -0.14787544;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[11] += 0.0030119305;
            } else {
              result[11] += -0.12675245;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            result[11] += -0.14864978;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += 0.034561235;
            } else {
              result[11] += -0.012259123;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[11] += 0.12947254;
          } else {
            result[11] += -0.11824736;
          }
        } else {
          result[11] += -0.12861308;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += -0.39829966;
        } else {
          result[11] += -0.09688955;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[11] += 0.0012565255;
          } else {
            result[11] += 0.12926415;
          }
        } else {
          result[11] += -0.1380486;
        }
      }
    }
  } else {
    result[11] += -0.13898343;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[12] += -0.02852844;
            } else {
              result[12] += -0.12790848;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.0027079799;
            } else {
              result[12] += -0.007112469;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            result[12] += -0.14090616;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
              result[12] += 0.0893487;
            } else {
              result[12] += -0.010854345;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[12] += 0.0010349943;
          } else {
            result[12] += 0.088971235;
          }
        } else {
          result[12] += -0.14139682;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[12] += -0.11671891;
          } else {
            result[12] += -0.027055066;
          }
        } else {
          result[12] += 0.12800565;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[12] += 0.14413226;
          } else {
            result[12] += 0.00071909605;
          }
        } else {
          result[12] += -0.07772469;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
        result[12] += -0.14195076;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          result[12] += 0.10772577;
        } else {
          result[12] += -0.077920444;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[12] += -0.12459877;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += 0.07171048;
            } else {
              result[12] += -0.10785401;
            }
          } else {
            result[12] += 0.09727772;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[12] += 0.12737346;
        } else {
          result[12] += -0.08841803;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[13] += -0.018762471;
        } else {
          result[13] += -0.11836732;
        }
      } else {
        result[13] += -0.12780851;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += 0.0012218775;
            } else {
              result[13] += 0.01695467;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += -0.097341105;
            } else {
              result[13] += 0.019814895;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[13] += -0.029447183;
            } else {
              result[13] += 0.19361629;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14019696;
            } else {
              result[13] += 0.0521667;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.097299114;
            } else {
              result[13] += 0.004388413;
            }
          } else {
            result[13] += 0.18065773;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.012766183;
            } else {
              result[13] += -0.10740498;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.19250575;
            } else {
              result[13] += 0.06743085;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[13] += -0.13635091;
    } else {
      result[13] += 0.0035313324;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[14] += 0.003367109;
            } else {
              result[14] += -0.004788986;
            }
          } else {
            result[14] += -0.13848923;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[14] += 0.003292133;
            } else {
              result[14] += 0.11313007;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += -0.113642074;
            } else {
              result[14] += -0.0045995484;
            }
          }
        }
      } else {
        result[14] += -0.11691403;
      }
    } else {
      result[14] += -0.11754403;
    }
  } else {
    result[14] += -0.11966154;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[0] += 0.0009721764;
            } else {
              result[0] += -0.0873395;
            }
          } else {
            result[0] += -0.14255702;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[0] += 0.012308598;
            } else {
              result[0] += -0.0900209;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
              result[0] += -0.029725522;
            } else {
              result[0] += 0.0038269854;
            }
          }
        }
      } else {
        result[0] += -0.11753418;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[0] += -0.082899295;
      } else {
        result[0] += 0.046594813;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      result[0] += -0.13661283;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[0] += -0.07803022;
          } else {
            result[0] += 0.031735726;
          }
        } else {
          result[0] += -0.13564043;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[0] += 0.051166862;
            } else {
              result[0] += -0.06402666;
            }
          } else {
            result[0] += 0.18845725;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            result[0] += -0.119629465;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.10679758;
            } else {
              result[0] += 0.033833012;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[1] += -0.053212196;
            } else {
              result[1] += -0.09284081;
            }
          } else {
            result[1] += -0.111800976;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += 0.0006601348;
            } else {
              result[1] += 0.012129833;
            }
          } else {
            result[1] += -0.09765244;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[1] += -0.13975579;
        } else {
          result[1] += 0.08068696;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += -0.024972754;
            } else {
              result[1] += 0.0879426;
            }
          } else {
            result[1] += -0.14611395;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += 0.1313061;
            } else {
              result[1] += -0.059678987;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.026490841;
            } else {
              result[1] += 0.020861998;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
          result[1] += 0.20078973;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += 0.05174646;
            } else {
              result[1] += -0.13837282;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[1] += 0.14094542;
            } else {
              result[1] += -0.0004867071;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += 0.04136936;
            } else {
              result[1] += 0.06182101;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.06944449;
            } else {
              result[1] += -0.06292994;
            }
          }
        } else {
          result[1] += 0.2571954;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[1] += -0.14780371;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.032391585;
            } else {
              result[1] += -0.06425866;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[1] += 0.053920098;
            } else {
              result[1] += 0.0028939806;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[1] += -0.10644639;
            } else {
              result[1] += -0.018773798;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.036210068;
            } else {
              result[1] += 0.4104854;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.00078326656;
            } else {
              result[1] += 0.03751676;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.15077962;
            } else {
              result[1] += 0.007501342;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.010556567;
            } else {
              result[1] += -0.13543876;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[1] += -0.14864112;
            } else {
              result[1] += 0.10037002;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[1] += 0.016779417;
            } else {
              result[1] += -0.0059519564;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[1] += -0.12057038;
            } else {
              result[1] += -0.027185768;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.00085484335;
      } else {
        result[2] += -0.08087063;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += 0.058276426;
            } else {
              result[2] += 0.11755842;
            }
          } else {
            result[2] += 0.012120969;
          }
        } else {
          result[2] += 0.11597053;
        }
      } else {
        result[2] += 0.010119017;
      }
    }
  } else {
    result[2] += -0.14563085;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[3] += -0.082013726;
      } else {
        result[3] += -0.14486608;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.10324061;
      } else {
        result[3] += 0.1057037;
      }
    }
  } else {
    result[3] += 0.065959476;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.088241704;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[4] += -0.005202724;
            } else {
              result[4] += 0.12426597;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.008905568;
            } else {
              result[4] += -0.001287465;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[4] += 0.04101247;
          } else {
            result[4] += 0.14776736;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
            result[4] += -0.085657254;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.14653048;
            } else {
              result[4] += 0.038137987;
            }
          }
        }
      }
    } else {
      result[4] += 0.13526206;
    }
  } else {
    result[4] += -0.14566159;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[5] += 0.00093920267;
        } else {
          result[5] += -0.079935946;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[5] += -0.14370753;
        } else {
          result[5] += 0.031892892;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.08193885;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[5] += 0.031665836;
            } else {
              result[5] += 0.095262475;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[5] += -0.03431961;
            } else {
              result[5] += 0.027674416;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            result[5] += 0.17696469;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[5] += -0.08852497;
            } else {
              result[5] += 0.032394484;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.13537161;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 0.0006864071;
    } else {
      result[6] += -0.07993622;
    }
  } else {
    result[6] += -0.14563091;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
              result[7] += 0.0011062602;
            } else {
              result[7] += -0.11328673;
            }
          } else {
            result[7] += -0.13099286;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[7] += -0.01799352;
            } else {
              result[7] += 0.028621247;
            }
          } else {
            result[7] += -0.111713454;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[7] += 0.14938031;
        } else {
          result[7] += 0.07971132;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
          result[7] += -0.1502981;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            result[7] += -0.099245735;
          } else {
            result[7] += 0.21830922;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
              result[7] += -0.0006964796;
            } else {
              result[7] += -0.028659875;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[7] += 0.023537243;
            } else {
              result[7] += -0.002612093;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.17698555;
            } else {
              result[7] += -0.017977543;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[7] += 0.13212405;
            } else {
              result[7] += -0.004205997;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[7] += 0.1255331;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += -0.0873374;
            } else {
              result[7] += 0.09048815;
            }
          }
        } else {
          result[7] += -0.0975003;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.14604346;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[7] += -0.07083535;
          } else {
            result[7] += 0.12545735;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[7] += -0.12243295;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
              result[7] += 0.0010635918;
            } else {
              result[7] += -0.080245875;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[7] += 0.15081765;
            } else {
              result[7] += -0.0035596918;
            }
          }
        }
      } else {
        result[7] += 0.131142;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[8] += -0.025974581;
          } else {
            result[8] += -0.11973678;
          }
        } else {
          result[8] += -0.13406134;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.0014489397;
            } else {
              result[8] += -0.02816407;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.11958931;
            } else {
              result[8] += -0.039945386;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[8] += 0.13556083;
            } else {
              result[8] += -0.12914634;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.14445205;
            } else {
              result[8] += -0.04275267;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        result[8] += -0.14663917;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[8] += 0.11630555;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            result[8] += -0.1468603;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[8] += 0.04731679;
            } else {
              result[8] += -0.12484687;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.14877681;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.09793162;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[8] += 0.12349125;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[8] += 0.13590997;
            } else {
              result[8] += 0.0005525894;
            }
          }
        }
      } else {
        result[8] += -0.12884204;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += 0.0007715376;
            } else {
              result[9] += -0.08227079;
            }
          } else {
            result[9] += -0.0893628;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
              result[9] += -0.14037636;
            } else {
              result[9] += 0.07553355;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += 0.0001840052;
            } else {
              result[9] += 0.014555951;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[9] += 0.08803539;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            result[9] += 0.025903052;
          } else {
            result[9] += 0.017860059;
          }
        }
      }
    } else {
      result[9] += -0.12303708;
    }
  } else {
    result[9] += -0.14092621;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.00085890404;
            } else {
              result[10] += -0.08257667;
            }
          } else {
            result[10] += -0.14107823;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.013585267;
            } else {
              result[10] += -0.11046967;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
              result[10] += 0.06695443;
            } else {
              result[10] += 0.0015800562;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[10] += -0.12743564;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[10] += -0.10567133;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[10] += -0.005392841;
            } else {
              result[10] += 0.09555018;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[10] += -0.12635522;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[10] += 0.00437984;
          } else {
            result[10] += -0.092665955;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[10] += -0.004917391;
            } else {
              result[10] += 0.104359046;
            }
          } else {
            result[10] += -0.086926766;
          }
        } else {
          result[10] += -0.096355565;
        }
      }
    }
  } else {
    result[10] += -0.13483994;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[11] += -0.01963361;
            } else {
              result[11] += -0.118835956;
            }
          } else {
            result[11] += -0.12662365;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.00035654972;
            } else {
              result[11] += 0.0077113155;
            }
          } else {
            result[11] += -0.12899499;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[11] += 0.083197005;
            } else {
              result[11] += 0.13452584;
            }
          } else {
            result[11] += -0.114400126;
          }
        } else {
          result[11] += -0.117879994;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += -0.32643643;
        } else {
          result[11] += -0.09115199;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[11] += -0.0039683226;
          } else {
            result[11] += 0.12482408;
          }
        } else {
          result[11] += -0.13443139;
        }
      }
    }
  } else {
    result[11] += -0.13733359;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += 0.00043200355;
            } else {
              result[12] += -0.13464348;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += -0.08992015;
            } else {
              result[12] += 0.0034793455;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += 0.011556804;
            } else {
              result[12] += 0.030945344;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.0030004862;
            } else {
              result[12] += -0.11308754;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[12] += 0.0032676167;
          } else {
            result[12] += 0.08521604;
          }
        } else {
          result[12] += -0.13996576;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[12] += -0.11312698;
          } else {
            result[12] += -0.023406146;
          }
        } else {
          result[12] += 0.12564781;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.13962278;
        } else {
          result[12] += -0.033338677;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
        result[12] += -0.14008446;
      } else {
        result[12] += 0.056679633;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[12] += -0.12150451;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[12] += 0.032856416;
            } else {
              result[12] += -0.13444139;
            }
          } else {
            result[12] += 0.09136763;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            result[12] += 0.045997083;
          } else {
            result[12] += 0.13465072;
          }
        } else {
          result[12] += -0.08148151;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += 0.0010180282;
            } else {
              result[13] += 0.08178975;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.14085062;
            } else {
              result[13] += -0.0018473035;
            }
          }
        } else {
          result[13] += 0.1447789;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.105182946;
            } else {
              result[13] += -0.15096648;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += 0.04379592;
            } else {
              result[13] += -0.044459663;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[13] += -0.13939494;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[13] += 0.19700336;
            } else {
              result[13] += -0.13262136;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.05336922;
            } else {
              result[13] += 0.0034338746;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.022996228;
            } else {
              result[13] += 0.044465594;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.026472848;
            } else {
              result[13] += -0.122554176;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.08631244;
            } else {
              result[13] += -0.045834266;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[13] += 0.13204499;
        } else {
          result[13] += -0.08690683;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[13] += -0.13437673;
    } else {
      result[13] += 0.004592305;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.0007277066;
            } else {
              result[14] += -0.14419925;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.10862214;
            } else {
              result[14] += 0.007552241;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += -0.0037221077;
            } else {
              result[14] += -0.121698186;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[14] += 0.114942946;
            } else {
              result[14] += -0.001515655;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.08676691;
            } else {
              result[14] += 0.23313652;
            }
          } else {
            result[14] += -0.09600616;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
              result[14] += -0.1280707;
            } else {
              result[14] += -0.043680772;
            }
          } else {
            result[14] += 0.12245526;
          }
        }
      }
    } else {
      result[14] += -0.11484255;
    }
  } else {
    result[14] += -0.11602502;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[0] += 0.000925911;
        } else {
          result[0] += -0.083315305;
        }
      } else {
        result[0] += -0.14165792;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[0] += 0.012408978;
            } else {
              result[0] += -0.08772826;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[0] += 0.1289563;
            } else {
              result[0] += 0.026363103;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[0] += -0.035988484;
            } else {
              result[0] += -0.118292294;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[0] += 0.120638534;
            } else {
              result[0] += -0.08072961;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
            result[0] += -0.16735202;
          } else {
            result[0] += 0.013855763;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += 0.021068856;
            } else {
              result[0] += 0.12242427;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[0] += -0.01006909;
            } else {
              result[0] += 0.013300726;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.13841191;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.11682798;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.06438356;
            } else {
              result[0] += 0.045263633;
            }
          } else {
            result[0] += -0.12249453;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[0] += 0.19647874;
            } else {
              result[0] += -0.0041975724;
            }
          } else {
            result[0] += -0.10512108;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 3.746184e-05;
            } else {
              result[1] += -0.016030958;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += 0.014365959;
            } else {
              result[1] += -0.0113852145;
            }
          }
        } else {
          result[1] += -0.13199472;
        }
      } else {
        result[1] += -0.13268597;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[1] += -0.14825918;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[1] += 0.10464198;
            } else {
              result[1] += -0.116514035;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.042054825;
            } else {
              result[1] += -0.13746418;
            }
          } else {
            result[1] += 0.19000877;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
          result[1] += 0.1249704;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[1] += -0.0867053;
            } else {
              result[1] += -0.01245905;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += 0.01901038;
            } else {
              result[1] += 0.07809852;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
      result[1] += 0.050024148;
    } else {
      result[1] += 0.13782714;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.0007475485;
      } else {
        result[2] += -0.07710518;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += 0.051889002;
            } else {
              result[2] += 0.1138685;
            }
          } else {
            result[2] += 0.009321339;
          }
        } else {
          result[2] += 0.11181456;
        }
      } else {
        result[2] += 0.005222884;
      }
    }
  } else {
    result[2] += -0.14488351;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[3] += -0.07678152;
      } else {
        result[3] += -0.14391986;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.09972276;
      } else {
        result[3] += 0.0994341;
      }
    }
  } else {
    result[3] += 0.061143767;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.0833473;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.0005908583;
            } else {
              result[4] += 0.12253035;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)52239)) {
              result[4] += -0.0035403639;
            } else {
              result[4] += 0.0008759278;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          result[4] += 0.12995297;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += -0.061278827;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.106163494;
            } else {
              result[4] += 0.03691811;
            }
          }
        }
      }
    } else {
      result[4] += 0.13191855;
    }
  } else {
    result[4] += -0.14491911;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[5] += 0.0008810073;
        } else {
          result[5] += -0.076115236;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[5] += -0.14269945;
        } else {
          result[5] += 0.029278545;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[5] += 0.034679867;
            } else {
              result[5] += 0.013773507;
            }
          } else {
            result[5] += -0.098710604;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[5] += 0.039727323;
            } else {
              result[5] += 0.025189942;
            }
          } else {
            result[5] += 0.08738207;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[5] += -0.034919064;
            } else {
              result[5] += 0.10750722;
            }
          } else {
            result[5] += -0.123496115;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
            result[5] += 0.20773649;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[5] += -0.1075628;
            } else {
              result[5] += 0.051969107;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.13298534;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 0.00068398373;
    } else {
      result[6] += -0.076115526;
    }
  } else {
    result[6] += -0.14488357;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.0028268974;
            } else {
              result[7] += -0.0038512272;
            }
          } else {
            result[7] += -0.13566567;
          }
        } else {
          result[7] += 0.12116892;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          result[7] += -0.06489436;
        } else {
          result[7] += -0.14805745;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        result[7] += 0.009061379;
      } else {
        result[7] += -0.14042833;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[7] += 0.1210829;
          } else {
            result[7] += 0.0026202707;
          }
        } else {
          result[7] += -0.09372445;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.14528833;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[7] += -0.06402456;
          } else {
            result[7] += 0.105467774;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[7] += -0.13583945;
          } else {
            result[7] += -0.008034765;
          }
        } else {
          result[7] += 0.056605432;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.05969126;
            } else {
              result[7] += 0.04760706;
            }
          } else {
            result[7] += -0.12822582;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            result[7] += 0.14792517;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.13793564;
            } else {
              result[7] += 0.07255922;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += -0.0012714942;
            } else {
              result[8] += -0.022920836;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.10919437;
            } else {
              result[8] += -0.047968708;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.15415743;
            } else {
              result[8] += -0.021429883;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.035077464;
            } else {
              result[8] += -0.13324358;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[8] += 0.1371956;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[8] += -0.1157382;
            } else {
              result[8] += 0.12810631;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[8] += -0.003943082;
            } else {
              result[8] += 0.013109284;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.054029956;
            } else {
              result[8] += -0.020703139;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        result[8] += -0.14508575;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[8] += 0.10919363;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            result[8] += -0.14599407;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[8] += 0.042957734;
            } else {
              result[8] += -0.117861934;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.14779435;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.0940797;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[8] += 0.11926471;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[8] += 0.13500603;
            } else {
              result[8] += -0.004178451;
            }
          }
        }
      } else {
        result[8] += -0.1234537;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += 0.00075054204;
            } else {
              result[9] += -0.077516995;
            }
          } else {
            result[9] += -0.08530102;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.13928522;
          } else {
            result[9] += 0.07092992;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[9] += 0.0016138626;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[9] += 0.016253058;
            } else {
              result[9] += 0.051870354;
            }
          } else {
            result[9] += 0.018049272;
          }
        }
      }
    } else {
      result[9] += -0.119222745;
    }
  } else {
    result[9] += -0.13952863;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.00082888285;
            } else {
              result[10] += -0.078679875;
            }
          } else {
            result[10] += -0.13966814;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[10] += 0.012627;
            } else {
              result[10] += -0.06799112;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.097588256;
            } else {
              result[10] += 0.0017480069;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[10] += -0.09859348;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            result[10] += -0.009871222;
          } else {
            result[10] += 0.08229526;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[10] += -0.1232617;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.08856134;
          } else {
            result[10] += 0.004897408;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[10] += -0.0047284313;
            } else {
              result[10] += 0.1009219;
            }
          } else {
            result[10] += -0.08007003;
          }
        } else {
          result[10] += -0.090029076;
        }
      }
    }
  } else {
    result[10] += -0.1326405;
  }
}

