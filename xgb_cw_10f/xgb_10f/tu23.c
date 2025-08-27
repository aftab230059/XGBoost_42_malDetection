
#include "header.h"

void predict_unit23(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += -0.00028868337;
            } else {
              result[1] += 0.008967314;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.020302523;
            } else {
              result[1] += -0.0005721084;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[1] += -0.12631841;
            } else {
              result[1] += 0.05914665;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += 0.020189855;
            } else {
              result[1] += 0.0029131654;
            }
          }
        }
      } else {
        result[1] += -0.088892594;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += 0.17130587;
            } else {
              result[1] += 0.05529046;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.011624319;
            } else {
              result[1] += -0.115292825;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.14114466;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += 0.00383072;
            } else {
              result[1] += -0.04433773;
            }
          }
        }
      } else {
        result[1] += -0.17974858;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
      result[1] += -0.14824592;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          result[1] += -0.008035834;
        } else {
          result[1] += 0.097831376;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)59)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56842)) {
              result[1] += -0.006859166;
            } else {
              result[1] += 0.0068022744;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.042306114;
            } else {
              result[1] += -0.13856646;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            result[1] += -0.16694136;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[1] += -0.02050073;
            } else {
              result[1] += -0.00052393385;
            }
          }
        }
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[2] += -8.211257e-05;
      } else {
        result[2] += 0.00059905247;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[2] += 0.08382813;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
            result[2] += -0.035242647;
          } else {
            result[2] += -0.0027135636;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[2] += 0.016228857;
            } else {
              result[2] += 0.08069938;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[2] += -0.052125704;
            } else {
              result[2] += 0.028780408;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.07555567;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.033455882;
  } else {
    result[3] += 0.0063224942;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -0.000135644;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[4] += 0.032894406;
            } else {
              result[4] += -0.011003638;
            }
          } else {
            result[4] += 0.062716246;
          }
        } else {
          result[4] += -0.010712451;
        }
      } else {
        result[4] += 0.05744951;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
        result[4] += -0.02634685;
      } else {
        result[4] += 0.04250928;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += -0.0005973154;
        } else {
          result[5] += 0.0025462233;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[5] += 0.011425469;
        } else {
          result[5] += 0.0035367024;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[5] += -0.075498596;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[5] += 0.019122528;
        } else {
          result[5] += -0.015013681;
        }
      }
    }
  } else {
    result[5] += 0.01746726;
  }
  result[6] += 7.5065227e-06;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -4.518456e-05;
            } else {
              result[7] += 0.018856764;
            }
          } else {
            result[7] += -0.089239895;
          }
        } else {
          result[7] += 0.09370099;
        }
      } else {
        result[7] += -0.09276615;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[7] += -0.10360666;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[7] += 0.059507586;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[7] += -0.08476325;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.011737418;
            } else {
              result[7] += 0.06333534;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)24)) {
          result[7] += -0.07340363;
        } else {
          result[7] += -0.032660205;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
          result[7] += 0.023489822;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            result[7] += -0.1273388;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[7] += 0.0023341014;
            } else {
              result[7] += -0.05700678;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
          result[7] += 0.082603216;
        } else {
          result[7] += -0.050825376;
        }
      } else {
        result[7] += 0.07712289;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[8] += 0.00012828577;
            } else {
              result[8] += -0.07661775;
            }
          } else {
            result[8] += -0.08233689;
          }
        } else {
          result[8] += -0.104564875;
        }
      } else {
        result[8] += 0.06685909;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[8] += -0.13590105;
        } else {
          result[8] += -0.016211186;
        }
      } else {
        result[8] += 0.046144314;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[8] += -0.25828135;
          } else {
            result[8] += -0.04498783;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[8] += -0.0735587;
          } else {
            result[8] += 0.060041275;
          }
        }
      } else {
        result[8] += 0.034865014;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        result[8] += -0.06144824;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[8] += 0.10037228;
        } else {
          result[8] += 0.024581255;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[9] += 6.210676e-05;
    } else {
      result[9] += -0.03614166;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.007322926;
    } else {
      result[9] += 0.0022606365;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[10] += 0.00034209137;
            } else {
              result[10] += -0.069817975;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[10] += 0.00088506076;
            } else {
              result[10] += 0.1474626;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[10] += -0.07784353;
            } else {
              result[10] += 0.16023172;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[10] += -0.03287103;
            } else {
              result[10] += -0.0048180786;
            }
          }
        }
      } else {
        result[10] += 0.0015577622;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
        result[10] += 0.08236065;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
          result[10] += 0.012659331;
        } else {
          result[10] += -0.020966051;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
      result[10] += -0.029390546;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.006360833;
      } else {
        result[10] += 0.025837108;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += -0.00090636424;
            } else {
              result[11] += -0.11964111;
            }
          } else {
            result[11] += 0.013392181;
          }
        } else {
          result[11] += -0.03064439;
        }
      } else {
        result[11] += -0.12113661;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += 0.0016883287;
            } else {
              result[11] += -0.103282936;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.14399417;
            } else {
              result[11] += 9.4370036e-05;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[11] += -0.00486982;
          } else {
            result[11] += 0.121564426;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.16269234;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.027731735;
            } else {
              result[11] += -0.14117603;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.03849802;
            } else {
              result[11] += -0.13868718;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.11028951;
            } else {
              result[11] += 0.0029812506;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.12462488;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            result[11] += 0.0016307547;
          } else {
            result[11] += -0.12378074;
          }
        } else {
          result[11] += 0.0054996237;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          result[11] += -0.0069266697;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            result[11] += 0.003207924;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.0059877033;
            } else {
              result[11] += 0.0280512;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.00021755145;
            } else {
              result[12] += 0.008894463;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.06798066;
            } else {
              result[12] += -0.004179954;
            }
          }
        } else {
          result[12] += -0.06330699;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[12] += -0.07890707;
        } else {
          result[12] += 0.0020544906;
        }
      }
    } else {
      result[12] += -0.13221993;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[12] += 0.0026372827;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[12] += 0.028681768;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[12] += -0.07395822;
            } else {
              result[12] += 0.051446613;
            }
          } else {
            result[12] += -0.09497858;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[12] += 0.099636786;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
          result[12] += 0.077758566;
        } else {
          result[12] += -0.0502453;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[13] += -0.008210041;
          } else {
            result[13] += -0.0022961893;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[13] += 0.0011513069;
            } else {
              result[13] += 0.03143884;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.00059923396;
            } else {
              result[13] += -0.021021746;
            }
          }
        }
      } else {
        result[13] += -0.08819495;
      }
    } else {
      result[13] += 0.18662456;
    }
  } else {
    result[13] += -0.05939172;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 9.801977e-05;
            } else {
              result[14] += -0.009770532;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.07709395;
            } else {
              result[14] += -0.00563796;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += -0.006343647;
            } else {
              result[14] += -0.019792732;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.0028761472;
            } else {
              result[14] += 0.0115292035;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[14] += 0.009403663;
          } else {
            result[14] += 0.03065962;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += -0.0040408466;
          } else {
            result[14] += 0.002800872;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        result[14] += -0.10027043;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[14] += 0.037979152;
        } else {
          result[14] += -0.034465395;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            result[14] += 0.0029543922;
          } else {
            result[14] += 0.00772859;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[14] += -0.07930563;
          } else {
            result[14] += 0.010557225;
          }
        }
      } else {
        result[14] += 0.037921157;
      }
    } else {
      result[14] += -0.02964836;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.00027028512;
            } else {
              result[0] += 0.007462527;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.092799544;
            } else {
              result[0] += 0.004957155;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
            result[0] += 0.07790134;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[0] += 0.057193097;
            } else {
              result[0] += -0.008386186;
            }
          }
        }
      } else {
        result[0] += 0.037278578;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          result[0] += -0.077743;
        } else {
          result[0] += -0.009285031;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[0] += 0.03601994;
        } else {
          result[0] += -0.011862629;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += 0.095808335;
        } else {
          result[0] += 0.012948974;
        }
      } else {
        result[0] += -0.016394658;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[0] += -0.07728793;
      } else {
        result[0] += 0.03305475;
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.0005602859;
            } else {
              result[1] += -0.0024741727;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += 0.015108189;
            } else {
              result[1] += 0.0023834505;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.026304588;
            } else {
              result[1] += -0.0027282515;
            }
          } else {
            result[1] += -0.1721826;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          result[1] += -0.14735308;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += -0.0068514976;
            } else {
              result[1] += 0.09123419;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += 0.0013463184;
            } else {
              result[1] += -0.011043389;
            }
          }
        }
      }
    } else {
      result[1] += -0.07648842;
    }
  } else {
    result[1] += -0.07909152;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
    result[2] += 5.473576e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.067883044;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.023801794;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[2] += 0.008225452;
            } else {
              result[2] += 0.04173641;
            }
          } else {
            result[2] += -0.059939668;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
            result[2] += 0.080404826;
          } else {
            result[2] += -0.014182414;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += 0.0037310093;
    } else {
      result[3] += -0.001125145;
    }
  } else {
    result[3] += -0.038435888;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -0.00013685915;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[4] += 0.026128657;
            } else {
              result[4] += -0.036844946;
            }
          } else {
            result[4] += 0.05551211;
          }
        } else {
          result[4] += -0.020391982;
        }
      } else {
        result[4] += 0.06760054;
      }
    } else {
      result[4] += -0.004228977;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[5] += -6.9588605e-05;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[5] += 0.01079296;
        } else {
          result[5] += 0.003176467;
        }
      }
    } else {
      result[5] += -0.014985226;
    }
  } else {
    result[5] += 0.015174116;
  }
  result[6] += 3.4612742e-06;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += -6.108382e-05;
            } else {
              result[7] += -0.08130555;
            }
          } else {
            result[7] += 0.08686691;
          }
        } else {
          result[7] += -0.1023547;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[7] += -0.11746725;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.043758728;
            } else {
              result[7] += 0.07780865;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[7] += 0.052270394;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
              result[7] += 0.0040679974;
            } else {
              result[7] += -0.03132988;
            }
          }
        }
      }
    } else {
      result[7] += 0.042767763;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)24)) {
              result[7] += -0.06820079;
            } else {
              result[7] += -0.029629627;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[7] += -0.011954995;
            } else {
              result[7] += 0.038541663;
            }
          }
        } else {
          result[7] += 0.08645468;
        }
      } else {
        result[7] += -0.103320494;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        result[7] += 0.1737387;
      } else {
        result[7] += -0.050052088;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.00031318475;
            } else {
              result[8] += -0.00439339;
            }
          } else {
            result[8] += -0.07927401;
          }
        } else {
          result[8] += -0.101058826;
        }
      } else {
        result[8] += 0.060764942;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[8] += -0.13124669;
        } else {
          result[8] += -0.0147785945;
        }
      } else {
        result[8] += 0.041947633;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[8] += -0.25688136;
          } else {
            result[8] += -0.040820546;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[8] += -0.06614278;
          } else {
            result[8] += 0.055535916;
          }
        }
      } else {
        result[8] += 0.03120551;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54299)) {
          result[8] += -0.06982898;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[8] += -0.09790329;
          } else {
            result[8] += 0.060536828;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[8] += 0.09684676;
        } else {
          result[8] += 0.023383252;
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[9] += 4.754955e-05;
    } else {
      result[9] += -0.03336563;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.007043648;
    } else {
      result[9] += 0.0025198665;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[10] += -6.698913e-05;
            } else {
              result[10] += -0.07938032;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += 0.0024774363;
            } else {
              result[10] += 5.124064e-05;
            }
          }
        } else {
          result[10] += -0.07785791;
        }
      } else {
        result[10] += 0.02294409;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
        result[10] += -0.022409013;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[10] += -0.0051186043;
        } else {
          result[10] += 0.023690602;
        }
      }
    }
  } else {
    result[10] += -0.03684006;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[11] += -0.008349592;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += -9.2839175e-05;
            } else {
              result[11] += -0.13035719;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.14317694;
            } else {
              result[11] += -0.012889938;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.0022533177;
            } else {
              result[11] += -0.018682515;
            }
          } else {
            result[11] += 0.12291222;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.07741962;
            } else {
              result[11] += 0.029549554;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += -0.08779542;
            } else {
              result[11] += -0.0051245107;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.13318735;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += 0.0038543555;
            } else {
              result[11] += -0.0010750412;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[11] += -0.12181343;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[11] += 0.0013197149;
            } else {
              result[11] += -0.1201832;
            }
          } else {
            result[11] += 0.004624139;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[11] += -0.003929059;
            } else {
              result[11] += 0.02452273;
            }
          } else {
            result[11] += 0.024616024;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.0006642515;
            } else {
              result[12] += 0.12533529;
            }
          } else {
            result[12] += -0.14013803;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += 0.005712156;
            } else {
              result[12] += 0.0009901399;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.03863174;
            } else {
              result[12] += -0.039981827;
            }
          }
        }
      } else {
        result[12] += -0.06894349;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[12] += -0.116367795;
      } else {
        result[12] += 0.011204378;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[12] += -0.13719077;
      } else {
        result[12] += 0.014815803;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          result[12] += -0.028175954;
        } else {
          result[12] += 0.049806423;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[12] += -0.14351334;
            } else {
              result[12] += -0.04834457;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.0020602208;
            } else {
              result[12] += -0.09199631;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[12] += 0.0026311448;
            } else {
              result[12] += -0.0015224867;
            }
          } else {
            result[12] += -0.050085153;
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += -7.2540824e-05;
            } else {
              result[13] += -0.08471464;
            }
          } else {
            result[13] += 0.1510041;
          }
        } else {
          result[13] += -0.06813789;
        }
      } else {
        result[13] += 0.13636936;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[13] += -0.09942361;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          result[13] += 0.092872486;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            result[13] += -0.09788117;
          } else {
            result[13] += -0.025955964;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)277)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += 0.028716698;
            } else {
              result[13] += 0.1123375;
            }
          } else {
            result[13] += -0.027097417;
          }
        } else {
          result[13] += 0.005582691;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[13] += -0.09686663;
        } else {
          result[13] += -0.0068455404;
        }
      }
    } else {
      result[13] += 0.09226891;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -2.38975e-05;
            } else {
              result[14] += -0.10614079;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.15820163;
            } else {
              result[14] += -0.020447249;
            }
          }
        } else {
          result[14] += -0.090221174;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += -0.003001216;
            } else {
              result[14] += -0.093843244;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[14] += 0.06282893;
            } else {
              result[14] += -0.0009887726;
            }
          }
        } else {
          result[14] += -0.10079752;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        result[14] += -0.096917845;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[14] += 0.035925813;
        } else {
          result[14] += -0.031220473;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            result[14] += 0.0029069933;
          } else {
            result[14] += -0.0015714009;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[14] += -0.07336118;
          } else {
            result[14] += 0.008442352;
          }
        }
      } else {
        result[14] += 0.035160862;
      }
    } else {
      result[14] += -0.027408542;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[0] += -0.0002727784;
    } else {
      result[0] += -0.10024561;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[0] += 0.0026014717;
            } else {
              result[0] += 0.008117431;
            }
          } else {
            result[0] += -0.09155953;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.014545114;
            } else {
              result[0] += 0.0321866;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[0] += 0.03943367;
            } else {
              result[0] += -0.007888318;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          result[0] += 0.0939007;
        } else {
          result[0] += -0.024794599;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          result[0] += 0.079526;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            result[0] += -0.027192518;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[0] += 0.026445735;
            } else {
              result[0] += -0.0002971704;
            }
          }
        }
      } else {
        result[0] += -0.059365403;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[1] += -0.017961161;
    } else {
      result[1] += -0.076134846;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56523)) {
              result[1] += -0.00012915439;
            } else {
              result[1] += -0.022697613;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
              result[1] += 0.10036407;
            } else {
              result[1] += -0.044439472;
            }
          }
        } else {
          result[1] += -0.16321298;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57688)) {
            result[1] += 0.079791516;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.14964283;
            } else {
              result[1] += 0.014131678;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
            result[1] += -0.16726196;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.11499668;
            } else {
              result[1] += -0.0018783988;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[1] += -0.04190604;
            } else {
              result[1] += -0.09220677;
            }
          } else {
            result[1] += -0.029807683;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            result[1] += 0.07037519;
          } else {
            result[1] += -0.030672802;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[1] += 0.043368008;
            } else {
              result[1] += 0.02698106;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.099410586;
            } else {
              result[1] += -0.003086283;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[1] += -0.00407182;
            } else {
              result[1] += -0.06340862;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[1] += 0.041420177;
            } else {
              result[1] += -0.012585691;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00018040556;
    } else {
      result[2] += 0.0008388712;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[2] += 0.07849671;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
        result[2] += -0.07420356;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[2] += 0.04537143;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.052283045;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.036186375;
            } else {
              result[2] += 0.0076233037;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.029919403;
  } else {
    result[3] += 0.0054725404;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -0.00013981188;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += 0.0093234;
          } else {
            result[4] += 0.057184197;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)40611)) {
            result[4] += -0.006917363;
          } else {
            result[4] += 0.0056917337;
          }
        }
      } else {
        result[4] += 0.052161507;
      }
    } else {
      result[4] += 0.0027655996;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[5] += 7.135977e-05;
    } else {
      result[5] += -0.040725157;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        result[5] += 0.0036077325;
      } else {
        result[5] += 0.050457153;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        result[5] += -0.081538424;
      } else {
        result[5] += 0.002948093;
      }
    }
  }
  result[6] += -4.368147e-06;
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[7] += -0.00012452417;
            } else {
              result[7] += -0.095328964;
            }
          } else {
            result[7] += 0.12146654;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[7] += -0.10764795;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.037053883;
            } else {
              result[7] += 0.07732387;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          result[7] += 0.09104732;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.0064704;
            } else {
              result[7] += 0.057345863;
            }
          } else {
            result[7] += -0.06495708;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
        result[7] += -0.07747249;
      } else {
        result[7] += -0.009980603;
      }
    }
  } else {
    result[7] += 0.057880946;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += 0.0002385167;
            } else {
              result[8] += 0.05272403;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.17534795;
            } else {
              result[8] += 0.03166052;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[8] += -0.043389782;
          } else {
            result[8] += -0.10193725;
          }
        }
      } else {
        result[8] += -0.14182062;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[8] += -0.20067328;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.027155694;
            } else {
              result[8] += 0.10880304;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[8] += 0.14428008;
            } else {
              result[8] += -0.038153525;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.072586365;
            } else {
              result[8] += -0.014748616;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[8] += -0.04650695;
            } else {
              result[8] += -0.0027556932;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[8] += 0.13765028;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.11595647;
            } else {
              result[8] += -0.017511372;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.04162547;
            } else {
              result[8] += 0.015700186;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.124981634;
            } else {
              result[8] += -0.004129153;
            }
          }
        } else {
          result[8] += -0.16852559;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            result[8] += -0.039168946;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += 0.0019063194;
            } else {
              result[8] += -0.02702335;
            }
          }
        } else {
          result[8] += -0.053354833;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[8] += -0.0009554589;
            } else {
              result[8] += 0.043355327;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[8] += -0.1268378;
            } else {
              result[8] += -9.390956e-05;
            }
          }
        } else {
          result[8] += 0.116291314;
        }
      } else {
        result[8] += -0.09336391;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[9] += 2.9880062e-05;
    } else {
      result[9] += -0.030365475;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.007301941;
    } else {
      result[9] += 0.002116153;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[10] += -6.439296e-05;
          } else {
            result[10] += -0.076428376;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
              result[10] += 0.0019027226;
            } else {
              result[10] += 0.0071464325;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[10] += -0.00065512676;
            } else {
              result[10] += 0.0007084077;
            }
          }
        }
      } else {
        result[10] += 0.019324541;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
          result[10] += 0.008787701;
        } else {
          result[10] += -0.023742732;
        }
      } else {
        result[10] += -0.019694094;
      }
    }
  } else {
    result[10] += -0.034128644;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[11] += -0.007156247;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += -9.1787784e-05;
            } else {
              result[11] += -0.011767004;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.11714001;
            } else {
              result[11] += 0.005325875;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.14175971;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += -0.0021280663;
            } else {
              result[11] += 0.11892618;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.040468447;
            } else {
              result[11] += 0.21269636;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += -0.080068715;
            } else {
              result[11] += -0.0045119575;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.13094202;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.00083380844;
            } else {
              result[11] += 0.003740607;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.11890431;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            result[11] += 0.0007751979;
          } else {
            result[11] += -0.116641186;
          }
        } else {
          result[11] += 0.0035283477;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          result[11] += -0.0058358377;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            result[11] += 0.0027194335;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.0050130207;
            } else {
              result[11] += 0.024264822;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.0008579747;
            } else {
              result[12] += -0.12282444;
            }
          } else {
            result[12] += 0.13067092;
          }
        } else {
          result[12] += -0.14360385;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[12] += -0.14178663;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.13119452;
            } else {
              result[12] += 0.005004511;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.0043291044;
            } else {
              result[12] += -0.0012675689;
            }
          }
        }
      }
    } else {
      result[12] += -0.12981318;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            result[12] += 0.0028353813;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[12] += -0.07179306;
            } else {
              result[12] += -0.0036497298;
            }
          }
        } else {
          result[12] += 0.06210288;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          result[12] += 0.0325551;
        } else {
          result[12] += -0.08309239;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[12] += 0.07212685;
      } else {
        result[12] += -0.0045895944;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.0006350856;
            } else {
              result[13] += -0.01884899;
            }
          } else {
            result[13] += 0.07775487;
          }
        } else {
          result[13] += 0.101882614;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.054842267;
            } else {
              result[13] += -0.14405935;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[13] += -0.08920186;
            } else {
              result[13] += 0.044295497;
            }
          }
        } else {
          result[13] += 0.020902876;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.03320804;
            } else {
              result[13] += 0.013115176;
            }
          } else {
            result[13] += 0.07214036;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[13] += 0.0069356724;
            } else {
              result[13] += 0.037542645;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.029859629;
            } else {
              result[13] += 0.061434377;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.030672295;
            } else {
              result[13] += 0.01858707;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.016395435;
            } else {
              result[13] += -0.027539466;
            }
          }
        } else {
          result[13] += 0.08611032;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.0010658053;
            } else {
              result[13] += -0.07144179;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += -0.05159698;
            } else {
              result[13] += -0.018775584;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            result[13] += -0.0136054335;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += 0.078631036;
            } else {
              result[13] += 0.0010364953;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.0063136616;
            } else {
              result[13] += -0.076756924;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += 0.057329413;
            } else {
              result[13] += 0.002509307;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[13] += -0.009154597;
            } else {
              result[13] += 0.028318703;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
              result[13] += -0.16752431;
            } else {
              result[13] += -0.010223058;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[13] += 0.14234872;
        } else {
          result[13] += 0.034230873;
        }
      } else {
        result[13] += -0.0020812678;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[14] += 0.0010137778;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += -0.0014096443;
            } else {
              result[14] += -0.11539226;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.008452023;
            } else {
              result[14] += -0.012609114;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += -0.036061678;
            } else {
              result[14] += -0.11622688;
            }
          } else {
            result[14] += -0.0018529603;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            result[14] += 0.0009585889;
          } else {
            result[14] += 0.01171873;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            result[14] += -0.00889949;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += 0.0027563225;
            } else {
              result[14] += -0.0009099342;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[14] += 0.0010723455;
            } else {
              result[14] += 0.017472725;
            }
          } else {
            result[14] += -0.11489521;
          }
        } else {
          result[14] += 0.11184356;
        }
      } else {
        result[14] += -0.10882756;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          result[14] += 0.0862601;
        } else {
          result[14] += 0.03861972;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[14] += -0.04572904;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.08225262;
            } else {
              result[14] += 0.011407787;
            }
          }
        } else {
          result[14] += -0.05902882;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -0.00024077068;
            } else {
              result[0] += -0.092899874;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[0] += 0.0028554203;
            } else {
              result[0] += -0.00022891263;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            result[0] += -0.07537524;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.021607136;
            } else {
              result[0] += 0.013841005;
            }
          }
        }
      } else {
        result[0] += 0.046686787;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          result[0] += -0.07766665;
        } else {
          result[0] += -0.0045217117;
        }
      } else {
        result[0] += 0.014344623;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += 0.08193838;
        } else {
          result[0] += 0.013650577;
        }
      } else {
        result[0] += -0.013483245;
      }
    } else {
      result[0] += -0.02737319;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[1] += -0.00017425678;
            } else {
              result[1] += -0.081206806;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.013220259;
            } else {
              result[1] += -0.07041811;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.008285058;
            } else {
              result[1] += -0.11567052;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.004707066;
            } else {
              result[1] += 0.0021872614;
            }
          }
        }
      } else {
        result[1] += -0.12835954;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
              result[1] += 0.022297;
            } else {
              result[1] += 0.13548692;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
              result[1] += 0.0029725647;
            } else {
              result[1] += 0.08553267;
            }
          }
        } else {
          result[1] += 0.111042745;
        }
      } else {
        result[1] += -0.06986409;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        result[1] += -0.14674245;
      } else {
        result[1] += 0.03516853;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[1] += 0.11667447;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.0026228516;
            } else {
              result[1] += -0.08075398;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[1] += -0.057183016;
            } else {
              result[1] += -0.0044968636;
            }
          }
        } else {
          result[1] += 0.076125376;
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00016372725;
    } else {
      result[2] += 0.000720039;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[2] += 0.07529764;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
        result[2] += -0.06489845;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[2] += 0.04210234;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.04045243;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.032215543;
            } else {
              result[2] += 0.007847617;
            }
          }
        }
      }
    }
  }
}

