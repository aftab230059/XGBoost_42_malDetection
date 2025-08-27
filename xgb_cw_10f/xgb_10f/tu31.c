
#include "header.h"

void predict_unit31(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -8.303276e-05;
    } else {
      result[2] += 0.0011403742;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.020436313;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.01505146;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.014696693;
            } else {
              result[2] += -0.018871326;
            }
          } else {
            result[2] += 0.023778617;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            result[2] += -0.018578378;
          } else {
            result[2] += 0.016227761;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.01628779;
  } else {
    result[3] += 0.010607941;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -2.9610259e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.02599628;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
        result[4] += 0.00011727861;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
          result[4] += 0.018806882;
        } else {
          result[4] += 0.0056880713;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += -0.00026637677;
          } else {
            result[5] += 0.001899528;
          }
        } else {
          result[5] += 0.0016012478;
        }
      } else {
        result[5] += 0.02648218;
      }
    } else {
      result[5] += -0.020760706;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        result[5] += 0.008516869;
      } else {
        result[5] += 0.016445901;
      }
    } else {
      result[5] += -0.0026839175;
    }
  }
  result[6] += -7.145013e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += 0.00011642026;
            } else {
              result[7] += -0.0032884462;
            }
          } else {
            result[7] += 0.12871554;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += -0.045459997;
            } else {
              result[7] += -0.1436297;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -2.8504886e-05;
            } else {
              result[7] += -0.10248974;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[7] += 0.12857401;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.001414763;
            } else {
              result[7] += -0.030004736;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.004708737;
            } else {
              result[7] += 0.053741023;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51893)) {
              result[7] += 0.0009088532;
            } else {
              result[7] += 0.020556087;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
              result[7] += -0.025089277;
            } else {
              result[7] += 0.00018333159;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
            result[7] += 0.04251732;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[7] += 0.015606398;
            } else {
              result[7] += 0.005309605;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
          result[7] += -0.022713829;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53520)) {
            result[7] += 0.029791523;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54003)) {
              result[7] += -0.014889042;
            } else {
              result[7] += 0.000246175;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
      result[7] += -0.061697315;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[7] += -0.02743223;
      } else {
        result[7] += 0.061538775;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
              result[8] += -0.00014467924;
            } else {
              result[8] += -0.013428662;
            }
          } else {
            result[8] += 0.07815003;
          }
        } else {
          result[8] += -0.06312843;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[8] += -0.052673455;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
            result[8] += 0.096582755;
          } else {
            result[8] += 0.01818714;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[8] += -0.032992907;
            } else {
              result[8] += -0.099535055;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[8] += -0.0046015847;
            } else {
              result[8] += 0.06584074;
            }
          }
        } else {
          result[8] += -0.12597062;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[8] += 0.026612036;
            } else {
              result[8] += -0.0030192852;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[8] += -0.0030987775;
            } else {
              result[8] += 0.039687186;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
              result[8] += -0.0050733387;
            } else {
              result[8] += -0.13241413;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
              result[8] += 0.15791662;
            } else {
              result[8] += 0.0011015419;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[8] += 0.043274373;
          } else {
            result[8] += 0.014221071;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[8] += -0.007991242;
            } else {
              result[8] += 0.018285507;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.113452196;
            } else {
              result[8] += -0.028547011;
            }
          }
        }
      } else {
        result[8] += -0.08226107;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[8] += -0.012550377;
            } else {
              result[8] += -0.02488888;
            }
          } else {
            result[8] += 0.03445876;
          }
        } else {
          result[8] += -0.04600712;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[8] += 0.002426589;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[8] += -0.003947218;
            } else {
              result[8] += -0.0020913028;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[8] += 0.0048207976;
            } else {
              result[8] += 0.0023862794;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[8] += -0.0074857282;
            } else {
              result[8] += 0.001080288;
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -7.567859e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.0023643768;
      } else {
        result[9] += -0.00041136544;
      }
    } else {
      result[9] += 0.0033585152;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[10] += -0.00015500604;
        } else {
          result[10] += 0.0012453131;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.09907933;
          } else {
            result[10] += 0.012565113;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += -0.00070298946;
            } else {
              result[10] += 0.016726013;
            }
          } else {
            result[10] += 0.00045696294;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
        result[10] += 0.0537325;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
          result[10] += 0.008898689;
        } else {
          result[10] += -0.015598104;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      result[10] += 0.00085841527;
    } else {
      result[10] += -0.024853753;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[11] += -0.0009157747;
        } else {
          result[11] += -0.00010451293;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += 0.0005061581;
            } else {
              result[11] += -0.07946959;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.1311702;
            } else {
              result[11] += -0.00023697437;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.08110453;
          } else {
            result[11] += -1.6367612e-05;
          }
        }
      }
    } else {
      result[11] += -0.0003127733;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      result[11] += -0.09476478;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[11] += 0.00034920278;
        } else {
          result[11] += 0.007984345;
        }
      } else {
        result[11] += -0.00031559324;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.00013946276;
            } else {
              result[12] += -0.0004595755;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.012267791;
            } else {
              result[12] += 0.0025657641;
            }
          }
        } else {
          result[12] += -0.026530236;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[12] += 0.040325113;
          } else {
            result[12] += 0.0032323247;
          }
        } else {
          result[12] += -0.0024957955;
        }
      }
    } else {
      result[12] += -0.019985925;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      result[12] += -0.047484618;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
        result[12] += 0.034456436;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[12] += 0.0018750821;
        } else {
          result[12] += -0.0415418;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[13] += -1.3979963e-05;
            } else {
              result[13] += -0.03826506;
            }
          } else {
            result[13] += 0.05152276;
          }
        } else {
          result[13] += -0.045172982;
        }
      } else {
        result[13] += -0.061800584;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
        result[13] += 0.07054929;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[13] += 0.039020326;
        } else {
          result[13] += -0.06694366;
        }
      }
    }
  } else {
    result[13] += -0.041854877;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[14] += -0.0003727836;
            } else {
              result[14] += 0.0030849464;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.007918778;
            } else {
              result[14] += -0.025083054;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[14] += -0.10718847;
            } else {
              result[14] += 0.048782133;
            }
          } else {
            result[14] += -0.119670354;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += 0.0013553358;
            } else {
              result[14] += 5.463698e-05;
            }
          } else {
            result[14] += 0.004940368;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            result[14] += -0.0043837605;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += 0.001624765;
            } else {
              result[14] += -0.00036967077;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.00049993565;
            } else {
              result[14] += -0.086560294;
            }
          } else {
            result[14] += 0.08756472;
          }
        } else {
          result[14] += -0.08704307;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            result[14] += -0.012658206;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += 0.024371387;
            } else {
              result[14] += 0.0022643209;
            }
          }
        } else {
          result[14] += 0.10696443;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[14] += -0.021928987;
      } else {
        result[14] += 0.012940227;
      }
    } else {
      result[14] += -0.038641952;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[0] += -0.00013547165;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[0] += 0.00020509891;
            } else {
              result[0] += 0.00941046;
            }
          } else {
            result[0] += 0.08777486;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += 0.001223808;
            } else {
              result[0] += -0.017211914;
            }
          } else {
            result[0] += 0.0006382114;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
        result[0] += -0.02681823;
      } else {
        result[0] += -0.0012341144;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[0] += -0.0943374;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.0099389795;
            } else {
              result[0] += 0.02249768;
            }
          }
        } else {
          result[0] += 0.032784037;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            result[0] += 0.016494589;
          } else {
            result[0] += -0.0147823375;
          }
        } else {
          result[0] += 0.035933148;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        result[0] += 0.10074357;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[0] += -0.034251954;
        } else {
          result[0] += 0.015900105;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.012321238;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[1] += -8.7130604e-05;
            } else {
              result[1] += 0.02612068;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[1] += -0.12710239;
            } else {
              result[1] += -0.009651456;
            }
          }
        } else {
          result[1] += 0.01927614;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[1] += -0.021927858;
          } else {
            result[1] += -0.07239781;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += 0.0069562346;
            } else {
              result[1] += 0.033622865;
            }
          } else {
            result[1] += -0.018840127;
          }
        }
      }
    }
  } else {
    result[1] += 0.03949432;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -7.0447604e-05;
    } else {
      result[2] += 0.0012486818;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.01991226;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[2] += 0.008384806;
        } else {
          result[2] += -0.025784502;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          result[2] += 0.018253041;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.021121956;
          } else {
            result[2] += 0.0139787635;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    result[3] += 0.006847367;
  } else {
    result[3] += -0.021855846;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += -8.63601e-06;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.024861475;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)56646)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.0034163175;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[4] += 0.028892072;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[4] += -0.0047136103;
            } else {
              result[4] += 0.006226216;
            }
          }
        }
      } else {
        result[4] += 0.024439009;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += -0.00022753041;
          } else {
            result[5] += 0.0017863679;
          }
        } else {
          result[5] += 0.0015276131;
        }
      } else {
        result[5] += 0.010038609;
      }
    } else {
      result[5] += -0.0145615665;
    }
  } else {
    result[5] += 0.011375966;
  }
  result[6] += -6.0385948e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[7] += -0.0003886268;
            } else {
              result[7] += 0.08271324;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[7] += 0.00043081294;
            } else {
              result[7] += -0.090665;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
            result[7] += 0.08619067;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[7] += -0.052954458;
            } else {
              result[7] += 0.008914615;
            }
          }
        }
      } else {
        result[7] += -0.035853513;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            result[7] += 0.006053491;
          } else {
            result[7] += -0.007653748;
          }
        } else {
          result[7] += -0.023847757;
        }
      } else {
        result[7] += 0.03411437;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
      result[7] += -0.057992708;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[7] += -0.024299929;
      } else {
        result[7] += 0.056102343;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += 5.6882254e-05;
            } else {
              result[8] += 0.009473406;
            }
          } else {
            result[8] += -0.063382246;
          }
        } else {
          result[8] += 0.042836003;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
          result[8] += -0.040302213;
        } else {
          result[8] += 0.023838134;
        }
      }
    } else {
      result[8] += 0.055086043;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      result[8] += -0.059386794;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        result[8] += 0.033788957;
      } else {
        result[8] += -0.011947486;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -6.2826e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      result[9] += -0.0018333247;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[9] += 0.014338448;
      } else {
        result[9] += 0.0012215559;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[10] += -0.00013018335;
        } else {
          result[10] += 0.0011776689;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.09565625;
          } else {
            result[10] += 0.010867433;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.094442375;
            } else {
              result[10] += 1.1067165e-05;
            }
          } else {
            result[10] += 0.00023503482;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
        result[10] += 0.047295045;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
          result[10] += 0.008051491;
        } else {
          result[10] += -0.0140767;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      result[10] += 0.0004176142;
    } else {
      result[10] += -0.023891998;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[11] += -0.0007738651;
          } else {
            result[11] += -0.000115016424;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[11] += -0.08977005;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.002646252;
            } else {
              result[11] += -0.00086099736;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          result[11] += 0.004509158;
        } else {
          result[11] += -0.00034303457;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += 3.169533e-05;
            } else {
              result[11] += 0.0040737204;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += -0.07364817;
            } else {
              result[11] += 0.0019508436;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.010693547;
            } else {
              result[11] += 0.03587917;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.09053867;
            } else {
              result[11] += -0.0028601943;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.07808082;
            } else {
              result[11] += -9.52011e-05;
            }
          } else {
            result[11] += -0.00082267076;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            result[11] += 0.0014221126;
          } else {
            result[11] += -0.0006858929;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
          result[11] += 0.012380214;
        } else {
          result[11] += -0.030329764;
        }
      } else {
        result[11] += 0.052755684;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        result[11] += -0.09483097;
      } else {
        result[11] += 0.0076548974;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[12] += -8.0630896e-05;
            } else {
              result[12] += 0.09559447;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.078768775;
            } else {
              result[12] += 0.004103848;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            result[12] += 0.075924255;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56523)) {
              result[12] += -0.05996718;
            } else {
              result[12] += 0.07471474;
            }
          }
        }
      } else {
        result[12] += -0.1217628;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[12] += 0.0040808227;
        } else {
          result[12] += 0.020149354;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[12] += -0.013631699;
          } else {
            result[12] += -0.0022873464;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += 0.003228767;
            } else {
              result[12] += 0.035543952;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += -0.0011152327;
            } else {
              result[12] += 0.0008575761;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      result[12] += -0.043851636;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[12] += 0.014773777;
      } else {
        result[12] += -0.011557742;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[13] += 6.8546826e-05;
            } else {
              result[13] += 0.06919708;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += -0.0061870865;
            } else {
              result[13] += -0.12531058;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[13] += -0.06957309;
            } else {
              result[13] += 0.013865811;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += 0.09663576;
            } else {
              result[13] += 0.030796355;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.022689227;
            } else {
              result[13] += -0.07450962;
            }
          } else {
            result[13] += 0.020767903;
          }
        } else {
          result[13] += 0.049130935;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[13] += 0.023507638;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.11841391;
            } else {
              result[13] += -0.005851346;
            }
          }
        } else {
          result[13] += 0.098539956;
        }
      } else {
        result[13] += -0.084907845;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            result[13] += -0.09703458;
          } else {
            result[13] += -0.00071746414;
          }
        } else {
          result[13] += 0.0033062163;
        }
      } else {
        result[13] += 0.01210364;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.009768814;
            } else {
              result[13] += 0.006310737;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += -0.09166172;
            } else {
              result[13] += -0.024061715;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[13] += -0.010428789;
          } else {
            result[13] += 0.09236101;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[13] += -0.07583991;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.109521694;
            } else {
              result[13] += 0.010137503;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
              result[13] += -0.05279062;
            } else {
              result[13] += 0.04308811;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
              result[13] += 0.06898485;
            } else {
              result[13] += 0.0036183514;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[14] += 0.0004287608;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[14] += -0.0007946378;
            } else {
              result[14] += 0.0012721256;
            }
          } else {
            result[14] += -0.023024935;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[14] += -0.1038482;
            } else {
              result[14] += 0.044016004;
            }
          } else {
            result[14] += -0.11669;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += 0.0011876469;
            } else {
              result[14] += 7.6961966e-05;
            }
          } else {
            result[14] += 0.004217807;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[14] += -0.0037174392;
            } else {
              result[14] += -0.0013692429;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += 0.0038130754;
            } else {
              result[14] += -0.0002840823;
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
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[14] += 0.0009809822;
            } else {
              result[14] += -0.00054221007;
            }
          } else {
            result[14] += -0.090834364;
          }
        } else {
          result[14] += 0.08308077;
        }
      } else {
        result[14] += -0.08518676;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[14] += 0.09459725;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += 0.009984378;
            } else {
              result[14] += -0.028563144;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[14] += 0.010053081;
            } else {
              result[14] += -0.00034559876;
            }
          }
        } else {
          result[14] += -0.024370117;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 7.305512e-05;
            } else {
              result[0] += 0.004584853;
            }
          } else {
            result[0] += 0.02516848;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.0330338;
            } else {
              result[0] += 0.01903154;
            }
          } else {
            result[0] += 0.032647394;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          result[0] += 0.04419776;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
              result[0] += -0.06330242;
            } else {
              result[0] += 0.00058492663;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[0] += 0.0807099;
            } else {
              result[0] += -0.007064127;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += 0.019297212;
      } else {
        result[0] += 0.00821557;
      }
    }
  } else {
    result[0] += -0.016579919;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += -0.00018417965;
            } else {
              result[1] += -0.00741292;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.10413871;
            } else {
              result[1] += 0.0009111963;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[1] += -0.15848304;
            } else {
              result[1] += 0.027507704;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += 0.06471475;
            } else {
              result[1] += 0.034434613;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[1] += -0.12156673;
          } else {
            result[1] += -0.047561876;
          }
        } else {
          result[1] += 0.08430566;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[1] += 0.010384896;
          } else {
            result[1] += -0.02973732;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += 0.12971953;
            } else {
              result[1] += 0.052974287;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.11118111;
            } else {
              result[1] += 0.0144797815;
            }
          }
        }
      } else {
        result[1] += -0.07838025;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[1] += -0.007112131;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[1] += -0.12451697;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[1] += -0.03004535;
          } else {
            result[1] += -0.05989209;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[1] += 0.00898622;
            } else {
              result[1] += -0.056838397;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[1] += 0.008401703;
            } else {
              result[1] += 0.07592537;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[1] += -0.0017298377;
            } else {
              result[1] += 0.022215813;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[1] += -0.07758036;
            } else {
              result[1] += 0.008133524;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[1] += 0.011706683;
        } else {
          result[1] += -0.09022972;
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -9.684549e-05;
    } else {
      result[2] += 0.0013232525;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.019377168;
        } else {
          result[2] += -0.0146857975;
        }
      } else {
        result[2] += 0.023850834;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        result[2] += -0.02322057;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          result[2] += 0.019779958;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.01826849;
          } else {
            result[2] += 0.013705517;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    result[3] += 0.005944502;
  } else {
    result[3] += -0.020663004;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += -6.933813e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.024306325;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
        result[4] += -0.00051488756;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          result[4] += 0.025837678;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)56646)) {
            result[4] += 0.0031847826;
          } else {
            result[4] += 0.023289286;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[5] += 8.052215e-05;
        } else {
          result[5] += 0.0015368075;
        }
      } else {
        result[5] += 0.022701139;
      }
    } else {
      result[5] += -0.01948525;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        result[5] += 0.009020113;
      } else {
        result[5] += 0.018328706;
      }
    } else {
      result[5] += -0.0030631747;
    }
  }
  result[6] += -8.892023e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[7] += -2.9958524e-05;
            } else {
              result[7] += -0.025155453;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += 0.0091275135;
            } else {
              result[7] += 0.01768188;
            }
          }
        } else {
          result[7] += -0.025995258;
        }
      } else {
        result[7] += -0.025754342;
      }
    } else {
      result[7] += -0.050715;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      result[7] += 0.061509136;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[7] += 0.0075262454;
      } else {
        result[7] += -0.047129553;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += 0.00014601133;
            } else {
              result[8] += -0.008762181;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[8] += 0.03934823;
            } else {
              result[8] += 0.00067490304;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[8] += -0.12678958;
          } else {
            result[8] += 0.021672215;
          }
        }
      } else {
        result[8] += -0.13094942;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          result[8] += 0.13224556;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[8] += 0.024447236;
            } else {
              result[8] += -0.016275251;
            }
          } else {
            result[8] += 0.11435216;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          result[8] += -0.14477274;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.008458345;
            } else {
              result[8] += -0.0022481764;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.11442991;
            } else {
              result[8] += -0.0073064594;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.09141033;
    } else {
      result[8] += 0.0027289793;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -9.5294665e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      result[9] += -0.0012765942;
    } else {
      result[9] += 0.0029559685;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[10] += -0.00014827523;
        } else {
          result[10] += 0.0010315082;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.09227426;
          } else {
            result[10] += 0.007114425;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.090002276;
            } else {
              result[10] += 2.6496452e-06;
            }
          } else {
            result[10] += 0.00029991922;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
        result[10] += 0.04166673;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
          result[10] += 0.0073020956;
        } else {
          result[10] += -0.012682201;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      result[10] += 0.00021122371;
    } else {
      result[10] += -0.02322333;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[11] += 0.00015145134;
            } else {
              result[11] += -0.0025612218;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.080699526;
            } else {
              result[11] += -0.0006811761;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += -0.06930698;
            } else {
              result[11] += -0.12576258;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.0036024675;
            } else {
              result[11] += -0.0047735465;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.10896083;
          } else {
            result[11] += -0.04556089;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[11] += -0.003180353;
          } else {
            result[11] += 0.011231235;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.0005721736;
            } else {
              result[11] += -0.005375216;
            }
          } else {
            result[11] += 0.020548407;
          }
        } else {
          result[11] += 0.11648991;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[11] += -0.13772222;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[11] += 0.0012427892;
          } else {
            result[11] += 0.006756971;
          }
        }
      }
    }
  } else {
    result[11] += -0.00026691775;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.00034637254;
            } else {
              result[12] += -0.030397153;
            }
          } else {
            result[12] += 0.081086926;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[12] += -0.10332803;
          } else {
            result[12] += -0.008629143;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.0010694114;
          } else {
            result[12] += -0.12324516;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[12] += -0.13251865;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += -0.0003864497;
            } else {
              result[12] += 0.00060460006;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[12] += 0.0017408995;
            } else {
              result[12] += 0.028237186;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.00892739;
            } else {
              result[12] += 0.010283673;
            }
          }
        } else {
          result[12] += 0.02673387;
        }
      } else {
        result[12] += 0.03320338;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
      result[12] += 0.009438353;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[12] += -0.009125117;
      } else {
        result[12] += -0.044337828;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
              result[13] += 0.0001267434;
            } else {
              result[13] += 0.06323128;
            }
          } else {
            result[13] += -0.044657283;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[13] += -0.038668733;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += 0.107692845;
            } else {
              result[13] += 0.03446971;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[13] += 0.016190806;
            } else {
              result[13] += 0.011275733;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[13] += -0.01645344;
            } else {
              result[13] += -0.0020601004;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            result[13] += -0.10725324;
          } else {
            result[13] += -0.0031372588;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[13] += -0.054903906;
          } else {
            result[13] += -0.024221042;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[13] += 0.0018953021;
            } else {
              result[13] += 0.019516611;
            }
          } else {
            result[13] += -0.027088583;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[13] += 0.040870383;
        } else {
          result[13] += -0.014711606;
        }
      }
    }
  } else {
    result[13] += -0.038966686;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -5.6414865e-05;
            } else {
              result[14] += 0.007074429;
            }
          } else {
            result[14] += 0.054180007;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.077278055;
          } else {
            result[14] += 0.0072959345;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += -0.003755614;
            } else {
              result[14] += 0.011451168;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.16245866;
            } else {
              result[14] += -0.0054502226;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[14] += -0.094116226;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.006421565;
            } else {
              result[14] += -0.047937818;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        result[14] += -0.08370033;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.046928514;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
              result[14] += -0.092431195;
            } else {
              result[14] += 0.05777606;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[14] += -0.0040528355;
            } else {
              result[14] += -0.06597042;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.04608079;
            } else {
              result[14] += 0.0041685784;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        result[14] += -0.014679254;
      } else {
        result[14] += -0.06962572;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        result[14] += -0.0025479891;
      } else {
        result[14] += 0.031990763;
      }
    }
  }
}

