
#include "header.h"

void predict_unit20(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[10] += 1.7110013e-06;
        } else {
          result[10] += -0.103182025;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.0033470516;
            } else {
              result[10] += -0.087678134;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[10] += -0.000498144;
            } else {
              result[10] += 0.056390867;
            }
          }
        } else {
          result[10] += -0.0016943057;
        }
      }
    } else {
      result[10] += -0.029248044;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
      result[10] += 0.005742597;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
        result[10] += -0.07895647;
      } else {
        result[10] += -0.02123088;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.00086973165;
            } else {
              result[11] += -0.010097921;
            }
          } else {
            result[11] += 0.010290666;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[11] += -0.008744943;
            } else {
              result[11] += -0.007029181;
            }
          } else {
            result[11] += 0.0010116283;
          }
        }
      } else {
        result[11] += 0.004762424;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.00087453955;
            } else {
              result[11] += -0.07584471;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += -0.1045687;
            } else {
              result[11] += 0.14695469;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.15654604;
            } else {
              result[11] += -0.0033686177;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.13910268;
            } else {
              result[11] += 0.004692411;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += 0.059553996;
          } else {
            result[11] += 0.39420456;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += -0.014572722;
            } else {
              result[11] += -0.15292601;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.04237782;
            } else {
              result[11] += -0.0030084068;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.14110844;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            result[11] += 0.0067262365;
          } else {
            result[11] += -0.1425826;
          }
        } else {
          result[11] += 0.019738717;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          result[11] += -0.013301189;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            result[11] += 0.010107396;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.010802831;
            } else {
              result[11] += 0.06491692;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += -0.00023703442;
            } else {
              result[12] += -0.09022598;
            }
          } else {
            result[12] += -0.14580019;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[12] += 0.003629984;
            } else {
              result[12] += -0.07074669;
            }
          } else {
            result[12] += 0.10006232;
          }
        }
      } else {
        result[12] += 0.08070187;
      }
    } else {
      result[12] += -0.10443389;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[12] += 0.020934125;
          } else {
            result[12] += 0.08102161;
          }
        } else {
          result[12] += 0.10592098;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.08531887;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[12] += 0.0120095825;
            } else {
              result[12] += 0.034521066;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += -0.01126679;
            } else {
              result[12] += 0.016470334;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[12] += 0.03474127;
          } else {
            result[12] += -0.097092114;
          }
        } else {
          result[12] += 0.083284855;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.10488339;
        } else {
          result[12] += 0.012479943;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.00071105815;
            } else {
              result[13] += 0.011270317;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += -0.025233695;
            } else {
              result[13] += 0.0669249;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.016869016;
            } else {
              result[13] += -0.005798647;
            }
          } else {
            result[13] += 0.09208468;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[13] += -0.011057065;
            } else {
              result[13] += 0.04489403;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
              result[13] += -0.20776924;
            } else {
              result[13] += -0.02248853;
            }
          }
        } else {
          result[13] += 0.10997775;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        result[13] += -0.033367388;
      } else {
        result[13] += -0.106794275;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
      result[13] += 0.14834045;
    } else {
      result[13] += -0.040770814;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[14] += 0.0015502803;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.0029851214;
            } else {
              result[14] += 0.00077406294;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.0018166809;
            } else {
              result[14] += 0.016304063;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.11188526;
            } else {
              result[14] += 0.016167436;
            }
          }
        }
      } else {
        result[14] += -0.08338317;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          result[14] += -0.0069341995;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.122265704;
          } else {
            result[14] += -0.036128774;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.1277423;
            } else {
              result[14] += 0.02308574;
            }
          } else {
            result[14] += 0.0022374105;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[14] += -0.105686285;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.008432501;
            } else {
              result[14] += -0.048280798;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      result[14] += -0.09452205;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56842)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.0009791133;
            } else {
              result[14] += -0.0879168;
            }
          } else {
            result[14] += 0.06421389;
          }
        } else {
          result[14] += -0.098809995;
        }
      } else {
        result[14] += 0.04451337;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[0] += -0.00023614078;
    } else {
      result[0] += -0.12042136;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += 0.0043478315;
            } else {
              result[0] += 0.030873803;
            }
          } else {
            result[0] += 0.06762362;
          }
        } else {
          result[0] += -0.06708762;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          result[0] += 0.105941646;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[0] += -0.078618795;
          } else {
            result[0] += 0.060742874;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          result[0] += -0.10128908;
        } else {
          result[0] += -0.0023439284;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          result[0] += 0.07172419;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[0] += -0.16249086;
            } else {
              result[0] += 0.07414944;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
              result[0] += 0.09141808;
            } else {
              result[0] += -0.00069665373;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[1] += -0.00034106558;
            } else {
              result[1] += 0.007856906;
            }
          } else {
            result[1] += -0.09827179;
          }
        } else {
          result[1] += -0.10176145;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            result[1] += -0.011471442;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += -0.12965417;
            } else {
              result[1] += 0.020734705;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += -0.060274374;
            } else {
              result[1] += 0.093926325;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += -0.0904703;
            } else {
              result[1] += 0.005876964;
            }
          }
        }
      }
    } else {
      result[1] += 0.073590204;
    }
  } else {
    result[1] += -0.08991292;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 3.7430207e-05;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[2] += 0.07822674;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          result[2] += -0.037460767;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[2] += 0.08307625;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
              result[2] += 0.003928505;
            } else {
              result[2] += 0.0722653;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.088479966;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.0076478235;
    } else {
      result[3] += -0.0895907;
    }
  } else {
    result[3] += 0.00555305;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.00026915333;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
              result[4] += 0.061388586;
            } else {
              result[4] += 0.024279542;
            }
          } else {
            result[4] += -0.05526878;
          }
        } else {
          result[4] += 0.06242793;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            result[4] += 0.0053267744;
          } else {
            result[4] += -0.07127004;
          }
        } else {
          result[4] += 0.060196295;
        }
      }
    }
  } else {
    result[4] += -0.088644564;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[5] += 9.703219e-05;
            } else {
              result[5] += -0.08970234;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[5] += 0.0063367565;
            } else {
              result[5] += -0.0071090176;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[5] += -0.07571136;
          } else {
            result[5] += -0.017134644;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          result[5] += 0.14760311;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            result[5] += -0.07871409;
          } else {
            result[5] += 0.012563667;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[5] += -0.093844086;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[5] += 0.05243957;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            result[5] += -0.086767964;
          } else {
            result[5] += 0.00072433194;
          }
        }
      }
    }
  } else {
    result[5] += 0.020977475;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 9.0046175e-05;
  } else {
    result[6] += -0.08848025;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[7] += -9.7484604e-05;
            } else {
              result[7] += -0.07884297;
            }
          } else {
            result[7] += -0.09837286;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
            result[7] += 0.11801171;
          } else {
            result[7] += -0.07240924;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[7] += -0.0879522;
            } else {
              result[7] += 0.01056989;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[7] += 0.025116952;
            } else {
              result[7] += 0.116995566;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[7] += -0.10997336;
          } else {
            result[7] += -0.022161786;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
        result[7] += 0.0485142;
      } else {
        result[7] += 0.014742265;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
      result[7] += -0.084153816;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
          result[7] += 0.042374358;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            result[7] += -0.1424991;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[7] += 0.008791688;
            } else {
              result[7] += -0.05731397;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[7] += 0.122665085;
            } else {
              result[7] += 0.03230365;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[7] += -0.010736759;
            } else {
              result[7] += -0.082139544;
            }
          }
        } else {
          result[7] += 0.1251804;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.00023761572;
            } else {
              result[8] += -0.14499734;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[8] += 0.14659011;
            } else {
              result[8] += -0.032408036;
            }
          }
        } else {
          result[8] += -0.15803243;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[8] += -0.24922651;
          } else {
            result[8] += 0.13930568;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[8] += -0.010695128;
            } else {
              result[8] += 0.12081526;
            }
          } else {
            result[8] += 0.13464129;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.06463483;
            } else {
              result[8] += 0.03185764;
            }
          } else {
            result[8] += 0.12912904;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[8] += -0.120598815;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.020077374;
            } else {
              result[8] += 0.0940428;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.03533609;
            } else {
              result[8] += 0.040854633;
            }
          } else {
            result[8] += -0.07459456;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.009314633;
            } else {
              result[8] += 0.1204529;
            }
          } else {
            result[8] += -0.10219743;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += 0.007208388;
            } else {
              result[8] += -0.12394799;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[8] += 0.094814464;
            } else {
              result[8] += -0.018521644;
            }
          }
        } else {
          result[8] += -0.12467164;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          result[8] += 0.11711228;
        } else {
          result[8] += -0.081120685;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.20983604;
      } else {
        result[8] += -0.015695311;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 7.097561e-05;
      } else {
        result[9] += -0.014147852;
      }
    } else {
      result[9] += -0.09325485;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.008055829;
    } else {
      result[9] += 0.0032013;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[10] += 0.00035291872;
            } else {
              result[10] += -0.08648658;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
              result[10] += 0.114735015;
            } else {
              result[10] += 0.0023390243;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[10] += -0.019778326;
            } else {
              result[10] += -0.10894671;
            }
          } else {
            result[10] += 0.058012027;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[10] += 0.023242107;
            } else {
              result[10] += -0.051309142;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[10] += 0.0063651945;
            } else {
              result[10] += 0.12262926;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.022105686;
            } else {
              result[10] += -0.08382685;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[10] += -0.07680959;
            } else {
              result[10] += -0.0001437251;
            }
          }
        }
      }
    } else {
      result[10] += -0.026599979;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
      result[10] += 0.0023889635;
    } else {
      result[10] += -0.049450297;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += 0.00015313586;
            } else {
              result[11] += 0.09676684;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.17453447;
            } else {
              result[11] += 0.0030705445;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.0074770423;
            } else {
              result[11] += -0.013694639;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.12789613;
            } else {
              result[11] += 0.022289164;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
          result[11] += -0.1393678;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += -0.0071764463;
            } else {
              result[11] += 0.016536534;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[11] += -0.004665073;
            } else {
              result[11] += -0.080457956;
            }
          }
        }
      }
    } else {
      result[11] += -0.08353196;
    }
  } else {
    result[11] += -0.084490255;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[12] += -0.0009804845;
            } else {
              result[12] += -0.076043166;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[12] += -0.086986706;
            } else {
              result[12] += -0.019695928;
            }
          }
        } else {
          result[12] += -0.12339151;
        }
      } else {
        result[12] += 0.13540411;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        result[12] += -0.1454857;
      } else {
        result[12] += 0.032327894;
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[12] += 0.00392647;
          } else {
            result[12] += 0.07630703;
          }
        } else {
          result[12] += -0.094507396;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[12] += -0.15350755;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[12] += 0.11410782;
            } else {
              result[12] += -0.03269329;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.10235054;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.011689272;
            } else {
              result[12] += -0.07851156;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          result[12] += -0.1479849;
        } else {
          result[12] += 0.019758716;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.003929876;
            } else {
              result[12] += -0.12274489;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[12] += -0.1386445;
            } else {
              result[12] += -0.00071272475;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
              result[12] += -0.041443784;
            } else {
              result[12] += -0.145715;
            }
          } else {
            result[12] += 0.021747738;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[13] += 7.1266775e-05;
            } else {
              result[13] += -0.06808608;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
              result[13] += 0.06564319;
            } else {
              result[13] += 0.0015478914;
            }
          }
        } else {
          result[13] += -0.086902745;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          result[13] += 0.113964446;
        } else {
          result[13] += 0.010361349;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        result[13] += 0.044133954;
      } else {
        result[13] += -0.1066988;
      }
    }
  } else {
    result[13] += -0.07435573;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[14] += -0.00013010521;
            } else {
              result[14] += -0.015082348;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += 0.008665413;
            } else {
              result[14] += 0.0009933276;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += -0.010480915;
            } else {
              result[14] += -0.029072057;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.0048780297;
            } else {
              result[14] += 0.014823482;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += 0.037743933;
          } else {
            result[14] += 0.018310064;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += -0.004875999;
          } else {
            result[14] += 0.002856398;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        result[14] += -0.122968785;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[14] += 0.0673168;
        } else {
          result[14] += -0.051898494;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
      result[14] += 0.0035898844;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          result[14] += -0.009725074;
        } else {
          result[14] += -0.10338696;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.103446744;
            } else {
              result[14] += 0.025380466;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[14] += 0.037870042;
            } else {
              result[14] += -0.030189017;
            }
          }
        } else {
          result[14] += 0.07201188;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.00046565727;
            } else {
              result[0] += -0.021445502;
            }
          } else {
            result[0] += 0.064468764;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[0] += 0.03709827;
            } else {
              result[0] += -0.06100941;
            }
          } else {
            result[0] += 0.095147215;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            result[0] += -0.093722224;
          } else {
            result[0] += -0.023908388;
          }
        } else {
          result[0] += 0.0333962;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += 0.087336056;
        } else {
          result[0] += -0.005121165;
        }
      } else {
        result[0] += -0.019102016;
      }
    }
  } else {
    result[0] += 0.047383204;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[1] += -0.00028620393;
            } else {
              result[1] += 0.018282227;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[1] += -0.14493954;
            } else {
              result[1] += -0.029211763;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.056684848;
            } else {
              result[1] += 0.008372229;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[1] += -0.047155708;
            } else {
              result[1] += 0.020528587;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          result[1] += -0.005634483;
        } else {
          result[1] += -0.04877959;
        }
      }
    } else {
      result[1] += 0.07019398;
    }
  } else {
    result[1] += -0.08647269;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
        result[2] += 0.00012776286;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.08214674;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            result[2] += -0.03090566;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
              result[2] += 0.085432634;
            } else {
              result[2] += 0.01820391;
            }
          }
        }
      }
    } else {
      result[2] += -0.07754858;
    }
  } else {
    result[2] += -0.08511245;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.0068655224;
    } else {
      result[3] += -0.086252995;
    }
  } else {
    result[3] += 0.003453009;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.00024971922;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
            result[4] += 0.0586629;
          } else {
            result[4] += -0.004514207;
          }
        } else {
          result[4] += 0.05774143;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          result[4] += -0.06272478;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[4] += 0.07488097;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[4] += -0.031016843;
            } else {
              result[4] += 0.057849247;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.08527339;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[5] += 7.853135e-05;
            } else {
              result[5] += -0.08629837;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[5] += 0.012340859;
            } else {
              result[5] += 0.0038464114;
            }
          }
        } else {
          result[5] += -0.045158718;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          result[5] += 0.12179597;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            result[5] += -0.07578007;
          } else {
            result[5] += 0.010608402;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[5] += -0.0905228;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[5] += 0.044737227;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            result[5] += -0.083592914;
          } else {
            result[5] += 0.0010690737;
          }
        }
      }
    }
  } else {
    result[5] += 0.021260895;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 7.189701e-05;
  } else {
    result[6] += -0.0851127;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += 0.00052270025;
            } else {
              result[7] += -0.009688214;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += 0.1470189;
            } else {
              result[7] += 0.014650607;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[7] += -0.14195076;
            } else {
              result[7] += 0.017568452;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[7] += 0.004277296;
            } else {
              result[7] += -0.0009135452;
            }
          }
        }
      } else {
        result[7] += -0.07546018;
      }
    } else {
      result[7] += -0.107990794;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        result[7] += 0.17819738;
      } else {
        result[7] += -0.006706286;
      }
    } else {
      result[7] += -0.04337455;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[8] += -0.010297421;
            } else {
              result[8] += -0.08617341;
            }
          } else {
            result[8] += -0.09543348;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[8] += 0.00025172302;
            } else {
              result[8] += 0.034861617;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += -0.015089008;
            } else {
              result[8] += -0.06962638;
            }
          }
        }
      } else {
        result[8] += -0.11321217;
      }
    } else {
      result[8] += 0.06979451;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            result[8] += -0.120889366;
          } else {
            result[8] += 0.07236879;
          }
        } else {
          result[8] += -0.18590778;
        }
      } else {
        result[8] += 0.05364643;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[8] += -0.1766996;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[8] += 0.09780978;
          } else {
            result[8] += -0.2043096;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
              result[8] += -0.027622728;
            } else {
              result[8] += 0.09075976;
            }
          } else {
            result[8] += 0.11001999;
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 5.3789223e-05;
      } else {
        result[9] += -0.013042412;
      }
    } else {
      result[9] += -0.09015525;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += 0.0015329904;
      } else {
        result[9] += -0.0006286014;
      }
    } else {
      result[9] += 0.005301373;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[10] += -7.9214034e-05;
        } else {
          result[10] += -0.09947859;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
            result[10] += 0.0029563347;
          } else {
            result[10] += 0.007420724;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.11518473;
            } else {
              result[10] += 3.5948004e-05;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.016452903;
            } else {
              result[10] += -2.264061e-05;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        result[10] += -0.098457195;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[10] += 0.048879076;
            } else {
              result[10] += -0.110765345;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += 0.019320238;
            } else {
              result[10] += 0.076346956;
            }
          }
        } else {
          result[10] += -0.0918189;
        }
      }
    }
  } else {
    result[10] += -0.037454266;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.0001908339;
            } else {
              result[11] += 0.0026675987;
            }
          } else {
            result[11] += -0.07892287;
          }
        } else {
          result[11] += -0.08041017;
        }
      } else {
        result[11] += -0.080430016;
      }
    } else {
      result[11] += -0.08123885;
    }
  } else {
    result[11] += -0.082199;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[12] += -0.0100033255;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 4.257713e-05;
            } else {
              result[12] += -0.055156037;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[12] += 0.07524919;
            } else {
              result[12] += -0.03164486;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[12] += -0.10052063;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.018876344;
            } else {
              result[12] += 0.021485263;
            }
          }
        }
      } else {
        result[12] += -0.14412497;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          result[12] += 0.0031979394;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            result[12] += -0.09527483;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
              result[12] += 0.060171977;
            } else {
              result[12] += -0.039014407;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          result[12] += 0.09707065;
        } else {
          result[12] += -0.0055230972;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[13] += -0.003117317;
            } else {
              result[13] += -0.07904101;
            }
          } else {
            result[13] += -0.08429703;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[13] += 0.0016500728;
            } else {
              result[13] += 0.030121993;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.016940737;
            } else {
              result[13] += 0.0010303389;
            }
          }
        }
      } else {
        result[13] += -0.08093819;
      }
    } else {
      result[13] += -0.10376459;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
      result[13] += 0.13189457;
    } else {
      result[13] += -0.034330178;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -9.556542e-05;
            } else {
              result[14] += 0.0077098906;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.010340847;
            } else {
              result[14] += -0.12403465;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[14] += 0.17196429;
          } else {
            result[14] += -0.08306265;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += -0.08338607;
            } else {
              result[14] += 0.048442323;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += 0.07069733;
            } else {
              result[14] += -0.042370304;
            }
          }
        } else {
          result[14] += -0.10288162;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        result[14] += -0.11989342;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[14] += -0.004373759;
          } else {
            result[14] += 0.08726261;
          }
        } else {
          result[14] += -0.04632121;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          result[14] += 0.0035755506;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += -0.007263737;
            } else {
              result[14] += -0.10278819;
            }
          } else {
            result[14] += 0.025460102;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[14] += 0.09146554;
        } else {
          result[14] += -0.009077122;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        result[14] += -0.059540894;
      } else {
        result[14] += -0.00037820873;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[0] += -0.00024212459;
    } else {
      result[0] += -0.11725358;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[0] += 0.003308774;
            } else {
              result[0] += 0.011943314;
            }
          } else {
            result[0] += -0.040928196;
          }
        } else {
          result[0] += 0.04850625;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          result[0] += 0.09549132;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[0] += -0.075760536;
          } else {
            result[0] += 0.04529904;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          result[0] += -0.09029423;
        } else {
          result[0] += -0.001246252;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          result[0] += 0.05605879;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[0] += -0.13136144;
            } else {
              result[0] += 0.075373106;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
              result[0] += 0.08337448;
            } else {
              result[0] += -0.0004246992;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.00036985526;
            } else {
              result[1] += -0.0051294267;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.020609463;
            } else {
              result[1] += 0.0011614016;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.023124587;
            } else {
              result[1] += -0.0068889377;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.01091503;
            } else {
              result[1] += 0.13538365;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.19806959;
            } else {
              result[1] += 0.0006256598;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.14634214;
            } else {
              result[1] += 0.006890723;
            }
          }
        } else {
          result[1] += -0.14499484;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        result[1] += -0.15040302;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
            result[1] += -0.009749085;
          } else {
            result[1] += 0.10307414;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.011310825;
            } else {
              result[1] += -0.004881972;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[1] += -0.12585555;
            } else {
              result[1] += -0.0028499076;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.083249316;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 3.3686578e-05;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[2] += 0.07439967;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[2] += 0.0019305412;
            } else {
              result[2] += 0.05448639;
            }
          } else {
            result[2] += -0.035799842;
          }
        } else {
          result[2] += 0.07145059;
        }
      }
    }
  } else {
    result[2] += -0.081860766;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.0061319247;
    } else {
      result[3] += 0.0041141426;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      result[3] += -0.08770106;
    } else {
      result[3] += 0.011371945;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.00016675558;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)16506)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
            result[4] += 0.056182124;
          } else {
            result[4] += -0.0039106347;
          }
        } else {
          result[4] += 0.059647877;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            result[4] += 0.0025625937;
          } else {
            result[4] += -0.050413977;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += 0.02205444;
            } else {
              result[4] += 0.06851148;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[4] += -0.026782902;
            } else {
              result[4] += 0.053152494;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.08201734;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
              result[5] += 0.00046551652;
            } else {
              result[5] += -0.08723972;
            }
          } else {
            result[5] += 0.038404368;
          }
        } else {
          result[5] += -0.08047789;
        }
      } else {
        result[5] += 0.024018565;
      }
    } else {
      result[5] += -0.07560559;
    }
  } else {
    result[5] += 0.017259058;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 9.5689444e-05;
  } else {
    result[6] += -0.08186101;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += -0.00012381184;
            } else {
              result[7] += 0.11418731;
            }
          } else {
            result[7] += -0.10845161;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[7] += -0.10898152;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[7] += 0.063658476;
            } else {
              result[7] += -0.021783443;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
          result[7] += 0.041375484;
        } else {
          result[7] += 0.012293168;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
        result[7] += -0.07701661;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
          result[7] += 0.037996717;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[7] += -0.13790174;
            } else {
              result[7] += 0.0902852;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.0062332437;
            } else {
              result[7] += -0.0837075;
            }
          }
        }
      }
    }
  } else {
    result[7] += 0.07017666;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += -0.0005096594;
            } else {
              result[8] += -0.10943617;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.03296489;
            } else {
              result[8] += -0.009532251;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[8] += -0.19256903;
            } else {
              result[8] += -0.0492236;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
              result[8] += -0.012127764;
            } else {
              result[8] += 0.03954626;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.08261006;
            } else {
              result[8] += 0.013340063;
            }
          } else {
            result[8] += -0.05023562;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.040406976;
            } else {
              result[8] += 0.002011993;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += -0.10873289;
            } else {
              result[8] += 0.033884447;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.07957532;
            } else {
              result[8] += -0.0068608285;
            }
          } else {
            result[8] += -0.027696941;
          }
        } else {
          result[8] += -0.073909976;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[8] += -0.0990953;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.11426342;
            } else {
              result[8] += 0.004847157;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[8] += -0.012095051;
            } else {
              result[8] += 0.008337721;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[8] += -0.04560618;
            } else {
              result[8] += 0.0017011209;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            result[8] += -0.11785115;
          } else {
            result[8] += 0.06584367;
          }
        } else {
          result[8] += -0.18589458;
        }
      } else {
        result[8] += 0.049107775;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[8] += -0.14392878;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[8] += 0.09260681;
          } else {
            result[8] += -0.204968;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.022793312;
            } else {
              result[8] += 0.08830209;
            }
          } else {
            result[8] += 0.10946802;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 8.272746e-05;
      } else {
        result[9] += -0.012124703;
      }
    } else {
      result[9] += -0.086891785;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.008482081;
    } else {
      result[9] += 0.0025459612;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[10] += -3.10162e-05;
        } else {
          result[10] += -0.09593459;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += 0.0019562857;
            } else {
              result[10] += 0.104692794;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[10] += 0.021866273;
            } else {
              result[10] += -0.0015812657;
            }
          }
        } else {
          result[10] += -0.0016603392;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        result[10] += -0.093770154;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
            result[10] += -0.075578414;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
              result[10] += 0.06900394;
            } else {
              result[10] += 0.005773765;
            }
          }
        } else {
          result[10] += -0.085025065;
        }
      }
    }
  } else {
    result[10] += -0.035872262;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[11] += -0.0008597078;
            } else {
              result[11] += 0.0007779877;
            }
          } else {
            result[11] += -0.07711636;
          }
        } else {
          result[11] += -0.077419266;
        }
      } else {
        result[11] += -0.077543244;
      }
    } else {
      result[11] += -0.07819804;
    }
  } else {
    result[11] += -0.078654744;
  }
}

