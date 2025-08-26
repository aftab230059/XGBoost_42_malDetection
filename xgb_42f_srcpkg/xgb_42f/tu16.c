
#include "header.h"

void predict_unit16(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)837)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
              result[2] += -0.080006026;
            } else {
              result[2] += -0.022184052;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[2] += -0.011109132;
            } else {
              result[2] += -0.021820357;
            }
          }
        } else {
          result[2] += 0.00083395175;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1947)) {
          result[2] += 0.053884197;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)2117)) {
            result[2] += -0.07773059;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)61104)) {
              result[2] += -0.0011522225;
            } else {
              result[2] += 0.016660638;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
          result[2] += 0.044639084;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
            result[2] += -0.021847742;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3753)) {
              result[2] += 0.05526402;
            } else {
              result[2] += 0.011310526;
            }
          }
        }
      } else {
        result[2] += 0.12131146;
      }
    }
  } else {
    result[2] += -0.14139768;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.1432052;
    } else {
      result[3] += -0.012890632;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[3] += -0.11531052;
      } else {
        result[3] += 0.08069772;
      }
    } else {
      result[3] += 0.10964779;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)60938)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
              result[4] += -0.0031403836;
            } else {
              result[4] += -0.050157905;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)22390)) {
              result[4] += 0.015430608;
            } else {
              result[4] += 0.008515963;
            }
          }
        } else {
          result[4] += -0.09667275;
        }
      } else {
        result[4] += -0.10296092;
      }
    } else {
      result[4] += 0.13645522;
    }
  } else {
    result[4] += -0.14134231;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[5] += 0.0004940453;
            } else {
              result[5] += 0.10038897;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += -0.15038295;
            } else {
              result[5] += -0.0040773954;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[5] += 0.15292855;
            } else {
              result[5] += 0.08876788;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[5] += -0.18109328;
            } else {
              result[5] += 0.060860533;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47457)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[5] += -0.069664806;
            } else {
              result[5] += 0.12542391;
            }
          } else {
            result[5] += -0.17085534;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[5] += -0.16141558;
            } else {
              result[5] += -0.053598523;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
              result[5] += 0.10194042;
            } else {
              result[5] += 0.0059733614;
            }
          }
        }
      }
    } else {
      result[5] += -0.1467083;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
        result[5] += 0.15849176;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[5] += -0.13821127;
        } else {
          result[5] += 0.12836897;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        result[5] += -0.18255869;
      } else {
        result[5] += 0.12554719;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          result[6] += 0.00055522367;
        } else {
          result[6] += -0.09341806;
        }
      } else {
        result[6] += -0.1024558;
      }
    } else {
      result[6] += 0.1076226;
    }
  } else {
    result[6] += -0.14133751;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)6)) {
              result[7] += -0.006634171;
            } else {
              result[7] += 0.09286927;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += -0.005148111;
            } else {
              result[7] += 0.019130368;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
              result[7] += -0.048419293;
            } else {
              result[7] += 0.10612183;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
              result[7] += -0.0069964114;
            } else {
              result[7] += 0.061666504;
            }
          }
        }
      } else {
        result[7] += -0.13373166;
      }
    } else {
      result[7] += 0.13960497;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
        result[7] += -0.073135294;
      } else {
        result[7] += -0.10165668;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
        result[7] += 0.14128819;
      } else {
        result[7] += -0.13605206;
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[8] += 0.00047295852;
            } else {
              result[8] += -0.14855714;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
              result[8] += 0.1440751;
            } else {
              result[8] += 0.041827384;
            }
          }
        } else {
          result[8] += -0.1470227;
        }
      } else {
        result[8] += -0.1529665;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
            result[8] += 0.1652016;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
              result[8] += -0.102654435;
            } else {
              result[8] += 0.14355348;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[8] += 0.09366246;
            } else {
              result[8] += -0.478146;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
              result[8] += 0.14795916;
            } else {
              result[8] += -0.09817452;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          result[8] += -0.16006662;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[8] += 0.16513029;
            } else {
              result[8] += -0.06844812;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[8] += -0.18234576;
            } else {
              result[8] += 0.026740681;
            }
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      result[8] += -0.1502563;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[8] += 0.13451853;
          } else {
            result[8] += 0.0024470629;
          }
        } else {
          result[8] += -0.08416307;
        }
      } else {
        result[8] += -0.124547;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1826348032)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1631175168)) {
              result[9] += 0.00049359264;
            } else {
              result[9] += -0.105931774;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.10751368;
            } else {
              result[9] += 0.17181844;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[9] += 0.10023079;
            } else {
              result[9] += -0.26223;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
              result[9] += -0.019422479;
            } else {
              result[9] += 0.1605521;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[9] += -0.12024931;
        } else {
          result[9] += 0.15821037;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[9] += -0.06799874;
        } else {
          result[9] += 0.18344209;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
            result[9] += -0.22050737;
          } else {
            result[9] += 0.1049072;
          }
        } else {
          result[9] += 0.13243406;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)36442)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)5591)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34379)) {
              result[9] += -0.025890801;
            } else {
              result[9] += -0.17184117;
            }
          } else {
            result[9] += 0.15037175;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
            result[9] += 0.15061429;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)19087)) {
              result[9] += 0.11340574;
            } else {
              result[9] += -0.19141597;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
          result[9] += 0.15021084;
        } else {
          result[9] += -0.11152704;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1160929)) {
          result[9] += -0.13728449;
        } else {
          result[9] += 0.06688126;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
            result[9] += 0.20420636;
          } else {
            result[9] += 0.15079027;
          }
        } else {
          result[9] += -0.07598744;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)644409920)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[10] += 0.00036531436;
            } else {
              result[10] += -0.14709488;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
              result[10] += 0.038557146;
            } else {
              result[10] += 0.1403581;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.10579724;
            } else {
              result[10] += -0.34643048;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.08668429;
            } else {
              result[10] += -0.004677547;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
              result[10] += -0.21518497;
            } else {
              result[10] += 0.007145873;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10839)) {
              result[10] += -0.03491141;
            } else {
              result[10] += -0.30566362;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)984983168)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22857)) {
              result[10] += 0.15542917;
            } else {
              result[10] += 0.029162174;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1013594304)) {
              result[10] += -0.38501075;
            } else {
              result[10] += 0.01161613;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
        result[10] += -0.13598417;
      } else {
        result[10] += 0.033415962;
      }
    }
  } else {
    result[10] += -0.13370119;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        result[11] += -0.027138514;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[11] += -0.0065971664;
        } else {
          result[11] += -0.0004008218;
        }
      }
    } else {
      result[11] += -0.13799721;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[11] += -0.0013770339;
            } else {
              result[11] += 0.0033496062;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[11] += -0.14963438;
            } else {
              result[11] += 0.0022189177;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            result[11] += -0.08929686;
          } else {
            result[11] += 0.1420382;
          }
        }
      } else {
        result[11] += -0.14151432;
      }
    } else {
      result[11] += -0.138309;
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32920)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
              result[12] += -0.0036646866;
            } else {
              result[12] += 0.1492013;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[12] += -0.149356;
            } else {
              result[12] += 0.0011324988;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6929)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
              result[12] += 0.140855;
            } else {
              result[12] += -0.011773974;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
              result[12] += -0.37473303;
            } else {
              result[12] += 0.013555088;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
          result[12] += -0.15126288;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1532925184)) {
              result[12] += -0.14373028;
            } else {
              result[12] += -0.09862939;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)464605088)) {
              result[12] += 0.17308149;
            } else {
              result[12] += -0.13945922;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[12] += 0.012922208;
            } else {
              result[12] += -0.0941383;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
              result[12] += -0.06274654;
            } else {
              result[12] += 0.006807249;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
            result[12] += -0.1776815;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
              result[12] += 0.15075424;
            } else {
              result[12] += -0.12566906;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)28238)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)19611)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
              result[12] += 1.5197707e-05;
            } else {
              result[12] += 0.46823695;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[12] += -0.14219055;
            } else {
              result[12] += 0.08178824;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)29570)) {
            result[12] += 0.50888443;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[12] += 0.25378394;
            } else {
              result[12] += 0.034756243;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)55867)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[12] += 0.0007946667;
            } else {
              result[12] += 0.120106176;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
              result[12] += -0.12366426;
            } else {
              result[12] += 0.17142227;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
              result[12] += -0.11122605;
            } else {
              result[12] += -0.027009612;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += 0.036069136;
            } else {
              result[12] += 0.17240867;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
              result[12] += 0.068861045;
            } else {
              result[12] += 0.010576604;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[12] += -0.082572386;
            } else {
              result[12] += 0.16316801;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1220404864)) {
            result[12] += 0.17763393;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1516410240)) {
              result[12] += -0.1783852;
            } else {
              result[12] += 0.11069283;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          result[12] += -0.14899649;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            result[12] += 0.11208984;
          } else {
            result[12] += -0.086027905;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
          result[12] += 0.14054957;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[12] += -0.13083707;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[12] += 0.120239444;
            } else {
              result[12] += -0.08536573;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)940)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)862)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[13] += 0.0013280747;
            } else {
              result[13] += -0.12244669;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[13] += 0.05665375;
            } else {
              result[13] += -0.1323922;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[13] += -0.15427506;
            } else {
              result[13] += 0.109070025;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
              result[13] += 0.046953898;
            } else {
              result[13] += -0.04466047;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[13] += 0.1542489;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            result[13] += -0.14618056;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[13] += 0.16179277;
            } else {
              result[13] += 0.033962626;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          result[13] += -0.1354334;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
              result[13] += 0.024791952;
            } else {
              result[13] += 0.1387423;
            }
          } else {
            result[13] += -0.12342097;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[13] += -0.5922807;
            } else {
              result[13] += -0.195099;
            }
          } else {
            result[13] += 0.093278244;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
            result[13] += -0.10720187;
          } else {
            result[13] += 0.11518199;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)19346)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
              result[13] += -0.1130595;
            } else {
              result[13] += -0.012105579;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.35824782;
            } else {
              result[13] += 0.040951923;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)3467)) {
              result[13] += -0.14207447;
            } else {
              result[13] += -0.060157727;
            }
          } else {
            result[13] += 0.11270344;
          }
        }
      } else {
        result[13] += -0.14515595;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[13] += 0.13479471;
            } else {
              result[13] += -0.13421692;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[13] += 0.13642803;
            } else {
              result[13] += -0.07880301;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[13] += -0.00832142;
            } else {
              result[13] += -0.48846936;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
              result[13] += 0.042423885;
            } else {
              result[13] += -0.117220156;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)5483)) {
            result[13] += 0.15595609;
          } else {
            result[13] += 0.059015702;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
              result[13] += -0.025055584;
            } else {
              result[13] += -0.0926967;
            }
          } else {
            result[13] += 0.10880222;
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[14] += -8.463595e-05;
            } else {
              result[14] += 0.021551687;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
              result[14] += 0.004788867;
            } else {
              result[14] += -0.041175462;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
              result[14] += 0.17732754;
            } else {
              result[14] += 0.020188345;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
              result[14] += 0.41310853;
            } else {
              result[14] += -0.17096184;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5909)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
              result[14] += 0.16945818;
            } else {
              result[14] += -0.2092331;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
              result[14] += 0.08739074;
            } else {
              result[14] += -0.006826964;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5405)) {
              result[14] += 0.031726662;
            } else {
              result[14] += -0.23139252;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
              result[14] += -0.12330684;
            } else {
              result[14] += 0.11408269;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61935)) {
              result[14] += 0.025424117;
            } else {
              result[14] += 0.16332476;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[14] += -0.07435626;
            } else {
              result[14] += 0.14635605;
            }
          }
        } else {
          result[14] += -0.15865287;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13727)) {
            result[14] += 0.16435951;
          } else {
            result[14] += -0.29801226;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23106)) {
              result[14] += 0.14597364;
            } else {
              result[14] += 0.05498883;
            }
          } else {
            result[14] += 0.18677679;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
          result[14] += -0.14195585;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5909)) {
              result[14] += 0.0726827;
            } else {
              result[14] += 0.26855484;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[14] += -0.15053555;
            } else {
              result[14] += 0.12249158;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
              result[14] += -0.18807568;
            } else {
              result[14] += 0.051921584;
            }
          } else {
            result[14] += 0.06378431;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30862)) {
            result[14] += 0.26727584;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
              result[14] += -0.08555506;
            } else {
              result[14] += 0.16868225;
            }
          }
        }
      }
    } else {
      result[14] += -0.2071995;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50734)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
              result[0] += 0.0009944823;
            } else {
              result[0] += -0.030989261;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += 0.05054764;
            } else {
              result[0] += 0.3047217;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
              result[0] += -0.116225116;
            } else {
              result[0] += -0.03676151;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.07543366;
            } else {
              result[0] += 0.13491824;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
              result[0] += 0.08644718;
            } else {
              result[0] += -0.105513014;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
              result[0] += 0.32097417;
            } else {
              result[0] += 0.0007576375;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += -0.08968138;
            } else {
              result[0] += -0.21904433;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
              result[0] += 0.33693042;
            } else {
              result[0] += 0.000830974;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[0] += -0.11898915;
        } else {
          result[0] += 0.070106044;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[0] += 0.054978658;
            } else {
              result[0] += -0.008161783;
            }
          } else {
            result[0] += 0.22895518;
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[0] += -0.06785616;
            } else {
              result[0] += 0.04017495;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[0] += -0.15446411;
            } else {
              result[0] += 0.084025815;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1264832000)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
        result[0] += 0.0913652;
      } else {
        result[0] += 0.04901807;
      }
    } else {
      result[0] += -0.051468603;
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)9392)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
              result[1] += -0.00065103796;
            } else {
              result[1] += 0.26329115;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[1] += -0.1030237;
            } else {
              result[1] += 0.032043446;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41648)) {
              result[1] += 0.07901578;
            } else {
              result[1] += 0.18304901;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[1] += -0.11336511;
            } else {
              result[1] += 0.050161537;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[1] += -0.15368614;
            } else {
              result[1] += 0.07123193;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
              result[1] += 0.45076;
            } else {
              result[1] += -0.1269654;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34923)) {
              result[1] += 0.11706075;
            } else {
              result[1] += -0.06151255;
            }
          } else {
            result[1] += -0.1437563;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36967)) {
              result[1] += 0.09415651;
            } else {
              result[1] += -0.009833375;
            }
          } else {
            result[1] += 0.21309231;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[1] += 0.3733534;
            } else {
              result[1] += 0.13102715;
            }
          } else {
            result[1] += -0.11398851;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[1] += 0.20939857;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += 0.011293974;
            } else {
              result[1] += -0.14931488;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[1] += 0.01250631;
            } else {
              result[1] += -0.06414161;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[1] += 0.16119556;
            } else {
              result[1] += 0.026966417;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.14006968;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
              result[2] += -0.07461722;
            } else {
              result[2] += -0.023058675;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[2] += -0.009685025;
            } else {
              result[2] += -0.019354401;
            }
          }
        } else {
          result[2] += -0.00038833675;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)63665)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)62881)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)61706)) {
              result[2] += 0.0010567879;
            } else {
              result[2] += -0.06662173;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)63458)) {
              result[2] += 0.2801306;
            } else {
              result[2] += 0.0012815904;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)63988)) {
            result[2] += -0.016543094;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)64324)) {
              result[2] += -0.045226503;
            } else {
              result[2] += -0.021635476;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)12366)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)12047)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)11374)) {
              result[2] += 0.01843207;
            } else {
              result[2] += -0.06919971;
            }
          } else {
            result[2] += 0.11050718;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)12683)) {
            result[2] += -0.10455239;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
              result[2] += 0.0777329;
            } else {
              result[2] += 0.010090663;
            }
          }
        }
      } else {
        result[2] += 0.11816407;
      }
    }
  } else {
    result[2] += -0.14008343;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.14216565;
    } else {
      result[3] += -0.011303817;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.10706593;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
        result[3] += -0.111936174;
      } else {
        result[3] += 0.0754084;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)33014)) {
              result[4] += -0.0032186627;
            } else {
              result[4] += -0.020177051;
            }
          } else {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[4] += 0.0100246165;
            } else {
              result[4] += 0.07527778;
            }
          }
        } else {
          result[4] += -0.092972316;
        }
      } else {
        result[4] += -0.09956232;
      }
    } else {
      result[4] += 0.13489844;
    }
  } else {
    result[4] += -0.14002068;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1893026944)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1664345728)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1631175168)) {
              result[5] += -0.00054784823;
            } else {
              result[5] += 0.09152813;
            }
          } else {
            result[5] += -0.17879966;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[5] += 0.053811543;
            } else {
              result[5] += 0.24115114;
            }
          } else {
            result[5] += -0.16140419;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[5] += -0.15625185;
            } else {
              result[5] += -0.19975598;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[5] += 0.13856867;
            } else {
              result[5] += -0.15951695;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1826348032)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[5] += -0.17247032;
            } else {
              result[5] += 0.1356173;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[5] += 0.072896056;
            } else {
              result[5] += -0.17061973;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
        result[5] += -0.16216607;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)44684)) {
          result[5] += 0.27089486;
        } else {
          result[5] += -0.15607601;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)36442)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
          result[5] += -0.16357055;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
            result[5] += 0.14046825;
          } else {
            result[5] += -0.08511327;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
            result[5] += 0.1814138;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
              result[5] += 0.07593143;
            } else {
              result[5] += -0.15811351;
            }
          }
        } else {
          result[5] += -0.15737736;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
            result[5] += -0.15884013;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)42196)) {
              result[5] += 0.13156766;
            } else {
              result[5] += -0.16326298;
            }
          }
        } else {
          result[5] += -0.16874278;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            result[5] += -0.121896856;
          } else {
            result[5] += 0.124932475;
          }
        } else {
          result[5] += -0.13865563;
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          result[6] += 0.0004763419;
        } else {
          result[6] += -0.090045094;
        }
      } else {
        result[6] += -0.09905579;
      }
    } else {
      result[6] += 0.10432782;
    }
  } else {
    result[6] += -0.14001523;
  }
  if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
              result[7] += -0.005469109;
            } else {
              result[7] += 0.00538088;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
              result[7] += -0.035771225;
            } else {
              result[7] += -0.0016269634;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[7] += 0.14030762;
          } else {
            result[7] += -0.09334695;
          }
        }
      } else {
        result[7] += -0.131589;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
          result[7] += -0.14261459;
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)35)) {
            result[7] += 0.04880314;
          } else {
            result[7] += -0.113636695;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          result[7] += 0.12043222;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
            result[7] += -0.05235515;
          } else {
            result[7] += 0.009470187;
          }
        }
      }
    }
  } else {
    result[7] += 0.13672635;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[8] += -0.00032018375;
            } else {
              result[8] += 0.054135434;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
              result[8] += 0.087669656;
            } else {
              result[8] += -0.024201142;
            }
          }
        } else {
          result[8] += -0.14654712;
        }
      } else {
        result[8] += -0.1522263;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
          result[8] += 0.15300319;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
            result[8] += 0.17320767;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
              result[8] += -0.051481992;
            } else {
              result[8] += 0.1416672;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[8] += -0.15841319;
          } else {
            result[8] += 0.1054486;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[8] += 0.16001771;
            } else {
              result[8] += -0.057371724;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[8] += -0.16602458;
            } else {
              result[8] += 0.028632063;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
      result[8] += -0.148782;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          result[8] += 0.12901028;
        } else {
          result[8] += -0.12610072;
        }
      } else {
        result[8] += -0.13164744;
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48198)) {
              result[9] += 0.00039518118;
            } else {
              result[9] += 0.14673181;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
              result[9] += -0.19075848;
            } else {
              result[9] += 0.13155788;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.11219751;
          } else {
            result[9] += 0.16613588;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
            result[9] += 0.0030582836;
          } else {
            result[9] += 0.14177862;
          }
        } else {
          result[9] += -0.21473432;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.115935095;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
          result[9] += 0.23227738;
        } else {
          result[9] += 0.15700838;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1264832000)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1220404864)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)576729216)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
              result[9] += -0.12767048;
            } else {
              result[9] += 0.05318405;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[9] += 0.091442786;
            } else {
              result[9] += -0.2313039;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.11764612;
          } else {
            result[9] += 0.15898319;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
            result[9] += 0.08136963;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
              result[9] += -0.21593922;
            } else {
              result[9] += 0.08526762;
            }
          }
        } else {
          result[9] += 0.15355484;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)12872)) {
          result[9] += -0.13686913;
        } else {
          result[9] += 0.059913885;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
          result[9] += 0.15338677;
        } else {
          result[9] += 0.05631284;
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)320)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[10] += 1.0746765e-05;
            } else {
              result[10] += -0.04274993;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[10] += 0.101354614;
            } else {
              result[10] += -0.0034223252;
            }
          }
        } else {
          result[10] += -0.14514455;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2407267328)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2384619520)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[10] += 0.1749846;
            } else {
              result[10] += -0.16314524;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[10] += 0.3488981;
            } else {
              result[10] += 0.1542429;
            }
          }
        } else {
          result[10] += -0.12871599;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)14653)) {
        result[10] += -0.14516707;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
          result[10] += -0.106621265;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            result[10] += 0.11967018;
          } else {
            result[10] += -0.09598713;
          }
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
          result[10] += 0.05252824;
        } else {
          result[10] += 0.14188863;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
          result[10] += -0.13840413;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
            result[10] += 0.14431563;
          } else {
            result[10] += -0.10772828;
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
        result[10] += -0.12315714;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
          result[10] += -0.07609455;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[10] += 0.051539414;
          } else {
            result[10] += 0.013076168;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[11] += 0.0012918068;
            } else {
              result[11] += 0.14890286;
            }
          } else {
            result[11] += -0.15708491;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
            result[11] += -0.15177158;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
              result[11] += -0.007463852;
            } else {
              result[11] += -0.21483554;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)167486704)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[11] += 0.022654586;
            } else {
              result[11] += 0.16373923;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
              result[11] += -0.116705045;
            } else {
              result[11] += 0.008742095;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)782316608)) {
              result[11] += -0.08817256;
            } else {
              result[11] += 0.51028466;
            }
          } else {
            result[11] += 0.13551012;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)323)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1095392640)) {
              result[11] += 0.057219792;
            } else {
              result[11] += -0.23690198;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[11] += -0.02169187;
            } else {
              result[11] += 0.1679416;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2248229888)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
              result[11] += -0.03581576;
            } else {
              result[11] += 0.12739408;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2829588992)) {
              result[11] += -0.16418791;
            } else {
              result[11] += -0.0056178374;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)350)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
              result[11] += -0.42210928;
            } else {
              result[11] += -0.0071705515;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
              result[11] += -0.31118283;
            } else {
              result[11] += -0.047611453;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[11] += 0.21573985;
            } else {
              result[11] += -0.232774;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1516410240)) {
              result[11] += 0.09876263;
            } else {
              result[11] += -0.07049006;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
              result[11] += -0.00097264076;
            } else {
              result[11] += -0.08739445;
            }
          } else {
            result[11] += -0.31713882;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)901448896)) {
              result[11] += 0.17869;
            } else {
              result[11] += -0.10733796;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
              result[11] += 0.18945594;
            } else {
              result[11] += 0.024294822;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
              result[11] += 0.086895026;
            } else {
              result[11] += -0.27650002;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
              result[11] += 0.20672272;
            } else {
              result[11] += 0.08577663;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
              result[11] += 0.16798456;
            } else {
              result[11] += -0.11061499;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39295)) {
              result[11] += 0.28919944;
            } else {
              result[11] += 0.19645263;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
              result[11] += -0.035162415;
            } else {
              result[11] += 0.0003791405;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
              result[11] += 0.2785611;
            } else {
              result[11] += 0.059113253;
            }
          }
        } else {
          result[11] += 0.14797667;
        }
      } else {
        result[11] += -0.16314349;
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[12] += -0.0021077895;
            } else {
              result[12] += -0.05728084;
            }
          } else {
            result[12] += -0.14159614;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)27219)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
              result[12] += 0.049169537;
            } else {
              result[12] += -0.04991402;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28765)) {
              result[12] += 0.15609723;
            } else {
              result[12] += 0.034018982;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
              result[12] += 0.07022689;
            } else {
              result[12] += -0.02424837;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[12] += -0.15094675;
            } else {
              result[12] += -0.10575283;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6929)) {
              result[12] += 0.092385024;
            } else {
              result[12] += -0.12574436;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[12] += 0.1449782;
            } else {
              result[12] += 0.004100981;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[12] += 0.015757227;
            } else {
              result[12] += -0.13817735;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
              result[12] += -0.009372973;
            } else {
              result[12] += 0.12111122;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[12] += 0.015514946;
            } else {
              result[12] += 0.08459568;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1280068736)) {
              result[12] += -0.045603566;
            } else {
              result[12] += 0.0047789416;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            result[12] += -0.14989585;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[12] += 0.1083373;
            } else {
              result[12] += -0.082330264;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
            result[12] += 0.13805258;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.12815665;
            } else {
              result[12] += 0.063645214;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
      result[12] += -0.14273925;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
          result[12] += 0.12146445;
        } else {
          result[12] += 0.025867714;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2744264704)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[12] += 0.020076154;
            } else {
              result[12] += -0.11059985;
            }
          } else {
            result[12] += 0.09788593;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
            result[12] += 0.020198273;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
              result[12] += -0.03529772;
            } else {
              result[12] += -0.17240126;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
              result[13] += -0.0023281602;
            } else {
              result[13] += -0.023178749;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[13] += 0.09717525;
            } else {
              result[13] += -0.10619095;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
              result[13] += 0.01386077;
            } else {
              result[13] += -0.024525166;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[13] += 0.017168932;
            } else {
              result[13] += -0.14516069;
            }
          }
        }
      } else {
        result[13] += -0.1490536;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)150)) {
            result[13] += -0.13682143;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[13] += 0.68322194;
            } else {
              result[13] += -0.13992636;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35706)) {
              result[13] += 0.33576474;
            } else {
              result[13] += 1.0895647;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2430779136)) {
              result[13] += 0.070883304;
            } else {
              result[13] += 0.23378506;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            result[13] += 0.167541;
          } else {
            result[13] += -0.08670759;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
            result[13] += -0.14655007;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[13] += 0.17239454;
            } else {
              result[13] += -0.018082112;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)122)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            result[13] += -0.14849848;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)479)) {
              result[13] += -0.021753194;
            } else {
              result[13] += 0.1064348;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
              result[13] += -0.11778499;
            } else {
              result[13] += 0.11398095;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
              result[13] += -0.14172797;
            } else {
              result[13] += -0.23605387;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)19611)) {
              result[13] += 0.041587405;
            } else {
              result[13] += 0.12899937;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
              result[13] += -0.058708217;
            } else {
              result[13] += 0.10078346;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28526)) {
              result[13] += -0.023908904;
            } else {
              result[13] += -0.19390686;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[13] += 0.07722437;
            } else {
              result[13] += -0.0027478503;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        result[13] += 0.15318967;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2372243968)) {
          result[13] += -0.11923638;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
            result[13] += 0.21482612;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
              result[13] += -0.08198333;
            } else {
              result[13] += 0.029962517;
            }
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[14] += 0.00072343746;
            } else {
              result[14] += -0.013261934;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.14909226;
            } else {
              result[14] += 0.02194738;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[14] += -0.14706002;
            } else {
              result[14] += 0.09666984;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
              result[14] += 0.030567149;
            } else {
              result[14] += -0.12586257;
            }
          }
        }
      } else {
        result[14] += -0.1371649;
      }
    } else {
      result[14] += 0.14223397;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)440)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36709)) {
              result[14] += -0.16464251;
            } else {
              result[14] += -0.11426024;
            }
          } else {
            result[14] += 0.043084294;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
            result[14] += 0.108032905;
          } else {
            result[14] += -0.101183794;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
          result[14] += -0.044980932;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
            result[14] += 0.001231766;
          } else {
            result[14] += 0.11174079;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)277)) {
            result[14] += -0.13959704;
          } else {
            result[14] += 0.05699956;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
            result[14] += 0.41231853;
          } else {
            result[14] += 0.08118318;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)277)) {
              result[14] += -0.11921739;
            } else {
              result[14] += 0.083921075;
            }
          } else {
            result[14] += 0.1868336;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[14] += -0.15547347;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[14] += 0.0936462;
            } else {
              result[14] += -0.088936076;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[0] += -4.0381907e-05;
            } else {
              result[0] += 0.046573576;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[0] += -0.14775772;
            } else {
              result[0] += -0.018948218;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42171)) {
              result[0] += 0.043752294;
            } else {
              result[0] += -0.17900737;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.19976272;
            } else {
              result[0] += -0.09082736;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55867)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)26159)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)19087)) {
              result[0] += 0.054340933;
            } else {
              result[0] += -0.1277601;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
              result[0] += -0.121666886;
            } else {
              result[0] += 0.1913216;
            }
          }
        } else {
          result[0] += -0.1566705;
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        result[0] += -0.13921192;
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[0] += -0.08921164;
        } else {
          result[0] += 0.14914468;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
        result[0] += -0.15368672;
      } else {
        result[0] += 0.09356349;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
          result[0] += 0.16355903;
        } else {
          result[0] += 0.03932115;
        }
      } else {
        result[0] += -0.1206504;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)25)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)310)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)304)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)288)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[1] += -0.00034459223;
            } else {
              result[1] += -0.113619186;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += 0.14576036;
            } else {
              result[1] += -0.081921235;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
              result[1] += -0.08426256;
            } else {
              result[1] += -0.4899386;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[1] += -0.017556643;
            } else {
              result[1] += 0.16761631;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[1] += -0.067600265;
            } else {
              result[1] += 0.12731396;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)280175584)) {
              result[1] += 0.29127;
            } else {
              result[1] += -0.097098894;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)317)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
              result[1] += -0.17324091;
            } else {
              result[1] += -0.016832648;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
              result[1] += -0.16303417;
            } else {
              result[1] += 0.027138527;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
              result[1] += -0.1484145;
            } else {
              result[1] += 0.012831134;
            }
          } else {
            result[1] += 0.07591748;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)316)) {
            result[1] += 0.13773338;
          } else {
            result[1] += -0.106642276;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
          result[1] += -0.1209234;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
              result[1] += -0.106346615;
            } else {
              result[1] += 0.023546798;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.1426057;
            } else {
              result[1] += -0.096453734;
            }
          }
        }
      }
    }
  } else {
    result[1] += 0.13689072;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)14010)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)11198)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)9584)) {
              result[2] += -0.004663837;
            } else {
              result[2] += 0.13661687;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)13853)) {
              result[2] += -0.04309212;
            } else {
              result[2] += -0.13000642;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
            result[2] += -0.14034389;
          } else {
            result[2] += 0.0010215472;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)16519)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)15532)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)14340)) {
              result[2] += 0.23061936;
            } else {
              result[2] += -0.0033406238;
            }
          } else {
            result[2] += 0.34976053;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)18473)) {
            result[2] += -0.098832995;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)19293)) {
              result[2] += 0.12523134;
            } else {
              result[2] += 0.00047809593;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
          result[2] += 0.0407317;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
            result[2] += -0.018717235;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3753)) {
              result[2] += 0.050368953;
            } else {
              result[2] += 0.010455792;
            }
          }
        }
      } else {
        result[2] += 0.11481318;
      }
    }
  } else {
    result[2] += -0.13859855;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.14099777;
    } else {
      result[3] += -0.009979046;
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        result[3] += -0.108412005;
      } else {
        result[3] += 0.07081919;
      }
    } else {
      result[3] += 0.10458932;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)62964)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)33014)) {
              result[4] += -0.0026982538;
            } else {
              result[4] += -0.018816423;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)63618)) {
              result[4] += 0.010846875;
            } else {
              result[4] += -0.005118848;
            }
          }
        } else {
          result[4] += -0.089386806;
        }
      } else {
        result[4] += -0.09618709;
      }
    } else {
      result[4] += 0.13296549;
    }
  } else {
    result[4] += -0.13852772;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
              result[5] += -0.00030970425;
            } else {
              result[5] += -0.15700832;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
              result[5] += 0.15309922;
            } else {
              result[5] += -0.038787387;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
            result[5] += -0.1556171;
          } else {
            result[5] += -0.020467186;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
          result[5] += -0.120180495;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            result[5] += -0.10289967;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1045826752)) {
              result[5] += 0.15710877;
            } else {
              result[5] += -0.09872205;
            }
          }
        }
      }
    } else {
      result[5] += -0.15226945;
    }
  } else {
    result[5] += -0.14435036;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          result[6] += 0.0004008982;
        } else {
          result[6] += -0.08677229;
        }
      } else {
        result[6] += -0.09568273;
      }
    } else {
      result[6] += 0.10007725;
    }
  } else {
    result[6] += -0.13852157;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
              result[7] += -8.53838e-06;
            } else {
              result[7] += -0.14081976;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[7] += -0.14403765;
            } else {
              result[7] += 0.14328103;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            result[7] += -0.1427023;
          } else {
            result[7] += 0.09198259;
          }
        }
      } else {
        result[7] += -0.13925228;
      }
    } else {
      result[7] += -0.1417438;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)4)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
            result[7] += 0.08022562;
          } else {
            result[7] += -0.0031967373;
          }
        } else {
          result[7] += 0.14304493;
        }
      } else {
        result[7] += -0.010523248;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
        result[7] += -0.13202658;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4457)) {
              result[7] += 0.06629606;
            } else {
              result[7] += -0.07606311;
            }
          } else {
            result[7] += 0.17922832;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
              result[7] += -0.027276097;
            } else {
              result[7] += -0.104971506;
            }
          } else {
            result[7] += 0.12553358;
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
              result[8] += -0.01187187;
            } else {
              result[8] += 0.0029987367;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[8] += -0.11242329;
            } else {
              result[8] += -0.0035829698;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.19175;
            } else {
              result[8] += -0.005814891;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
              result[8] += 0.011166433;
            } else {
              result[8] += 0.08128872;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[8] += -0.14937314;
          } else {
            result[8] += 0.02588028;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34379)) {
              result[8] += -0.06230293;
            } else {
              result[8] += 0.57578963;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
              result[8] += -0.054082427;
            } else {
              result[8] += -0.012437278;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2357014272)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)934930688)) {
              result[8] += -0.039037798;
            } else {
              result[8] += -0.008051147;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1532925184)) {
              result[8] += -0.049123477;
            } else {
              result[8] += -0.15513611;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
              result[8] += 0.010074788;
            } else {
              result[8] += 0.100399114;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
              result[8] += -0.1669815;
            } else {
              result[8] += -0.015625766;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2371757312)) {
            result[8] += 0.36667848;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
              result[8] += -0.10944308;
            } else {
              result[8] += -0.014624455;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)38174)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
              result[8] += 0.48824167;
            } else {
              result[8] += 0.13195688;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
              result[8] += -0.07014784;
            } else {
              result[8] += 0.027493913;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)678742336)) {
              result[8] += 0.21735242;
            } else {
              result[8] += -0.10795284;
            }
          } else {
            result[8] += 0.033932257;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[8] += -0.004095015;
            } else {
              result[8] += 0.041936625;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)167486704)) {
              result[8] += -0.15546677;
            } else {
              result[8] += -0.0076689627;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
              result[8] += 0.11114789;
            } else {
              result[8] += 0.47221312;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1130557440)) {
              result[8] += -0.1693245;
            } else {
              result[8] += 0.10980926;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
            result[8] += -0.18275915;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1795638272)) {
              result[8] += 0.4086361;
            } else {
              result[8] += -0.16380373;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2800293632)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2677389824)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2371757312)) {
              result[8] += -0.02431064;
            } else {
              result[8] += -0.13461763;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.29323938;
            } else {
              result[8] += -0.10851613;
            }
          }
        } else {
          result[8] += -0.18884385;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2928404992)) {
              result[8] += 0.10573508;
            } else {
              result[8] += 0.45411202;
            }
          } else {
            result[8] += -0.12057757;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
              result[8] += -0.012126271;
            } else {
              result[8] += -0.2407222;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3198206208)) {
              result[8] += 0.2472694;
            } else {
              result[8] += 0.022723623;
            }
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[9] += 0.0051840865;
            } else {
              result[9] += -0.10059803;
            }
          } else {
            result[9] += -0.13897714;
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[9] += -0.0035434687;
          } else {
            result[9] += -0.0012039014;
          }
        }
      } else {
        result[9] += -0.14081416;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
        result[9] += -0.14975354;
      } else {
        result[9] += 0.11383566;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
      result[9] += 0.14969075;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)883932608)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[9] += -0.15533607;
            } else {
              result[9] += 0.15591349;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
              result[9] += 0.092442214;
            } else {
              result[9] += -0.17717882;
            }
          }
        } else {
          result[9] += 0.12429396;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[9] += -0.13338217;
            } else {
              result[9] += 0.09325663;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
              result[9] += 0.15455912;
            } else {
              result[9] += -0.07840565;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
              result[9] += 0.14663175;
            } else {
              result[9] += -0.15522319;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
              result[9] += 0.15125072;
            } else {
              result[9] += 0.005604142;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
              result[10] += 9.895827e-05;
            } else {
              result[10] += -0.17226443;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2398935552)) {
              result[10] += 0.15692906;
            } else {
              result[10] += -0.42750877;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
              result[10] += -0.13629605;
            } else {
              result[10] += -0.31543884;
            }
          } else {
            result[10] += 0.2619154;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3224507648)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
              result[10] += 0.028824875;
            } else {
              result[10] += -0.02565269;
            }
          } else {
            result[10] += -0.37846956;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3541748992)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
              result[10] += 0.08858858;
            } else {
              result[10] += 0.18716797;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3598538240)) {
              result[10] += -0.40436718;
            } else {
              result[10] += 0.063200966;
            }
          }
        }
      }
    } else {
      result[10] += -0.13093154;
    }
  } else {
    result[10] += -0.13310687;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)25)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
              result[11] += 0.00014999772;
            } else {
              result[11] += 0.10518014;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
              result[11] += -0.17172743;
            } else {
              result[11] += -0.3030679;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[11] += 0.1435242;
            } else {
              result[11] += -0.3087458;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
              result[11] += 0.15290724;
            } else {
              result[11] += 0.042916093;
            }
          }
        }
      } else {
        result[11] += -0.15183984;
      }
    } else {
      result[11] += -0.13770403;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
      result[11] += -0.13948488;
    } else {
      result[11] += -0.042043507;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3284568832)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3224507648)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17809)) {
              result[12] += 0.0037959204;
            } else {
              result[12] += -0.0032661401;
            }
          } else {
            result[12] += -0.14039403;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
              result[12] += -0.16502804;
            } else {
              result[12] += 0.021218099;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
              result[12] += -0.16826242;
            } else {
              result[12] += 0.077585325;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)28765)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28526)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17067)) {
              result[12] += 0.026506703;
            } else {
              result[12] += -0.1744697;
            }
          } else {
            result[12] += -1.1724026;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30078)) {
              result[12] += 0.23676372;
            } else {
              result[12] += 0.67112184;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
              result[12] += -0.048086334;
            } else {
              result[12] += 0.1527293;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
        result[12] += 0.27983788;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15995)) {
              result[12] += -0.2060435;
            } else {
              result[12] += -0.03532262;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[12] += -0.105389096;
            } else {
              result[12] += -0.2144451;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
            result[12] += -0.1724693;
          } else {
            result[12] += 0.46896753;
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)19346)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)5405)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
            result[12] += -0.1482483;
          } else {
            result[12] += 0.3634935;
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)16531)) {
              result[12] += -0.16966327;
            } else {
              result[12] += -0.0133148115;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[12] += 0.20404398;
            } else {
              result[12] += -0.13142635;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
              result[12] += 0.10571622;
            } else {
              result[12] += 0.472937;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[12] += 0.53533703;
            } else {
              result[12] += -0.10170678;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30078)) {
              result[12] += -0.14863753;
            } else {
              result[12] += -0.007015823;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
              result[12] += 0.18439396;
            } else {
              result[12] += -0.1296693;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[12] += 0.0048238994;
            } else {
              result[12] += 0.13207223;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
              result[12] += -0.074487984;
            } else {
              result[12] += 0.0021715625;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33113)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
              result[12] += -0.09420421;
            } else {
              result[12] += 0.107266285;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[12] += 0.27502036;
            } else {
              result[12] += 0.014080515;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[12] += -0.0342176;
            } else {
              result[12] += -0.18067038;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23617)) {
              result[12] += 0.0006517212;
            } else {
              result[12] += 0.33459365;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[12] += -0.19134171;
            } else {
              result[12] += -0.04498053;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
              result[12] += -0.1590702;
            } else {
              result[12] += -0.013362779;
            }
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
              result[13] += 0.00069799763;
            } else {
              result[13] += 0.0474244;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
              result[13] += -0.018125763;
            } else {
              result[13] += 0.13721769;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3467)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
              result[13] += -0.14481336;
            } else {
              result[13] += -0.007182808;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.12043712;
            } else {
              result[13] += -0.083201826;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[13] += 0.1651816;
            } else {
              result[13] += 0.011682635;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
              result[13] += -0.12028985;
            } else {
              result[13] += 0.16858636;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[13] += -0.11765476;
          } else {
            result[13] += 0.10889634;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)695816320)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
              result[13] += 0.09303128;
            } else {
              result[13] += -0.120279975;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[13] += -0.14564331;
            } else {
              result[13] += 0.008779769;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2800293632)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
              result[13] += -0.11661662;
            } else {
              result[13] += 0.27304035;
            }
          } else {
            result[13] += -0.12184827;
          }
        }
      } else {
        result[13] += 0.102646;
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
            result[13] += -0.10500112;
          } else {
            result[13] += 0.105222516;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[13] += 0.086828575;
            } else {
              result[13] += -0.046018474;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.3724274;
            } else {
              result[13] += 0.12765646;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[13] += 0.017534753;
            } else {
              result[13] += 0.19200733;
            }
          } else {
            result[13] += -0.044222735;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)883932608)) {
            result[13] += -0.12852912;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[13] += 0.04433187;
            } else {
              result[13] += -0.09617234;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
        result[13] += -0.12309995;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
              result[13] += -0.12529294;
            } else {
              result[13] += 0.06544431;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
              result[13] += 0.738909;
            } else {
              result[13] += 0.061836265;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
            result[13] += -0.11170172;
          } else {
            result[13] += 0.01661901;
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
              result[14] += 0.0003757971;
            } else {
              result[14] += -0.013491297;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
              result[14] += 0.012773251;
            } else {
              result[14] += 0.13487233;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57147)) {
              result[14] += -0.03473385;
            } else {
              result[14] += 0.13539399;
            }
          } else {
            result[14] += -0.19489656;
          }
        }
      } else {
        result[14] += -0.13598037;
      }
    } else {
      result[14] += 0.14038138;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)440)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36709)) {
              result[14] += -0.16521332;
            } else {
              result[14] += -0.107201345;
            }
          } else {
            result[14] += 0.03958944;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
            result[14] += 0.10191064;
          } else {
            result[14] += -0.097550906;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
          result[14] += -0.04092823;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
            result[14] += 0.00077029114;
          } else {
            result[14] += 0.10639585;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)277)) {
            result[14] += -0.13534148;
          } else {
            result[14] += 0.053164728;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
            result[14] += 0.3218731;
          } else {
            result[14] += 0.077298604;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)277)) {
              result[14] += -0.11248318;
            } else {
              result[14] += 0.075315736;
            }
          } else {
            result[14] += 0.17559555;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[14] += -0.1532734;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
              result[14] += 0.089003906;
            } else {
              result[14] += -0.086602755;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50734)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
              result[0] += 0.0010275001;
            } else {
              result[0] += -0.10045777;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
              result[0] += 0.067068435;
            } else {
              result[0] += 0.2595047;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
              result[0] += -0.0794808;
            } else {
              result[0] += -0.19900732;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
              result[0] += -0.0017343588;
            } else {
              result[0] += -0.07257407;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
              result[0] += 0.16550285;
            } else {
              result[0] += -0.005178722;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[0] += 0.3320299;
            } else {
              result[0] += 0.17542076;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
            result[0] += -0.20377459;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
              result[0] += 0.31853604;
            } else {
              result[0] += 0.0015867442;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)384)) {
              result[0] += -0.14873725;
            } else {
              result[0] += -0.008740566;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
              result[0] += -0.10250529;
            } else {
              result[0] += 0.07218118;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
            result[0] += -0.12802233;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
              result[0] += 0.14315644;
            } else {
              result[0] += -0.024437623;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            result[0] += -0.14145327;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
              result[0] += -0.06114426;
            } else {
              result[0] += 0.15343826;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
              result[0] += -0.00012072371;
            } else {
              result[0] += -0.12293441;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
              result[0] += 0.16228302;
            } else {
              result[0] += -0.0019437281;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.13483398;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
              result[1] += 0.00081618025;
            } else {
              result[1] += 0.025950579;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
              result[1] += -0.03920843;
            } else {
              result[1] += -0.008341696;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
              result[1] += 0.010901949;
            } else {
              result[1] += 0.030808698;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
              result[1] += -0.017845055;
            } else {
              result[1] += 0.048160218;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
              result[1] += -0.021851618;
            } else {
              result[1] += -0.14808261;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[1] += 0.14755577;
            } else {
              result[1] += 0.0031442388;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
              result[1] += 0.13058652;
            } else {
              result[1] += -0.20033273;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[1] += -0.14613116;
            } else {
              result[1] += 0.046203148;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
          result[1] += -0.148954;
        } else {
          result[1] += -0.033549055;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)16531)) {
          result[1] += 0.29851842;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)37732)) {
            result[1] += -0.00089432695;
          } else {
            result[1] += -0.09363017;
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[1] += 0.1618607;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
              result[1] += -0.11539122;
            } else {
              result[1] += 0.21635446;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5909)) {
              result[1] += -0.2804817;
            } else {
              result[1] += -0.033254173;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
              result[1] += 0.016993364;
            } else {
              result[1] += 0.06064505;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)22594)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)22343)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[1] += 0.14033559;
            } else {
              result[1] += 0.007045175;
            }
          } else {
            result[1] += 0.43092045;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35306)) {
              result[1] += -0.08369636;
            } else {
              result[1] += -0.20852332;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
              result[1] += -0.033402592;
            } else {
              result[1] += 0.08625642;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)41328)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2928404992)) {
              result[1] += 0.11313153;
            } else {
              result[1] += -0.038333222;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
              result[1] += -0.0460374;
            } else {
              result[1] += -0.17360091;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
              result[1] += 0.24358429;
            } else {
              result[1] += -0.102543525;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[1] += -0.153525;
            } else {
              result[1] += -0.22510347;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.23735301;
            } else {
              result[1] += -0.06909131;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
              result[1] += 0.009428461;
            } else {
              result[1] += -0.07584402;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[1] += -0.011210203;
            } else {
              result[1] += 0.16360202;
            }
          } else {
            result[1] += -0.14578544;
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
              result[2] += -0.06884102;
            } else {
              result[2] += -0.019281982;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[2] += -0.008103475;
            } else {
              result[2] += -0.016731948;
            }
          }
        } else {
          result[2] += 0.00027061638;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)36307)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)35431)) {
              result[2] += 0.0017347949;
            } else {
              result[2] += -0.068919696;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)36659)) {
              result[2] += 1.0460905;
            } else {
              result[2] += 0.007741311;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)49575)) {
              result[2] += -0.054438774;
            } else {
              result[2] += 0.016013842;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)47487)) {
              result[2] += -0.011137116;
            } else {
              result[2] += -0.14312612;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)26366)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)25771)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)25458)) {
              result[2] += 0.01094497;
            } else {
              result[2] += -0.07584115;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)26071)) {
              result[2] += 0.1428753;
            } else {
              result[2] += 0.017169515;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)28566)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)27847)) {
              result[2] += -0.0011759878;
            } else {
              result[2] += -0.13930589;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)31100)) {
              result[2] += 0.037219986;
            } else {
              result[2] += 0.007884603;
            }
          }
        }
      } else {
        result[2] += 0.11128068;
      }
    }
  } else {
    result[2] += -0.13701461;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.13971005;
    } else {
      result[3] += -0.008822607;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.102092825;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
        result[3] += -0.10515297;
      } else {
        result[3] += 0.07288473;
      }
    }
  }
}

