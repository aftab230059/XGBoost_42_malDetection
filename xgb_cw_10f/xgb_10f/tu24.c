
#include "header.h"

void predict_unit24(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[3] += 0.00649687;
  } else {
    result[3] += -0.027339982;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.00014301638;
      } else {
        result[4] += 0.071814194;
      }
    } else {
      result[4] += -0.015172303;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
      result[4] += 0.060331438;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
        result[4] += -0.031308655;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          result[4] += 0.05046523;
        } else {
          result[4] += 0.007823586;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += -0.0005120661;
          } else {
            result[5] += 0.0023910285;
          }
        } else {
          result[5] += 0.0037511468;
        }
      } else {
        result[5] += 0.042826872;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        result[5] += -0.079062805;
      } else {
        result[5] += -0.0027035754;
      }
    }
  } else {
    result[5] += 0.0123375645;
  }
  result[6] += -1.4805102e-05;
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[7] += 0.00031018362;
          } else {
            result[7] += -0.011144276;
          }
        } else {
          result[7] += 0.14185916;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[7] += -0.07799947;
          } else {
            result[7] += -0.14681059;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
              result[7] += 0.0027070693;
            } else {
              result[7] += 0.014501026;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[7] += -0.035920803;
            } else {
              result[7] += -0.0016078309;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51738)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[7] += 0.022399629;
          } else {
            result[7] += 0.004149152;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51595)) {
            result[7] += 0.03315649;
          } else {
            result[7] += 0.04716857;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51893)) {
          result[7] += -0.06513014;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[7] += 0.027537102;
            } else {
              result[7] += 0.035852768;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
              result[7] += -0.04499448;
            } else {
              result[7] += 0.00054789835;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[7] += -0.00045285636;
            } else {
              result[7] += 0.09936479;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[7] += -0.08128473;
            } else {
              result[7] += -0.016408049;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[7] += 0.13738681;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[7] += 0.0066301017;
            } else {
              result[7] += 0.05996061;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          result[7] += -0.14556599;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            result[7] += -0.113960065;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.17838313;
            } else {
              result[7] += 0.00040929593;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[7] += -0.1272794;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[7] += 0.101065576;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[7] += -0.1032107;
            } else {
              result[7] += 0.013275685;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += -0.008132688;
            } else {
              result[7] += -0.034078375;
            }
          } else {
            result[7] += -0.08579299;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[7] += 0.094338246;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
              result[7] += 0.061711542;
            } else {
              result[7] += -0.034994997;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[8] += -0.00026207717;
            } else {
              result[8] += 0.0030309756;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.17007078;
            } else {
              result[8] += 0.032797866;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[8] += -0.038186498;
          } else {
            result[8] += -0.098329626;
          }
        }
      } else {
        result[8] += -0.14049406;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[8] += -0.1855466;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.024335133;
            } else {
              result[8] += 0.10436974;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[8] += 0.14238518;
            } else {
              result[8] += -0.02958293;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[8] += 0.0006364512;
            } else {
              result[8] += -0.018125894;
            }
          } else {
            result[8] += 0.07622622;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[8] += 0.13464761;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.111121856;
            } else {
              result[8] += -0.017679695;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.033363633;
            } else {
              result[8] += -0.0005352154;
            }
          } else {
            result[8] += 0.00088897516;
          }
        } else {
          result[8] += -0.1445833;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            result[8] += -0.03387888;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += 0.0015757385;
            } else {
              result[8] += -0.023533532;
            }
          }
        } else {
          result[8] += -0.046808623;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[8] += 0.008646251;
            } else {
              result[8] += 0.19011869;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[8] += -0.102927454;
            } else {
              result[8] += 0.004979642;
            }
          }
        } else {
          result[8] += 0.11261837;
        }
      } else {
        result[8] += -0.0895775;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)320583)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 1.1610612e-05;
      } else {
        result[9] += -0.08952425;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[9] += 0.0065948344;
      } else {
        result[9] += 0.001945604;
      }
    }
  } else {
    result[9] += 0.062337477;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[10] += -0.00014382465;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
            result[10] += 0.0018592677;
          } else {
            result[10] += 0.009059423;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.109952115;
            } else {
              result[10] += 0.0001070709;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[10] += -0.064812295;
            } else {
              result[10] += 0.0010627367;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        result[10] += -0.07726765;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[10] += 0.016454486;
          } else {
            result[10] += 0.045123417;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
            result[10] += -0.09127988;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[10] += -0.013956561;
            } else {
              result[10] += 0.036764633;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.031649094;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += -0.0006716288;
            } else {
              result[11] += -0.11603216;
            }
          } else {
            result[11] += 0.010749788;
          }
        } else {
          result[11] += -0.027599031;
        }
      } else {
        result[11] += -0.11665896;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.000798793;
            } else {
              result[11] += -0.0040698317;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += -0.10533845;
            } else {
              result[11] += -0.008681463;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[11] += 0.012399276;
            } else {
              result[11] += -0.0067581055;
            }
          } else {
            result[11] += 0.11401149;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.03419969;
            } else {
              result[11] += 0.17444333;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.11156981;
            } else {
              result[11] += -0.0042373594;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.12851924;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += 0.0034139475;
            } else {
              result[11] += -0.0009057385;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.1158465;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += -0.00041153145;
            } else {
              result[11] += -0.0049926126;
            }
          } else {
            result[11] += 0.0022724015;
          }
        } else {
          result[11] += -0.0050886376;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[11] += 0.024109624;
            } else {
              result[11] += -0.047187235;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[11] += 0.07045042;
            } else {
              result[11] += 0.016861716;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            result[11] += -0.1191546;
          } else {
            result[11] += 0.017105352;
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
              result[12] += -0.0068790386;
            } else {
              result[12] += -3.191258e-05;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.010170771;
            } else {
              result[12] += 0.08942165;
            }
          }
        } else {
          result[12] += -0.06673043;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[12] += -0.02071381;
          } else {
            result[12] += -0.08009706;
          }
        } else {
          result[12] += 0.01791773;
        }
      }
    } else {
      result[12] += -0.12715627;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[12] += 0.0025511018;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[12] += 0.029366666;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[12] += -0.06500877;
            } else {
              result[12] += 0.043680914;
            }
          } else {
            result[12] += -0.087860785;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[12] += 0.09830093;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          result[12] += -0.057401698;
        } else {
          result[12] += 0.033249322;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
              result[13] += 1.0299414e-05;
            } else {
              result[13] += -0.08475313;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[13] += 0.06666491;
            } else {
              result[13] += 0.021255057;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.11736263;
            } else {
              result[13] += 0.011034121;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[13] += 0.070223846;
            } else {
              result[13] += -0.021997489;
            }
          }
        }
      } else {
        result[13] += 0.11308116;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
          result[13] += -0.11154808;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            result[13] += 0.07723402;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[13] += -0.08954805;
            } else {
              result[13] += 0.0066552334;
            }
          }
        }
      } else {
        result[13] += 0.052359115;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += 0.07803536;
            } else {
              result[13] += 0.003881884;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.012355809;
            } else {
              result[13] += -0.023880502;
            }
          }
        } else {
          result[13] += -0.077308044;
        }
      } else {
        result[13] += 0.08565723;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        result[13] += 0.041961696;
      } else {
        result[13] += -0.08609108;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += -7.818334e-05;
            } else {
              result[14] += -0.08975612;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.06076546;
            } else {
              result[14] += 0.0082728565;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.10218374;
          } else {
            result[14] += 0.012500662;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += -0.02977939;
            } else {
              result[14] += -0.10744356;
            }
          } else {
            result[14] += 0.014097251;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[14] += 0.0023313642;
            } else {
              result[14] += 0.007647269;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.06948009;
            } else {
              result[14] += -0.001391792;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        result[14] += -0.09394062;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[14] += 0.0330899;
        } else {
          result[14] += -0.028819505;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          result[14] += 0.0028415872;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += -0.0035815556;
            } else {
              result[14] += -0.08429713;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.00035796588;
            } else {
              result[14] += 0.02599225;
            }
          }
        }
      } else {
        result[14] += 0.052879516;
      }
    } else {
      result[14] += -0.02981927;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -0.0001872902;
            } else {
              result[0] += -0.08934303;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
              result[0] += 0.0023621488;
            } else {
              result[0] += -0.0004911126;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            result[0] += -0.07023156;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.02080372;
            } else {
              result[0] += 0.0129165845;
            }
          }
        }
      } else {
        result[0] += 0.043743383;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[0] += -0.04673277;
      } else {
        result[0] += 0.01389236;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[0] += 0.07262229;
      } else {
        result[0] += 0.0012618669;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += -0.0791229;
      } else {
        result[0] += 0.029769605;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += -0.00026018423;
            } else {
              result[1] += 0.01177355;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += -0.012150543;
            } else {
              result[1] += -0.12584217;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.0031383962;
            } else {
              result[1] += -0.099961646;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.009428592;
            } else {
              result[1] += 0.10795322;
            }
          }
        }
      } else {
        result[1] += -0.12539603;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
              result[1] += 0.012675387;
            } else {
              result[1] += 0.070426434;
            }
          } else {
            result[1] += -0.019347783;
          }
        } else {
          result[1] += 0.11194075;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
          result[1] += 0.0025695653;
        } else {
          result[1] += 0.06953359;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        result[1] += -0.14580615;
      } else {
        result[1] += 0.03460729;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[1] += 0.10950088;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.0018460462;
            } else {
              result[1] += -0.08021709;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[1] += -0.083471954;
            } else {
              result[1] += -0.0040534046;
            }
          }
        } else {
          result[1] += 0.073909365;
        }
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[2] += -3.2081436e-05;
      } else {
        result[2] += 0.0009619941;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[2] += 0.039611086;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          result[2] += -0.028534507;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += 0.008910738;
            } else {
              result[2] += 0.04884293;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[2] += -0.042488504;
            } else {
              result[2] += 0.025012484;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.07510786;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.026736598;
  } else {
    result[3] += 0.0064077335;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -7.4457384e-05;
      } else {
        result[4] += 0.056498636;
      }
    } else {
      result[4] += -0.011380483;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
      result[4] += 0.057188734;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        result[4] += -0.0013028334;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          result[4] += 0.05388114;
        } else {
          result[4] += -0.0013671829;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[5] += -1.6240674e-05;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[5] += 0.011217221;
        } else {
          result[5] += 0.0033269124;
        }
      }
    } else {
      result[5] += -0.091218546;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        result[5] += 0.0048531545;
      } else {
        result[5] += 0.032001268;
      }
    } else {
      result[5] += -0.0031595372;
    }
  }
  result[6] += 3.2525552e-06;
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[7] += 0.00023876318;
          } else {
            result[7] += -0.009627161;
          }
        } else {
          result[7] += 0.1406377;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[7] += -0.07278;
          } else {
            result[7] += -0.14617753;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
              result[7] += 0.0023807534;
            } else {
              result[7] += 0.027871316;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[7] += -0.012865537;
            } else {
              result[7] += 0.00011902731;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51738)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[7] += 0.019935668;
          } else {
            result[7] += 0.0039701047;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51595)) {
            result[7] += 0.02962726;
          } else {
            result[7] += 0.042564712;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51893)) {
          result[7] += -0.051532917;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
              result[7] += 0.0032647816;
            } else {
              result[7] += 0.035740316;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
              result[7] += -0.02738458;
            } else {
              result[7] += 0.00036774296;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[7] += -0.00036805062;
            } else {
              result[7] += 0.08293803;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[7] += -0.07826384;
            } else {
              result[7] += -0.014424561;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[7] += 0.13561319;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.076271564;
            } else {
              result[7] += 0.11563165;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[7] += 0.05647204;
          } else {
            result[7] += -0.15710163;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.10880349;
            } else {
              result[7] += -6.501289e-05;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += 0.11564611;
            } else {
              result[7] += -0.0047843847;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[7] += -0.12637946;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[7] += 0.0990274;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[7] += -0.08496308;
            } else {
              result[7] += 0.013035901;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
          result[7] += 0.024127057;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[7] += -0.008007005;
            } else {
              result[7] += -0.08351359;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
              result[7] += 0.06328687;
            } else {
              result[7] += 0.0025900176;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[8] += -0.00857888;
        } else {
          result[8] += -0.07631582;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[8] += 0.00033376474;
            } else {
              result[8] += -0.021839412;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += 0.020713802;
            } else {
              result[8] += 0.11209771;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[8] += -0.013760393;
            } else {
              result[8] += 0.00027927515;
            }
          } else {
            result[8] += -0.063466355;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.1098329;
      } else {
        result[8] += 0.015965344;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      result[8] += -0.10366858;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[8] += 0.06934512;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            result[8] += -0.09698843;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.0048466837;
            } else {
              result[8] += 0.056840245;
            }
          }
        }
      } else {
        result[8] += -0.08966115;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += 8.0532556e-07;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.0004389387;
      } else {
        result[9] += -0.0021208597;
      }
    } else {
      result[9] += 0.0038313423;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[10] += -0.000104390936;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += 0.0022419493;
            } else {
              result[10] += 0.00011055672;
            }
          }
        } else {
          result[10] += -0.0011962352;
        }
      } else {
        result[10] += 0.0195818;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
          result[10] += 0.006280483;
        } else {
          result[10] += -0.023034291;
        }
      } else {
        result[10] += -0.018854924;
      }
    }
  } else {
    result[10] += -0.03229955;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[11] += -0.0060070925;
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.0005991764;
            } else {
              result[11] += 0.06949614;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[11] += -0.014902708;
            } else {
              result[11] += 0.003584998;
            }
          }
        } else {
          result[11] += -0.111213066;
        }
      } else {
        result[11] += 0.00035916446;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[11] += -0.11136363;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[11] += -0.00084661425;
            } else {
              result[11] += -0.0040034875;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[11] += 0.032204956;
            } else {
              result[11] += -0.022466268;
            }
          }
        } else {
          result[11] += -0.0815218;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.0006370056;
            } else {
              result[12] += 0.118569;
            }
          } else {
            result[12] += -0.13607983;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[12] += 0.002328227;
          } else {
            result[12] += 0.0041803736;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.13510087;
            } else {
              result[12] += 0.0333057;
            }
          } else {
            result[12] += -0.14182395;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[12] += -0.030810472;
            } else {
              result[12] += 0.074914545;
            }
          } else {
            result[12] += -0.13577975;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += 0.00040190626;
            } else {
              result[12] += 0.004343391;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[12] += -0.005091999;
            } else {
              result[12] += -0.00091946067;
            }
          }
        } else {
          result[12] += 0.036306176;
        }
      } else {
        result[12] += -0.007274371;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[12] += -0.09080417;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.015401634;
        } else {
          result[12] += 0.041925106;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.002248569;
            } else {
              result[12] += -0.08717291;
            }
          } else {
            result[12] += 0.09265327;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += -0.14856157;
            } else {
              result[12] += 0.047975946;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.008736247;
            } else {
              result[12] += -0.056832526;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[12] += -0.1421988;
          } else {
            result[12] += 0.007058442;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[12] += 0.0009975107;
            } else {
              result[12] += 0.09910683;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[12] += -0.106061354;
            } else {
              result[12] += 0.021174677;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += 0.0001294647;
            } else {
              result[13] += 0.019545306;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.044962414;
            } else {
              result[13] += 0.080163226;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.1254911;
            } else {
              result[13] += 0.0025906572;
            }
          } else {
            result[13] += -0.09512291;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[13] += -0.122862495;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += 0.02108898;
            } else {
              result[13] += -0.0074699824;
            }
          } else {
            result[13] += -0.0474718;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[13] += 0.019405432;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            result[13] += -0.11548887;
          } else {
            result[13] += -0.0059509627;
          }
        }
      } else {
        result[13] += 0.018078169;
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.068062134;
            } else {
              result[13] += 0.017414948;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.02345283;
            } else {
              result[13] += -0.031886704;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.11961388;
            } else {
              result[13] += -0.015676556;
            }
          } else {
            result[13] += 0.013453165;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          result[13] += 0.107572414;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[13] += -0.05574954;
          } else {
            result[13] += 0.043850802;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            result[13] += -0.11879487;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.11731327;
            } else {
              result[13] += -0.015857344;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += -0.085489124;
            } else {
              result[13] += 0.113666534;
            }
          } else {
            result[13] += -0.13799286;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += 0.02912818;
            } else {
              result[13] += -0.1612216;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[13] += 0.10679803;
            } else {
              result[13] += -0.060152028;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.101642124;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[13] += 0.03745896;
            } else {
              result[13] += -0.008494933;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 9.813253e-06;
            } else {
              result[14] += -0.039003108;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.08287751;
            } else {
              result[14] += 0.0024907514;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.011253362;
            } else {
              result[14] += -0.09239201;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.040941387;
            } else {
              result[14] += -0.005209461;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[14] += -0.079415865;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.0011398235;
            } else {
              result[14] += -0.052659947;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 0.020768488;
            } else {
              result[14] += -0.026863152;
            }
          }
        }
      }
    } else {
      result[14] += -0.048318673;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          result[14] += 0.0026062992;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += -0.0042410707;
            } else {
              result[14] += -0.07881937;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[14] += 0.0047927434;
            } else {
              result[14] += 0.019153126;
            }
          }
        }
      } else {
        result[14] += 0.04522282;
      }
    } else {
      result[14] += -0.026997436;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.00030639098;
            } else {
              result[0] += 0.001226648;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.06694585;
            } else {
              result[0] += 0.0031538834;
            }
          }
        } else {
          result[0] += 0.03944451;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[0] += -0.04571659;
        } else {
          result[0] += 0.013094351;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[0] += 0.0624465;
      } else {
        result[0] += 0.0011364145;
      }
    }
  } else {
    result[0] += -0.023260558;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[1] += -0.00028883357;
            } else {
              result[1] += 0.021718627;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.025965897;
            } else {
              result[1] += -0.07200424;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[1] += 0.053101555;
          } else {
            result[1] += -0.026995743;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          result[1] += -0.13783613;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.027984718;
          } else {
            result[1] += 0.052576084;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[1] += 0.038110927;
        } else {
          result[1] += 0.0038524533;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += -0.028748931;
          } else {
            result[1] += -0.110121556;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[1] += 0.016569154;
            } else {
              result[1] += -0.024932405;
            }
          } else {
            result[1] += 0.05476062;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      result[1] += -0.040419973;
    } else {
      result[1] += -0.007554347;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00010414525;
    } else {
      result[2] += 0.0008119205;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.034431767;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.026658816;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[2] += 0.0060858973;
            } else {
              result[2] += 0.037656125;
            }
          } else {
            result[2] += -0.044038896;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
            result[2] += 0.075772025;
          } else {
            result[2] += -0.01645678;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += 0.008640663;
    } else {
      result[3] += -0.0014685596;
    }
  } else {
    result[3] += -0.035543505;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -3.705924e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.054614265;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        result[4] += -0.018342225;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.04447839;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += -0.0073571326;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.051300414;
            } else {
              result[4] += 0.007845967;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[5] += 0.00014276206;
      } else {
        result[5] += -0.07995208;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        result[5] += 0.0049487827;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[5] += -0.009633944;
            } else {
              result[5] += 0.06372336;
            }
          } else {
            result[5] += -0.087166056;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[5] += 0.008231786;
            } else {
              result[5] += 0.040658183;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
              result[5] += -0.078642406;
            } else {
              result[5] += 0.0063963314;
            }
          }
        }
      }
    }
  } else {
    result[5] += 0.025924498;
  }
  result[6] += 1.0727281e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.00012264558;
            } else {
              result[7] += -0.004469524;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51738)) {
              result[7] += 0.020828625;
            } else {
              result[7] += 0.0002823768;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.0024859572;
            } else {
              result[7] += -0.0057573617;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += -0.12964506;
            } else {
              result[7] += 0.055697072;
            }
          }
        }
      } else {
        result[7] += 0.03971286;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[7] += -0.09086904;
      } else {
        result[7] += -0.014833534;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      result[7] += 0.08410115;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        result[7] += -0.093256496;
      } else {
        result[7] += 0.018189354;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[8] += 0.00013775117;
            } else {
              result[8] += 0.014236563;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += -0.014538558;
            } else {
              result[8] += 0.0055005034;
            }
          }
        } else {
          result[8] += -0.10757834;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.047526445;
            } else {
              result[8] += -0.029919356;
            }
          } else {
            result[8] += -0.1540578;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[8] += 0.134338;
            } else {
              result[8] += -0.001722082;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[8] += -0.10289777;
            } else {
              result[8] += 0.040498257;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.10599639;
      } else {
        result[8] += 0.012089592;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[8] += -0.09912464;
            } else {
              result[8] += -0.029976638;
            }
          } else {
            result[8] += 0.042913236;
          }
        } else {
          result[8] += -0.19435051;
        }
      } else {
        result[8] += 0.030375874;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        result[8] += 0.09029624;
      } else {
        result[8] += -0.050111677;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += 8.72021e-06;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.00015710245;
      } else {
        result[9] += -0.0015454047;
      }
    } else {
      result[9] += 0.0035641016;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[10] += -7.924676e-05;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
            result[10] += 0.001854448;
          } else {
            result[10] += 0.006537288;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[10] += 6.331249e-05;
            } else {
              result[10] += -0.029887013;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
              result[10] += 0.0694412;
            } else {
              result[10] += -0.0058230856;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
          result[10] += 0.005788862;
        } else {
          result[10] += -0.020948173;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            result[10] += -0.0043501416;
          } else {
            result[10] += -0.07592477;
          }
        } else {
          result[10] += 0.012363864;
        }
      }
    }
  } else {
    result[10] += -0.029869495;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += -0.0005180959;
            } else {
              result[11] += -0.11256919;
            }
          } else {
            result[11] += 0.007897171;
          }
        } else {
          result[11] += -0.024189236;
        }
      } else {
        result[11] += -0.10577438;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[11] += 0.00017464894;
            } else {
              result[11] += 0.022156024;
            }
          } else {
            result[11] += 0.11647145;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.15005487;
            } else {
              result[11] += -0.0012847582;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.11208821;
            } else {
              result[11] += 0.0017506208;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          result[11] += -0.120171964;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[11] += 0.017864613;
          } else {
            result[11] += 0.013441042;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.10694896;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += -0.00370011;
            } else {
              result[11] += 0.0038172482;
            }
          } else {
            result[11] += -0.0035482508;
          }
        } else {
          result[11] += 0.0025658547;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            result[11] += -0.0031962274;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[11] += -0.021679834;
            } else {
              result[11] += 0.022354586;
            }
          }
        } else {
          result[11] += 0.02345658;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.0005645418;
            } else {
              result[12] += 0.11481952;
            }
          } else {
            result[12] += -0.13387585;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[12] += 0.001861362;
          } else {
            result[12] += 0.003300758;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.13315694;
            } else {
              result[12] += 0.02808879;
            }
          } else {
            result[12] += -0.14059632;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[12] += -0.02702992;
            } else {
              result[12] += 0.061290525;
            }
          } else {
            result[12] += -0.13391338;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.00073632563;
            } else {
              result[12] += 0.0042374665;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[12] += -0.004380893;
            } else {
              result[12] += -0.00070984225;
            }
          }
        } else {
          result[12] += 0.030143423;
        }
      } else {
        result[12] += -0.006202387;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[12] += -0.08644021;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.014513397;
        } else {
          result[12] += 0.03809762;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.0019477074;
            } else {
              result[12] += -0.08455845;
            }
          } else {
            result[12] += 0.08737448;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += -0.14500459;
            } else {
              result[12] += 0.043202177;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.0075286287;
            } else {
              result[12] += -0.052124944;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[12] += -0.14073916;
          } else {
            result[12] += 0.008132961;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[12] += 0.000789309;
            } else {
              result[12] += 0.093474776;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[12] += -0.101838134;
            } else {
              result[12] += 0.017923592;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[13] += -0.0070550353;
            } else {
              result[13] += -0.0020008776;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += 0.006057298;
            } else {
              result[13] += -0.00094945857;
            }
          }
        } else {
          result[13] += 0.0964033;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          result[13] += -0.14062954;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            result[13] += 0.108339764;
          } else {
            result[13] += -0.13896297;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.023601433;
            } else {
              result[13] += 0.06066939;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.009401489;
            } else {
              result[13] += -0.02025199;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.026886806;
            } else {
              result[13] += 0.017542345;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.0136280665;
            } else {
              result[13] += -0.02383157;
            }
          }
        }
      } else {
        result[13] += 0.08028958;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.00024167703;
            } else {
              result[13] += -0.06633552;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += -0.045972627;
            } else {
              result[13] += -0.015751729;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            result[13] += -0.013322636;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += 0.07012812;
            } else {
              result[13] += 0.0014020309;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.0042377464;
            } else {
              result[13] += -0.07274047;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[13] += 0.030474003;
            } else {
              result[13] += -0.034533154;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[13] += -0.021403765;
            } else {
              result[13] += 0.014320256;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += 0.00030234043;
            } else {
              result[13] += -0.03437127;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[13] += 0.138412;
        } else {
          result[13] += 0.02963882;
        }
      } else {
        result[13] += -0.005930714;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[14] += 0.0008798482;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += -0.0012814426;
            } else {
              result[14] += -0.106447406;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.007428334;
            } else {
              result[14] += -0.010497663;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += -0.032989215;
            } else {
              result[14] += -0.11233649;
            }
          } else {
            result[14] += -0.0014376318;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            result[14] += 0.0008439944;
          } else {
            result[14] += 0.009833816;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            result[14] += -0.0075824047;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += 0.0026006247;
            } else {
              result[14] += -0.000657482;
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
              result[14] += 0.0009926304;
            } else {
              result[14] += 0.014472137;
            }
          } else {
            result[14] += -0.11018539;
          }
        } else {
          result[14] += 0.10928559;
        }
      } else {
        result[14] += -0.10587276;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.00797978;
            } else {
              result[14] += 0.03454093;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[14] += -0.03807892;
            } else {
              result[14] += 0.0059489766;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[14] += 0.036148347;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[14] += -0.020417623;
            } else {
              result[14] += 0.013837337;
            }
          }
        }
      } else {
        result[14] += 0.10989764;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[0] += -9.202887e-05;
          } else {
            result[0] += -0.08580474;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
              result[0] += 0.0016719109;
            } else {
              result[0] += 0.01411486;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[0] += -0.002159116;
            } else {
              result[0] += 0.0027046625;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          result[0] += -0.061859045;
        } else {
          result[0] += 0.0035245565;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        result[0] += 0.05212912;
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[0] += 0.065430425;
          } else {
            result[0] += -0.042581063;
          }
        } else {
          result[0] += -0.0028551053;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.056956265;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[0] += 0.12745586;
        } else {
          result[0] += -0.022437993;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        result[0] += -0.08284022;
      } else {
        result[0] += -0.020114819;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[1] += -0.00022019002;
            } else {
              result[1] += -0.07136061;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[1] += -0.012710844;
            } else {
              result[1] += 0.047799688;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.02469004;
            } else {
              result[1] += 0.0023419252;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.016987743;
            } else {
              result[1] += 0.0018263722;
            }
          }
        }
      } else {
        result[1] += -0.12189515;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        result[1] += 0.086242355;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
              result[1] += 0.013237848;
            } else {
              result[1] += 0.105356604;
            }
          } else {
            result[1] += 0.0013102911;
          }
        } else {
          result[1] += 0.062276572;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        result[1] += -0.14483042;
      } else {
        result[1] += 0.028644575;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[1] += 0.10307998;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[1] += -0.0019959845;
            } else {
              result[1] += 0.0022964922;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[1] += -0.07938997;
            } else {
              result[1] += -0.004430984;
            }
          }
        } else {
          result[1] += 0.071033;
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -7.878567e-05;
    } else {
      result[2] += 0.00071037665;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.032836206;
        } else {
          result[2] += -0.025695032;
        }
      } else {
        result[2] += 0.036260657;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        result[2] += -0.04950253;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[2] += 0.0503692;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            result[2] += -0.041294307;
          } else {
            result[2] += 0.019384816;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[3] += 0.0078284;
  } else {
    result[3] += -0.023793394;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -1.3091205e-05;
      } else {
        result[4] += 0.052367214;
      }
    } else {
      result[4] += -0.010203077;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
      result[4] += 0.053304955;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        result[4] += 0.0010697098;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          result[4] += 0.04492636;
        } else {
          result[4] += 0.0016834177;
        }
      }
    }
  }
}

