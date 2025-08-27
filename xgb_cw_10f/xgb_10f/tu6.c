
#include "header.h"

void predict_unit6(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
              result[12] += 0.012772326;
            } else {
              result[12] += -0.12470129;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.13521323;
            } else {
              result[12] += -0.16363253;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += -0.1506747;
            } else {
              result[12] += -0.054032885;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[12] += 0.077893026;
            } else {
              result[12] += -0.14832793;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.14739941;
            } else {
              result[12] += -0.21715264;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[12] += -0.120302044;
            } else {
              result[12] += 0.1990699;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.16396861;
            } else {
              result[12] += -0.15597475;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.14915949;
            } else {
              result[12] += 0.12392509;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.08214243;
            } else {
              result[12] += -0.14892903;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[12] += 0.13185953;
            } else {
              result[12] += -0.11249963;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            result[12] += -0.15132612;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.14047395;
            } else {
              result[12] += -0.089287736;
            }
          }
        }
      } else {
        result[12] += -0.14875042;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[12] += -0.012210207;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.03657647;
            } else {
              result[12] += -0.13450244;
            }
          }
        } else {
          result[12] += 0.1023044;
        }
      } else {
        result[12] += -0.14874175;
      }
    } else {
      result[12] += -0.14928177;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.042816203;
            } else {
              result[13] += 0.0279965;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += -0.0020272962;
            } else {
              result[13] += 0.3655579;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[13] += -0.15006575;
            } else {
              result[13] += -0.08445306;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[13] += 0.3902114;
            } else {
              result[13] += 0.10396536;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.0005163635;
            } else {
              result[13] += 0.089510895;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[13] += -0.06466789;
            } else {
              result[13] += -0.14784665;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.12928419;
            } else {
              result[13] += -0.03260969;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[13] += 0.13193312;
            } else {
              result[13] += -0.15590632;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.14731577;
          } else {
            result[13] += -0.0976521;
          }
        } else {
          result[13] += 0.15240118;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[13] += -0.14089629;
          } else {
            result[13] += 0.100657545;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)315)) {
              result[13] += 0.13142197;
            } else {
              result[13] += 0.0050966064;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.0050436608;
            } else {
              result[13] += 0.13074526;
            }
          }
        }
      }
    }
  } else {
    result[13] += -0.14789829;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.0062987367;
            } else {
              result[14] += -0.094585165;
            }
          } else {
            result[14] += -0.1475395;
          }
        } else {
          result[14] += -0.148005;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          result[14] += -0.15557864;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[14] += -0.03299745;
            } else {
              result[14] += 0.1467246;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += -0.26459712;
            } else {
              result[14] += 0.0010288411;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.07394293;
            } else {
              result[14] += 0.1321613;
            }
          } else {
            result[14] += 0.15909083;
          }
        } else {
          result[14] += -0.14183576;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          result[14] += -0.14950375;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[14] += 0.20219862;
            } else {
              result[14] += -0.12163549;
            }
          } else {
            result[14] += -0.1157786;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        result[14] += -0.1497847;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += -0.0051594684;
            } else {
              result[14] += -0.1399865;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[14] += 0.099552974;
            } else {
              result[14] += 0.4649358;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.14989395;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
              result[14] += -0.14733416;
            } else {
              result[14] += 0.102984816;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.013962754;
            } else {
              result[14] += -0.14808984;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.15369213;
            } else {
              result[14] += -0.07874312;
            }
          }
        } else {
          result[14] += -0.14829159;
        }
      } else {
        result[14] += -0.15090133;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[0] += 0.018682389;
          } else {
            result[0] += -0.14743713;
          }
        } else {
          result[0] += -0.14806715;
        }
      } else {
        result[0] += -0.15010199;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += 0.026812337;
            } else {
              result[0] += 0.07431729;
            }
          } else {
            result[0] += -0.14360319;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[0] += -0.13879777;
          } else {
            result[0] += 0.18361002;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
            result[0] += -0.15018737;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[0] += -0.1286473;
            } else {
              result[0] += 0.06709792;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += -0.042043623;
            } else {
              result[0] += -0.14440623;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.15326959;
            } else {
              result[0] += -0.11718658;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[0] += -0.14792489;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[0] += -0.14813611;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.014503769;
            } else {
              result[0] += -0.11630432;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[0] += 0.4036842;
            } else {
              result[0] += -0.0074480795;
            }
          } else {
            result[0] += -0.13363962;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            result[0] += -0.14684601;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[0] += 0.093280606;
            } else {
              result[0] += -0.13244681;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[0] += 0.15424767;
            } else {
              result[0] += -0.005454695;
            }
          } else {
            result[0] += -0.08338784;
          }
        }
      } else {
        result[0] += -0.1465038;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.13683341;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += 0.0021809468;
            } else {
              result[1] += 0.04746385;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.02104036;
            } else {
              result[1] += -0.15104109;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += 0.032123063;
            } else {
              result[1] += -0.07025938;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.2104306;
            } else {
              result[1] += 0.054702975;
            }
          }
        }
      } else {
        result[1] += -0.14898024;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[1] += -0.13914075;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[1] += -0.12630545;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.14659283;
            } else {
              result[1] += -0.08175136;
            }
          }
        }
      } else {
        result[1] += -0.15231206;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[1] += -0.10069597;
          } else {
            result[1] += 0.15976453;
          }
        } else {
          result[1] += 0.25015345;
        }
      } else {
        result[1] += -0.11728006;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += -0.0002166721;
        } else {
          result[2] += 0.008890664;
        }
      } else {
        result[2] += -0.14713323;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.14690802;
      } else {
        result[2] += -0.12314081;
      }
    }
  } else {
    result[2] += -0.15011603;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.14986144;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.13908267;
            } else {
              result[3] += 0.14932942;
            }
          } else {
            result[3] += 0.14981166;
          }
        } else {
          result[3] += -0.08056961;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.1483566;
        } else {
          result[3] += 0.14997727;
        }
      }
    } else {
      result[3] += -0.14952888;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14993078;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
            result[4] += -0.015334338;
          } else {
            result[4] += -0.118879914;
          }
        } else {
          result[4] += -0.019429864;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[4] += -0.14172573;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.079751395;
            } else {
              result[4] += 0.020267596;
            }
          } else {
            result[4] += -0.123437196;
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
              result[4] += -0.02514641;
            } else {
              result[4] += 0.03320275;
            }
          } else {
            result[4] += 0.14595354;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 0.007739496;
            } else {
              result[4] += -0.012592856;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
              result[4] += 0.0139153935;
            } else {
              result[4] += 0.019119464;
            }
          }
        }
      } else {
        result[4] += 0.14820147;
      }
    } else {
      result[4] += 0.15030795;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.0028872262;
        } else {
          result[5] += 0.013215254;
        }
      } else {
        result[5] += -0.1465681;
      }
    } else {
      result[5] += -0.14735422;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.15010844;
      } else {
        result[5] += 0.11532977;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.14812347;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[5] += 0.077594675;
            } else {
              result[5] += 0.23529226;
            }
          } else {
            result[5] += -0.1260725;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += -0.10254576;
            } else {
              result[5] += -0.03854595;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[5] += 0.15464388;
            } else {
              result[5] += -0.03584904;
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
          result[6] += 0.006229719;
        } else {
          result[6] += 0.129235;
        }
      } else {
        result[6] += -0.14670193;
      }
    } else {
      result[6] += -0.14735425;
    }
  } else {
    result[6] += -0.15011603;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += -0.0044055698;
            } else {
              result[7] += -0.054456558;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.15118851;
            } else {
              result[7] += -0.097849496;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -0.15479219;
            } else {
              result[7] += -0.2975623;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[7] += 0.010699451;
            } else {
              result[7] += -0.17600062;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[7] += 0.15073128;
          } else {
            result[7] += -0.09781872;
          }
        } else {
          result[7] += -0.10647616;
        }
      }
    } else {
      result[7] += 0.15047452;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[7] += 0.14979795;
        } else {
          result[7] += -0.09323059;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.14880505;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += -0.024102604;
            } else {
              result[7] += 0.2287128;
            }
          } else {
            result[7] += -0.13895173;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[7] += 0.15046324;
        } else {
          result[7] += 0.00876948;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.013486479;
            } else {
              result[7] += -0.1477472;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[7] += -0.008534308;
            } else {
              result[7] += 0.16115484;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[7] += -0.1488866;
          } else {
            result[7] += 0.15032804;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += 0.012296924;
            } else {
              result[8] += -0.18362452;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[8] += 0.18462789;
            } else {
              result[8] += 0.15468423;
            }
          }
        } else {
          result[8] += -0.15395431;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[8] += -0.15027744;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.45088038;
            } else {
              result[8] += 0.018362615;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.060407776;
            } else {
              result[8] += 0.15113011;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.8508627;
            } else {
              result[8] += 0.03402687;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.15006626;
            } else {
              result[8] += 0.03042491;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += -0.025944503;
            } else {
              result[8] += -0.11816349;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[8] += 0.040042616;
            } else {
              result[8] += 0.14523035;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += -0.08776985;
            } else {
              result[8] += 0.50972337;
            }
          } else {
            result[8] += -0.1255294;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.519605;
            } else {
              result[8] += -0.14855279;
            }
          } else {
            result[8] += -0.15067655;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[8] += -0.15126528;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[8] += -0.18158093;
        } else {
          result[8] += -0.14799474;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[8] += -0.14141758;
          } else {
            result[8] += 0.14858378;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[8] += -0.24857321;
          } else {
            result[8] += -0.1436102;
          }
        }
      } else {
        result[8] += -0.14977735;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.013467865;
      } else {
        result[9] += -0.14697742;
      }
    } else {
      result[9] += -0.14758974;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          result[9] += -0.14998478;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.13368845;
            } else {
              result[9] += -0.082850054;
            }
          } else {
            result[9] += -0.14535384;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[9] += 0.14497176;
        } else {
          result[9] += -0.13738814;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.13809407;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.116514325;
            } else {
              result[9] += 0.0933773;
            }
          } else {
            result[9] += -0.10543686;
          }
        }
      } else {
        result[9] += -0.14861327;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.01488752;
            } else {
              result[10] += -0.1472502;
            }
          } else {
            result[10] += -0.14762104;
          }
        } else {
          result[10] += -0.15004826;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[10] += 0.031317096;
            } else {
              result[10] += 0.10527093;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[10] += 0.2639864;
            } else {
              result[10] += 0.009532057;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.14817958;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.13329174;
            } else {
              result[10] += 0.024021989;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[10] += -0.14946735;
      } else {
        result[10] += 0.088900074;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14928193;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[10] += -0.14166011;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[10] += 0.038366698;
            } else {
              result[10] += 0.17229521;
            }
          } else {
            result[10] += -0.1245004;
          }
        }
      } else {
        result[10] += -0.1491348;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[11] += -0.09184728;
            } else {
              result[11] += 0.006999682;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += -0.15392204;
            } else {
              result[11] += 0.034770623;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.12922686;
            } else {
              result[11] += -0.17557181;
            }
          } else {
            result[11] += -0.175373;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.15100935;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.0122994855;
            } else {
              result[11] += 0.1068421;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += -0.035546813;
            } else {
              result[11] += -0.15856965;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += 0.02425731;
            } else {
              result[11] += 0.15210463;
            }
          } else {
            result[11] += -0.15393925;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += 0.1395221;
            } else {
              result[11] += -0.13689354;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.0611484;
            } else {
              result[11] += -0.11268614;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[11] += 0.026622018;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.069458015;
            } else {
              result[11] += -0.1992795;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.03685939;
            } else {
              result[11] += -0.09243307;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.14984186;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[12] += -0.06648798;
            } else {
              result[12] += -0.14729199;
            }
          } else {
            result[12] += -0.14785424;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.026806474;
            } else {
              result[12] += -0.15193503;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.1499944;
            } else {
              result[12] += 0.0057611056;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[12] += -0.15011148;
          } else {
            result[12] += -0.17276251;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[12] += 1.8254848;
          } else {
            result[12] += -0.14759976;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            result[12] += 0.09127529;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.1468078;
            } else {
              result[12] += 0.11499679;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)28681)) {
              result[12] += 0.15361251;
            } else {
              result[12] += 0.19074811;
            }
          } else {
            result[12] += 0.062336296;
          }
        }
      } else {
        result[12] += -0.14163007;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.15053362;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.16680394;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[12] += -0.024668166;
            } else {
              result[12] += -0.14789182;
            }
          } else {
            result[12] += -0.14869289;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[12] += -0.095180616;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
            result[12] += 0.15550427;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[12] += -0.008366243;
            } else {
              result[12] += 0.13129944;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.17707308;
        } else {
          result[12] += 0.12567784;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[13] += -0.058228705;
          } else {
            result[13] += -0.14798924;
          }
        } else {
          result[13] += -0.14832263;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += -0.0012489124;
            } else {
              result[13] += -0.135887;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.10171961;
            } else {
              result[13] += 0.0031407992;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.1552971;
            } else {
              result[13] += -0.09891125;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[13] += 0.36460796;
            } else {
              result[13] += -0.05640113;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.14591865;
          } else {
            result[13] += -0.09322205;
          }
        } else {
          result[13] += 0.15174285;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[13] += -0.1366011;
          } else {
            result[13] += 0.09360127;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)315)) {
              result[13] += 0.12585291;
            } else {
              result[13] += 0.009718618;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.0009053516;
            } else {
              result[13] += 0.12657976;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
      result[13] += -0.14930293;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[13] += -0.13292928;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.12724379;
            } else {
              result[13] += -0.07662709;
            }
          } else {
            result[13] += 0.23889126;
          }
        }
      } else {
        result[13] += -0.14812067;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += -0.0015385539;
            } else {
              result[14] += -0.087296;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.02112221;
            } else {
              result[14] += -0.14734282;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[14] += -0.15295848;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.53830135;
            } else {
              result[14] += -0.0050516687;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.06185121;
            } else {
              result[14] += -0.107567325;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.15442948;
            } else {
              result[14] += -0.09763587;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)277)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.13813636;
            } else {
              result[14] += 0.07876815;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.1425611;
            } else {
              result[14] += -0.1363695;
            }
          }
        }
      }
    } else {
      result[14] += -0.14904597;
    }
  } else {
    result[14] += -0.14920962;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.015315421;
            } else {
              result[0] += -0.146572;
            }
          } else {
            result[0] += -0.14743644;
          }
        } else {
          result[0] += -0.14998308;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[0] += 0.04169954;
            } else {
              result[0] += 0.01304205;
            }
          } else {
            result[0] += -0.14180815;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[0] += -0.13754314;
          } else {
            result[0] += 0.15892006;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          result[0] += -0.1499736;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[0] += -0.124155045;
          } else {
            result[0] += 0.06257964;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[0] += 0.13403055;
            } else {
              result[0] += -0.13612382;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += -0.14770758;
            } else {
              result[0] += -0.0069992123;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.12775187;
            } else {
              result[0] += 0.1610678;
            }
          } else {
            result[0] += -0.11371199;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[0] += -0.14727212;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[0] += -0.14771925;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.015081741;
            } else {
              result[0] += -0.11184545;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[0] += 0.2958954;
            } else {
              result[0] += -0.094358094;
            }
          } else {
            result[0] += -0.13072182;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            result[0] += -0.14593317;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[0] += 0.07526569;
            } else {
              result[0] += -0.12768334;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.15079169;
            } else {
              result[0] += -0.07602237;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.097419865;
            } else {
              result[0] += -0.15588021;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[0] += -0.08349397;
            } else {
              result[0] += 0.065060176;
            }
          } else {
            result[0] += -0.11935013;
          }
        } else {
          result[0] += -0.14838175;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.13380739;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.006407224;
            } else {
              result[1] += -0.16023943;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.16854998;
            } else {
              result[1] += -0.027480891;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.1207701;
            } else {
              result[1] += -0.15969795;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[1] += -0.14242734;
            } else {
              result[1] += 0.053013008;
            }
          }
        }
      } else {
        result[1] += -0.14849079;
      }
    }
  } else {
    result[1] += -0.14209743;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += -0.0002972832;
        } else {
          result[2] += 0.008024487;
        }
      } else {
        result[2] += -0.14625381;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.14575884;
      } else {
        result[2] += -0.11663611;
      }
    }
  } else {
    result[2] += -0.15006572;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.14974762;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[3] += 0.14729153;
            } else {
              result[3] += -0.12858753;
            }
          } else {
            result[3] += 0.1491314;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.12451837;
          } else {
            result[3] += 0.14604484;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.147938;
        } else {
          result[3] += 0.14932778;
        }
      }
    } else {
      result[3] += -0.1493279;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.149831;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
            result[4] += 0.00037660784;
          } else {
            result[4] += -0.11182951;
          }
        } else {
          result[4] += 0.00070569536;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[4] += -0.13914753;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.06529357;
            } else {
              result[4] += 0.038991664;
            }
          } else {
            result[4] += -0.11701417;
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
              result[4] += 0.03507252;
            } else {
              result[4] += -0.021620788;
            }
          } else {
            result[4] += 0.1445176;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)41722)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)34214)) {
              result[4] += 0.009711597;
            } else {
              result[4] += -0.0037532153;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)44042)) {
              result[4] += 0.043615866;
            } else {
              result[4] += 0.002722238;
            }
          }
        }
      } else {
        result[4] += 0.14742638;
      }
    } else {
      result[4] += 0.15011513;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.0023130872;
        } else {
          result[5] += 0.011754842;
        }
      } else {
        result[5] += -0.14541773;
      }
    } else {
      result[5] += -0.14653042;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.15005597;
      } else {
        result[5] += 0.10893566;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.14750385;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[5] += 0.26764876;
            } else {
              result[5] += 0.08211433;
            }
          } else {
            result[5] += -0.12001509;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += -0.09728361;
            } else {
              result[5] += -0.034031853;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += 0.11089752;
            } else {
              result[5] += -0.11455537;
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
          result[6] += 0.0050823498;
        } else {
          result[6] += 0.12595493;
        }
      } else {
        result[6] += -0.14561395;
      }
    } else {
      result[6] += -0.14653045;
    }
  } else {
    result[6] += -0.15006573;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.018317536;
            } else {
              result[7] += -0.020519264;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[7] += 0.042072102;
            } else {
              result[7] += 0.15119043;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[7] += -0.14952551;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[7] += 0.0025332905;
            } else {
              result[7] += -0.11743924;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[7] += 0.1504188;
          } else {
            result[7] += -0.090932146;
          }
        } else {
          result[7] += -0.09909477;
        }
      }
    } else {
      result[7] += 0.1502652;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[7] += 0.14803383;
        } else {
          result[7] += -0.089147955;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.14845073;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[7] += -0.12010566;
            } else {
              result[7] += 0.10252961;
            }
          } else {
            result[7] += -0.1361097;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[7] += 0.15029678;
        } else {
          result[7] += 0.009235385;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += -0.0073501896;
            } else {
              result[7] += -0.15720624;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[7] += -0.012959782;
            } else {
              result[7] += 0.16052607;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[7] += -0.14692065;
          } else {
            result[7] += 0.1501112;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.0059204656;
            } else {
              result[8] += 0.16238268;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += 0.17389148;
            } else {
              result[8] += -0.038866483;
            }
          }
        } else {
          result[8] += -0.15323547;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[8] += -0.15025635;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.25109696;
            } else {
              result[8] += -0.017140538;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.05554454;
            } else {
              result[8] += 0.14510955;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.09498602;
            } else {
              result[8] += 0.021067217;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[8] += -0.07489776;
            } else {
              result[8] += 0.068264045;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += -0.023077518;
            } else {
              result[8] += -0.11217465;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[8] += 0.06131102;
            } else {
              result[8] += 0.14414722;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += -0.08457665;
            } else {
              result[8] += 0.3045948;
            }
          } else {
            result[8] += -0.11912479;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.30443174;
            } else {
              result[8] += -0.14802726;
            }
          } else {
            result[8] += -0.15023883;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.16043752;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.14640301;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.14680825;
          } else {
            result[8] += -0.085879005;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[8] += -0.22438021;
        } else {
          result[8] += -0.14884812;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.010824233;
      } else {
        result[9] += -0.14597277;
      }
    } else {
      result[9] += -0.14683042;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          result[9] += -0.14989133;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 0.09665637;
          } else {
            result[9] += -0.14380573;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.08645995;
          } else {
            result[9] += 0.14757629;
          }
        } else {
          result[9] += -0.13364655;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.13625067;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.11053016;
            } else {
              result[9] += 0.08490736;
            }
          } else {
            result[9] += -0.09711217;
          }
        }
      } else {
        result[9] += -0.14814886;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.012169599;
            } else {
              result[10] += -0.14632832;
            }
          } else {
            result[10] += -0.14687024;
          }
        } else {
          result[10] += -0.14992766;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[10] += 0.030011388;
            } else {
              result[10] += -0.11626553;
            }
          } else {
            result[10] += -0.14031775;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.14762427;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.13001683;
            } else {
              result[10] += 0.019434972;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[10] += -0.14929014;
      } else {
        result[10] += 0.09438669;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14902991;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[10] += -0.1392445;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[10] += 0.02737481;
            } else {
              result[10] += 0.17485388;
            }
          } else {
            result[10] += -0.11859418;
          }
        }
      } else {
        result[10] += -0.14879465;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += -0.0025966503;
            } else {
              result[11] += 0.02194689;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += -0.1528424;
            } else {
              result[11] += 0.019855067;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[11] += 0.12862119;
            } else {
              result[11] += -0.1646856;
            }
          } else {
            result[11] += -0.15324663;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.1128246;
            } else {
              result[11] += 0.07875757;
            }
          } else {
            result[11] += -0.16930589;
          }
        } else {
          result[11] += -0.14396754;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[11] += -0.14327757;
        } else {
          result[11] += -0.20862585;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[11] += 0.32525513;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.05558444;
            } else {
              result[11] += 0.035295725;
            }
          } else {
            result[11] += -0.15070632;
          }
        }
      }
    }
  } else {
    result[11] += -0.14975362;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
              result[12] += 0.0101566035;
            } else {
              result[12] += -0.109732695;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.12984309;
            } else {
              result[12] += -0.16091768;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += -0.15036856;
            } else {
              result[12] += -0.03465605;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[12] += 0.07323155;
            } else {
              result[12] += -0.14716278;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[12] += -0.15216324;
            } else {
              result[12] += 0.02633039;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[12] += -0.113056;
            } else {
              result[12] += 0.17740425;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.15687326;
            } else {
              result[12] += -0.15182284;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.14782435;
            } else {
              result[12] += 0.10824358;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[12] += 0.052725833;
            } else {
              result[12] += 0.07359133;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[12] += -0.14717852;
            } else {
              result[12] += 0.062629044;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[12] += 0.12679155;
            } else {
              result[12] += -0.09200897;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += -0.114060365;
            } else {
              result[12] += 0.040443182;
            }
          }
        }
      } else {
        result[12] += -0.14743158;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[12] += -0.007490248;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.025037127;
            } else {
              result[12] += -0.12991837;
            }
          }
        } else {
          result[12] += 0.09209188;
        }
      } else {
        result[12] += -0.14769602;
      }
    } else {
      result[12] += -0.14881903;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[13] += -0.07769119;
            } else {
              result[13] += -0.14775966;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.028112287;
            } else {
              result[13] += -0.037705943;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[13] += -0.147115;
            } else {
              result[13] += -0.031266164;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[13] += -0.16180784;
            } else {
              result[13] += -0.26241702;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.017232802;
            } else {
              result[13] += 0.12732293;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.13296187;
            } else {
              result[13] += 0.1903636;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.09307457;
            } else {
              result[13] += 0.17631406;
            }
          } else {
            result[13] += -0.12004214;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.14436263;
          } else {
            result[13] += -0.081208974;
          }
        } else {
          result[13] += 0.15110436;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[13] += -0.13273698;
          } else {
            result[13] += 0.086471;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.097610764;
            } else {
              result[13] += -0.00093372614;
            }
          } else {
            result[13] += 0.12699668;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
      result[13] += -0.14859822;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[13] += -0.12933047;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            result[13] += 0.037010714;
          } else {
            result[13] += 0.2047875;
          }
        }
      } else {
        result[13] += -0.14733668;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.008364262;
            } else {
              result[14] += 0.025981372;
            }
          } else {
            result[14] += -0.14701661;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[14] += -0.15247811;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.03808007;
            } else {
              result[14] += 0.32777342;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.05531986;
            } else {
              result[14] += -0.09956989;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.14765386;
            } else {
              result[14] += -0.09035651;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)277)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.13415022;
            } else {
              result[14] += 0.07183342;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.13510743;
            } else {
              result[14] += -0.13240272;
            }
          }
        }
      }
    } else {
      result[14] += -0.14868177;
    }
  } else {
    result[14] += -0.14890485;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[0] += 0.014705169;
            } else {
              result[0] += -0.14545108;
            }
          } else {
            result[0] += -0.14663619;
          }
        } else {
          result[0] += -0.14986023;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.023273893;
            } else {
              result[0] += 0.09632057;
            }
          } else {
            result[0] += -0.1397012;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[0] += -0.13602772;
          } else {
            result[0] += 0.14082307;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          result[0] += -0.14968996;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[0] += -0.12010794;
          } else {
            result[0] += 0.065992214;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[0] += 0.12038001;
            } else {
              result[0] += -0.13453856;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += -0.14712954;
            } else {
              result[0] += -0.0068925587;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.11789068;
            } else {
              result[0] += 0.1569371;
            }
          } else {
            result[0] += -0.1051601;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[0] += -0.14640613;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[0] += -0.14721893;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.00894042;
            } else {
              result[0] += -0.107437246;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[0] += 0.36029288;
            } else {
              result[0] += 0.02796424;
            }
          } else {
            result[0] += -0.12710172;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            result[0] += -0.14482844;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.06396495;
            } else {
              result[0] += -0.12728676;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[0] += 0.14546975;
            } else {
              result[0] += -0.02887225;
            }
          } else {
            result[0] += -0.081718706;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[0] += -0.079523854;
            } else {
              result[0] += 0.053278457;
            }
          } else {
            result[0] += -0.11297094;
          }
        } else {
          result[0] += -0.1477757;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.13014428;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += 0.00032535463;
            } else {
              result[1] += 0.050697252;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.113117166;
            } else {
              result[1] += 0.095624514;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.03264886;
            } else {
              result[1] += -0.025520755;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.15367326;
            } else {
              result[1] += 0.084819466;
            }
          }
        }
      } else {
        result[1] += -0.14810824;
      }
    }
  } else {
    result[1] += -0.15191272;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0015678557;
        } else {
          result[2] += 0.0075807204;
        }
      } else {
        result[2] += -0.14514382;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.1445397;
      } else {
        result[2] += -0.10929455;
      }
    }
  } else {
    result[2] += -0.15001093;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.14961833;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[3] += 0.1464635;
            } else {
              result[3] += -0.123803586;
            }
          } else {
            result[3] += 0.14861211;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.121082;
          } else {
            result[3] += 0.14490351;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.14745033;
        } else {
          result[3] += 0.14858592;
        }
      }
    } else {
      result[3] += -0.14908065;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.14971761;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
            result[4] += 0.015208044;
          } else {
            result[4] += -0.10406151;
          }
        } else {
          result[4] += 0.020334978;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[4] += -0.13590087;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.049859364;
            } else {
              result[4] += 0.17598498;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
              result[4] += -0.03146113;
            } else {
              result[4] += -0.10976904;
            }
          }
        }
      }
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
          result[4] += -0.024930762;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            result[4] += 0.15580581;
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.01784068;
            } else {
              result[4] += 0.008198453;
            }
          }
        }
      } else {
        result[4] += 0.14655827;
      }
    } else {
      result[4] += 0.14994001;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += 0.0038057447;
        } else {
          result[5] += 0.010663906;
        }
      } else {
        result[5] += -0.14392106;
      }
    } else {
      result[5] += -0.14548673;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.14999919;
      } else {
        result[5] += 0.10201843;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.14671624;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[5] += 0.039008588;
            } else {
              result[5] += 0.122599065;
            }
          } else {
            result[5] += -0.11311176;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += -0.09049136;
            } else {
              result[5] += -0.012263826;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[5] += 0.13999413;
            } else {
              result[5] += -0.032338552;
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
          result[6] += 0.006159835;
        } else {
          result[6] += 0.12240057;
        }
      } else {
        result[6] += -0.1442087;
      }
    } else {
      result[6] += -0.14548676;
    }
  } else {
    result[6] += -0.15001093;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 0.0053073717;
            } else {
              result[7] += -0.05502435;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[7] += 0.15085284;
            } else {
              result[7] += 0.028394593;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[7] += -0.14867797;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[7] += 0.011335846;
            } else {
              result[7] += -0.112587444;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[7] += 0.15006807;
          } else {
            result[7] += -0.08315744;
          }
        } else {
          result[7] += -0.09175897;
        }
      }
    } else {
      result[7] += 0.15008824;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[7] += 0.14615239;
        } else {
          result[7] += -0.085549496;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.14804882;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[7] += -0.11329808;
            } else {
              result[7] += 0.09062421;
            }
          } else {
            result[7] += -0.13325028;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[7] += 0.15016271;
        } else {
          result[7] += 0.0045899563;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5629642)) {
            result[7] += -0.14932042;
          } else {
            result[7] += 0.12674868;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.11395462;
            } else {
              result[7] += -0.105609514;
            }
          } else {
            result[7] += 0.15008555;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.0013608815;
            } else {
              result[8] += 0.08358814;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += -0.17417039;
            } else {
              result[8] += -0.15006784;
            }
          }
        } else {
          result[8] += 0.21435001;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            result[8] += -0.17113629;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += -0.41836396;
            } else {
              result[8] += -0.12552774;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.16781485;
            } else {
              result[8] += -0.08770602;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += -0.15342996;
            } else {
              result[8] += 0.112726994;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 1.7837651;
            } else {
              result[8] += 0.2946553;
            }
          } else {
            result[8] += -0.14881967;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[8] += 0.048971456;
            } else {
              result[8] += -0.1485642;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[8] += -0.04120894;
            } else {
              result[8] += -0.14598761;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[8] += -0.14117497;
            } else {
              result[8] += 0.13515942;
            }
          } else {
            result[8] += 0.13994819;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[8] += 0.019842321;
            } else {
              result[8] += 0.09823696;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 0.16112447;
            } else {
              result[8] += -0.0037007672;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15919818;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.1453224;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[8] += 0.14536862;
          } else {
            result[8] += -0.082063645;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[8] += -0.20514251;
        } else {
          result[8] += -0.14840832;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[9] += 0.010990697;
      } else {
        result[9] += -0.14467344;
      }
    } else {
      result[9] += -0.14586787;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
          result[9] += -0.14985602;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[9] += 0.0918556;
          } else {
            result[9] += -0.1423471;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)351236864)) {
            result[9] += 0.08038243;
          } else {
            result[9] += 0.1466847;
          }
        } else {
          result[9] += -0.12904742;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.13410881;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.10649683;
            } else {
              result[9] += 0.07729997;
            }
          } else {
            result[9] += -0.08850537;
          }
        }
      } else {
        result[9] += -0.14751877;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.012094995;
            } else {
              result[10] += -0.14513463;
            }
          } else {
            result[10] += -0.14591843;
          }
        } else {
          result[10] += -0.14980346;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += 0.028584935;
            } else {
              result[10] += 0.11879793;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[10] += 0.2570444;
            } else {
              result[10] += 0.009694181;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.14703834;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.12634616;
            } else {
              result[10] += 0.016765388;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        result[10] += -0.14907306;
      } else {
        result[10] += 0.10293134;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[10] += -0.14870304;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[10] += -0.13635205;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += 0.12191287;
            } else {
              result[10] += -0.10995338;
            }
          } else {
            result[10] += -0.11782253;
          }
        }
      } else {
        result[10] += -0.14835684;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.064346164;
            } else {
              result[11] += -0.14633207;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.0030008901;
            } else {
              result[11] += 0.026299966;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            result[11] += -0.15216106;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += 0.02149455;
            } else {
              result[11] += -0.1499583;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[11] += 0.12610991;
            } else {
              result[11] += -0.17339161;
            }
          } else {
            result[11] += -0.16147201;
          }
        } else {
          result[11] += -0.15070099;
        }
      }
    } else {
      result[11] += -0.14916404;
    }
  } else {
    result[11] += -0.14964607;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[12] += -0.089933254;
            } else {
              result[12] += 0.009546569;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
              result[12] += -0.12660755;
            } else {
              result[12] += -0.15664479;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += 0.123677075;
            } else {
              result[12] += -0.15054953;
            }
          } else {
            result[12] += -0.14921384;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.15033954;
            } else {
              result[12] += 0.20353417;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += 0.042235047;
            } else {
              result[12] += -0.14812511;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[12] += 0.038474;
            } else {
              result[12] += 0.13310112;
            }
          } else {
            result[12] += -0.15079235;
          }
        }
      }
    } else {
      result[12] += -0.16190904;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          result[12] += 0.07304605;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += -0.1453661;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.10972827;
            } else {
              result[12] += 0.14640078;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[12] += 0.16420871;
        } else {
          result[12] += 0.019554831;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.14999358;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.15628676;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[12] += -0.071965;
            } else {
              result[12] += -0.14775336;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[12] += -0.08559764;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[12] += 0.15947348;
            } else {
              result[12] += 0.079937376;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[12] += -0.16920885;
          } else {
            result[12] += 0.11533353;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.027639108;
            } else {
              result[13] += 0.018910974;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += -0.015604752;
            } else {
              result[13] += 0.43517056;
            }
          }
        } else {
          result[13] += -0.15792693;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.10220642;
            } else {
              result[13] += 0.005832811;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.13767578;
            } else {
              result[13] += -0.0073581534;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += -0.084513254;
            } else {
              result[13] += 0.13234481;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.102334745;
            } else {
              result[13] += -0.016600028;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.1424342;
          } else {
            result[13] += -0.07906838;
          }
        } else {
          result[13] += 0.150221;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.12581739;
          } else {
            result[13] += 0.026432576;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            result[13] += 0.10110114;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.0013073672;
            } else {
              result[13] += 0.11148351;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[13] += -0.13435274;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[13] += 0.019312069;
        } else {
          result[13] += 0.12111395;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
        result[13] += -0.14765939;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[13] += -0.12533388;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[13] += 0.03289449;
            } else {
              result[13] += 0.17466924;
            }
          }
        } else {
          result[13] += -0.14633426;
        }
      }
    }
  }
}

