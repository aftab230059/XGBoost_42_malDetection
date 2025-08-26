
#include "header.h"

void predict_unit27(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[9] += -0.00011414706;
          } else {
            result[9] += 0.00021324657;
          }
        } else {
          result[9] += -0.0007509683;
        }
      } else {
        result[9] += 0.03958889;
      }
    } else {
      result[9] += -0.1127128;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
      result[9] += 0.07684757;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[9] += -0.0028299603;
            } else {
              result[9] += 0.070571244;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[9] += -0.19369346;
            } else {
              result[9] += -0.011426677;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
            result[9] += 0.105890505;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
              result[9] += -0.07844341;
            } else {
              result[9] += 0.013729889;
            }
          }
        }
      } else {
        result[9] += 0.073247254;
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
              result[10] += -0.00061917736;
            } else {
              result[10] += 0.04865;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.114919946;
            } else {
              result[10] += -0.016897302;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
              result[10] += 0.047326256;
            } else {
              result[10] += -0.0434678;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
              result[10] += 0.109319724;
            } else {
              result[10] += -0.02041404;
            }
          }
        }
      } else {
        result[10] += -0.047461282;
      }
    } else {
      result[10] += -0.046134327;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[10] += -0.08611429;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12324)) {
              result[10] += 0.0057361303;
            } else {
              result[10] += -0.04266557;
            }
          } else {
            result[10] += 0.103055485;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14362)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
              result[10] += -0.028418688;
            } else {
              result[10] += -0.16084954;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14612)) {
              result[10] += 0.04048465;
            } else {
              result[10] += -0.03155357;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
          result[10] += 0.13638616;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
            result[10] += -0.054585468;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
              result[10] += 0.04849781;
            } else {
              result[10] += 0.0029484734;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[11] += -4.263601e-05;
            } else {
              result[11] += 0.054950412;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
              result[11] += 0.15072766;
            } else {
              result[11] += -0.0070736594;
            }
          }
        } else {
          result[11] += -0.080193825;
        }
      } else {
        result[11] += -0.080534644;
      }
    } else {
      result[11] += -0.08122837;
    }
  } else {
    result[11] += -0.08164559;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
              result[12] += 0.0011437814;
            } else {
              result[12] += 0.05396816;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[12] += -0.0095177;
            } else {
              result[12] += -0.13597879;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[12] += 0.04289518;
            } else {
              result[12] += 0.0028485558;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
              result[12] += 0.32210165;
            } else {
              result[12] += -0.043360226;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[12] += -0.08611964;
            } else {
              result[12] += -0.009407755;
            }
          } else {
            result[12] += -0.13392115;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
            result[12] += 0.29593867;
          } else {
            result[12] += -0.108221225;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)12831)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
              result[12] += -0.007814206;
            } else {
              result[12] += -0.043202717;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[12] += -0.08626658;
            } else {
              result[12] += 0.08537947;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12324)) {
              result[12] += 0.13185778;
            } else {
              result[12] += -0.062272426;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
              result[12] += -0.036739144;
            } else {
              result[12] += 0.13469385;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
              result[12] += 0.0024427753;
            } else {
              result[12] += 0.038532816;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[12] += -0.0087883845;
            } else {
              result[12] += -0.08474613;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18700)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += -0.041321393;
            } else {
              result[12] += 0.032303937;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
              result[12] += 0.031841848;
            } else {
              result[12] += -0.00021303614;
            }
          }
        }
      }
    }
  } else {
    result[12] += -0.08084475;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
              result[13] += 3.589288e-05;
            } else {
              result[13] += -0.05978519;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[13] += 0.014864142;
            } else {
              result[13] += 0.2164322;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[13] += -0.1374603;
            } else {
              result[13] += 0.027397113;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
              result[13] += -0.01939459;
            } else {
              result[13] += 0.15195425;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2764642816)) {
              result[13] += -0.028793892;
            } else {
              result[13] += 0.19869065;
            }
          } else {
            result[13] += -0.12902255;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[13] += -0.03285843;
            } else {
              result[13] += 0.43757385;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[13] += 0.0920126;
            } else {
              result[13] += -0.14676338;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
              result[13] += 0.010951728;
            } else {
              result[13] += 0.1864904;
            }
          } else {
            result[13] += -0.121969104;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
            result[13] += 0.29378867;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.10354274;
            } else {
              result[13] += -0.101500966;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[13] += -0.076980606;
            } else {
              result[13] += -0.15078402;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
              result[13] += 0.058682024;
            } else {
              result[13] += -0.09584504;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += 0.003130541;
            } else {
              result[13] += 0.064455755;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
              result[13] += -0.023055406;
            } else {
              result[13] += 0.0006368182;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
      result[13] += -0.081725;
    } else {
      result[13] += -0.016112844;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
              result[14] += -0.0008295062;
            } else {
              result[14] += -0.0937216;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[14] += -0.08849788;
            } else {
              result[14] += 0.26522145;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51470)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
              result[14] += -0.006811583;
            } else {
              result[14] += -0.11822085;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += 0.13923913;
            } else {
              result[14] += -0.11204001;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
              result[14] += 0.008193838;
            } else {
              result[14] += 0.11766217;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
              result[14] += -0.1106513;
            } else {
              result[14] += 0.03955839;
            }
          }
        } else {
          result[14] += 0.30057108;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
          result[14] += 0.16884395;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
              result[14] += -0.11056421;
            } else {
              result[14] += 0.02668628;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.008250539;
            } else {
              result[14] += -0.094685905;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51470)) {
            result[14] += 0.2596736;
          } else {
            result[14] += 0.06445382;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
            result[14] += 0.06467152;
          } else {
            result[14] += -0.096941985;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12324)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[14] += -0.1212208;
            } else {
              result[14] += 0.013422047;
            }
          } else {
            result[14] += 0.22283152;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            result[14] += -0.12812683;
          } else {
            result[14] += 0.0013630075;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
              result[14] += 0.16896516;
            } else {
              result[14] += -0.108154565;
            }
          } else {
            result[14] += 0.2867919;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[14] += -0.06667024;
            } else {
              result[14] += 0.05494128;
            }
          } else {
            result[14] += 0.21770683;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
              result[14] += 0.00076087523;
            } else {
              result[14] += 0.23143817;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[14] += -0.011535784;
            } else {
              result[14] += -0.08522301;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
              result[14] += -0.1472138;
            } else {
              result[14] += -0.045815744;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
              result[14] += 0.1216138;
            } else {
              result[14] += -0.085848026;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[14] += -0.02013944;
            } else {
              result[14] += 0.17627807;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += 0.0016042712;
            } else {
              result[14] += 0.026278906;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1278356224)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[14] += -0.13982877;
            } else {
              result[14] += 0.018565217;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
              result[14] += 0.03913457;
            } else {
              result[14] += -0.00050381635;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[0] += -0.00035681744;
        } else {
          result[0] += -0.00073701295;
        }
      } else {
        result[0] += 1.8361397e-05;
      }
    } else {
      result[0] += -0.1139531;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[0] += 0.0036709812;
            } else {
              result[0] += -0.06492738;
            }
          } else {
            result[0] += 0.07206989;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[0] += -0.10168304;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[0] += 0.038138554;
            } else {
              result[0] += -0.035428196;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
          result[0] += 0.10931798;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
            result[0] += -0.053877167;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[0] += 0.06885254;
            } else {
              result[0] += -0.032958705;
            }
          }
        }
      }
    } else {
      result[0] += -0.044330824;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
              result[1] += -0.00072628097;
            } else {
              result[1] += 0.0069215056;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
              result[1] += -0.08288301;
            } else {
              result[1] += 0.022182576;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[1] += -0.005632716;
            } else {
              result[1] += 0.1694219;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[1] += -0.08629641;
            } else {
              result[1] += 0.15928945;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
              result[1] += 0.0011499561;
            } else {
              result[1] += 0.13905828;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29679)) {
              result[1] += -0.00757746;
            } else {
              result[1] += -0.21421252;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += -0.104687415;
            } else {
              result[1] += -0.22055797;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
              result[1] += -0.09279967;
            } else {
              result[1] += 0.21510707;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[1] += 0.0027039377;
            } else {
              result[1] += -0.21006097;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
              result[1] += 0.19049984;
            } else {
              result[1] += 0.021938095;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
              result[1] += -0.033501778;
            } else {
              result[1] += 0.07516281;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
              result[1] += -0.12630853;
            } else {
              result[1] += 0.12436361;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46583)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
              result[1] += -0.07444028;
            } else {
              result[1] += 0.15922388;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += -0.17759405;
            } else {
              result[1] += 0.021703357;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
              result[1] += 0.043486092;
            } else {
              result[1] += -0.10912486;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[1] += 0.14296128;
            } else {
              result[1] += -0.00026097003;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.08458224;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)42986)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)42720)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)42448)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.0041008643;
            } else {
              result[2] += 0.007790875;
            }
          } else {
            result[2] += 0.08367556;
          }
        } else {
          result[2] += -0.147437;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)43775)) {
            result[2] += 0.13553265;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
              result[2] += -0.10124151;
            } else {
              result[2] += 0.01038106;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)43775)) {
            result[2] += -0.14925942;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)45034)) {
              result[2] += 0.090646654;
            } else {
              result[2] += -0.022974221;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          result[2] += -0.05879586;
        } else {
          result[2] += 0.0066225673;
        }
      } else {
        result[2] += 0.009762535;
      }
    }
  } else {
    result[2] += 0.034062035;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
      result[3] += -0.0021080116;
    } else {
      result[3] += 0.026281472;
    }
  } else {
    result[3] += -0.023525357;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.028379025;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)48433)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[4] += 0.028090307;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[4] += -0.019949362;
            } else {
              result[4] += 0.014750241;
            }
          }
        } else {
          result[4] += 0.04794894;
        }
      } else {
        result[4] += -0.006992797;
      }
    }
  } else {
    result[4] += 0.0473095;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += 0.00018400593;
            } else {
              result[5] += 0.02004515;
            }
          } else {
            result[5] += -0.0874607;
          }
        } else {
          result[5] += 0.06473516;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
          result[5] += -0.08500425;
        } else {
          result[5] += 0.00698948;
        }
      }
    } else {
      result[5] += -0.07714555;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)545895936)) {
      result[5] += -0.019015728;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
        result[5] += 0.075356305;
      } else {
        result[5] += -0.008979018;
      }
    }
  }
  result[6] += -0.00010235364;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += -6.353701e-05;
            } else {
              result[7] += -0.036778715;
            }
          } else {
            result[7] += -0.0751232;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[7] += 0.098689966;
          } else {
            result[7] += 0.01680492;
          }
        }
      } else {
        result[7] += -0.09296324;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)29424)) {
        result[7] += -0.08781662;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[7] += 0.19680114;
        } else {
          result[7] += 0.007333516;
        }
      }
    }
  } else {
    result[7] += -0.08127221;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)58671)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
              result[8] += 0.00046068706;
            } else {
              result[8] += -0.020891665;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[8] += 0.055003557;
            } else {
              result[8] += -0.037562735;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[8] += -0.08406143;
            } else {
              result[8] += -0.015369849;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[8] += 0.27795243;
            } else {
              result[8] += 0.056632202;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[8] += 0.07354718;
            } else {
              result[8] += -0.14655496;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[8] += -0.13633503;
            } else {
              result[8] += 0.01954234;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
              result[8] += 0.0061832536;
            } else {
              result[8] += -0.017905762;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.121446155;
            } else {
              result[8] += -6.337628e-05;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
              result[8] += -0.020141821;
            } else {
              result[8] += 0.052275263;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[8] += -0.07708189;
            } else {
              result[8] += 0.0003813486;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.33233616;
            } else {
              result[8] += 0.032111384;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[8] += 0.104751945;
            } else {
              result[8] += -0.124453224;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[8] += -0.0130560845;
            } else {
              result[8] += 0.01039541;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
              result[8] += -0.04872668;
            } else {
              result[8] += 0.010724356;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
              result[8] += -0.08280533;
            } else {
              result[8] += 0.16237909;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[8] += 0.020919032;
            } else {
              result[8] += -0.0030924373;
            }
          }
        }
      }
    }
  } else {
    result[8] += -0.08968537;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[9] += -0.00012517447;
          } else {
            result[9] += 0.00016055536;
          }
        } else {
          result[9] += -0.000680134;
        }
      } else {
        result[9] += 0.03746209;
      }
    } else {
      result[9] += -0.10972534;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
      result[9] += 0.07363769;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
              result[9] += -0.007827952;
            } else {
              result[9] += 0.10558094;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
              result[9] += 0.07578718;
            } else {
              result[9] += -0.084857225;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
              result[9] += 0.005414053;
            } else {
              result[9] += -0.065965384;
            }
          } else {
            result[9] += 0.0998273;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[9] += -0.01503402;
            } else {
              result[9] += 0.095708735;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
              result[9] += -0.11674075;
            } else {
              result[9] += 0.074766114;
            }
          }
        } else {
          result[9] += 0.105564624;
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
              result[10] += 0.00058341306;
            } else {
              result[10] += 0.06750022;
            }
          } else {
            result[10] += -0.11780097;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
              result[10] += 0.065089226;
            } else {
              result[10] += 0.2075964;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
              result[10] += 0.043751698;
            } else {
              result[10] += -0.10589622;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
          result[10] += -0.13438588;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
              result[10] += -0.032950114;
            } else {
              result[10] += 0.09835584;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
              result[10] += -0.16325729;
            } else {
              result[10] += 0.023067802;
            }
          }
        }
      }
    } else {
      result[10] += 0.1546674;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)56836)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.20973022;
            } else {
              result[10] += -0.070025735;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41485)) {
              result[10] += 0.046809167;
            } else {
              result[10] += -0.10598202;
            }
          }
        } else {
          result[10] += 0.15668327;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
          result[10] += -0.06610247;
        } else {
          result[10] += -0.19052438;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
          result[10] += -0.13215932;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
            result[10] += 0.07526392;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[10] += -0.07810523;
            } else {
              result[10] += 0.024438392;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22532)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += 0.0591924;
            } else {
              result[10] += 0.19240083;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
              result[10] += -0.09903652;
            } else {
              result[10] += 0.07352833;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25575)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23300)) {
              result[10] += -0.0016146351;
            } else {
              result[10] += -0.0869333;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
              result[10] += 0.090233415;
            } else {
              result[10] += 0.0021540567;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[11] += 0.00010839802;
            } else {
              result[11] += -0.014743988;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[11] += -0.024569726;
            } else {
              result[11] += 0.07763504;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
              result[11] += -0.05218816;
            } else {
              result[11] += 0.043653823;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
              result[11] += -0.075913966;
            } else {
              result[11] += -0.005763424;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += -0.12054157;
        } else {
          result[11] += 0.123652615;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[11] += -0.15329878;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.18784438;
            } else {
              result[11] += 0.0877364;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.1390816;
            } else {
              result[11] += 0.004606303;
            }
          }
        } else {
          result[11] += -0.14358203;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2476456192)) {
        result[11] += -0.19457069;
      } else {
        result[11] += 0.09035054;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
              result[11] += 0.08653624;
            } else {
              result[11] += 0.16488156;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
              result[11] += -0.17489424;
            } else {
              result[11] += 0.108385034;
            }
          }
        } else {
          result[11] += -0.12105537;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[11] += -0.073669545;
            } else {
              result[11] += 0.19095507;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
              result[11] += -0.012084597;
            } else {
              result[11] += -0.25472438;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[11] += 0.00072312023;
            } else {
              result[11] += -0.115602106;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
              result[11] += 0.046453632;
            } else {
              result[11] += 0.0044585573;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += 0.00011562737;
            } else {
              result[12] += 0.00853507;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.007188271;
            } else {
              result[12] += 0.10254172;
            }
          }
        } else {
          result[12] += -0.08945341;
        }
      } else {
        result[12] += -0.08696467;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
          result[12] += -0.027178463;
        } else {
          result[12] += -0.12495836;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            result[12] += 0.030003702;
          } else {
            result[12] += -0.10141597;
          }
        } else {
          result[12] += 0.07158786;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
          result[12] += -0.11065988;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
            result[12] += -0.008221367;
          } else {
            result[12] += 0.04941242;
          }
        }
      } else {
        result[12] += -0.13433874;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
            result[12] += -0.022271093;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
              result[12] += 0.020309228;
            } else {
              result[12] += 0.17323655;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
            result[12] += -0.14046854;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.037693407;
            } else {
              result[12] += 0.099406935;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.013750582;
            } else {
              result[12] += -0.15466526;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
              result[12] += 0.11070877;
            } else {
              result[12] += -0.03189201;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
              result[12] += -0.0077268905;
            } else {
              result[12] += -0.1390436;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1278356224)) {
              result[12] += 0.063116305;
            } else {
              result[12] += -0.000921493;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
              result[13] += 0.00034671646;
            } else {
              result[13] += -0.047858503;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[13] += 0.009254496;
            } else {
              result[13] += 0.09974534;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
              result[13] += -0.008037525;
            } else {
              result[13] += -0.063202016;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[13] += 0.03731411;
            } else {
              result[13] += -0.0015182436;
            }
          }
        }
      } else {
        result[13] += -0.07685503;
      }
    } else {
      result[13] += -0.11401334;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
      result[13] += 0.14316238;
    } else {
      result[13] += -0.043680683;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[14] += -0.0011535292;
            } else {
              result[14] += -0.07372985;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
              result[14] += -0.06771166;
            } else {
              result[14] += 0.0010224091;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
              result[14] += 0.034565162;
            } else {
              result[14] += 0.35800213;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
              result[14] += 0.0024672486;
            } else {
              result[14] += 0.09869494;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2588646656)) {
              result[14] += -0.05693785;
            } else {
              result[14] += 0.0257879;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[14] += -0.1395074;
            } else {
              result[14] += -0.016525552;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[14] += -0.0018741472;
            } else {
              result[14] += 0.12148378;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.054263666;
            } else {
              result[14] += 0.16829675;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
        result[14] += -0.118924685;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
            result[14] += 0.03341418;
          } else {
            result[14] += 0.37300155;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[14] += -0.14703164;
            } else {
              result[14] += 0.051406946;
            }
          } else {
            result[14] += 0.038145028;
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
            result[14] += 0.10498257;
          } else {
            result[14] += -0.009964165;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[14] += -0.011971763;
          } else {
            result[14] += 0.07095753;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
          result[14] += -0.14988482;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.30157256;
            } else {
              result[14] += -0.09552002;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
              result[14] += -0.0117895175;
            } else {
              result[14] += 0.12409201;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[14] += -0.10676357;
            } else {
              result[14] += -0.040696584;
            }
          } else {
            result[14] += -0.13887236;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[14] += 0.2477487;
            } else {
              result[14] += -0.07522013;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[14] += -0.08879061;
            } else {
              result[14] += -0.0004291037;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
              result[14] += 0.054396525;
            } else {
              result[14] += 0.0042899963;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
              result[14] += 0.25752813;
            } else {
              result[14] += -0.04127775;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[14] += -0.014215718;
            } else {
              result[14] += -0.085311726;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
              result[14] += 0.030066842;
            } else {
              result[14] += -0.0020054122;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[0] += 0.000502429;
            } else {
              result[0] += 0.09238498;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[0] += -0.11435387;
            } else {
              result[0] += 0.016164958;
            }
          }
        } else {
          result[0] += -0.11011168;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
              result[0] += 0.0055590025;
            } else {
              result[0] += 0.07085461;
            }
          } else {
            result[0] += -0.087779805;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
              result[0] += 0.12129428;
            } else {
              result[0] += 0.027413357;
            }
          } else {
            result[0] += -0.022777136;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            result[0] += -0.012807881;
          } else {
            result[0] += -0.100174986;
          }
        } else {
          result[0] += 0.03548278;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
              result[0] += -0.060613863;
            } else {
              result[0] += 0.08963986;
            }
          } else {
            result[0] += -0.09466947;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43291)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[0] += 0.033412833;
            } else {
              result[0] += -0.060153496;
            }
          } else {
            result[0] += 0.08686559;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
      result[0] += -0.035968386;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
        result[0] += 0.15890417;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            result[0] += 0.071338795;
          } else {
            result[0] += -0.020796346;
          }
        } else {
          result[0] += -0.04406649;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.00028215695;
            } else {
              result[1] += -0.022384537;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.038350288;
            } else {
              result[1] += 0.0046328735;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += -0.13458446;
            } else {
              result[1] += 0.06665121;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[1] += 0.14785306;
            } else {
              result[1] += -0.06851412;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[1] += -0.14590207;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[1] += -0.07273086;
            } else {
              result[1] += -0.0033358235;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
              result[1] += -0.020010557;
            } else {
              result[1] += 0.08965851;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[1] += 0.15703532;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12831)) {
            result[1] += 0.13074547;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
              result[1] += -0.19793725;
            } else {
              result[1] += 0.0077618794;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
              result[1] += 0.32169718;
            } else {
              result[1] += -0.0829639;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += -0.11059298;
            } else {
              result[1] += 0.12904632;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25824)) {
              result[1] += -0.2010238;
            } else {
              result[1] += -0.024957567;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
              result[1] += 0.014249467;
            } else {
              result[1] += -0.026652817;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[1] += -0.13419436;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
          result[1] += -0.07821897;
        } else {
          result[1] += 0.11846421;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[1] += 0.12706472;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
              result[1] += -0.004391419;
            } else {
              result[1] += 0.11182242;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.045327783;
            } else {
              result[1] += -0.07539331;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[1] += 0.0104011735;
            } else {
              result[1] += 0.12300899;
            }
          } else {
            result[1] += -0.1686889;
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[2] += -0.0169137;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[2] += -0.0005062674;
            } else {
              result[2] += 0.0004917146;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)27196)) {
              result[2] += -0.00020199969;
            } else {
              result[2] += 0.16812156;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)29495)) {
              result[2] += -0.035856497;
            } else {
              result[2] += 0.0011149065;
            }
          }
        }
      } else {
        result[2] += 0.034620386;
      }
    } else {
      result[2] += -0.025513884;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
      result[2] += 0.043782204;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)48433)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            result[2] += -0.014997189;
          } else {
            result[2] += 0.0182452;
          }
        } else {
          result[2] += -0.030185653;
        }
      } else {
        result[2] += 0.02549514;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += 0.0041700746;
    } else {
      result[3] += 0.01695398;
    }
  } else {
    result[3] += -0.021387879;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.01572745;
    } else {
      result[4] += -0.028951425;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
      result[4] += 0.03299261;
    } else {
      result[4] += -0.0021320733;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[5] += -0.0058112903;
            } else {
              result[5] += 0.0070696976;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
              result[5] += 0.042503968;
            } else {
              result[5] += 0.0027223115;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
            result[5] += -0.029765772;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[5] += 0.03425253;
            } else {
              result[5] += 0.15732501;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
          result[5] += -0.09955697;
        } else {
          result[5] += 0.0011838904;
        }
      }
    } else {
      result[5] += 0.11080917;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
      result[5] += -0.09389762;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
              result[5] += 0.011829102;
            } else {
              result[5] += 0.040168334;
            }
          } else {
            result[5] += -0.08194207;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
            result[5] += 0.08038251;
          } else {
            result[5] += 0.023664072;
          }
        }
      } else {
        result[5] += -0.07813489;
      }
    }
  }
  result[6] += -0.000105021645;
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[7] += -0.0015702032;
            } else {
              result[7] += 0.081807315;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
              result[7] += -0.031081619;
            } else {
              result[7] += 0.08672063;
            }
          }
        } else {
          result[7] += 0.14690779;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            result[7] += -0.11960829;
          } else {
            result[7] += -0.16102251;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.06859384;
            } else {
              result[7] += -0.10395933;
            }
          } else {
            result[7] += 0.22195902;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[7] += -0.016214177;
            } else {
              result[7] += 0.019312784;
            }
          } else {
            result[7] += 0.13579983;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[7] += 0.012774593;
            } else {
              result[7] += -0.035299234;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
              result[7] += -0.017838083;
            } else {
              result[7] += -0.00016340088;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.1278325;
        } else {
          result[7] += 0.019355439;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[7] += 0.0026552884;
    } else {
      result[7] += 0.00083089055;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[8] += 0.00030985574;
            } else {
              result[8] += -0.058727812;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.042826213;
            } else {
              result[8] += -0.15961342;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
              result[8] += -0.012651573;
            } else {
              result[8] += -0.079716325;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43291)) {
              result[8] += -0.0049143285;
            } else {
              result[8] += 0.011822428;
            }
          }
        }
      } else {
        result[8] += -0.10749281;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
          result[8] += 0.08471987;
        } else {
          result[8] += -0.03850044;
        }
      } else {
        result[8] += 0.10459522;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.122886024;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[8] += 0.052003738;
            } else {
              result[8] += -0.0456125;
            }
          } else {
            result[8] += -0.09799333;
          }
        } else {
          result[8] += 0.10881121;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[8] += -0.034719363;
          } else {
            result[8] += -0.1805776;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            result[8] += -0.030036837;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
              result[8] += 0.07073864;
            } else {
              result[8] += -0.022214489;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
              result[9] += 4.7312105e-06;
            } else {
              result[9] += -0.032669634;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
              result[9] += 0.10809351;
            } else {
              result[9] += -0.06476209;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28379)) {
              result[9] += -0.0024608094;
            } else {
              result[9] += -0.15509559;
            }
          } else {
            result[9] += 0.0056126607;
          }
        }
      } else {
        result[9] += 0.10436746;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
        result[9] += -0.13606705;
      } else {
        result[9] += -0.015568154;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
      result[9] += 0.10520297;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
          result[9] += -0.16959333;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[9] += 0.093219;
            } else {
              result[9] += -0.0039701387;
            }
          } else {
            result[9] += -0.16792539;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
          result[9] += 0.10715945;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
            result[9] += -0.12095096;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
              result[9] += 0.10321175;
            } else {
              result[9] += -0.0016449265;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[10] += -0.0009773762;
            } else {
              result[10] += 0.034788903;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)410017792)) {
              result[10] += 0.050015267;
            } else {
              result[10] += -0.124862045;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
              result[10] += -0.12166884;
            } else {
              result[10] += 0.014771429;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
              result[10] += 0.13444175;
            } else {
              result[10] += 0.017081175;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
          result[10] += 0.13543466;
        } else {
          result[10] += 0.00429537;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
          result[10] += -0.15947148;
        } else {
          result[10] += 0.010160771;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
              result[10] += 0.060151305;
            } else {
              result[10] += -0.17100292;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
              result[10] += 0.1735003;
            } else {
              result[10] += -0.012506579;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
            result[10] += -0.17704152;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
              result[10] += -0.03562663;
            } else {
              result[10] += 0.019933047;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[10] += -0.08296755;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[10] += 0.0030291826;
            } else {
              result[10] += 0.08462926;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
              result[10] += -0.0590426;
            } else {
              result[10] += 0.034586404;
            }
          }
        } else {
          result[10] += -0.12529173;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
            result[10] += 0.048363063;
          } else {
            result[10] += 0.11864669;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52230)) {
            result[10] += -0.044581003;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
              result[10] += 0.11370752;
            } else {
              result[10] += 0.0023370911;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[11] += 0.00023022892;
            } else {
              result[11] += -0.0045450362;
            }
          } else {
            result[11] += -0.07864824;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
            result[11] += 0.089568324;
          } else {
            result[11] += -0.04789512;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
          result[11] += -0.13593607;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
            result[11] += -0.050046448;
          } else {
            result[11] += 0.09096255;
          }
        }
      }
    } else {
      result[11] += 0.10156325;
    }
  } else {
    result[11] += -0.08040251;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44043)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43534)) {
              result[12] += -0.0016622365;
            } else {
              result[12] += -0.059513822;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[12] += 0.08617307;
            } else {
              result[12] += 0.0067193885;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += -0.04951741;
            } else {
              result[12] += -0.14018913;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[12] += -0.0070516453;
            } else {
              result[12] += 0.07097581;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[12] += 0.013570389;
            } else {
              result[12] += -0.103273906;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.090032525;
            } else {
              result[12] += -0.031903345;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[12] += 0.053900324;
            } else {
              result[12] += 0.26627108;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.07630007;
            } else {
              result[12] += -0.11437379;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
          result[12] += 0.016494825;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[12] += -0.20430005;
            } else {
              result[12] += -0.060811795;
            }
          } else {
            result[12] += -0.03566838;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.08233128;
            } else {
              result[12] += -0.07443579;
            }
          } else {
            result[12] += 0.26329967;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[12] += -0.025713632;
            } else {
              result[12] += -0.106861584;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[12] += 0.13541733;
            } else {
              result[12] += -0.010662037;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[12] += -0.13493577;
            } else {
              result[12] += 0.06631022;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
              result[12] += -0.16529448;
            } else {
              result[12] += -0.053069938;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
            result[12] += 0.2413028;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
              result[12] += -0.09687707;
            } else {
              result[12] += 0.0682624;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
              result[12] += -0.04470548;
            } else {
              result[12] += 0.007378954;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
              result[12] += -0.045214005;
            } else {
              result[12] += -0.22515896;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)683239424)) {
              result[12] += 0.046500754;
            } else {
              result[12] += 0.1542157;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35047)) {
              result[12] += -0.020199839;
            } else {
              result[12] += 0.014823662;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1205016832)) {
              result[12] += -0.1022519;
            } else {
              result[12] += 0.16492285;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += -0.18784313;
            } else {
              result[12] += 0.0029214546;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
            result[12] += 0.21535638;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1159214080)) {
              result[12] += -0.13710225;
            } else {
              result[12] += -0.024383193;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
              result[12] += 0.012497409;
            } else {
              result[12] += 0.08881513;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[12] += -0.11994495;
            } else {
              result[12] += 0.012281814;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
              result[12] += 0.035062484;
            } else {
              result[12] += -0.058166534;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[12] += 0.035376165;
            } else {
              result[12] += 0.00012975994;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
              result[13] += 0.006077169;
            } else {
              result[13] += -0.02376577;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
              result[13] += 0.14894132;
            } else {
              result[13] += 0.021868631;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[13] += -0.1279061;
          } else {
            result[13] += 0.022331664;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[13] += 0.07151203;
            } else {
              result[13] += -0.04626289;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
              result[13] += -0.17865291;
            } else {
              result[13] += -0.02206442;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
              result[13] += 0.042745624;
            } else {
              result[13] += 0.19814995;
            }
          } else {
            result[13] += -0.04958408;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
              result[13] += 0.070501864;
            } else {
              result[13] += -0.14637935;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
              result[13] += 0.24890679;
            } else {
              result[13] += 0.033986166;
            }
          }
        } else {
          result[13] += -0.12023439;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2722185728)) {
              result[13] += -0.032075245;
            } else {
              result[13] += -0.11830065;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.17301214;
            } else {
              result[13] += -0.086548656;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
              result[13] += 0.0003556806;
            } else {
              result[13] += 0.040678956;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += -0.09369738;
            } else {
              result[13] += 0.019185135;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
      result[13] += -0.07937106;
    } else {
      result[13] += -0.0155739635;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 2.9554074e-05;
            } else {
              result[14] += -0.044145234;
            }
          } else {
            result[14] += -0.12761317;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
              result[14] += 0.022961978;
            } else {
              result[14] += -0.034019876;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[14] += 0.24009717;
            } else {
              result[14] += 0.026424859;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
              result[14] += -0.14020018;
            } else {
              result[14] += -0.052743837;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
              result[14] += 0.0069416976;
            } else {
              result[14] += 0.1417804;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
              result[14] += 0.06923367;
            } else {
              result[14] += -0.051508244;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
              result[14] += 0.31410223;
            } else {
              result[14] += 0.033329878;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[14] += 0.18091452;
            } else {
              result[14] += -0.014247262;
            }
          } else {
            result[14] += 0.44193092;
          }
        } else {
          result[14] += -0.09263513;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)545895936)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
              result[14] += -0.13460788;
            } else {
              result[14] += -0.007234009;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[14] += -0.14442024;
            } else {
              result[14] += -0.057545047;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
              result[14] += 0.022641115;
            } else {
              result[14] += 0.26260263;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
              result[14] += -0.01607405;
            } else {
              result[14] += 0.009595473;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      result[14] += -0.09489282;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          result[14] += 0.06855531;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.093981914;
            } else {
              result[14] += 0.01926298;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[14] += 0.093064785;
            } else {
              result[14] += -0.036003035;
            }
          }
        }
      } else {
        result[14] += -0.047977492;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[0] += -0.0005583157;
        } else {
          result[0] += -0.00045675688;
        }
      } else {
        result[0] += -0.00011144253;
      }
    } else {
      result[0] += -0.11066445;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
              result[0] += 0.008029363;
            } else {
              result[0] += -0.039282106;
            }
          } else {
            result[0] += 0.06539519;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
            result[0] += 0.13094342;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
              result[0] += -0.013415752;
            } else {
              result[0] += 0.12363178;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
              result[0] += -0.007658047;
            } else {
              result[0] += 0.0044201952;
            }
          } else {
            result[0] += -0.13649105;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
              result[0] += 0.019600427;
            } else {
              result[0] += 0.002611824;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += -0.13673726;
            } else {
              result[0] += 0.0038344113;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
          result[0] += -0.029002221;
        } else {
          result[0] += 0.11975201;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
          result[0] += -0.034374878;
        } else {
          result[0] += 0.035396382;
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[1] += -3.473397e-05;
            } else {
              result[1] += 0.085835755;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
              result[1] += 0.07047786;
            } else {
              result[1] += -0.092239976;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[1] += 0.16822228;
            } else {
              result[1] += -0.09187061;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
              result[1] += 0.1940171;
            } else {
              result[1] += 0.0019878615;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
            result[1] += -0.002171629;
          } else {
            result[1] += -0.14050871;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[1] += -0.08741533;
            } else {
              result[1] += 0.2251991;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[1] += -0.12757605;
            } else {
              result[1] += -0.013911424;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
              result[1] += -0.045342416;
            } else {
              result[1] += -0.1845331;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.16058393;
            } else {
              result[1] += -0.08173726;
            }
          }
        } else {
          result[1] += -0.3146056;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += -0.05707261;
            } else {
              result[1] += 0.15066057;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.12886214;
            } else {
              result[1] += 0.018940637;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += -0.029728595;
            } else {
              result[1] += 0.081291564;
            }
          } else {
            result[1] += -0.1802563;
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18193)) {
              result[1] += -8.659561e-05;
            } else {
              result[1] += -0.032588113;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[1] += 0.28310272;
            } else {
              result[1] += 0.039247774;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.05097428;
            } else {
              result[1] += -0.045681447;
            }
          } else {
            result[1] += 0.35637116;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)18700)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[1] += -0.0027666083;
            } else {
              result[1] += 0.087241344;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
              result[1] += -0.05105645;
            } else {
              result[1] += 0.095427684;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += -0.04864641;
            } else {
              result[1] += -0.20896901;
            }
          } else {
            result[1] += 0.054437343;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2476456192)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += -0.008178341;
            } else {
              result[1] += -0.072923526;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
              result[1] += -0.056547903;
            } else {
              result[1] += -0.15127388;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3151783168)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[1] += 0.09743838;
            } else {
              result[1] += -0.17102748;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[1] += -0.0047983397;
            } else {
              result[1] += -0.13615032;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22532)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[1] += 0.009381444;
            } else {
              result[1] += -0.04112137;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
              result[1] += 0.05375486;
            } else {
              result[1] += 0.21423636;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
              result[1] += -0.008666453;
            } else {
              result[1] += -0.13342568;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24813)) {
              result[1] += 0.032405965;
            } else {
              result[1] += -0.00018797777;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3400)) {
              result[2] += -0.0019379879;
            } else {
              result[2] += -0.01685906;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.005351926;
            } else {
              result[2] += 0.10202546;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6201)) {
            result[2] += -0.11720142;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6453)) {
              result[2] += 0.06682971;
            } else {
              result[2] += -0.0545672;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)6956)) {
          result[2] += 0.10395391;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)7212)) {
            result[2] += -0.061647717;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)7454)) {
              result[2] += 0.11309596;
            } else {
              result[2] += 0.0010353305;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          result[2] += -0.056418274;
        } else {
          result[2] += 0.004960434;
        }
      } else {
        result[2] += 0.009460299;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.032398164;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            result[2] += -0.029418597;
          } else {
            result[2] += -0.00048894243;
          }
        }
      } else {
        result[2] += 0.034288786;
      }
    } else {
      result[2] += -0.0024870315;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.01820528;
  } else {
    result[3] += 0.019922407;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[4] += -0.0058672368;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.03142028;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[4] += -0.015789285;
          } else {
            result[4] += 0.025150323;
          }
        }
      }
    } else {
      result[4] += -0.018705983;
    }
  } else {
    result[4] += 0.034390308;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1250727680)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[5] += 5.9292997e-05;
            } else {
              result[5] += 0.04083322;
            }
          } else {
            result[5] += -0.08796537;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)41999)) {
            result[5] += 0.17604776;
          } else {
            result[5] += 0.014113537;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
          result[5] += -0.11416703;
        } else {
          result[5] += 0.051896755;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)32530)) {
          result[5] += 0.035904866;
        } else {
          result[5] += 0.19868913;
        }
      } else {
        result[5] += -0.076790124;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
        result[5] += -0.10963197;
      } else {
        result[5] += -0.027698835;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[5] += -0.025854219;
            } else {
              result[5] += 0.08717666;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[5] += -0.09836969;
            } else {
              result[5] += 0.010106829;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
            result[5] += 0.19803819;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
              result[5] += -0.07962963;
            } else {
              result[5] += 0.076299444;
            }
          }
        }
      } else {
        result[5] += -0.096191496;
      }
    }
  }
  result[6] += -0.00025543102;
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
              result[7] += -0.0004007248;
            } else {
              result[7] += 0.008502906;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += -0.088129245;
            } else {
              result[7] += -0.0070577883;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53520)) {
              result[7] += -0.15973061;
            } else {
              result[7] += 0.06053893;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
              result[7] += 0.07384924;
            } else {
              result[7] += 0.00056346273;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
              result[7] += -0.033642486;
            } else {
              result[7] += 0.09975253;
            }
          } else {
            result[7] += -0.25948822;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[7] += 0.14042719;
            } else {
              result[7] += -0.028453643;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[7] += -0.057839863;
            } else {
              result[7] += 0.007826718;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
          result[7] += -0.110475615;
        } else {
          result[7] += 0.07856594;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54154)) {
          result[7] += 0.11581641;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
              result[7] += 0.090280764;
            } else {
              result[7] += -0.054860063;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[7] += 0.09358303;
            } else {
              result[7] += -0.025153002;
            }
          }
        }
      }
    }
  } else {
    result[7] += 0.0796597;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += -0.0034658283;
            } else {
              result[8] += 0.008019995;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[8] += 0.23404329;
            } else {
              result[8] += -0.11289794;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[8] += -0.020589547;
            } else {
              result[8] += 0.023423325;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.0622491;
            } else {
              result[8] += -0.09275506;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[8] += 0.016826693;
            } else {
              result[8] += -0.0018126534;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
              result[8] += 0.09603961;
            } else {
              result[8] += 0.024987323;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
            result[8] += -0.13923039;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
              result[8] += 0.18180737;
            } else {
              result[8] += -0.06851689;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)26842)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[8] += -0.019201977;
            } else {
              result[8] += -0.113980494;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
              result[8] += 0.077260524;
            } else {
              result[8] += -0.026400147;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
            result[8] += 0.23613718;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += 0.13945341;
            } else {
              result[8] += -0.05743681;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
              result[8] += 0.007536667;
            } else {
              result[8] += -0.042496156;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[8] += 0.036411718;
            } else {
              result[8] += 0.26684377;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30457)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
              result[8] += -0.029964559;
            } else {
              result[8] += -0.08726422;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
              result[8] += -0.0195329;
            } else {
              result[8] += 0.00055708707;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1186405888)) {
              result[8] += -0.0071678977;
            } else {
              result[8] += 0.027254974;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
              result[8] += -0.044924416;
            } else {
              result[8] += 0.11310159;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[8] += 0.033378314;
            } else {
              result[8] += -0.04140566;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
              result[8] += -0.028250095;
            } else {
              result[8] += 0.0022775803;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.34856635;
            } else {
              result[8] += -0.13044155;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[8] += -0.12891331;
            } else {
              result[8] += -0.008452796;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
              result[8] += -0.06081941;
            } else {
              result[8] += 0.0848813;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
              result[8] += 0.08124098;
            } else {
              result[8] += -0.055520516;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
              result[8] += 0.038053438;
            } else {
              result[8] += -0.1448121;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[8] += -1.0421891;
            } else {
              result[8] += -0.29314256;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
              result[8] += -0.047611725;
            } else {
              result[8] += 0.015848173;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53824)) {
              result[8] += 0.09970272;
            } else {
              result[8] += -0.055075232;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
              result[8] += 0.102592;
            } else {
              result[8] += 0.14721128;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
              result[8] += 0.017492637;
            } else {
              result[8] += -0.021339944;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
              result[8] += -0.058853596;
            } else {
              result[8] += 0.013202987;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
              result[8] += 0.01484113;
            } else {
              result[8] += -0.14226417;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[9] += 5.18623e-05;
            } else {
              result[9] += -0.034314662;
            }
          } else {
            result[9] += 0.07855135;
          }
        } else {
          result[9] += -0.08841185;
        }
      } else {
        result[9] += 0.07564254;
      }
    } else {
      result[9] += -0.060469635;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
        result[9] += 0.070512764;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[9] += 0.004228733;
            } else {
              result[9] += -0.061119262;
            }
          } else {
            result[9] += 0.080587484;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            result[9] += -0.14950188;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += -0.05591643;
            } else {
              result[9] += 0.079425976;
            }
          }
        }
      }
    } else {
      result[9] += 0.08640964;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[10] += 0.00024698096;
            } else {
              result[10] += 0.08855784;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
              result[10] += 0.08697923;
            } else {
              result[10] += -0.15144703;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
            result[10] += 0.1386044;
          } else {
            result[10] += 0.035570614;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
          result[10] += -0.024539672;
        } else {
          result[10] += -0.15398726;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
        result[10] += 0.1756051;
      } else {
        result[10] += -0.14670509;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)56836)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.18981656;
            } else {
              result[10] += -0.061984234;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
              result[10] += 0.04860353;
            } else {
              result[10] += -0.07514846;
            }
          }
        } else {
          result[10] += 0.13610911;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
          result[10] += -0.060399372;
        } else {
          result[10] += -0.17767641;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
          result[10] += -0.12966213;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            result[10] += -0.011188855;
          } else {
            result[10] += 0.021346813;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
              result[10] += 0.17356019;
            } else {
              result[10] += 0.052370537;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
              result[10] += -0.12533444;
            } else {
              result[10] += 0.035264272;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
            result[10] += -0.1960691;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[10] += 0.14018162;
            } else {
              result[10] += 0.0009747806;
            }
          }
        }
      }
    }
  }
}

