
#include "header.h"

void predict_unit1(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.073422216;
        } else {
          result[2] += -0.14461899;
        }
      } else {
        result[2] += -0.15366179;
      }
    } else {
      result[2] += -0.15391827;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.17447466;
      } else {
        result[2] += 0.2265309;
      }
    } else {
      result[2] += -0.1533228;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          result[3] += -0.15388373;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            result[3] += -0.15301657;
          } else {
            result[3] += 0.24089108;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[3] += -0.15362635;
        } else {
          result[3] += 0.22629069;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.1538624;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[3] += 0.23068018;
          } else {
            result[3] += 0.2391475;
          }
        } else {
          result[3] += -0.14195587;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.15334442;
    } else {
      result[3] += 0.22608739;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15390442;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[4] += -0.060503893;
      } else {
        result[4] += 0.23164856;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += 0.18579671;
            } else {
              result[4] += 0.2362904;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 0.17267555;
            } else {
              result[4] += 0.14007694;
            }
          }
        } else {
          result[4] += 0.2258534;
        }
      } else {
        result[4] += 0.22657113;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[5] += -0.056273658;
            } else {
              result[5] += -0.14461899;
            }
          } else {
            result[5] += 0.16463652;
          }
        } else {
          result[5] += -0.15366192;
        }
      } else {
        result[5] += -0.1536265;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15392646;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15372619;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += -0.12087574;
            } else {
              result[5] += 0.3442139;
            }
          } else {
            result[5] += -0.15329105;
          }
        }
      }
    }
  } else {
    result[5] += 0.31374952;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += -0.027671197;
          } else {
            result[6] += 0.24876328;
          }
        } else {
          result[6] += -0.15366179;
        }
      } else {
        result[6] += -0.15363425;
      }
    } else {
      result[6] += -0.1539188;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[6] += 0.2289433;
    } else {
      result[6] += -0.15265788;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.13071293;
            } else {
              result[7] += -0.14461899;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[7] += 0.23183136;
            } else {
              result[7] += 0.12120104;
            }
          }
        } else {
          result[7] += -0.15361002;
        }
      } else {
        result[7] += -0.15363425;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.12761815;
            } else {
              result[7] += 0.17162088;
            }
          } else {
            result[7] += -0.1546328;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.24319606;
            } else {
              result[7] += -0.14397709;
            }
          } else {
            result[7] += -0.15396354;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.15322891;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[7] += 0.062199093;
          } else {
            result[7] += -0.12055673;
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[7] += 0.2410092;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += 0.22679822;
            } else {
              result[7] += 0.22551641;
            }
          }
        } else {
          result[7] += -0.15142427;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[7] += -0.17804848;
            } else {
              result[7] += -0.15238932;
            }
          } else {
            result[7] += -0.15383296;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.22423416;
            } else {
              result[7] += -0.1773692;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[7] += 0.21996833;
            } else {
              result[7] += -0.16362557;
            }
          }
        }
      }
    } else {
      result[7] += -0.1538343;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[8] += -0.15211914;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[8] += 0.07031923;
            } else {
              result[8] += 0.18831259;
            }
          } else {
            result[8] += -0.15747792;
          }
        } else {
          result[8] += -0.15437287;
        }
      } else {
        result[8] += -0.15396604;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[8] += -0.15401633;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += 0.17354463;
            } else {
              result[8] += 0.3953209;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[8] += -0.04564537;
            } else {
              result[8] += -0.15346283;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[8] += -0.15381691;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += 0.55089813;
            } else {
              result[8] += -0.15302423;
            }
          }
        } else {
          result[8] += -0.15394966;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.22072423;
            } else {
              result[8] += -0.15735248;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.2993982;
            } else {
              result[8] += 0.19544668;
            }
          }
        } else {
          result[8] += -0.15583803;
        }
      } else {
        result[8] += -0.15381739;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.33310056;
            } else {
              result[9] += -0.14666317;
            }
          } else {
            result[9] += -0.15405229;
          }
        } else {
          result[9] += -0.15395598;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
            result[9] += -0.15394706;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[9] += 0.12027796;
            } else {
              result[9] += -0.15300807;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.22829442;
            } else {
              result[9] += -0.1521693;
            }
          } else {
            result[9] += -0.15362377;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15499176;
          } else {
            result[9] += 0.22897495;
          }
        } else {
          result[9] += -0.15279055;
        }
      } else {
        result[9] += -0.15380703;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.22776343;
      } else {
        result[9] += -0.15121575;
      }
    } else {
      result[9] += -0.1535298;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += -0.1015008;
            } else {
              result[10] += -0.15378517;
            }
          } else {
            result[10] += -0.15443002;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[10] += 0.20627326;
          } else {
            result[10] += -0.11895662;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
            result[10] += -0.15387863;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += -0.10474413;
            } else {
              result[10] += -0.15231022;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.15399513;
            } else {
              result[10] += 0.1641679;
            }
          } else {
            result[10] += -0.15375337;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[10] += -0.15375476;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
              result[10] += 0.36713433;
            } else {
              result[10] += 0.22555517;
            }
          } else {
            result[10] += -0.13015102;
          }
        } else {
          result[10] += -0.15358861;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[10] += -0.15297447;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += 0.1576174;
            } else {
              result[10] += 0.22917423;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += -0.097832605;
            } else {
              result[10] += 0.17002451;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[10] += -0.15027073;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
              result[10] += -0.06848709;
            } else {
              result[10] += -0.12230612;
            }
          }
        }
      }
    } else {
      result[10] += -0.15368837;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          result[11] += -0.15244356;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.09254683;
            } else {
              result[11] += 0.19120383;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.28270805;
            } else {
              result[11] += -0.15390375;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[11] += -0.1537393;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.1540339;
          } else {
            result[11] += -0.17340414;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.04020291;
            } else {
              result[11] += 0.21241635;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[11] += 0.22161391;
            } else {
              result[11] += -0.16509165;
            }
          }
        } else {
          result[11] += -0.15563264;
        }
      } else {
        result[11] += -0.15374887;
      }
    }
  } else {
    result[11] += -0.15382217;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[12] += -0.15266067;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += -0.010256685;
            } else {
              result[12] += -0.103562;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += 0.25893742;
            } else {
              result[12] += -0.15070714;
            }
          }
        } else {
          result[12] += -0.15372056;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        result[12] += -0.15420076;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[12] += 0.23715799;
            } else {
              result[12] += 0.3197166;
            }
          } else {
            result[12] += -0.16259192;
          }
        } else {
          result[12] += -0.15277866;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += -0.15107602;
            } else {
              result[12] += -0.084755555;
            }
          } else {
            result[12] += 0.2344074;
          }
        } else {
          result[12] += -0.15336387;
        }
      } else {
        result[12] += -0.15449853;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[12] += -0.15369871;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.24661872;
            } else {
              result[12] += -0.11949807;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.31054127;
            } else {
              result[12] += -0.14658907;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.1458224;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[12] += 0.16405076;
            } else {
              result[12] += 0.24372385;
            }
          } else {
            result[12] += -0.13794938;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.13699576;
            } else {
              result[13] += -0.15386161;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.07448811;
            } else {
              result[13] += 0.12892883;
            }
          }
        } else {
          result[13] += -0.15394919;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.1536654;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[13] += -0.10568795;
            } else {
              result[13] += 0.14335746;
            }
          }
        } else {
          result[13] += 0.28617844;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += 0.09516389;
            } else {
              result[13] += -0.13729888;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.19788067;
            } else {
              result[13] += -0.15837088;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += 0.19986215;
            } else {
              result[13] += -0.21006148;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.41447255;
            } else {
              result[13] += -0.15724315;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15323727;
            } else {
              result[13] += 0.05045669;
            }
          } else {
            result[13] += -0.15367992;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.14933042;
          } else {
            result[13] += 0.24312429;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1415)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.22880033;
            } else {
              result[13] += -0.14887922;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += 0.23423702;
            } else {
              result[13] += -0.14197797;
            }
          }
        } else {
          result[13] += 0.22593804;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[13] += -0.15082513;
        } else {
          result[13] += 0.20628;
        }
      }
    } else {
      result[13] += -0.15274249;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[14] += -0.0369481;
            } else {
              result[14] += -0.14461899;
            }
          } else {
            result[14] += -0.15366179;
          }
        } else {
          result[14] += -0.15363425;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.023668932;
            } else {
              result[14] += 0.26330563;
            }
          } else {
            result[14] += -0.15467814;
          }
        } else {
          result[14] += -0.15357067;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.024629604;
            } else {
              result[14] += 0.2087391;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[14] += -0.15447465;
            } else {
              result[14] += -0.11261395;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[14] += -0.15288511;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[14] += 0.23271154;
            } else {
              result[14] += -0.15050165;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[14] += -0.15400721;
            } else {
              result[14] += 0.23468304;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.21309607;
            } else {
              result[14] += -0.15262944;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += -0.15301703;
            } else {
              result[14] += -0.14567159;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[14] += 0.3277672;
            } else {
              result[14] += -0.1328323;
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
              result[14] += -0.15401778;
            } else {
              result[14] += -0.14103925;
            }
          } else {
            result[14] += -0.15371183;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.28528997;
            } else {
              result[14] += -0.16167264;
            }
          } else {
            result[14] += -0.15368292;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.23435116;
          } else {
            result[14] += -0.21657637;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.12542745;
            } else {
              result[14] += 0.3830539;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.1310197;
            } else {
              result[14] += -0.15293847;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.06447123;
            } else {
              result[14] += 0.09340643;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15377766;
            } else {
              result[14] += 0.20857066;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.21945433;
            } else {
              result[14] += -0.20783313;
            }
          } else {
            result[14] += -0.15599987;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.15175974;
            } else {
              result[14] += 0.2447582;
            }
          } else {
            result[14] += -0.1536748;
          }
        } else {
          result[14] += 0.26155218;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.053062506;
          } else {
            result[0] += -0.14107646;
          }
        } else {
          result[0] += -0.15282622;
        }
      } else {
        result[0] += -0.1529847;
      }
    } else {
      result[0] += -0.15313809;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.18560821;
            } else {
              result[0] += 0.12603082;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[0] += 0.21102634;
            } else {
              result[0] += 0.20003332;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[0] += 2.2901177;
          } else {
            result[0] += 0.32683003;
          }
        }
      } else {
        result[0] += -0.15136158;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)740192)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.1528696;
            } else {
              result[0] += -0.022446692;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[0] += -0.15118544;
            } else {
              result[0] += 0.21236183;
            }
          }
        } else {
          result[0] += -0.15204123;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[0] += -0.1487449;
          } else {
            result[0] += 0.20820053;
          }
        } else {
          result[0] += -0.15274675;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15278444;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += 0.09099862;
            } else {
              result[1] += 0.19620848;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[1] += -0.16055952;
            } else {
              result[1] += 0.7399206;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.022887947;
            } else {
              result[1] += 0.14154513;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
              result[1] += 0.14712082;
            } else {
              result[1] += 0.20818293;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += 0.19205905;
            } else {
              result[1] += -0.121228315;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.17239287;
            } else {
              result[1] += 0.2152284;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[1] += -0.09241749;
          } else {
            result[1] += -0.15264967;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[1] += -0.15289329;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.010907336;
            } else {
              result[1] += -0.15223071;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[1] += 0.08919782;
            } else {
              result[1] += -0.15481952;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[1] += -0.13402283;
            } else {
              result[1] += 0.051668104;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          result[1] += -0.15280594;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += -0.11128815;
            } else {
              result[1] += -0.15406543;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[1] += 0.34845212;
            } else {
              result[1] += -0.13695304;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.15847711;
            } else {
              result[1] += 0.24654667;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.058456123;
            } else {
              result[1] += -0.17137808;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += 0.2911255;
            } else {
              result[1] += 0.782669;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.17922911;
            } else {
              result[1] += 0.22466922;
            }
          }
        }
      } else {
        result[1] += -0.15281731;
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.065916784;
        } else {
          result[2] += -0.14135729;
        }
      } else {
        result[2] += -0.15277636;
      }
    } else {
      result[2] += -0.1530485;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.13467763;
      } else {
        result[2] += 0.20236926;
      }
    } else {
      result[2] += -0.15234138;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15304862;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.15257905;
          } else {
            result[3] += 0.2055329;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            result[3] += -0.12884532;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[3] += 1.484638;
            } else {
              result[3] += 0.20277646;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.15366912;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[3] += 0.20508869;
          } else {
            result[3] += 0.21869832;
          }
        }
      }
    } else {
      result[3] += -0.15300274;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15302655;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[4] += -0.04307664;
      } else {
        result[4] += 0.20387325;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += 0.14719269;
            } else {
              result[4] += 0.2118114;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
              result[4] += 0.12516326;
            } else {
              result[4] += 0.15376209;
            }
          }
        } else {
          result[4] += 0.20195015;
        }
      } else {
        result[4] += 0.20277461;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[5] += -0.049251202;
            } else {
              result[5] += -0.14135729;
            }
          } else {
            result[5] += 0.12846905;
          }
        } else {
          result[5] += -0.15277645;
        }
      } else {
        result[5] += -0.15274237;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15305647;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15285958;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += -0.112139694;
            } else {
              result[5] += 0.28835747;
            }
          } else {
            result[5] += -0.15237191;
          }
        }
      }
    }
  } else {
    result[5] += 0.28009304;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[6] += -0.0227562;
          } else {
            result[6] += 0.21120192;
          }
        } else {
          result[6] += -0.15277636;
        }
      } else {
        result[6] += -0.15275037;
      }
    } else {
      result[6] += -0.15304899;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[6] += 0.20352516;
    } else {
      result[6] += -0.1514976;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.09585895;
            } else {
              result[7] += -0.14135729;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[7] += 0.19990958;
            } else {
              result[7] += 0.09999057;
            }
          }
        } else {
          result[7] += -0.1527217;
        }
      } else {
        result[7] += -0.15275037;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.12287935;
            } else {
              result[7] += 0.13631244;
            }
          } else {
            result[7] += -0.15362254;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.22099946;
            } else {
              result[7] += -0.14047344;
            }
          } else {
            result[7] += -0.15306896;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.15217581;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[7] += 0.06575154;
          } else {
            result[7] += -0.11406033;
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.20605737;
            } else {
              result[7] += 0.1788092;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[7] += -0.15520088;
            } else {
              result[7] += -0.16882744;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[7] += -0.24504307;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[7] += -0.15324976;
            } else {
              result[7] += -0.16231862;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[7] += 0.20254172;
            } else {
              result[7] += 0.20167656;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.14741156;
            } else {
              result[7] += 0.20155519;
            }
          }
        } else {
          result[7] += -0.15443191;
        }
      }
    } else {
      result[7] += -0.15294188;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[8] += -0.1350556;
        } else {
          result[8] += -0.1527892;
        }
      } else {
        result[8] += -0.15276289;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[8] += 0.107004695;
            } else {
              result[8] += 0.3193372;
            }
          } else {
            result[8] += -0.15602994;
          }
        } else {
          result[8] += -0.1535862;
        }
      } else {
        result[8] += -0.15309142;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[8] += -0.1530543;
          } else {
            result[8] += -0.093994;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.056052744;
            } else {
              result[8] += 0.16255362;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[8] += -0.03210274;
            } else {
              result[8] += -0.15189731;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[8] += -0.15289606;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += 0.46176496;
            } else {
              result[8] += -0.15190688;
            }
          }
        } else {
          result[8] += -0.1530522;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.093280494;
            } else {
              result[8] += 0.20520659;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[8] += -0.02312009;
            } else {
              result[8] += 0.3187157;
            }
          }
        } else {
          result[8] += -0.15430844;
        }
      } else {
        result[8] += -0.15294442;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.20115554;
            } else {
              result[9] += -0.14352857;
            }
          } else {
            result[9] += -0.15307312;
          }
        } else {
          result[9] += -0.15299423;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
            result[9] += -0.15307327;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[9] += 0.10085762;
            } else {
              result[9] += -0.15193994;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.20406912;
            } else {
              result[9] += -0.1508409;
            }
          } else {
            result[9] += -0.15273182;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15397638;
          } else {
            result[9] += 0.20388223;
          }
        } else {
          result[9] += -0.15172294;
        }
      } else {
        result[9] += -0.15292561;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.20393614;
      } else {
        result[9] += -0.14963341;
      }
    } else {
      result[9] += -0.15260182;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[10] += 0.12795575;
            } else {
              result[10] += -0.14134105;
            }
          } else {
            result[10] += -0.15287164;
          }
        } else {
          result[10] += -0.15308815;
        }
      } else {
        result[10] += -0.15313202;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += 0.11381327;
            } else {
              result[10] += 0.1930372;
            }
          } else {
            result[10] += -0.15005885;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[10] += -0.15098655;
            } else {
              result[10] += -0.08579385;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.1377491;
            } else {
              result[10] += -0.14802694;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.15291563;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[10] += -0.15317108;
            } else {
              result[10] += 0.20689298;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[10] += -0.14988907;
            } else {
              result[10] += 0.19107926;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[10] += -0.1802896;
            } else {
              result[10] += -0.15274094;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.15290342;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          result[11] += -0.15115127;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.073667355;
            } else {
              result[11] += 0.161979;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.26710817;
            } else {
              result[11] += -0.15307626;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[11] += -0.15285109;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.15336;
          } else {
            result[11] += -0.17065454;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[11] += 0.035011444;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.16268142;
            } else {
              result[11] += 0.124313734;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += -0.078112856;
            } else {
              result[11] += -0.15409574;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.018800836;
            } else {
              result[11] += 0.26009825;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.21687894;
            } else {
              result[11] += 0.16488285;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[11] += 0.1391174;
            } else {
              result[11] += 0.00044851226;
            }
          }
        } else {
          result[11] += -0.15324527;
        }
      }
    }
  } else {
    result[11] += -0.15293857;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          result[12] += -0.15136983;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.124630615;
            } else {
              result[12] += -0.1531677;
            }
          } else {
            result[12] += -0.15367259;
          }
        }
      } else {
        result[12] += -0.15347023;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.2393492;
            } else {
              result[12] += 0.075901985;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += 0.74927425;
            } else {
              result[12] += 0.1713293;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[12] += 0.021864194;
          } else {
            result[12] += -0.15383229;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += -0.14966974;
            } else {
              result[12] += -0.15370388;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += 0.09299754;
            } else {
              result[12] += -0.15368117;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.22713369;
            } else {
              result[12] += -0.1596842;
            }
          } else {
            result[12] += -0.15198746;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += -0.14928602;
            } else {
              result[12] += -0.07663998;
            }
          } else {
            result[12] += 0.2124488;
          }
        } else {
          result[12] += -0.15229079;
        }
      } else {
        result[12] += -0.1536759;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[12] += -0.15281922;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.21932767;
            } else {
              result[12] += -0.11564234;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.25778475;
            } else {
              result[12] += -0.1435958;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.14308698;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[12] += 0.14120707;
            } else {
              result[12] += 0.21542396;
            }
          } else {
            result[12] += -0.13373443;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.13202906;
            } else {
              result[13] += -0.15295956;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.02824625;
            } else {
              result[13] += -0.13452709;
            }
          }
        } else {
          result[13] += -0.15298009;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15278295;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[13] += -0.09788223;
            } else {
              result[13] += 0.12284358;
            }
          }
        } else {
          result[13] += 0.23488204;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.11011793;
            } else {
              result[13] += 0.18188708;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15274015;
            } else {
              result[13] += -0.057321515;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.043948606;
            } else {
              result[13] += 0.21513125;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.29034817;
            } else {
              result[13] += -0.15536378;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15227696;
            } else {
              result[13] += 0.033724412;
            }
          } else {
            result[13] += -0.15280575;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.14725305;
          } else {
            result[13] += 0.20963816;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1415)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.20689356;
            } else {
              result[13] += -0.14646491;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += 0.21243982;
            } else {
              result[13] += -0.06832016;
            }
          }
        } else {
          result[13] += 0.2020516;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[13] += -0.14905977;
        } else {
          result[13] += 0.1823214;
        }
      }
    } else {
      result[13] += -0.15138248;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[14] += -0.031174548;
            } else {
              result[14] += -0.14135729;
            }
          } else {
            result[14] += -0.15277636;
          }
        } else {
          result[14] += -0.15275037;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.017769769;
            } else {
              result[14] += 0.3859162;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.082152836;
            } else {
              result[14] += -0.15365307;
            }
          }
        } else {
          result[14] += -0.15265828;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.019264458;
            } else {
              result[14] += 0.17385247;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[14] += -0.15363438;
            } else {
              result[14] += -0.10663429;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[14] += -0.15169385;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[14] += 0.20910025;
            } else {
              result[14] += -0.14148688;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[14] += -0.15275206;
            } else {
              result[14] += 0.21097484;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.20074855;
            } else {
              result[14] += -0.15153688;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += -0.15185146;
            } else {
              result[14] += -0.14278221;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[14] += 0.2694962;
            } else {
              result[14] += -0.12728086;
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
              result[14] += -0.1530543;
            } else {
              result[14] += -0.13695273;
            }
          } else {
            result[14] += -0.15283376;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.23491044;
            } else {
              result[14] += -0.15750363;
            }
          } else {
            result[14] += -0.15277138;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.20772122;
          } else {
            result[14] += -0.20645756;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.06995716;
            } else {
              result[14] += -0.15263857;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.1234651;
            } else {
              result[14] += -0.15173541;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[14] += 0.010028441;
            } else {
              result[14] += 0.2275078;
            }
          } else {
            result[14] += -0.15317537;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.24108547;
            } else {
              result[14] += -0.13216607;
            }
          } else {
            result[14] += -0.18383305;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.15028301;
            } else {
              result[14] += 0.21795726;
            }
          } else {
            result[14] += -0.15279935;
          }
        } else {
          result[14] += 0.21641299;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.04641828;
          } else {
            result[0] += -0.13733384;
          }
        } else {
          result[0] += -0.15211503;
        }
      } else {
        result[0] += -0.15224947;
      }
    } else {
      result[0] += -0.15246189;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[0] += 0.154263;
            } else {
              result[0] += 0.40496254;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.032294683;
            } else {
              result[0] += 0.20949443;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[0] += 0.16987208;
            } else {
              result[0] += 0.11194404;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[0] += 0.190268;
            } else {
              result[0] += 0.17658667;
            }
          }
        }
      } else {
        result[0] += -0.14989167;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)740192)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.15209475;
            } else {
              result[0] += -0.008569238;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[0] += -0.15000562;
            } else {
              result[0] += 0.19418882;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[0] += -0.15206538;
            } else {
              result[0] += -0.19979045;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)9179)) {
              result[0] += -0.13598052;
            } else {
              result[0] += -0.15210252;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[0] += -0.14695369;
          } else {
            result[0] += 0.19147728;
          }
        } else {
          result[0] += -0.15204607;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15201445;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[1] += 0.099720165;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.049041208;
            } else {
              result[1] += 0.11256879;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += 0.033805255;
            } else {
              result[1] += 0.17193845;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
              result[1] += 0.12890297;
            } else {
              result[1] += 0.19273786;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += -0.15218371;
            } else {
              result[1] += -0.18734777;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.022798462;
            } else {
              result[1] += 0.18537453;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[1] += -0.09247072;
          } else {
            result[1] += -0.15188867;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[1] += -0.15218127;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.027175669;
            } else {
              result[1] += -0.15112902;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[1] += 0.08897036;
            } else {
              result[1] += -0.15365893;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[1] += -0.12852885;
            } else {
              result[1] += 0.04515856;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          result[1] += -0.1521193;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += -0.101879925;
            } else {
              result[1] += -0.15339847;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[1] += 0.25547352;
            } else {
              result[1] += -0.1431079;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            result[1] += -0.159117;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.26645216;
            } else {
              result[1] += -0.17556944;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.2080255;
            } else {
              result[1] += 0.051995438;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.21596794;
            } else {
              result[1] += -0.13749819;
            }
          }
        }
      } else {
        result[1] += -0.15213032;
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.05744301;
        } else {
          result[2] += -0.1376493;
        }
      } else {
        result[2] += -0.15208954;
      }
    } else {
      result[2] += -0.15237334;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.106573455;
      } else {
        result[2] += 0.18673879;
      }
    } else {
      result[2] += -0.15152165;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15236804;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.15177901;
          } else {
            result[3] += 0.1894139;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            result[3] += -0.12502056;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[3] += 0.48455352;
            } else {
              result[3] += 0.18702851;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.1529643;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[3] += 0.18888895;
          } else {
            result[3] += 0.19952127;
          }
        }
      }
    } else {
      result[3] += -0.1523357;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15233886;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
          result[4] += -0.024697572;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += 0.11849525;
            } else {
              result[4] += 0.1953828;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
              result[4] += 0.09606927;
            } else {
              result[4] += 0.11768452;
            }
          }
        }
      } else {
        result[4] += 0.18653105;
      }
    } else {
      result[4] += 0.18704134;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[5] += -0.04126718;
            } else {
              result[5] += -0.1376493;
            }
          } else {
            result[5] += 0.10406008;
          }
        } else {
          result[5] += -0.1520896;
        }
      } else {
        result[5] += -0.15205109;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15237951;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15217207;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += -0.1032825;
            } else {
              result[5] += 0.23076473;
            }
          } else {
            result[5] += -0.15164374;
          }
        }
      }
    }
  } else {
    result[5] += 0.25593886;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[6] += -0.016701771;
        } else {
          result[6] += -0.15208954;
        }
      } else {
        result[6] += -0.15205944;
      }
    } else {
      result[6] += 0.1888221;
    }
  } else {
    result[6] += -0.15237337;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.07468344;
            } else {
              result[7] += -0.1376493;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[7] += 0.17617899;
            } else {
              result[7] += 0.08399538;
            }
          }
        } else {
          result[7] += -0.15203144;
        }
      } else {
        result[7] += -0.15205944;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.11764737;
            } else {
              result[7] += 0.11250364;
            }
          } else {
            result[7] += -0.15265894;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.20516191;
            } else {
              result[7] += -0.13720417;
            }
          } else {
            result[7] += -0.15235277;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.15127416;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[7] += 0.06930283;
          } else {
            result[7] += -0.10686345;
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.18917546;
            } else {
              result[7] += 0.15717073;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[7] += -0.15775599;
            } else {
              result[7] += -0.17776155;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[7] += -0.22302176;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[7] += -0.15238532;
            } else {
              result[7] += -0.16006725;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[7] += 0.18655246;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.14259988;
            } else {
              result[7] += 0.18579668;
            }
          }
        } else {
          result[7] += -0.1525003;
        }
      }
    } else {
      result[7] += -0.15224144;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[8] += -0.13091786;
        } else {
          result[8] += -0.15209934;
        }
      } else {
        result[8] += -0.15206894;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.076340936;
            } else {
              result[8] += -0.14664714;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.24008861;
            } else {
              result[8] += 0.13284571;
            }
          }
        } else {
          result[8] += -0.15298107;
        }
      } else {
        result[8] += -0.1524092;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[8] += -0.15229695;
          } else {
            result[8] += -0.07140749;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += 0.12446212;
            } else {
              result[8] += 0.20618536;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[8] += -0.014523356;
            } else {
              result[8] += -0.15048867;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[8] += -0.1521785;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += 0.40600505;
            } else {
              result[8] += -0.15091704;
            }
          }
        } else {
          result[8] += -0.15235245;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.14173624;
            } else {
              result[8] += -0.21674201;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.2156574;
            } else {
              result[8] += -0.19480632;
            }
          }
        } else {
          result[8] += -0.15314674;
        }
      } else {
        result[8] += -0.15226068;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.14338616;
            } else {
              result[9] += -0.14005372;
            }
          } else {
            result[9] += -0.1523161;
          }
        } else {
          result[9] += -0.15224437;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          result[9] += -0.15234801;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.18760562;
            } else {
              result[9] += -0.14957929;
            }
          } else {
            result[9] += -0.1520281;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15304764;
          } else {
            result[9] += 0.18699268;
          }
        } else {
          result[9] += -0.15077268;
        }
      } else {
        result[9] += -0.15225258;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.18777432;
      } else {
        result[9] += -0.1480084;
      }
    } else {
      result[9] += -0.15186672;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[10] += 0.09946943;
            } else {
              result[10] += -0.13762721;
            }
          } else {
            result[10] += -0.15214953;
          }
        } else {
          result[10] += -0.15232843;
        }
      } else {
        result[10] += -0.15245719;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.1465979;
            } else {
              result[10] += -0.09845496;
            }
          } else {
            result[10] += -0.14861944;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[10] += -0.14972728;
            } else {
              result[10] += -0.072001666;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.11683963;
            } else {
              result[10] += -0.1459541;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.15223502;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[10] += -0.15229096;
            } else {
              result[10] += 0.19003448;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[10] += 0.16841105;
            } else {
              result[10] += -0.14928488;
            }
          } else {
            result[10] += -0.15754418;
          }
        }
      }
    }
  } else {
    result[10] += -0.15222044;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.134675;
            } else {
              result[11] += -0.15210098;
            }
          } else {
            result[11] += -0.15207048;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.060196232;
            } else {
              result[11] += 0.13800152;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.25430655;
            } else {
              result[11] += -0.15244517;
            }
          }
        }
      } else {
        result[11] += -0.15233031;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.02375239;
            } else {
              result[11] += 0.16523121;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.1630597;
            } else {
              result[11] += 0.052991275;
            }
          }
        } else {
          result[11] += -0.15492605;
        }
      } else {
        result[11] += -0.1519813;
      }
    }
  } else {
    result[11] += -0.15226074;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[12] += -0.1501411;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.06331756;
            } else {
              result[12] += 0.1980481;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += -0.15238062;
            } else {
              result[12] += 0.008686288;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += 0.1570383;
            } else {
              result[12] += -0.1517922;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[12] += -0.1525482;
            } else {
              result[12] += 0.2080804;
            }
          }
        }
      } else {
        result[12] += -0.15219566;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[12] += -0.14785774;
            } else {
              result[12] += -0.066452175;
            }
          } else {
            result[12] += 0.19731146;
          }
        } else {
          result[12] += -0.15150109;
        }
      } else {
        result[12] += -0.15305302;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[12] += -0.15212925;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.19890442;
            } else {
              result[12] += -0.11233527;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.23074952;
            } else {
              result[12] += -0.14013371;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.14022666;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[12] += 0.1217057;
            } else {
              result[12] += 0.19991231;
            }
          } else {
            result[12] += -0.12852064;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.12622009;
            } else {
              result[13] += -0.15222473;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.035380166;
            } else {
              result[13] += -0.12846398;
            }
          }
        } else {
          result[13] += -0.15225028;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15208909;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.13460988;
            } else {
              result[13] += -0.09888163;
            }
          }
        } else {
          result[13] += 0.20369416;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += 0.07557029;
            } else {
              result[13] += -0.18082327;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[13] += -0.10117235;
            } else {
              result[13] += 0.12146332;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[13] += -0.15795417;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.31199718;
            } else {
              result[13] += 0.05559803;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15146853;
            } else {
              result[13] += 0.0149583705;
            }
          } else {
            result[13] += -0.15211675;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.14505887;
          } else {
            result[13] += 0.18805599;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1415)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.19533779;
            } else {
              result[13] += -0.14226401;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += 0.18291938;
            } else {
              result[13] += -0.13562883;
            }
          }
        } else {
          result[13] += 0.18658602;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[13] += -0.14739223;
        } else {
          result[13] += 0.16503501;
        }
      }
    } else {
      result[13] += -0.14993678;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[14] += -0.024428928;
          } else {
            result[14] += -0.1376493;
          }
        } else {
          result[14] += -0.15208954;
        }
      } else {
        result[14] += -0.15205944;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.009013043;
            } else {
              result[14] += -0.15293482;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.19122635;
            } else {
              result[14] += 0.04412611;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.15156569;
            } else {
              result[14] += 0.14943676;
            }
          } else {
            result[14] += 0.29147258;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.15179403;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.14928871;
            } else {
              result[14] += -0.026891276;
            }
          }
        } else {
          result[14] += -0.15222721;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[14] += -0.15229693;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 2.2731624;
            } else {
              result[14] += -0.15136436;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += -0.15215237;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += 0.1405761;
            } else {
              result[14] += -0.15204576;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.19274858;
          } else {
            result[14] += -0.19949335;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.002945674;
            } else {
              result[14] += -0.14834824;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.15101701;
            } else {
              result[14] += -0.08192074;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
              result[14] += 0.061070807;
            } else {
              result[14] += -0.15212959;
            }
          } else {
            result[14] += -0.15236749;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.21565472;
            } else {
              result[14] += -0.12719637;
            }
          } else {
            result[14] += -0.1762204;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.14882404;
            } else {
              result[14] += 0.19556297;
            }
          } else {
            result[14] += -0.15210488;
          }
        } else {
          result[14] += 0.18875647;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.040798496;
          } else {
            result[0] += -0.13295424;
          }
        } else {
          result[0] += -0.15156138;
        }
      } else {
        result[0] += -0.15167877;
      }
    } else {
      result[0] += -0.15194337;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += 0.119408004;
            } else {
              result[0] += 0.17621687;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.057046574;
            } else {
              result[0] += 0.18513821;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            result[0] += 0.17692135;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.077177376;
            } else {
              result[0] += 0.1759272;
            }
          }
        }
      } else {
        result[0] += -0.14838707;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)740192)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.15144703;
            } else {
              result[0] += 0.004491771;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[0] += -0.14882366;
            } else {
              result[0] += 0.18198578;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            result[0] += -0.15159181;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)9179)) {
              result[0] += -0.13113137;
            } else {
              result[0] += -0.15156552;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[0] += -0.1450235;
          } else {
            result[0] += 0.18008439;
          }
        } else {
          result[0] += -0.15149738;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15137163;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[1] += 0.074053556;
            } else {
              result[1] += -0.13227268;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += 0.19151497;
            } else {
              result[1] += -0.1044069;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += 0.053038638;
            } else {
              result[1] += 0.17198814;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.1815309;
            } else {
              result[1] += 0.12704036;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[1] += -0.09118838;
        } else {
          result[1] += -0.15114829;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[1] += -0.15169962;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.03775315;
            } else {
              result[1] += 0.13870475;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.15211307;
            } else {
              result[1] += -0.07791975;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.221488;
            } else {
              result[1] += -0.14007276;
            }
          } else {
            result[1] += 0.24377179;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[1] += -0.15159118;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.146922;
            } else {
              result[1] += 0.22400685;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.15530318;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.4593012;
            } else {
              result[1] += -0.15961832;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += 0.08107763;
            } else {
              result[1] += 0.19020239;
            }
          } else {
            result[1] += -0.151218;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.15170555;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[1] += 0.3371998;
          } else {
            result[1] += -0.14941223;
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.049506925;
        } else {
          result[2] += -0.13331522;
        }
      } else {
        result[2] += -0.15155424;
      }
    } else {
      result[2] += -0.15185669;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.08552737;
      } else {
        result[2] += 0.17618644;
      }
    } else {
      result[2] += -0.15081236;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.1518492;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.15107849;
          } else {
            result[3] += 0.17876574;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            result[3] += -0.1215009;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[3] += 0.32770383;
            } else {
              result[3] += 0.17663042;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.15240681;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[3] += 0.17798367;
          } else {
            result[3] += 0.18684492;
          }
        }
      }
    } else {
      result[3] += -0.15180834;
    }
  }
}

