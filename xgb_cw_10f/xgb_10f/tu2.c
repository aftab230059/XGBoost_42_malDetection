
#include "header.h"

void predict_unit2(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15180568;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.11091118;
            } else {
              result[4] += 0.0045769056;
            }
          } else {
            result[4] += 0.18405822;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 0.07991485;
            } else {
              result[4] += 0.049572367;
            }
          } else {
            result[4] += 0.10172317;
          }
        }
      } else {
        result[4] += 0.17606059;
      }
    } else {
      result[4] += 0.17643692;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[5] += -0.034085598;
            } else {
              result[5] += -0.13331522;
            }
          } else {
            result[5] += 0.08636691;
          }
        } else {
          result[5] += -0.15155429;
        }
      } else {
        result[5] += -0.15151289;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15186086;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15164137;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += -0.056003008;
            } else {
              result[5] += -0.120587595;
            }
          } else {
            result[5] += -0.15103614;
          }
        }
      }
    }
  } else {
    result[5] += 0.23870783;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[6] += -0.01166736;
        } else {
          result[6] += -0.15155424;
        }
      } else {
        result[6] += -0.15152162;
      }
    } else {
      result[6] += 0.17729431;
    }
  } else {
    result[6] += -0.1518567;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.0586924;
            } else {
              result[7] += -0.13331522;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[7] += 0.15667614;
            } else {
              result[7] += 0.071825825;
            }
          }
        } else {
          result[7] += -0.15149246;
        }
      } else {
        result[7] += -0.15152162;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.11256421;
            } else {
              result[7] += 0.09153851;
            }
          } else {
            result[7] += -0.15194336;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.19223985;
            } else {
              result[7] += -0.13394885;
            }
          } else {
            result[7] += -0.15176393;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.15033978;
        } else {
          result[7] += -0.035016138;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.18103239;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.17531621;
            } else {
              result[7] += -0.1965704;
            }
          } else {
            result[7] += -0.02539253;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.15781096;
            } else {
              result[7] += 0.044354092;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.21615772;
            } else {
              result[7] += 0.18798818;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[7] += 0.17413084;
            } else {
              result[7] += -0.367297;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5629642)) {
              result[7] += -0.15292257;
            } else {
              result[7] += 0.42665878;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.0712453;
            } else {
              result[7] += -0.15271264;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.1605106;
            } else {
              result[7] += 0.17509273;
            }
          }
        }
      } else {
        result[7] += -0.15170485;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[8] += -0.12654057;
        } else {
          result[8] += -0.1515618;
        }
      } else {
        result[8] += -0.15152888;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.058222923;
            } else {
              result[8] += -0.14123958;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.2133038;
            } else {
              result[8] += 0.11243109;
            }
          }
        } else {
          result[8] += -0.1524368;
        }
      } else {
        result[8] += -0.15183145;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      result[8] += -0.15165459;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.06039478;
            } else {
              result[8] += 0.1533641;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.027759815;
            } else {
              result[8] += -0.15257153;
            }
          }
        } else {
          result[8] += -0.15224922;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += -0.0008781485;
            } else {
              result[8] += -0.13910104;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.093398854;
            } else {
              result[8] += -0.15175873;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
              result[8] += -0.15074612;
            } else {
              result[8] += 0.115916215;
            }
          } else {
            result[8] += 0.13144317;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.10854373;
            } else {
              result[9] += -0.1360499;
            }
          } else {
            result[9] += -0.15172844;
          }
        } else {
          result[9] += -0.15166253;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
            result[9] += -0.1518679;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[9] += 0.09929072;
            } else {
              result[9] += -0.15015137;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.17675278;
            } else {
              result[9] += -0.14827551;
            }
          } else {
            result[9] += -0.15147525;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15220602;
          } else {
            result[9] += 0.17612143;
          }
        } else {
          result[9] += -0.14987284;
        }
      } else {
        result[9] += -0.15173824;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.1771775;
      } else {
        result[9] += -0.14624104;
      }
    } else {
      result[9] += -0.15126723;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[10] += 0.079731055;
            } else {
              result[10] += -0.13328758;
            }
          } else {
            result[10] += -0.15158771;
          }
        } else {
          result[10] += -0.15173942;
        }
      } else {
        result[10] += -0.1519398;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[10] += 0.11634173;
            } else {
              result[10] += -0.14704885;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[10] += -0.12440579;
            } else {
              result[10] += -0.0016273669;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[10] += 0.16897799;
            } else {
              result[10] += -0.29287353;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[10] += -0.14783487;
            } else {
              result[10] += -0.05826673;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.15170014;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[10] += -0.15155268;
            } else {
              result[10] += 0.17901161;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[10] += -0.14898589;
            } else {
              result[10] += 0.15023424;
            }
          } else {
            result[10] += -0.15601826;
          }
        }
      }
    }
  } else {
    result[10] += -0.151694;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.13081248;
            } else {
              result[11] += -0.15156308;
            }
          } else {
            result[11] += -0.15153004;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += 0.053472552;
            } else {
              result[11] += 0.16776963;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.24168874;
            } else {
              result[11] += -0.1518823;
            }
          }
        }
      } else {
        result[11] += -0.15178984;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += 0.039120957;
            } else {
              result[11] += 0.12736249;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.15313764;
            } else {
              result[11] += 0.06434242;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.17005606;
            } else {
              result[11] += 0.10977293;
            }
          } else {
            result[11] += -0.15185036;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[11] += 0.11773228;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.1453397;
            } else {
              result[11] += -0.07924953;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.15435901;
            } else {
              result[11] += 0.011333268;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.15174198;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[12] += -0.13197792;
        } else {
          result[12] += -0.15161586;
        }
      } else {
        result[12] += -0.15158124;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[12] += 0.024597012;
            } else {
              result[12] += -0.152352;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += 0.16857456;
            } else {
              result[12] += 0.2489677;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.1517125;
            } else {
              result[12] += 0.21775787;
            }
          } else {
            result[12] += -0.15405115;
          }
        }
      } else {
        result[12] += -0.15165636;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[12] += -0.14623727;
            } else {
              result[12] += -0.053291824;
            }
          } else {
            result[12] += 0.18424325;
          }
        } else {
          result[12] += -0.15076613;
        }
      } else {
        result[12] += -0.15246148;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[12] += -0.15159822;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.18560626;
            } else {
              result[12] += -0.10958896;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.21275896;
            } else {
              result[12] += -0.1360211;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.13682552;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[12] += 0.106987126;
            } else {
              result[12] += 0.18817854;
            }
          } else {
            result[12] += -0.12453033;
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
              result[13] += -0.11958791;
            } else {
              result[13] += -0.15164106;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.12255722;
            } else {
              result[13] += -0.043463584;
            }
          }
        } else {
          result[13] += -0.15165854;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15155096;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.13322718;
            } else {
              result[13] += -0.093049556;
            }
          }
        } else {
          result[13] += 0.17977299;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.10619227;
            } else {
              result[13] += 0.12088468;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15125512;
            } else {
              result[13] += -0.030750837;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.064409874;
            } else {
              result[13] += 0.20695014;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[13] += -0.22267534;
            } else {
              result[13] += -0.100358754;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15077585;
            } else {
              result[13] += -0.0022650906;
            }
          } else {
            result[13] += -0.15158446;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.14254126;
          } else {
            result[13] += 0.17316304;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.18246628;
            } else {
              result[13] += -0.1397041;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.21111934;
            } else {
              result[13] += -0.12836628;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[13] += 0.19947071;
          } else {
            result[13] += 0.17602457;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[13] += -0.1616237;
          } else {
            result[13] += 0.18055326;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.044323847;
            } else {
              result[13] += 0.16495281;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[13] += -0.07467443;
            } else {
              result[13] += 0.1983742;
            }
          }
        }
      }
    } else {
      result[13] += -0.14877756;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[14] += -0.018582705;
          } else {
            result[14] += -0.13331522;
          }
        } else {
          result[14] += -0.15155424;
        }
      } else {
        result[14] += -0.15152162;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += 0.011613767;
            } else {
              result[14] += -0.14829838;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.17915064;
            } else {
              result[14] += 0.033655364;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.15068734;
            } else {
              result[14] += 0.13575812;
            }
          } else {
            result[14] += 0.22550268;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.151111;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.14675131;
            } else {
              result[14] += -0.008079373;
            }
          }
        } else {
          result[14] += -0.15164529;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)303)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += -0.1516981;
            } else {
              result[14] += -0.12920296;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15162961;
            } else {
              result[14] += -0.12746845;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.1818532;
            } else {
              result[14] += -0.193032;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.09033419;
            } else {
              result[14] += -0.14957911;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[14] += 0.3534647;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.082892686;
            } else {
              result[14] += 0.076924205;
            }
          } else {
            result[14] += -0.1484377;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.060539007;
            } else {
              result[14] += -0.15424024;
            }
          } else {
            result[14] += -0.15172356;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.1966429;
            } else {
              result[14] += -0.122180425;
            }
          } else {
            result[14] += -0.17029804;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.06080421;
            } else {
              result[14] += -0.15171544;
            }
          } else {
            result[14] += -0.15022148;
          }
        } else {
          result[14] += 0.16603239;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.035986047;
          } else {
            result[0] += -0.12783523;
          }
        } else {
          result[0] += -0.15112932;
        }
      } else {
        result[0] += -0.15123622;
      }
    } else {
      result[0] += -0.15155101;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += 0.0956637;
            } else {
              result[0] += 0.16619226;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.04822448;
            } else {
              result[0] += 0.17285499;
            }
          }
        } else {
          result[0] += -0.14676653;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            result[0] += 0.16596477;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.053280063;
            } else {
              result[0] += 0.16826469;
            }
          }
        } else {
          result[0] += 0.17823154;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[0] += -0.15123865;
            } else {
              result[0] += -0.086734876;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.10370917;
            } else {
              result[0] += 0.37072492;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[0] += -0.1486877;
          } else {
            result[0] += 0.17211771;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          result[0] += -0.15117145;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)9179)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.1518887;
            } else {
              result[0] += -0.011027053;
            }
          } else {
            result[0] += -0.15116453;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15081328;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[1] += 0.047321662;
            } else {
              result[1] += 0.14621106;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.15145615;
            } else {
              result[1] += 0.0063447873;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.22503383;
            } else {
              result[1] += 0.05986051;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.17413701;
            } else {
              result[1] += 0.1061053;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[1] += -0.08966036;
        } else {
          result[1] += -0.15055297;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[1] += -0.15123461;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.017605608;
            } else {
              result[1] += 0.10862666;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.15154406;
            } else {
              result[1] += -0.06401223;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.19230337;
            } else {
              result[1] += -0.13613416;
            }
          } else {
            result[1] += 0.23029445;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[1] += -0.15118904;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.14507581;
            } else {
              result[1] += 0.19725345;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += 0.06330932;
            } else {
              result[1] += 0.15154135;
            }
          } else {
            result[1] += -0.15060616;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += -0.1560602;
            } else {
              result[1] += -0.07570811;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += 0.0053273826;
            } else {
              result[1] += 0.21483666;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.15127864;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[1] += 0.28435814;
          } else {
            result[1] += -0.14684078;
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.042194743;
        } else {
          result[2] += -0.12824994;
        }
      } else {
        result[2] += -0.15113673;
      }
    } else {
      result[2] += -0.1514616;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.06922213;
      } else {
        result[2] += 0.16885409;
      }
    } else {
      result[2] += -0.15016395;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15144801;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.15048534;
          } else {
            result[3] += 0.17136087;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            result[3] += -0.11520308;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[3] += 0.25450778;
            } else {
              result[3] += 0.16921291;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.15194164;
        } else {
          result[3] += 0.17514618;
        }
      }
    } else {
      result[3] += -0.1514199;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15138906;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.10406908;
            } else {
              result[4] += 0.00025234406;
            }
          } else {
            result[4] += 0.1759627;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 0.06299699;
            } else {
              result[4] += 0.008416157;
            }
          } else {
            result[4] += 0.076346286;
          }
        }
      } else {
        result[4] += 0.16878729;
      }
    } else {
      result[4] += 0.16908538;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[5] += -0.027737336;
            } else {
              result[5] += -0.12824994;
            }
          } else {
            result[5] += 0.07285011;
          }
        } else {
          result[5] += -0.15113679;
        }
      } else {
        result[5] += -0.15109304;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15146342;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15122937;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += -0.038585626;
            } else {
              result[5] += -0.11605783;
            }
          } else {
            result[5] += -0.150509;
          }
        }
      }
    }
  } else {
    result[5] += 0.20333947;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += -0.0075649577;
        } else {
          result[6] += 0.16912149;
        }
      } else {
        result[6] += -0.15113673;
      }
    } else {
      result[6] += -0.15110222;
    }
  } else {
    result[6] += -0.15146162;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.04642813;
            } else {
              result[7] += -0.12824994;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[7] += 0.15003434;
            } else {
              result[7] += 0.06503123;
            }
          }
        } else {
          result[7] += -0.15107001;
        }
      } else {
        result[7] += -0.15110222;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
              result[7] += -0.10429813;
            } else {
              result[7] += 0.12783341;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
              result[7] += 0.16958924;
            } else {
              result[7] += -0.15130046;
            }
          }
        } else {
          result[7] += -0.15127549;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.14950353;
        } else {
          result[7] += -0.02083246;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.17265013;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[7] += -0.17073448;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[7] += -0.20115031;
            } else {
              result[7] += -0.17972308;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.14094251;
            } else {
              result[7] += 0.029476581;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.19159245;
            } else {
              result[7] += 0.17771769;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.16487622;
            } else {
              result[7] += -0.16255632;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += -0.20608115;
            } else {
              result[7] += -0.15489751;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[7] += 0.16882783;
            } else {
              result[7] += 0.15825672;
            }
          } else {
            result[7] += -0.14963134;
          }
        }
      } else {
        result[7] += -0.15125616;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[8] += -0.12188341;
        } else {
          result[8] += -0.15114264;
        }
      } else {
        result[8] += -0.15110782;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.036933657;
            } else {
              result[8] += 0.19567938;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.16396706;
            } else {
              result[8] += -0.15108185;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[8] += 0.17693901;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.30110854;
            } else {
              result[8] += -0.15208372;
            }
          }
        }
      } else {
        result[8] += -0.15143192;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      result[8] += -0.15124509;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.042131614;
            } else {
              result[8] += 0.13067475;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.054201502;
            } else {
              result[8] += -0.1519202;
            }
          }
        } else {
          result[8] += -0.1518085;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.014048816;
            } else {
              result[8] += -0.13323933;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.07758987;
            } else {
              result[8] += -0.15136674;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
              result[8] += -0.15000716;
            } else {
              result[8] += 0.11198631;
            }
          } else {
            result[8] += 0.11777708;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.085150436;
            } else {
              result[9] += -0.13139045;
            }
          } else {
            result[9] += -0.15127261;
          }
        } else {
          result[9] += -0.15121076;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
            result[9] += -0.15146388;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[9] += 0.084691465;
            } else {
              result[9] += -0.1493138;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.16886768;
            } else {
              result[9] += -0.14684868;
            }
          } else {
            result[9] += -0.15103757;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.15139428;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[9] += 0.16854972;
          } else {
            result[9] += -0.14895864;
          }
        }
      } else {
        result[9] += -0.15134698;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.16956191;
      } else {
        result[9] += -0.14421487;
      }
    } else {
      result[9] += -0.15076825;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[10] += 0.065267675;
            } else {
              result[10] += -0.12821646;
            }
          } else {
            result[10] += -0.15114968;
          }
        } else {
          result[10] += -0.15128344;
        }
      } else {
        result[10] += -0.15154801;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[10] += 0.057376716;
            } else {
              result[10] += -0.15178642;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.16001278;
            } else {
              result[10] += 0.18031955;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[10] += 0.15748188;
            } else {
              result[10] += -0.25870895;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[10] += -0.14579615;
            } else {
              result[10] += -0.05092709;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.15080222;
            } else {
              result[10] += 0.17202863;
            }
          } else {
            result[10] += -0.15128434;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += -0.08192892;
            } else {
              result[10] += -0.15717861;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.17101915;
            } else {
              result[10] += -0.10455193;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.15127693;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.12669522;
            } else {
              result[11] += -0.15114363;
            }
          } else {
            result[11] += -0.15110873;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.045850664;
            } else {
              result[11] += 0.17723012;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.22987902;
            } else {
              result[11] += -0.15150474;
            }
          }
        }
      } else {
        result[11] += -0.15140253;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += 0.08174473;
            } else {
              result[11] += 0.1574561;
            }
          } else {
            result[11] += -0.15064229;
          }
        } else {
          result[11] += -0.15490906;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.17675503;
            } else {
              result[11] += 0.07519068;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.21750526;
            } else {
              result[11] += 0.025684683;
            }
          }
        } else {
          result[11] += -0.15554063;
        }
      }
    }
  } else {
    result[11] += -0.1513351;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[12] += -0.12799987;
        } else {
          result[12] += -0.1511849;
        }
      } else {
        result[12] += -0.15114817;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[12] += 0.025641194;
            } else {
              result[12] += -0.1517686;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += 0.1551032;
            } else {
              result[12] += 0.21849911;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.15088531;
            } else {
              result[12] += 0.20406307;
            }
          } else {
            result[12] += -0.15352148;
          }
        }
      } else {
        result[12] += -0.15121631;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15119758;
      } else {
        result[12] += 0.1848144;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[12] += 0.17535974;
          } else {
            result[12] += -0.12884495;
          }
        } else {
          result[12] += -0.1508398;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.11746002;
            } else {
              result[12] += 0.33586493;
            }
          } else {
            result[12] += -0.15133943;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[12] += -0.13253915;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[12] += 0.06549414;
            } else {
              result[12] += 0.17311116;
            }
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
              result[13] += -0.111829855;
            } else {
              result[13] += -0.15118578;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.052846577;
            } else {
              result[13] += -0.1173157;
            }
          }
        } else {
          result[13] += -0.15113144;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15113571;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[13] += -0.08968747;
            } else {
              result[13] += 0.13958421;
            }
          }
        } else {
          result[13] += 0.16232371;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.08832187;
            } else {
              result[13] += -0.16076484;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.13386558;
            } else {
              result[13] += 0.19472308;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[13] += -0.16209964;
            } else {
              result[13] += -0.02256184;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[13] += -0.23214544;
            } else {
              result[13] += -0.14952815;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[13] += -0.17435968;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
              result[13] += 0.47127143;
            } else {
              result[13] += -0.14894284;
            }
          }
        } else {
          result[13] += -0.15117393;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.17270131;
            } else {
              result[13] += -0.13689387;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.20180292;
            } else {
              result[13] += -0.12169423;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            result[13] += 0.18869379;
          } else {
            result[13] += 0.16876662;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[13] += -0.16056594;
          } else {
            result[13] += 0.16943732;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.039357323;
            } else {
              result[13] += 0.15480238;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[13] += -0.06963399;
            } else {
              result[13] += 0.18889184;
            }
          }
        }
      }
    } else {
      result[13] += -0.14765418;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[14] += -0.013673996;
          } else {
            result[14] += -0.12824994;
          }
        } else {
          result[14] += -0.15113673;
        }
      } else {
        result[14] += -0.15110222;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += 0.011757253;
            } else {
              result[14] += -0.14669958;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.16956188;
            } else {
              result[14] += 0.025758864;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.14937624;
            } else {
              result[14] += 0.12354636;
            }
          } else {
            result[14] += 0.5063706;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.15051907;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.14517452;
            } else {
              result[14] += 0.0045787888;
            }
          }
        } else {
          result[14] += -0.15122718;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[14] += -0.15123336;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.24079187;
            } else {
              result[14] += -0.14947806;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15122947;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += 0.11967576;
            } else {
              result[14] += -0.15098296;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.2640405;
            } else {
              result[14] += -0.11175404;
            }
          } else {
            result[14] += -0.15091181;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 1.5029988;
            } else {
              result[14] += -0.15131287;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.14911942;
            } else {
              result[14] += -0.04463674;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.040820144;
            } else {
              result[14] += 0.11261734;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15168947;
            } else {
              result[14] += 0.15002386;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.07926399;
            } else {
              result[14] += 0.2240346;
            }
          } else {
            result[14] += -0.15232822;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.059483558;
            } else {
              result[14] += -0.15120867;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.14553982;
            } else {
              result[14] += -0.1511545;
            }
          }
        } else {
          result[14] += 0.14218365;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.0317577;
          } else {
            result[0] += -0.121902496;
          }
        } else {
          result[0] += -0.15078811;
        }
      } else {
        result[0] += -0.15088953;
      }
    } else {
      result[0] += -0.15125293;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += 0.07519533;
            } else {
              result[0] += 0.16043183;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.016469827;
            } else {
              result[0] += 0.1707376;
            }
          }
        } else {
          result[0] += -0.14493221;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[0] += 0.032465644;
            } else {
              result[0] += 0.15782426;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.07777207;
            } else {
              result[0] += 0.1530834;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.16399813;
            } else {
              result[0] += 0.14747001;
            }
          } else {
            result[0] += 0.17303555;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[0] += -0.15081352;
            } else {
              result[0] += -0.0756257;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.0938469;
            } else {
              result[0] += 0.24068482;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[0] += -0.14756946;
          } else {
            result[0] += 0.16604836;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          result[0] += -0.15083131;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)9179)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.15148672;
            } else {
              result[0] += -0.001130449;
            }
          } else {
            result[0] += -0.15085492;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.15029998;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[1] += 0.05212564;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.049260642;
            } else {
              result[1] += 0.08651485;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.47362417;
            } else {
              result[1] += 0.16803312;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.14719166;
            } else {
              result[1] += 0.09141731;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[1] += -0.088937044;
        } else {
          result[1] += -0.1499332;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[1] += -0.15086874;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.0058597107;
            } else {
              result[1] += 0.088295326;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.15109237;
            } else {
              result[1] += -0.049456857;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.16523555;
            } else {
              result[1] += -0.13130271;
            }
          } else {
            result[1] += 0.20172727;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[1] += -0.15088058;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.14260045;
            } else {
              result[1] += 0.18207633;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.1548106;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.31879228;
            } else {
              result[1] += -0.16013536;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.20609072;
            } else {
              result[1] += 0.070631914;
            }
          } else {
            result[1] += -0.15006395;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.15092668;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[1] += 0.24901319;
          } else {
            result[1] += -0.14406575;
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.035608985;
        } else {
          result[2] += -0.122374676;
        }
      } else {
        result[2] += -0.15080656;
      }
    } else {
      result[2] += -0.1511622;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.056362603;
      } else {
        result[2] += 0.16365534;
      }
    } else {
      result[2] += -0.14952692;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15114279;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14990458;
          } else {
            result[3] += 0.16564293;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            result[3] += -0.10818913;
          } else {
            result[3] += 0.16412549;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.15155317;
        } else {
          result[3] += 0.16947564;
        }
      }
    } else {
      result[3] += -0.15112284;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15106148;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.098012306;
            } else {
              result[4] += -0.0068177436;
            }
          } else {
            result[4] += 0.17003126;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 0.05020171;
            } else {
              result[4] += 0.0044507454;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
              result[4] += 0.055251814;
            } else {
              result[4] += 0.06786261;
            }
          }
        }
      } else {
        result[4] += 0.16363582;
      }
    } else {
      result[4] += 0.1638927;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[5] += -0.022267174;
          } else {
            result[5] += -0.122374676;
          }
        } else {
          result[5] += 0.062117003;
        }
      } else {
        result[5] += -0.15080662;
      }
    } else {
      result[5] += -0.15076174;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15116219;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.150902;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += -0.022025581;
            } else {
              result[5] += -0.111188285;
            }
          } else {
            result[5] += -0.15002492;
          }
        }
      }
    } else {
      result[5] += 0.18187046;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += -0.004344243;
        } else {
          result[6] += 0.16306973;
        }
      } else {
        result[6] += -0.15080656;
      }
    } else {
      result[6] += -0.15077144;
    }
  } else {
    result[6] += -0.1511622;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.036849804;
            } else {
              result[7] += -0.122374676;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[7] += 0.13937253;
            } else {
              result[7] += 0.056050494;
            }
          }
        } else {
          result[7] += -0.1507341;
        }
      } else {
        result[7] += -0.15077144;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.101293474;
            } else {
              result[7] += 0.06994289;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
              result[7] += 0.16185585;
            } else {
              result[7] += -0.15074189;
            }
          }
        } else {
          result[7] += -0.15070443;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.14860035;
        } else {
          result[7] += -0.0066356207;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.16672875;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.16710362;
            } else {
              result[7] += -0.17957805;
            }
          } else {
            result[7] += -0.045187097;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.12952542;
            } else {
              result[7] += 0.018889131;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.17642145;
            } else {
              result[7] += 0.1705277;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += 0.15194073;
            } else {
              result[7] += 0.16367702;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5629642)) {
              result[7] += -0.15259543;
            } else {
              result[7] += 0.25623396;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.05295527;
            } else {
              result[7] += -0.15021753;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.1684653;
            } else {
              result[7] += 0.16211298;
            }
          }
        }
      } else {
        result[7] += -0.15087448;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[8] += -0.11687764;
            } else {
              result[8] += -0.1508113;
            }
          } else {
            result[8] += -0.15077588;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
              result[8] += 0.026296115;
            } else {
              result[8] += -0.15071782;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[8] += -0.12823844;
            } else {
              result[8] += 0.16912727;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.15205164;
            } else {
              result[8] += -0.048163924;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[8] += -0.15094256;
            } else {
              result[8] += -0.17353639;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[8] += -0.15465088;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.16928865;
            } else {
              result[8] += -0.085710675;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.095373794;
            } else {
              result[8] += -0.08217608;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 0.1981176;
            } else {
              result[8] += -0.15799744;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[8] += 0.19170018;
            } else {
              result[8] += 0.28644693;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[8] += -0.24046677;
            } else {
              result[8] += 0.18910742;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[8] += -0.15532885;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.14872235;
            } else {
              result[8] += 0.16992228;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.26773137;
            } else {
              result[8] += -0.15234467;
            }
          }
        }
      }
    }
  } else {
    result[8] += -0.15094477;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.068312265;
            } else {
              result[9] += -0.12596548;
            }
          } else {
            result[9] += -0.15091509;
          }
        } else {
          result[9] += -0.15085673;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
            result[9] += -0.15115437;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[9] += 0.072639406;
            } else {
              result[9] += -0.14843461;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.16317853;
            } else {
              result[9] += -0.14519055;
            }
          } else {
            result[9] += -0.1506931;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.15048487;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[9] += 0.16164331;
          } else {
            result[9] += -0.14797263;
          }
        }
      } else {
        result[9] += -0.15104613;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.1641786;
      } else {
        result[9] += -0.14188558;
      }
    } else {
      result[9] += -0.15033123;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[10] += 0.054172006;
            } else {
              result[10] += -0.12233567;
            }
          } else {
            result[10] += -0.15080416;
          }
        } else {
          result[10] += -0.15092707;
        }
      } else {
        result[10] += -0.1512503;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[10] += 0.10723438;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.15310797;
            } else {
              result[10] += 0.04228583;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.15789285;
            } else {
              result[10] += 0.056849908;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[10] += -0.1434331;
            } else {
              result[10] += -0.032062244;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.15017946;
            } else {
              result[10] += 0.16670723;
            }
          } else {
            result[10] += -0.15096265;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.15498881;
            } else {
              result[10] += -0.06671342;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.16555306;
            } else {
              result[10] += -0.09598481;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.15095198;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.12229998;
            } else {
              result[11] += -0.1508121;
            }
          } else {
            result[11] += -0.15077658;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += 0.035231326;
            } else {
              result[11] += 0.1331713;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.21747567;
            } else {
              result[11] += -0.15117535;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.15111455;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += -0.018056277;
            } else {
              result[11] += 0.15197116;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.1445658;
            } else {
              result[11] += -0.08001396;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[11] += 0.092272416;
            } else {
              result[11] += -0.18005146;
            }
          } else {
            result[11] += -0.15284799;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.17044583;
            } else {
              result[11] += 0.079305984;
            }
          } else {
            result[11] += -0.14875609;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[11] += 0.07312542;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.14020675;
            } else {
              result[11] += -0.047138296;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.116900854;
            } else {
              result[11] += -0.0144165205;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.15102407;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[12] += -0.12375271;
        } else {
          result[12] += -0.15084516;
        }
      } else {
        result[12] += -0.15080765;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[12] += 0.02514234;
            } else {
              result[12] += -0.1513086;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += 0.14362678;
            } else {
              result[12] += 0.19980514;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.15012614;
            } else {
              result[12] += 0.19572847;
            }
          } else {
            result[12] += -0.15303071;
          }
        }
      } else {
        result[12] += -0.15087496;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15088744;
      } else {
        result[12] += 0.16240454;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[12] += 0.16973531;
          } else {
            result[12] += -0.12252271;
          }
        } else {
          result[12] += -0.15020132;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.12790291;
            } else {
              result[12] += 0.046428986;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.62001115;
            } else {
              result[12] += -0.15082254;
            }
          }
        } else {
          result[12] += -0.15099625;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[13] += -0.12508908;
            } else {
              result[13] += -0.15096398;
            }
          } else {
            result[13] += -0.15091944;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += 0.002628683;
            } else {
              result[13] += 0.988972;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[13] += -0.13198496;
            } else {
              result[13] += 0.76451486;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[13] += -0.15043576;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.92259777;
            } else {
              result[13] += -0.10007861;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.15097322;
            } else {
              result[13] += -0.13478199;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.12108499;
            } else {
              result[13] += 0.9247725;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.08344716;
            } else {
              result[13] += -0.10958691;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[13] += 0.20260964;
            } else {
              result[13] += 0.715466;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.16084309;
            } else {
              result[13] += -0.2039012;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += -0.041492842;
            } else {
              result[13] += -0.15134764;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.1799371;
          } else {
            result[13] += -0.150232;
          }
        } else {
          result[13] += -0.15085858;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.16439605;
            } else {
              result[13] += -0.13402133;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.19412893;
            } else {
              result[13] += -0.11274622;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            result[13] += 0.18132883;
          } else {
            result[13] += 0.16372745;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14591692;
            } else {
              result[13] += -0.01429601;
            }
          } else {
            result[13] += 0.15815435;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[13] += -0.003369628;
            } else {
              result[13] += -0.09075584;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.092380814;
            } else {
              result[13] += 0.18161269;
            }
          }
        }
      }
    } else {
      result[13] += -0.14625451;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[14] += -0.009679846;
          } else {
            result[14] += -0.122374676;
          }
        } else {
          result[14] += -0.15080656;
        }
      } else {
        result[14] += -0.15077144;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.012236782;
            } else {
              result[14] += 0.07212455;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.15915021;
            } else {
              result[14] += 0.0117196655;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.14845465;
            } else {
              result[14] += 0.12243728;
            }
          } else {
            result[14] += 0.35294774;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.14979501;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.1431884;
            } else {
              result[14] += 0.017247593;
            }
          }
        } else {
          result[14] += -0.15087663;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[14] += -0.15086767;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.16020319;
            } else {
              result[14] += -0.14850049;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15092579;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += 0.0938993;
            } else {
              result[14] += -0.15052933;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.24340059;
            } else {
              result[14] += -0.102631636;
            }
          } else {
            result[14] += -0.1503703;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.36537865;
            } else {
              result[14] += -0.15057231;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.14810471;
            } else {
              result[14] += -0.025747186;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.035272203;
            } else {
              result[14] += 0.08770121;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15115584;
            } else {
              result[14] += 0.13976598;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.07412399;
            } else {
              result[14] += 0.19777136;
            }
          } else {
            result[14] += -0.15153822;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.14620681;
            } else {
              result[14] += 0.12348968;
            }
          } else {
            result[14] += -0.15083946;
          }
        } else {
          result[14] += 0.12341768;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.027947148;
          } else {
            result[0] += -0.115150906;
          }
        } else {
          result[0] += -0.15051195;
        }
      } else {
        result[0] += -0.15061241;
      }
    } else {
      result[0] += -0.15102726;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[0] += 0.07261686;
            } else {
              result[0] += 0.1666464;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
              result[0] += -0.1439837;
            } else {
              result[0] += -0.057066064;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[0] += 0.23220128;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[0] += 0.0925458;
            } else {
              result[0] += 0.15164346;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          result[0] += 0.16019332;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.12473946;
            } else {
              result[0] += 0.15902315;
            }
          } else {
            result[0] += 0.17910753;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[0] += -0.15044421;
            } else {
              result[0] += -0.057455193;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[0] += 0.14159392;
            } else {
              result[0] += -0.1533525;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[0] += -0.1462931;
          } else {
            result[0] += 0.16173634;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          result[0] += -0.15055054;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)9179)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.15112208;
            } else {
              result[0] += 0.008965053;
            }
          } else {
            result[0] += -0.15060666;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.14979574;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[1] += 0.041683488;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.043856807;
            } else {
              result[1] += 0.07174219;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.3088774;
            } else {
              result[1] += 0.16366765;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.14430775;
            } else {
              result[1] += 0.08421449;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[1] += -0.0876262;
        } else {
          result[1] += -0.14927304;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[1] += -0.15057203;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += -0.0020314236;
            } else {
              result[1] += 0.07095773;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.15071943;
            } else {
              result[1] += -0.03471432;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.1483499;
            } else {
              result[1] += -0.1254001;
            }
          } else {
            result[1] += 0.19597629;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[1] += -0.15064561;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.13999498;
            } else {
              result[1] += 0.16727802;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
              result[1] += 0.046508767;
            } else {
              result[1] += 0.1216399;
            }
          } else {
            result[1] += -0.14949086;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += -0.15588702;
            } else {
              result[1] += -0.082465574;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += 0.015822625;
            } else {
              result[1] += 0.18731475;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.15061107;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[1] += 0.21472304;
          } else {
            result[1] += -0.13607404;
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.02982543;
        } else {
          result[2] += -0.11567865;
        }
      } else {
        result[2] += -0.15053885;
      }
    } else {
      result[2] += -0.15093456;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.04591514;
      } else {
        result[2] += 0.1598677;
      }
    } else {
      result[2] += -0.14885105;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.1509101;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14928445;
          } else {
            result[3] += 0.16160956;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            result[3] += -0.10043486;
          } else {
            result[3] += 0.16030937;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.15121758;
        } else {
          result[3] += 0.1654921;
        }
      }
    } else {
      result[3] += -0.15088584;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15079719;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.0932904;
            } else {
              result[4] += -0.012092071;
            }
          } else {
            result[4] += 0.16550612;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)52239)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)50473)) {
              result[4] += 0.03904414;
            } else {
              result[4] += -0.0027897628;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)54161)) {
              result[4] += 0.0908166;
            } else {
              result[4] += 0.035339247;
            }
          }
        }
      } else {
        result[4] += 0.15989077;
      }
    } else {
      result[4] += 0.1601349;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[5] += -0.017690498;
          } else {
            result[5] += -0.11567865;
          }
        } else {
          result[5] += 0.053195786;
        }
      } else {
        result[5] += -0.15047683;
      }
    } else {
      result[5] += -0.15055038;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15093386;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15064701;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += -0.004587789;
            } else {
              result[5] += -0.10479764;
            }
          } else {
            result[5] += -0.14954056;
          }
        }
      }
    } else {
      result[5] += 0.16724092;
    }
  }
}

