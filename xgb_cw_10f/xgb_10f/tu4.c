
#include "header.h"

void predict_unit4(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[8] += -0.09452029;
          } else {
            result[8] += -0.14984612;
          }
        } else {
          result[8] += -0.14994328;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.00023369893;
            } else {
              result[8] += 0.045611486;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.06876026;
            } else {
              result[8] += -0.14353046;
            }
          }
        } else {
          result[8] += -0.15020874;
        }
      }
    } else {
      result[8] += -0.1501666;
    }
  } else {
    result[8] += -0.14646442;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += 0.031193338;
            } else {
              result[9] += -0.15079698;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.15392175;
            } else {
              result[9] += -0.14855391;
            }
          }
        } else {
          result[9] += -0.14989693;
        }
      } else {
        result[9] += -0.14990553;
      }
    } else {
      result[9] += -0.15000498;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.15050067;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14736654;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[9] += 0.14390488;
          } else {
            result[9] += -0.1415179;
          }
        }
      } else {
        result[9] += -0.15029292;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[10] += 0.03538641;
            } else {
              result[10] += -0.056001253;
            }
          } else {
            result[10] += -0.14999118;
          }
        } else {
          result[10] += -0.14999513;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[10] += -0.15073398;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[10] += -0.1507752;
            } else {
              result[10] += -0.057262674;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[10] += 0.08571856;
            } else {
              result[10] += -0.14887537;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[10] += -0.14474733;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
              result[10] += 0.096905835;
            } else {
              result[10] += 0.055147458;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += -0.10709754;
            } else {
              result[10] += 0.04189139;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.12995826;
            } else {
              result[10] += -0.0056823157;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[10] += 0.030423399;
            } else {
              result[10] += -0.19878845;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[10] += -0.1502325;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[10] += -0.12696387;
            } else {
              result[10] += 0.15164252;
            }
          } else {
            result[10] += -0.14398398;
          }
        } else {
          result[10] += -0.14907573;
        }
      }
    } else {
      result[10] += -0.15033597;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[11] += -0.1018929;
        } else {
          result[11] += -0.14984661;
        }
      } else {
        result[11] += -0.1499438;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.014574371;
            } else {
              result[11] += -0.13534226;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += 0.0935501;
            } else {
              result[11] += -0.15303549;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.17570399;
            } else {
              result[11] += -0.0006688902;
            }
          } else {
            result[11] += -0.15140975;
          }
        }
      } else {
        result[11] += -0.15007025;
      }
    }
  } else {
    result[11] += -0.15035465;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[12] += -0.10393841;
        } else {
          result[12] += -0.14986798;
        }
      } else {
        result[12] += -0.14996547;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += 0.0689663;
            } else {
              result[12] += -0.17258976;
            }
          } else {
            result[12] += 0.16055721;
          }
        } else {
          result[12] += -0.15206295;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[12] += -0.15096667;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.17415525;
            } else {
              result[12] += -0.12965085;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.017834648;
            } else {
              result[12] += -0.15162489;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15021876;
      } else {
        result[12] += 0.108595066;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.11772521;
            } else {
              result[12] += 0.15696931;
            }
          } else {
            result[12] += -0.09122396;
          }
        } else {
          result[12] += -0.14731544;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.1510553;
            } else {
              result[12] += -0.009355476;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[12] += -0.112600006;
            } else {
              result[12] += 0.24609737;
            }
          }
        } else {
          result[12] += -0.15018663;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[13] += -0.10563124;
            } else {
              result[13] += -0.1499401;
            }
          } else {
            result[13] += -0.15003935;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.0017129085;
            } else {
              result[13] += 0.12696624;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[13] += -0.15093938;
            } else {
              result[13] += -0.026532024;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14859082;
            } else {
              result[13] += 0.10041616;
            }
          } else {
            result[13] += -0.1495971;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.1503084;
            } else {
              result[13] += -0.110104784;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14893873;
            } else {
              result[13] += -0.027879054;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.056056496;
            } else {
              result[13] += -0.061217796;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.038252603;
            } else {
              result[13] += 0.18138821;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.17370681;
            } else {
              result[13] += -0.10989606;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += 0.17203139;
            } else {
              result[13] += -0.14734036;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.12559418;
          } else {
            result[13] += -0.1459493;
          }
        } else {
          result[13] += -0.14963388;
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.13846903;
            } else {
              result[13] += -0.121894754;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.17881536;
            } else {
              result[13] += -0.078210525;
            }
          }
        } else {
          result[13] += 0.15455422;
        }
      } else {
        result[13] += -0.115591206;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[13] += -0.1411736;
        } else {
          result[13] += 0.097068146;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.109864116;
            } else {
              result[13] += -0.08259594;
            }
          } else {
            result[13] += 0.15068015;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.08953122;
          } else {
            result[13] += 0.1655378;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[14] += -7.712747e-05;
            } else {
              result[14] += -0.14727671;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.11385219;
            } else {
              result[14] += -0.1485465;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[14] += -0.15169916;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[14] += 0.119438596;
            } else {
              result[14] += -0.1400474;
            }
          }
        }
      } else {
        result[14] += -0.14984304;
      }
    } else {
      result[14] += -0.14994013;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += -0.14987919;
            } else {
              result[14] += 0.033517927;
            }
          } else {
            result[14] += -0.14861095;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15027928;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.0024921992;
            } else {
              result[14] += -0.14884335;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.1043387;
            } else {
              result[14] += -0.14679237;
            }
          } else {
            result[14] += -0.15351577;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
              result[14] += -0.14790042;
            } else {
              result[14] += -0.07898515;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.3950612;
            } else {
              result[14] += -0.12209928;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.000245901;
            } else {
              result[14] += 0.16419247;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[14] += -0.111922026;
            } else {
              result[14] += 0.17703813;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.24963805;
            } else {
              result[14] += -0.1496668;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[14] += -0.15532085;
            } else {
              result[14] += 0.0460679;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.015540616;
            } else {
              result[14] += 0.22998255;
            }
          } else {
            result[14] += -0.14959008;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.14976123;
            } else {
              result[14] += 0.1770439;
            }
          } else {
            result[14] += -0.15009452;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += 0.027545499;
            } else {
              result[0] += -0.05796107;
            }
          } else {
            result[0] += -0.1497235;
          }
        } else {
          result[0] += -0.14987212;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            result[0] += -0.15041538;
          } else {
            result[0] += -0.014876597;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[0] += -0.07767606;
            } else {
              result[0] += 0.13062379;
            }
          } else {
            result[0] += 0.7647313;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[0] += -0.15011711;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.054831553;
            } else {
              result[0] += 0.7509888;
            }
          } else {
            result[0] += -0.15355124;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            result[0] += 0.23222317;
          } else {
            result[0] += -0.16496393;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          result[0] += -0.14977819;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[0] += 0.3864545;
            } else {
              result[0] += -0.0785672;
            }
          } else {
            result[0] += -0.14789268;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[0] += -0.10819864;
            } else {
              result[0] += 0.096355595;
            }
          } else {
            result[0] += -0.14841972;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[0] += 0.4297992;
            } else {
              result[0] += -0.09182915;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += -0.13003139;
            } else {
              result[0] += 0.023601297;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          result[0] += -0.14883372;
        } else {
          result[0] += 0.15407151;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.14907691;
            } else {
              result[0] += -0.0095514795;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.31947398;
            } else {
              result[0] += -0.138793;
            }
          }
        } else {
          result[0] += -0.14969261;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        result[1] += -0.14716776;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += 0.009713346;
            } else {
              result[1] += 0.09941738;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.015367122;
            } else {
              result[1] += -0.13724361;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.04931151;
            } else {
              result[1] += -0.19503959;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.15279354;
            } else {
              result[1] += -0.14942032;
            }
          }
        }
      }
    } else {
      result[1] += -0.15005091;
    }
  } else {
    result[1] += -0.14943367;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.014265427;
        } else {
          result[2] += -0.0831777;
        }
      } else {
        result[2] += -0.14969642;
      }
    } else {
      result[2] += -0.15044591;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      result[2] += 0.021442378;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.15230593;
      } else {
        result[2] += -0.14451756;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15038353;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14562924;
          } else {
            result[3] += 0.15344943;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            result[3] += -0.07826366;
          } else {
            result[3] += 0.15293342;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.15016748;
        } else {
          result[3] += 0.15520771;
        }
      }
    } else {
      result[3] += -0.15030704;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.15042329;
    } else {
      result[4] += -0.13911656;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.071155235;
            } else {
              result[4] += -0.020751318;
            }
          } else {
            result[4] += 0.1540776;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 0.018852472;
            } else {
              result[4] += -0.011176405;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
              result[4] += 0.025280623;
            } else {
              result[4] += 0.03247829;
            }
          }
        }
      } else {
        result[4] += 0.15251103;
      }
    } else {
      result[4] += 0.15295121;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[5] += -0.0068343673;
          } else {
            result[5] += -0.0831777;
          }
        } else {
          result[5] += 0.029688617;
        }
      } else {
        result[5] += -0.14960328;
      }
    } else {
      result[5] += -0.14974089;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.15044095;
      } else {
        result[5] += 0.14714822;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.14993052;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[5] += 0.016538836;
            } else {
              result[5] += 0.5886762;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += -0.08817041;
            } else {
              result[5] += 0.26896188;
            }
          }
        } else {
          result[5] += -0.1489411;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0018328545;
        } else {
          result[6] += 0.14602964;
        }
      } else {
        result[6] += -0.1496234;
      }
    } else {
      result[6] += -0.1497409;
    }
  } else {
    result[6] += -0.15044594;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.01009888;
            } else {
              result[7] += -0.08747944;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[7] += 0.09361564;
            } else {
              result[7] += 0.027397862;
            }
          }
        } else {
          result[7] += -0.14955394;
        }
      } else {
        result[7] += -0.14967535;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.074692935;
            } else {
              result[7] += 0.07401761;
            }
          } else {
            result[7] += -0.1484902;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[7] += 0.16566229;
          } else {
            result[7] += -0.11414399;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.15068658;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[7] += -0.10204868;
            } else {
              result[7] += 0.5201479;
            }
          } else {
            result[7] += -0.14825897;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.1543773;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.15973242;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.06895776;
            } else {
              result[7] += -0.0038857851;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.14118415;
            } else {
              result[7] += 0.15513071;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.15353718;
            } else {
              result[7] += 0.10601295;
            }
          } else {
            result[7] += -0.1557671;
          }
        } else {
          result[7] += -0.15130746;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[7] += 0.1529743;
          } else {
            result[7] += 0.058701366;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
              result[7] += -0.11463756;
            } else {
              result[7] += 0.15299807;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.13929369;
            } else {
              result[7] += 0.15209071;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[8] += -0.08857425;
          } else {
            result[8] += -0.14962682;
          }
        } else {
          result[8] += -0.14974429;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.013169561;
            } else {
              result[8] += -0.1728512;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.15935037;
            } else {
              result[8] += -0.14598916;
            }
          }
        } else {
          result[8] += -0.15350384;
        }
      }
    } else {
      result[8] += -0.1500403;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.061090626;
            } else {
              result[8] += -0.13654494;
            }
          } else {
            result[8] += 0.09486718;
          }
        } else {
          result[8] += 0.15049244;
        }
      } else {
        result[8] += -0.14986037;
      }
    } else {
      result[8] += -0.15007386;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += 0.025501003;
            } else {
              result[9] += -0.15054578;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.15287802;
            } else {
              result[9] += -0.14789551;
            }
          }
        } else {
          result[9] += -0.14965478;
        }
      } else {
        result[9] += -0.14969186;
      }
    } else {
      result[9] += -0.1498102;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.15041725;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14629053;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[9] += 0.13985349;
          } else {
            result[9] += -0.13875777;
          }
        }
      } else {
        result[9] += -0.15014207;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.028974934;
            } else {
              result[10] += -0.14978649;
            }
          } else {
            result[10] += -0.14979653;
          }
        } else {
          result[10] += -0.15071538;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[10] += 0.06590467;
            } else {
              result[10] += 0.13501868;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[10] += -0.080028325;
            } else {
              result[10] += 0.036877535;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.15102085;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.14799681;
            } else {
              result[10] += 0.06959342;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        result[10] += -0.15018517;
      } else {
        result[10] += 0.06835843;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[10] += -0.14999619;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.025399935;
            } else {
              result[10] += 0.15126976;
            }
          } else {
            result[10] += -0.14194563;
          }
        } else {
          result[10] += -0.14859945;
        }
      }
    } else {
      result[10] += -0.15025052;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[11] += -0.09629474;
        } else {
          result[11] += -0.14962737;
        }
      } else {
        result[11] += -0.14974485;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[11] += 0.016248148;
            } else {
              result[11] += -0.083634935;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.14236142;
            } else {
              result[11] += -0.16877815;
            }
          }
        } else {
          result[11] += -0.15044975;
        }
      } else {
        result[11] += -0.14992835;
      }
    }
  } else {
    result[11] += -0.15026322;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[12] += -0.09859776;
          } else {
            result[12] += -0.14965089;
          }
        } else {
          result[12] += -0.14976817;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[12] += 0.06220157;
            } else {
              result[12] += -0.15054443;
            }
          } else {
            result[12] += -0.15144905;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[12] += -0.15059233;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.16890937;
            } else {
              result[12] += 0.0013582621;
            }
          }
        }
      }
    } else {
      result[12] += -0.15003526;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[12] += -0.0015357706;
          } else {
            result[12] += -0.14719735;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            result[12] += 0.11050986;
          } else {
            result[12] += -0.09811053;
          }
        }
      } else {
        result[12] += -0.15026999;
      }
    } else {
      result[12] += -0.14925246;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[13] += -0.1250655;
            } else {
              result[13] += -0.14984637;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += -0.008059577;
            } else {
              result[13] += -0.14511147;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[13] += -0.15012144;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[13] += -0.017091548;
            } else {
              result[13] += -0.104853384;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[13] += 0.06723317;
            } else {
              result[13] += -0.14584723;
            }
          } else {
            result[13] += -0.14615615;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[13] += -0.15313467;
          } else {
            result[13] += 0.13756992;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[13] += -0.14548762;
        } else {
          result[13] += 0.12695263;
        }
      } else {
        result[13] += -0.14994083;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += 0.1381255;
            } else {
              result[13] += -0.15120983;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.34106815;
            } else {
              result[13] += 0.11948594;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.0030682674;
            } else {
              result[13] += -0.110718735;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.13888751;
            } else {
              result[13] += -0.15081109;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += 0.11358376;
            } else {
              result[13] += 0.15817547;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.15775117;
            } else {
              result[13] += -0.1492671;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            result[13] += -0.2039019;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += 0.1238503;
            } else {
              result[13] += -0.1494219;
            }
          }
        }
      }
    } else {
      result[13] += -0.149994;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[14] += 0.0032758624;
            } else {
              result[14] += -0.091098055;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.10805035;
            } else {
              result[14] += -0.14789227;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[14] += -0.15138972;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[14] += 0.09216033;
            } else {
              result[14] += -0.13799112;
            }
          }
        }
      } else {
        result[14] += -0.1496234;
      }
    } else {
      result[14] += -0.1497409;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        result[14] += -0.15016757;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.066101134;
            } else {
              result[14] += 0.21160598;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.056431;
            } else {
              result[14] += -0.14561395;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[14] += -0.08820983;
            } else {
              result[14] += 0.25992903;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.15088962;
            } else {
              result[14] += -0.12085858;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.0024967382;
            } else {
              result[14] += 0.1608011;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[14] += -0.105573915;
            } else {
              result[14] += 0.16582952;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.22729409;
            } else {
              result[14] += -0.14673018;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[14] += -0.15462746;
            } else {
              result[14] += 0.035935093;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.018728394;
            } else {
              result[14] += 0.19147903;
            }
          } else {
            result[14] += -0.1492737;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[14] += -0.14950284;
            } else {
              result[14] += 0.16590732;
            }
          } else {
            result[14] += -0.14995958;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -0.027791489;
            } else {
              result[0] += -0.15033239;
            }
          } else {
            result[0] += 0.03873571;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
              result[0] += -0.1500409;
            } else {
              result[0] += 0.045215704;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.065559596;
            } else {
              result[0] += -0.15153328;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[0] += -0.026717192;
            } else {
              result[0] += -0.14197485;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += -0.14988786;
            } else {
              result[0] += -0.017447762;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            result[0] += 0.20776653;
          } else {
            result[0] += -0.14570819;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[0] += 0.22232899;
            } else {
              result[0] += 0.03495079;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
              result[0] += -0.28429452;
            } else {
              result[0] += -0.0058056233;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[0] += 0.14894947;
            } else {
              result[0] += 0.06822962;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[0] += 0.12639582;
            } else {
              result[0] += 0.1494788;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
              result[0] += -0.020084793;
            } else {
              result[0] += 0.004387656;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[0] += 0.047256265;
            } else {
              result[0] += 0.13135104;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[0] += 0.124985404;
            } else {
              result[0] += 0.048477065;
            }
          } else {
            result[0] += -0.14485955;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          result[0] += -0.14949532;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[0] += -0.017649673;
            } else {
              result[0] += 0.3171929;
            }
          } else {
            result[0] += -0.1472304;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[0] += -0.10568075;
            } else {
              result[0] += 0.088568196;
            }
          } else {
            result[0] += -0.14786021;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[0] += 0.31926566;
            } else {
              result[0] += -0.09039333;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += -0.1250855;
            } else {
              result[0] += 0.026476296;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          result[0] += -0.14830758;
        } else {
          result[0] += 0.1532768;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.14839792;
            } else {
              result[0] += 0.0046509644;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.28681767;
            } else {
              result[0] += -0.1358803;
            }
          }
        } else {
          result[0] += -0.14942761;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        result[1] += -0.14617348;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.013112675;
            } else {
              result[1] += -0.03411918;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += 0.03550543;
            } else {
              result[1] += 0.13882333;
            }
          }
        } else {
          result[1] += -0.1480826;
        }
      }
    } else {
      result[1] += -0.14991187;
    }
  } else {
    result[1] += -0.14839545;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += -0.011866766;
      } else {
        result[2] += -0.14945781;
      }
    } else {
      result[2] += -0.15037403;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      result[2] += 0.0178541;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.15128665;
      } else {
        result[2] += -0.14263786;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15029451;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[3] += -0.14407644;
          } else {
            result[3] += 0.15169105;
          }
        } else {
          result[3] += 0.15253279;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.14990412;
        } else {
          result[3] += 0.15382382;
        }
      }
    } else {
      result[3] += -0.15020353;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.15033585;
    } else {
      result[4] += -0.13541776;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.069487065;
            } else {
              result[4] += -0.020585177;
            }
          } else {
            result[4] += 0.15247828;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)52239)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)50473)) {
              result[4] += 0.014334439;
            } else {
              result[4] += -0.011734159;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)54161)) {
              result[4] += 0.049052645;
            } else {
              result[4] += 0.01429213;
            }
          }
        }
      } else {
        result[4] += 0.15158477;
      }
    } else {
      result[4] += 0.1521534;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += -0.0053817895;
        } else {
          result[5] += 0.025652112;
        }
      } else {
        result[5] += -0.1493457;
      }
    } else {
      result[5] += -0.14951774;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.15037033;
      } else {
        result[5] += 0.14179358;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.14975263;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[5] += 0.0370866;
            } else {
              result[5] += 0.6809304;
            }
          } else {
            result[5] += -0.1435476;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += -0.12647396;
            } else {
              result[5] += -0.08492292;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[5] += 0.6505885;
            } else {
              result[5] += -0.026272176;
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
          result[6] += 0.0021639357;
        } else {
          result[6] += 0.14338748;
        }
      } else {
        result[6] += -0.14937104;
      }
    } else {
      result[6] += -0.14951776;
    }
  } else {
    result[6] += -0.15037403;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[7] += 0.008097706;
            } else {
              result[7] += 0.029083574;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.06469872;
            } else {
              result[7] += -0.14791706;
            }
          }
        } else {
          result[7] += -0.14927953;
        }
      } else {
        result[7] += -0.14944065;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.15336438;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.15820539;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[7] += 0.056068946;
            } else {
              result[7] += -0.010599954;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.13559213;
            } else {
              result[7] += 0.15374686;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.068080656;
            } else {
              result[7] += 0.06171391;
            }
          } else {
            result[7] += -0.14692523;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[7] += 0.16235268;
          } else {
            result[7] += -0.112679034;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.15038493;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[7] += -0.09677974;
            } else {
              result[7] += 0.3257804;
            }
          } else {
            result[7] += -0.14734846;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.15268071;
            } else {
              result[7] += 0.09344825;
            }
          } else {
            result[7] += -0.15451369;
          }
        } else {
          result[7] += -0.1507209;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[7] += 0.15223473;
          } else {
            result[7] += 0.046533283;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += -0.14720489;
            } else {
              result[7] += 0.34360367;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[7] += 0.027565861;
            } else {
              result[7] += 0.15222017;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[8] += -0.08236056;
          } else {
            result[8] += -0.14937508;
          }
        } else {
          result[8] += -0.14952165;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += 0.0057037957;
            } else {
              result[8] += 0.119725876;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += -0.15499859;
            } else {
              result[8] += -0.20670843;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[8] += 0.15994826;
            } else {
              result[8] += -0.1394774;
            }
          } else {
            result[8] += -0.14486739;
          }
        }
      }
    } else {
      result[8] += -0.14993782;
    }
  } else {
    result[8] += -0.1519277;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += 0.021341115;
            } else {
              result[9] += -0.15030621;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.15195253;
            } else {
              result[9] += -0.1470614;
            }
          }
        } else {
          result[9] += -0.14938432;
        }
      } else {
        result[9] += -0.14945132;
      }
    } else {
      result[9] += -0.14959659;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.1503471;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14519686;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.1402484;
            } else {
              result[9] += 0.12794796;
            }
          } else {
            result[9] += -0.1352932;
          }
        }
      } else {
        result[9] += -0.1499607;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.024356853;
            } else {
              result[10] += -0.14956094;
            }
          } else {
            result[10] += -0.14957996;
          }
        } else {
          result[10] += -0.15059423;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += 0.042055126;
            } else {
              result[10] += 0.089576654;
            }
          } else {
            result[10] += -0.16730319;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.15042862;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.14608775;
            } else {
              result[10] += 0.055324893;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        result[10] += -0.15006994;
      } else {
        result[10] += 0.05488136;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[10] += -0.14974767;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[10] += -0.12113611;
            } else {
              result[10] += 0.14404406;
            }
          } else {
            result[10] += -0.1393403;
          }
        } else {
          result[10] += -0.14800388;
        }
      }
    } else {
      result[10] += -0.15017769;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[11] += -0.09036569;
        } else {
          result[11] += -0.14937574;
        }
      } else {
        result[11] += -0.1495223;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.011277352;
            } else {
              result[11] += -0.12702502;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.077862985;
            } else {
              result[11] += -0.10103963;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[11] += -0.150545;
            } else {
              result[11] += -0.15905629;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[11] += 0.22910874;
            } else {
              result[11] += -0.15705045;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            result[11] += 0.59940696;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.03869752;
            } else {
              result[11] += 0.13248767;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[11] += -0.19476938;
          } else {
            result[11] += -0.14838228;
          }
        }
      }
    }
  } else {
    result[11] += -0.15018827;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[12] += -0.09276021;
            } else {
              result[12] += -0.14940344;
            }
          } else {
            result[12] += -0.149549;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[12] += 0.027327215;
            } else {
              result[12] += 0.13510594;
            }
          } else {
            result[12] += -0.15118591;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[12] += -0.15034299;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.17150462;
            } else {
              result[12] += -0.10127265;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.06800747;
            } else {
              result[12] += 0.042587418;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[12] += 0.11965698;
            } else {
              result[12] += 0.15520096;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += 0.19727062;
            } else {
              result[12] += 0.23799443;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            result[12] += 0.14566147;
          } else {
            result[12] += 0.2681345;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[12] += -0.15330933;
            } else {
              result[12] += -0.09624619;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.14762023;
            } else {
              result[12] += -0.13126531;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[12] += 0.15058395;
            } else {
              result[12] += -0.12496319;
            }
          } else {
            result[12] += -0.15040168;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        result[12] += -0.0028953692;
      } else {
        result[12] += -0.14964885;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          result[12] += -0.14954908;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            result[12] += 0.103080876;
          } else {
            result[12] += -0.11619202;
          }
        }
      } else {
        result[12] += -0.14885041;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[13] += -0.12981069;
            } else {
              result[13] += -0.020036994;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[13] += -0.14982176;
            } else {
              result[13] += -0.066461526;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.0602816;
            } else {
              result[13] += -0.07708423;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += -0.15267213;
            } else {
              result[13] += 0.12433984;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[13] += 0.036965776;
            } else {
              result[13] += 0.15747115;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += -0.14206302;
            } else {
              result[13] += -0.16768786;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += 0.48067516;
            } else {
              result[13] += 0.13296023;
            }
          } else {
            result[13] += 0.521777;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[13] += -0.14394172;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[13] += 0.0072251526;
          } else {
            result[13] += 0.17079885;
          }
        }
      } else {
        result[13] += -0.1504175;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.15137891;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
              result[13] += -0.1383075;
            } else {
              result[13] += 0.1457498;
            }
          }
        } else {
          result[13] += 0.15365988;
        }
      } else {
        result[13] += -0.09806323;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[13] += -0.13621223;
        } else {
          result[13] += 0.08646421;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.097704016;
            } else {
              result[13] += -0.07293527;
            }
          } else {
            result[13] += 0.14306863;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[13] += 0.15004501;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += -0.008606487;
            } else {
              result[13] += 0.10075176;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[14] += 0.0004387084;
            } else {
              result[14] += -0.1426999;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.091690496;
            } else {
              result[14] += -0.1470613;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.15105098;
            } else {
              result[14] += -0.0644084;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += 0.41891328;
            } else {
              result[14] += -0.072728634;
            }
          }
        }
      } else {
        result[14] += -0.14937104;
      }
    } else {
      result[14] += -0.14951776;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        result[14] += -0.1500894;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.048089206;
            } else {
              result[14] += -0.14327778;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.19050778;
            } else {
              result[14] += -0.15625615;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[14] += -0.08209986;
            } else {
              result[14] += 0.19672355;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.15082088;
            } else {
              result[14] += -0.11407983;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.0039019634;
            } else {
              result[14] += 0.15834817;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.10068286;
            } else {
              result[14] += 0.15143698;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.21153496;
            } else {
              result[14] += -0.14363699;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[14] += -0.15359336;
            } else {
              result[14] += 0.02877068;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            result[14] += 0.10376534;
          } else {
            result[14] += -0.14649405;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.14686587;
            } else {
              result[14] += 0.140533;
            }
          } else {
            result[14] += -0.14978315;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += 0.0284951;
            } else {
              result[0] += -0.039225116;
            }
          } else {
            result[0] += -0.14933191;
          }
        } else {
          result[0] += -0.14954558;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += -0.15011902;
          } else {
            result[0] += 0.8634743;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += -0.14835826;
            } else {
              result[0] += 0.0011102342;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[0] += 0.18926053;
            } else {
              result[0] += -0.14053042;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5629642)) {
              result[0] += 0.17408505;
            } else {
              result[0] += -0.10778196;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += -0.17651951;
            } else {
              result[0] += 0.09532871;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[0] += 0.14642362;
            } else {
              result[0] += 0.05811099;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += 0.121706106;
            } else {
              result[0] += 0.1499708;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
              result[0] += -0.015040966;
            } else {
              result[0] += 0.0060392595;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[0] += 0.045998998;
            } else {
              result[0] += 0.12552398;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.13209413;
            } else {
              result[0] += -0.12781882;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += -0.007700548;
            } else {
              result[0] += 0.10596607;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          result[0] += -0.14916924;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[0] += 0.30345255;
            } else {
              result[0] += -0.08191672;
            }
          } else {
            result[0] += -0.1464393;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[0] += -0.097825445;
            } else {
              result[0] += 0.053044554;
            }
          } else {
            result[0] += -0.14722185;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[0] += 0.25952497;
            } else {
              result[0] += -0.088146664;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += -0.119680464;
            } else {
              result[0] += 0.024823256;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          result[0] += -0.14765014;
        } else {
          result[0] += 0.1526249;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[0] += -0.14785965;
            } else {
              result[0] += 0.006913558;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.25930762;
            } else {
              result[0] += -0.13199061;
            }
          }
        } else {
          result[0] += -0.14910825;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.14496973;
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += 0.0055363905;
            } else {
              result[1] += 0.05840603;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.10208681;
            } else {
              result[1] += 0.01971955;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[1] += -0.14132;
            } else {
              result[1] += -0.027934887;
            }
          } else {
            result[1] += -0.14954025;
          }
        }
      } else {
        result[1] += -0.14978461;
      }
    }
  } else {
    result[1] += -0.1476165;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += -0.010029684;
      } else {
        result[2] += -0.14917383;
      }
    } else {
      result[2] += -0.15031461;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      result[2] += 0.015158368;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.1504184;
      } else {
        result[2] += -0.1402357;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15021405;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.14224344;
            } else {
              result[3] += 0.15174459;
            }
          } else {
            result[3] += 0.1515023;
          }
        } else {
          result[3] += -0.07700659;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.14964351;
        } else {
          result[3] += 0.15277584;
        }
      }
    } else {
      result[3] += -0.1500943;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.15025738;
    } else {
      result[4] += -0.13060245;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.060879946;
            } else {
              result[4] += -0.018965613;
            }
          } else {
            result[4] += 0.15109628;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 0.013778905;
            } else {
              result[4] += -0.011173647;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
              result[4] += 0.019911898;
            } else {
              result[4] += 0.02606539;
            }
          }
        }
      } else {
        result[4] += 0.15083861;
      }
    } else {
      result[4] += 0.15157714;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += -0.004437228;
        } else {
          result[5] += 0.022290943;
        }
      } else {
        result[5] += -0.14903119;
      }
    } else {
      result[5] += -0.14925356;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        result[5] += -0.15031067;
      } else {
        result[5] += 0.136413;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.14954469;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[5] += 0.046198793;
            } else {
              result[5] += 0.4191856;
            }
          } else {
            result[5] += -0.14140742;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += -0.12203466;
            } else {
              result[5] += -0.07687062;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[5] += 0.40452114;
            } else {
              result[5] += -0.01140672;
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
          result[6] += 0.0019390908;
        } else {
          result[6] += 0.14082369;
        }
      } else {
        result[6] += -0.14906453;
      }
    } else {
      result[6] += -0.14925358;
    }
  } else {
    result[6] += -0.15031461;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += 0.0023410404;
            } else {
              result[7] += -0.06099827;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.15247935;
            } else {
              result[7] += -0.11921469;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -0.1570795;
            } else {
              result[7] += -0.30394536;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
              result[7] += 0.004461167;
            } else {
              result[7] += 0.0919369;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[7] += 0.1525784;
          } else {
            result[7] += -0.12570494;
          }
        } else {
          result[7] += -0.12969796;
        }
      }
    } else {
      result[7] += 0.15198387;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[7] += 0.15909486;
        } else {
          result[7] += -0.10901753;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[7] += -0.15008014;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[7] += -0.08927482;
            } else {
              result[7] += 0.25219893;
            }
          } else {
            result[7] += -0.14619532;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[7] += 0.15167993;
        } else {
          result[7] += 0.0327873;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.02650209;
            } else {
              result[7] += -0.15797624;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[7] += -0.00038469004;
            } else {
              result[7] += 0.16220215;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[7] += -0.1572183;
          } else {
            result[7] += 0.15166934;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[8] += -0.07624561;
        } else {
          result[8] += -0.14906955;
        }
      } else {
        result[8] += -0.14925826;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.01784315;
            } else {
              result[8] += -0.095516585;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[8] += 0.059628375;
            } else {
              result[8] += -0.03462096;
            }
          }
        } else {
          result[8] += -0.15021591;
        }
      } else {
        result[8] += -0.14960264;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[8] += -0.14745054;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += 0.02472284;
            } else {
              result[8] += 0.5426995;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.025452288;
            } else {
              result[8] += -0.14776395;
            }
          }
        }
      } else {
        result[8] += -0.15036654;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.15283298;
            } else {
              result[8] += 0.09930142;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += -0.15480566;
            } else {
              result[8] += -0.20073123;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[8] += 0.15807214;
          } else {
            result[8] += -0.14320993;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[8] += -0.2449321;
        } else {
          result[8] += -0.14991507;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += 0.017432967;
            } else {
              result[9] += -0.15007816;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.15129113;
            } else {
              result[9] += -0.14598809;
            }
          }
        } else {
          result[9] += -0.1490592;
        }
      } else {
        result[9] += -0.1491633;
      }
    } else {
      result[9] += -0.14934756;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.15028751;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14398213;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.13627915;
            } else {
              result[9] += 0.12323929;
            }
          } else {
            result[9] += -0.13101865;
          }
        }
      } else {
        result[9] += -0.14977853;
      }
    }
  }
}

