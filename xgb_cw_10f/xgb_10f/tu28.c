
#include "header.h"

void predict_unit28(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[11] += -0.0026478278;
            } else {
              result[11] += -0.00018162513;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.12654442;
            } else {
              result[11] += 0.0030464644;
            }
          }
        } else {
          result[11] += 0.033779737;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[11] += -0.0048376624;
            } else {
              result[11] += 0.004494281;
            }
          } else {
            result[11] += -0.09877916;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[11] += 0.0027974173;
          } else {
            result[11] += -0.006354516;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.00019915198;
            } else {
              result[11] += -0.0057569356;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.21729444;
            } else {
              result[11] += 0.0051524164;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += 0.028299106;
            } else {
              result[11] += 0.11355848;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.00820502;
            } else {
              result[11] += 0.07938233;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.0319272;
            } else {
              result[11] += -0.0009671575;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.101028964;
            } else {
              result[11] += 0.00012728327;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            result[11] += 0.11201777;
          } else {
            result[11] += -0.12534487;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.07533855;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          result[11] += -0.00044291484;
        } else {
          result[11] += -0.08732445;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[11] += -0.0008344;
            } else {
              result[11] += -0.11188471;
            }
          } else {
            result[11] += 0.021808365;
          }
        } else {
          result[11] += 0.009396854;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[12] += -0.00014113105;
            } else {
              result[12] += -0.11816971;
            }
          } else {
            result[12] += 0.0010689473;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += 0.0051925746;
            } else {
              result[12] += 0.01750204;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.01909274;
            } else {
              result[12] += 0.012395803;
            }
          }
        }
      } else {
        result[12] += 0.056739006;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.098263696;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[12] += 0.06115525;
        } else {
          result[12] += -0.0065651215;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      result[12] += -0.055601228;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        result[12] += 0.04895095;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          result[12] += 0.025183072;
        } else {
          result[12] += -0.052524004;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[13] += -0.00026099465;
            } else {
              result[13] += 0.084294215;
            }
          } else {
            result[13] += -0.08080986;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[13] += 0.008424756;
            } else {
              result[13] += 0.1096533;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[13] += -0.07920824;
            } else {
              result[13] += 0.012753623;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.015775802;
            } else {
              result[13] += 0.09159331;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[13] += -0.1904683;
            } else {
              result[13] += -0.041268982;
            }
          }
        } else {
          result[13] += 0.16674662;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[13] += 0.047931574;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[13] += -0.0978982;
          } else {
            result[13] += 0.0076824264;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            result[13] += 0.088083334;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.08232714;
            } else {
              result[13] += -0.014101197;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        result[13] += 0.106464796;
      } else {
        result[13] += -0.14648607;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[13] += 0.13469672;
      } else {
        result[13] += 0.029646726;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += 0.00014970974;
            } else {
              result[14] += 0.026809007;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.016146827;
            } else {
              result[14] += -0.09257297;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += 0.16000575;
          } else {
            result[14] += 0.023717942;
          }
        }
      } else {
        result[14] += -0.14156912;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[14] += 0.0633423;
        } else {
          result[14] += -0.016348084;
        }
      } else {
        result[14] += -0.04826449;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        result[14] += -0.12406493;
      } else {
        result[14] += 0.12351637;
      }
    } else {
      result[14] += -0.12781292;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += -3.915433e-05;
            } else {
              result[0] += 0.0047724145;
            }
          } else {
            result[0] += -0.012453169;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            result[0] += 0.053848505;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[0] += -0.025334584;
            } else {
              result[0] += 0.016498217;
            }
          }
        }
      } else {
        result[0] += 0.020989414;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          result[0] += -0.07834553;
        } else {
          result[0] += 0.015455128;
        }
      } else {
        result[0] += 0.017327843;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      result[0] += 0.01953644;
    } else {
      result[0] += -0.021380797;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += -0.00012984744;
            } else {
              result[1] += 0.0074507315;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.047006603;
            } else {
              result[1] += 0.01753858;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[1] += 0.01293785;
            } else {
              result[1] += 0.03522829;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.072426975;
            } else {
              result[1] += -0.002531039;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          result[1] += -0.13037263;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.02088321;
          } else {
            result[1] += 0.04153033;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          result[1] += 0.0142469965;
        } else {
          result[1] += 0.025624527;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[1] += -0.02375895;
          } else {
            result[1] += -0.07516759;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[1] += 0.013046087;
            } else {
              result[1] += -0.020531327;
            }
          } else {
            result[1] += 0.038974673;
          }
        }
      }
    }
  } else {
    result[1] += -0.027314706;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00014025724;
    } else {
      result[2] += 0.0012350203;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
      result[2] += 0.020719413;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        result[2] += -0.029352516;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          result[2] += 0.020602845;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.02856591;
          } else {
            result[2] += 0.015375219;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.018585924;
  } else {
    result[3] += 0.011189991;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -7.1515286e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.034876034;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
        result[4] += -0.0033579345;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          result[4] += 0.033678796;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.011781507;
            } else {
              result[4] += -0.010012357;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[4] += 0.03406026;
            } else {
              result[4] += 0.0076090433;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[5] += 3.5787518e-05;
        } else {
          result[5] += 0.0020275274;
        }
      } else {
        result[5] += 0.027425796;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        result[5] += -0.0773586;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
          result[5] += 0.070170134;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
            result[5] += -0.082585275;
          } else {
            result[5] += -0.0049704425;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        result[5] += 0.018291388;
      } else {
        result[5] += 0.0076701576;
      }
    } else {
      result[5] += -0.0046005337;
    }
  }
  result[6] += -0.0001173531;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
              result[7] += -4.3091353e-05;
            } else {
              result[7] += -0.019733647;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
              result[7] += 0.030467885;
            } else {
              result[7] += -0.0012460842;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[7] += -0.015415813;
          } else {
            result[7] += -0.0031101494;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            result[7] += 0.005307465;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[7] += 0.00144826;
            } else {
              result[7] += 0.004140098;
            }
          }
        } else {
          result[7] += -0.00033852944;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
        result[7] += -0.0076078465;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[7] += -0.105825774;
          } else {
            result[7] += 0.050341923;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[7] += 0.0011129747;
            } else {
              result[7] += -0.000501416;
            }
          } else {
            result[7] += 0.058291186;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      result[7] += -0.08747369;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          result[7] += -0.04520615;
        } else {
          result[7] += 0.00035979765;
        }
      } else {
        result[7] += 0.0640181;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += -4.5440946e-05;
            } else {
              result[8] += -0.004904239;
            }
          } else {
            result[8] += 0.15010667;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
            result[8] += -0.063282736;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[8] += 0.079699636;
            } else {
              result[8] += -0.015296104;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[8] += 0.09256888;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.106074676;
            } else {
              result[8] += 0.029735275;
            }
          }
        } else {
          result[8] += 0.11797898;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            result[8] += -0.04465288;
          } else {
            result[8] += -0.12151674;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[8] += -0.017323554;
            } else {
              result[8] += 0.02761039;
            }
          } else {
            result[8] += -0.12804826;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[8] += 0.02425732;
            } else {
              result[8] += -0.007991181;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.054739248;
            } else {
              result[8] += 0.01210682;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.039014816;
            } else {
              result[8] += 0.002136447;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[8] += 0.16421188;
            } else {
              result[8] += -0.00042991678;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        result[8] += 0.04765917;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[8] += -0.022753306;
            } else {
              result[8] += 0.008829992;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.11753272;
            } else {
              result[8] += -0.025793359;
            }
          }
        } else {
          result[8] += -0.078559294;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += -0.015991302;
            } else {
              result[8] += -0.077802345;
            }
          } else {
            result[8] += 0.044476386;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[8] += -0.12999691;
          } else {
            result[8] += 0.024665574;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[8] += 0.0035496631;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += -0.002232962;
            } else {
              result[8] += -0.004458425;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[8] += 0.006361942;
            } else {
              result[8] += 0.005384353;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[8] += -0.004211923;
            } else {
              result[8] += 0.0015467234;
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -0.0001308398;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.0010683872;
      } else {
        result[9] += -0.0005005648;
      }
    } else {
      result[9] += 0.0033319104;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[10] += -0.00023263264;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.0013249664;
            } else {
              result[10] += 9.2955815e-05;
            }
          } else {
            result[10] += 0.027451085;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.09701252;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += 0.0008614568;
            } else {
              result[10] += -0.00097543985;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += 0.0005367217;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
          result[10] += -0.03478109;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            result[10] += -0.015804011;
          } else {
            result[10] += 0.05108427;
          }
        }
      }
    }
  } else {
    result[10] += -0.022177862;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[11] += -0.0022746928;
            } else {
              result[11] += -0.00016927728;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.12349092;
            } else {
              result[11] += 0.0028179197;
            }
          }
        } else {
          result[11] += 0.026367465;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          result[11] += -0.004293873;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[11] += 0.0049562594;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += -0.09487025;
            } else {
              result[11] += 0.0016274053;
            }
          }
        }
      }
    } else {
      result[11] += 0.000271135;
    }
  } else {
    result[11] += -0.0014202392;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.00046453215;
            } else {
              result[12] += 0.00040522675;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.011647944;
            } else {
              result[12] += 0.0004375478;
            }
          }
        } else {
          result[12] += -0.03334649;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += 0.018076751;
          } else {
            result[12] += 0.07666741;
          }
        } else {
          result[12] += -0.028676042;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        result[12] += -0.07016261;
      } else {
        result[12] += 0.012524684;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.051744122;
        } else {
          result[12] += 0.027768936;
        }
      } else {
        result[12] += -0.054352272;
      }
    } else {
      result[12] += 0.011251571;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -7.780956e-05;
            } else {
              result[13] += 0.012662029;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.007519142;
            } else {
              result[13] += -0.108284116;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += 0.005257087;
            } else {
              result[13] += -0.060761612;
            }
          } else {
            result[13] += 0.07836;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.016586158;
            } else {
              result[13] += 0.027265891;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[13] += 0.002892672;
            } else {
              result[13] += -0.0039748307;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[13] += 0.09054337;
          } else {
            result[13] += 0.0045097824;
          }
        }
      }
    } else {
      result[13] += 0.06159948;
    }
  } else {
    result[13] += -0.048619036;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[14] += 0.00015805326;
            } else {
              result[14] += 0.031012423;
            }
          } else {
            result[14] += -0.048917506;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += 0.11975505;
          } else {
            result[14] += 0.01937871;
          }
        }
      } else {
        result[14] += -0.13077705;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[14] += 0.06855885;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += 0.008481879;
            } else {
              result[14] += 0.031683546;
            }
          }
        } else {
          result[14] += -0.0150597105;
        }
      } else {
        result[14] += -0.043487944;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        result[14] += -0.116166346;
      } else {
        result[14] += 0.086071745;
      }
    } else {
      result[14] += -0.11937657;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -0.00020214105;
            } else {
              result[0] += 0.00044853316;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
              result[0] += -0.030742636;
            } else {
              result[0] += 0.0015928721;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[0] += 0.005049693;
          } else {
            result[0] += -2.0547033e-05;
          }
        }
      } else {
        result[0] += -0.045726452;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[0] += 0.006389554;
        } else {
          result[0] += 0.04773727;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += 4.535737e-05;
        } else {
          result[0] += -0.0026463505;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[0] += -0.08334386;
        } else {
          result[0] += 0.029360972;
        }
      } else {
        result[0] += 0.060248364;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        result[0] += -0.014919625;
      } else {
        result[0] += -0.05665702;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[1] += -0.01641421;
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.00036434236;
            } else {
              result[1] += -0.09344393;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.08099547;
            } else {
              result[1] += 0.01577647;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
            result[1] += -0.16015539;
          } else {
            result[1] += 0.0029791605;
          }
        }
      } else {
        result[1] += 0.07241226;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.0062856874;
            } else {
              result[1] += 0.0010724921;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += 0.079731785;
            } else {
              result[1] += 0.00030190463;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.017333327;
            } else {
              result[1] += 0.09500833;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.0021103877;
            } else {
              result[1] += -0.00096706685;
            }
          }
        }
      } else {
        result[1] += -0.10970072;
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00013027914;
    } else {
      result[2] += 0.0010554912;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.02418056;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.020596717;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          result[2] += 0.016151927;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.026531655;
          } else {
            result[2] += 0.015062862;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    result[3] += 0.0058289585;
  } else {
    result[3] += -0.022254204;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      result[4] += -6.829692e-05;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[4] += 0.032465722;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
            result[4] += -0.0024427448;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[4] += 0.032260653;
            } else {
              result[4] += 0.012750125;
            }
          }
        }
      } else {
        result[4] += -0.0057503013;
      }
    }
  } else {
    result[4] += 0.042241637;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += -0.00031824358;
        } else {
          result[5] += 0.002012063;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[5] += 0.0070286603;
        } else {
          result[5] += 0.0029148906;
        }
      }
    } else {
      result[5] += -0.016475966;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
      result[5] += 0.015260772;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        result[5] += -0.014810737;
      } else {
        result[5] += 0.010588392;
      }
    }
  }
  result[6] += -0.000109584296;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[7] += -0.00032105806;
            } else {
              result[7] += 0.019360093;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
              result[7] += -0.01279057;
            } else {
              result[7] += -0.00753056;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
              result[7] += 0.0016331339;
            } else {
              result[7] += 0.027844217;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
              result[7] += -0.020066947;
            } else {
              result[7] += 0.00013985105;
            }
          }
        }
      } else {
        result[7] += -0.032291282;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        result[7] += -0.084121525;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            result[7] += -0.0440111;
          } else {
            result[7] += -0.0013653338;
          }
        } else {
          result[7] += 0.056457747;
        }
      }
    }
  } else {
    result[7] += 0.035723023;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54003)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)53520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
              result[8] += 4.248915e-05;
            } else {
              result[8] += 0.045238614;
            }
          } else {
            result[8] += -0.043837193;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53824)) {
            result[8] += 0.017034227;
          } else {
            result[8] += 0.03842146;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54154)) {
          result[8] += -0.042763337;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54299)) {
            result[8] += 0.029695349;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[8] += -0.040275596;
            } else {
              result[8] += -0.0031460517;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += 0.024894502;
          } else {
            result[8] += 0.035896517;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.08153488;
            } else {
              result[8] += -0.019966174;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.033563796;
            } else {
              result[8] += -0.0056312433;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += 0.0022853573;
            } else {
              result[8] += 0.04343338;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[8] += -0.0059727845;
            } else {
              result[8] += -0.121491246;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.03286121;
            } else {
              result[8] += -0.12179775;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[8] += 0.06438208;
            } else {
              result[8] += 0.14561234;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[8] += -0.03944101;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          result[8] += 0.03843887;
        } else {
          result[8] += -0.10665627;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
              result[8] += 0.00032787432;
            } else {
              result[8] += 0.017075805;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.007957972;
            } else {
              result[8] += -0.0026829408;
            }
          }
        } else {
          result[8] += 0.06716644;
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -0.00012165906;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.0051011895;
    } else {
      result[9] += 0.0011782642;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
              result[10] += 3.5077665e-05;
            } else {
              result[10] += -0.011253554;
            }
          } else {
            result[10] += -0.09012915;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.05125008;
            } else {
              result[10] += -0.0524426;
            }
          } else {
            result[10] += 0.08111638;
          }
        }
      } else {
        result[10] += 0.0007876602;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
        result[10] += 0.06992109;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
          result[10] += 0.011893491;
        } else {
          result[10] += -0.017356683;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
      result[10] += -0.021933712;
    } else {
      result[10] += 0.008658236;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[11] += -0.0019433062;
            } else {
              result[11] += -0.00016252579;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.12043037;
            } else {
              result[11] += 0.0023902287;
            }
          }
        } else {
          result[11] += 0.023132;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[11] += -0.003664546;
            } else {
              result[11] += 0.0042059454;
            }
          } else {
            result[11] += -0.091334626;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[11] += 0.0021769057;
          } else {
            result[11] += -0.0056879036;
          }
        }
      }
    } else {
      result[11] += 0.00022526144;
    }
  } else {
    result[11] += -0.0012436409;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += -0.00010099648;
            } else {
              result[12] += -0.051978465;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[12] += 0.0014047497;
            } else {
              result[12] += -0.00031345905;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[12] += -0.07015964;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += 0.0010566604;
            } else {
              result[12] += -0.00064937706;
            }
          }
        }
      } else {
        result[12] += 0.04972138;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.094275504;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[12] += 0.055880487;
        } else {
          result[12] += -0.0070477133;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      result[12] += -0.05104334;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        result[12] += 0.045194294;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          result[12] += 0.024574157;
        } else {
          result[12] += -0.044634484;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[13] += -7.9112186e-05;
            } else {
              result[13] += 0.013184191;
            }
          } else {
            result[13] += -0.09460185;
          }
        } else {
          result[13] += 0.08899806;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.06634079;
            } else {
              result[13] += 0.0091245705;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.10906066;
            } else {
              result[13] += 0.00223766;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.030070266;
            } else {
              result[13] += -0.13627058;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[13] += 0.045287274;
            } else {
              result[13] += -0.054055937;
            }
          }
        }
      }
    } else {
      result[13] += 0.05695768;
    }
  } else {
    result[13] += -0.044690415;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 7.50918e-05;
            } else {
              result[14] += 0.0058072517;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.019665862;
            } else {
              result[14] += -0.08958263;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += 0.10562589;
          } else {
            result[14] += 0.017908305;
          }
        }
      } else {
        result[14] += -0.12442983;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[14] += 0.06232592;
            } else {
              result[14] += 0.012830681;
            }
          } else {
            result[14] += -0.041235138;
          }
        } else {
          result[14] += 0.08311573;
        }
      } else {
        result[14] += -0.04148929;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        result[14] += -0.11146413;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[14] += 0.07941574;
        } else {
          result[14] += 0.023439614;
        }
      }
    } else {
      result[14] += -0.114912845;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 6.3081745e-05;
            } else {
              result[0] += 0.0037755687;
            }
          } else {
            result[0] += -0.013606798;
          }
        } else {
          result[0] += -0.018291121;
        }
      } else {
        result[0] += 0.008071317;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += 0.0030385358;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          result[0] += 0.0020078053;
        } else {
          result[0] += 0.034118947;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[0] += -0.080153435;
        } else {
          result[0] += 0.027915603;
        }
      } else {
        result[0] += 0.055280246;
      }
    } else {
      result[0] += -0.04307001;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += 1.42317585e-05;
            } else {
              result[1] += -0.023419783;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[1] += -0.043678377;
            } else {
              result[1] += 0.05473091;
            }
          }
        } else {
          result[1] += -0.042370893;
        }
      } else {
        result[1] += -0.10614943;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        result[1] += 0.07992516;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
              result[1] += 0.022015354;
            } else {
              result[1] += -0.01871646;
            }
          } else {
            result[1] += 0.09961739;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
            result[1] += 0.0016500955;
          } else {
            result[1] += 0.049907442;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        result[1] += -0.14249839;
      } else {
        result[1] += 0.018144524;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[1] += 0.084785;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[1] += 0.00046324782;
            } else {
              result[1] += -0.03226014;
            }
          } else {
            result[1] += 0.07482216;
          }
        } else {
          result[1] += -0.04188449;
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00014648326;
    } else {
      result[2] += 0.0011907978;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.023491908;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.01867279;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.016929382;
            } else {
              result[2] += -0.02525736;
            }
          } else {
            result[2] += 0.028171612;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            result[2] += -0.0290438;
          } else {
            result[2] += 0.019809844;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.017363612;
  } else {
    result[3] += 0.009313227;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -0.00010632765;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.032439377;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
        result[4] += -0.0016526337;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          result[4] += 0.03051856;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.013088678;
            } else {
              result[4] += -0.010428696;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[4] += 0.03429016;
            } else {
              result[4] += 0.0070229713;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[5] += 3.5749974e-05;
        } else {
          result[5] += 0.0020167676;
        }
      } else {
        result[5] += 0.011050471;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        result[5] += -0.025913315;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
          result[5] += 0.01454405;
        } else {
          result[5] += -0.014131523;
        }
      }
    }
  } else {
    result[5] += 0.01766131;
  }
  result[6] += -0.00012968542;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 1.6645316e-05;
            } else {
              result[7] += -0.0016328762;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += 0.016844932;
            } else {
              result[7] += 0.07756482;
            }
          }
        } else {
          result[7] += -0.06250001;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[7] += -0.08996868;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[7] += 0.04455073;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.047733832;
            } else {
              result[7] += 0.050361987;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[7] += 0.06442703;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += 0.0048855823;
            } else {
              result[7] += -0.00995548;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[7] += -0.062475923;
          } else {
            result[7] += 0.06506822;
          }
        }
      } else {
        result[7] += -0.015481251;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      result[7] += -0.081006765;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        result[7] += 0.038949687;
      } else {
        result[7] += -0.03776522;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
              result[8] += -8.868103e-05;
            } else {
              result[8] += -0.026913315;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[8] += 0.05092475;
            } else {
              result[8] += 0.0007842342;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[8] += -0.13560967;
          } else {
            result[8] += 0.021191424;
          }
        }
      } else {
        result[8] += -0.13417189;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[8] += 0.13556784;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[8] += -0.02191621;
            } else {
              result[8] += 0.05681532;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            result[8] += -0.149185;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += 0.0141798295;
            } else {
              result[8] += -0.00081924594;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[8] += 0.12560865;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[8] += -0.08479995;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.012556473;
            } else {
              result[8] += 0.06594662;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.10018865;
    } else {
      result[8] += 0.0064178086;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -0.00014274486;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.0010744001;
      } else {
        result[9] += -0.00027511414;
      }
    } else {
      result[9] += 0.0032885473;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[10] += -0.00025081975;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
              result[10] += 0.0010363479;
            } else {
              result[10] += 0.0060762544;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[10] += -0.00082952826;
            } else {
              result[10] += 0.0005113428;
            }
          }
        }
      } else {
        result[10] += 0.019388748;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += 0.001217073;
      } else {
        result[10] += -0.024476485;
      }
    }
  } else {
    result[10] += -0.025851501;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += -3.555731e-05;
            } else {
              result[11] += 0.0062115425;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.008926436;
            } else {
              result[11] += 0.013979252;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.11900234;
            } else {
              result[11] += -0.06102014;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += -0.0035979128;
            } else {
              result[11] += 0.0126395505;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.030875744;
            } else {
              result[11] += 0.008215951;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.09740355;
            } else {
              result[11] += -2.5647676e-05;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.097270526;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += -0.007491332;
            } else {
              result[11] += 0.0077483393;
            }
          }
        }
      }
    } else {
      result[11] += -0.0008955492;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      result[11] += -0.1183318;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[11] += 0.0020576222;
        } else {
          result[11] += 0.02025872;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          result[11] += -0.0031204768;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[11] += 0.0036352251;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += -0.08766416;
            } else {
              result[11] += 0.0003511692;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[12] += -0.0033487084;
            } else {
              result[12] += -4.6818986e-06;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.017440185;
            } else {
              result[12] += 0.0031716446;
            }
          }
        } else {
          result[12] += -0.030680565;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += 0.014134937;
          } else {
            result[12] += 0.07220431;
          }
        } else {
          result[12] += -0.025490884;
        }
      }
    } else {
      result[12] += -0.02820173;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[12] += -0.010045476;
      } else {
        result[12] += -0.045124732;
      }
    } else {
      result[12] += 0.014486849;
    }
  }
}

