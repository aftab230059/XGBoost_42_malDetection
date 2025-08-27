
#include "header.h"

void predict_unit25(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[5] += 0.00014800314;
      } else {
        result[5] += -0.077005684;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          result[5] += 0.002962503;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            result[5] += 0.038219843;
          } else {
            result[5] += 0.001485439;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
          result[5] += -0.027198354;
        } else {
          result[5] += 0.0069619096;
        }
      }
    }
  } else {
    result[5] += 0.024264207;
  }
  result[6] += 1.9169669e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)44042)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)41722)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)38193)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[7] += -0.00062870025;
            } else {
              result[7] += 0.00039410635;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)40066)) {
              result[7] += 0.013427907;
            } else {
              result[7] += 0.0023298871;
            }
          }
        } else {
          result[7] += -0.014811874;
        }
      } else {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)46306)) {
          result[7] += 0.013976859;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)50473)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)48371)) {
              result[7] += 0.0031592764;
            } else {
              result[7] += -0.0128301075;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)52239)) {
              result[7] += 0.01793079;
            } else {
              result[7] += -0.00011915141;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[7] += -0.08694115;
      } else {
        result[7] += -0.017621143;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          result[7] += 0.027585108;
        } else {
          result[7] += 0.096686766;
        }
      } else {
        result[7] += 0.020431725;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        result[7] += -0.08819552;
      } else {
        result[7] += 0.014857675;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += -0.00017882026;
            } else {
              result[8] += -0.03354302;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[8] += -0.14212027;
            } else {
              result[8] += -0.030050077;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.030859489;
            } else {
              result[8] += 0.096191116;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.025207404;
            } else {
              result[8] += -0.007443626;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += -0.060638998;
            } else {
              result[8] += 0.054333407;
            }
          } else {
            result[8] += -0.1365592;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.091673;
            } else {
              result[8] += -0.033184517;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += 0.028209828;
            } else {
              result[8] += -0.0021639676;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[8] += 0.05816968;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[8] += -0.028659703;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[8] += -0.00062781293;
            } else {
              result[8] += 0.0050193723;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
              result[8] += -0.012468475;
            } else {
              result[8] += -0.0021479612;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      result[8] += -0.09567865;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          result[8] += 0.06323402;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            result[8] += -0.092492245;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.010013004;
            } else {
              result[8] += 0.048318166;
            }
          }
        }
      } else {
        result[8] += -0.07438624;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += 1.7768654e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.005645423;
    } else {
      result[9] += 0.001746126;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[10] += 0.0001622354;
            } else {
              result[10] += 0.06031249;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += -0.006151454;
            } else {
              result[10] += -0.10807963;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.070539236;
            } else {
              result[10] += -0.122587174;
            }
          } else {
            result[10] += 0.10067978;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += -0.00037637315;
            } else {
              result[10] += 0.018495658;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[10] += -0.029143346;
            } else {
              result[10] += 0.10965135;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[10] += -0.036760602;
            } else {
              result[10] += 0.041451976;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += -0.059785284;
            } else {
              result[10] += -0.0013555246;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
          result[10] += 0.0052124667;
        } else {
          result[10] += -0.018900696;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
          result[10] += -0.039130453;
        } else {
          result[10] += 0.010850617;
        }
      }
    }
  } else {
    result[10] += -0.027089572;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[11] += -0.005015925;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[11] += -0.00032414013;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.00016897627;
            } else {
              result[11] += 0.0064149015;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.12575446;
            } else {
              result[11] += -0.0001633112;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[11] += -0.10356007;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          result[11] += 0.0020267798;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            result[11] += -0.11246926;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += 0.0032067928;
            } else {
              result[11] += -0.0015191698;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      result[11] += -0.14017121;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[11] += 0.00878663;
        } else {
          result[11] += 0.06174067;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[11] += -0.010524578;
            } else {
              result[11] += 0.005629575;
            }
          } else {
            result[11] += -0.1214066;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[11] += 0.0066776746;
          } else {
            result[11] += -0.021317735;
          }
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
              result[12] += -0.00052744034;
            } else {
              result[12] += 0.11115344;
            }
          } else {
            result[12] += -0.131399;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[12] += 0.002342718;
          } else {
            result[12] += 0.0027139052;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.13103521;
            } else {
              result[12] += 0.02380053;
            }
          } else {
            result[12] += -0.13922477;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[12] += -0.016816858;
            } else {
              result[12] += 0.08729105;
            }
          } else {
            result[12] += -0.13187036;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        result[12] += 0.0061108842;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
          result[12] += -0.0041699735;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.00076056184;
            } else {
              result[12] += 0.01008491;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += -0.008463905;
            } else {
              result[12] += 0.0009559247;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[12] += -0.08216034;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.013037724;
        } else {
          result[12] += 0.036124103;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
              result[12] += 0.0006350575;
            } else {
              result[12] += 0.0486144;
            }
          } else {
            result[12] += -0.084365346;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.036001693;
            } else {
              result[12] += 0.004221246;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[12] += -0.05322671;
            } else {
              result[12] += 0.027504709;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            result[12] += -0.08009511;
          } else {
            result[12] += -0.021828348;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            result[12] += 0.06483;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[12] += 0.026035747;
            } else {
              result[12] += -0.04864179;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.0005229221;
            } else {
              result[13] += -0.0033515233;
            }
          } else {
            result[13] += -0.077846244;
          }
        } else {
          result[13] += 0.12677437;
        }
      } else {
        result[13] += -0.06232044;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[13] += -0.12315913;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += -0.11199177;
            } else {
              result[13] += 0.03306938;
            }
          } else {
            result[13] += 0.060274545;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[13] += 0.103910156;
          } else {
            result[13] += -0.042476818;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[13] += -0.012056159;
            } else {
              result[13] += -0.08200736;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.010330337;
            } else {
              result[13] += 0.068110645;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
      result[13] += 0.09430386;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.007763208;
            } else {
              result[13] += 0.028615711;
            }
          } else {
            result[13] += -0.08121285;
          }
        } else {
          result[13] += 0.00984556;
        }
      } else {
        result[13] += 0.06651208;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += -0.00061442313;
            } else {
              result[14] += 0.008345451;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[14] += -0.0064539164;
            } else {
              result[14] += -0.0018217383;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[14] += 0.005962764;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[14] += -0.0021319434;
            } else {
              result[14] += 0.0019399101;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          result[14] += -0.0050490955;
        } else {
          result[14] += -0.002077037;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        result[14] += 0.009335462;
      } else {
        result[14] += 0.0026767405;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[14] += 0.0009857226;
            } else {
              result[14] += 0.036942407;
            }
          } else {
            result[14] += -0.10627086;
          }
        } else {
          result[14] += 0.10401118;
        }
      } else {
        result[14] += -0.10247338;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[14] += 0.10200267;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += 0.020277431;
            } else {
              result[14] += -0.031456746;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[14] += 0.020000689;
            } else {
              result[14] += 0.006806485;
            }
          }
        } else {
          result[14] += -0.058353744;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.00024474887;
            } else {
              result[0] += -0.08264219;
            }
          } else {
            result[0] += 0.0067019616;
          }
        } else {
          result[0] += 0.025775405;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[0] += 0.025167959;
            } else {
              result[0] += -0.036903776;
            }
          } else {
            result[0] += -0.07695603;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[0] += -0.0029679656;
          } else {
            result[0] += 0.007760567;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[0] += 0.047902603;
      } else {
        result[0] += 0.0034609872;
      }
    }
  } else {
    result[0] += -0.02135694;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[1] += -0.02179023;
            } else {
              result[1] += 0.00019845093;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.01440599;
            } else {
              result[1] += -0.004036858;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            result[1] += -0.019441953;
          } else {
            result[1] += -0.010856818;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[1] += -0.0059575;
            } else {
              result[1] += 0.007045013;
            }
          } else {
            result[1] += -0.12399049;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[1] += 0.0009928916;
            } else {
              result[1] += 0.043548606;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[1] += -0.08831176;
            } else {
              result[1] += -0.00741228;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += 0.11578458;
            } else {
              result[1] += 0.048871063;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.0064222817;
            } else {
              result[1] += -0.11232381;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.13668005;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += 0.0066210697;
            } else {
              result[1] += -0.01624759;
            }
          }
        }
      } else {
        result[1] += -0.16897538;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
      result[1] += -0.14551897;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          result[1] += -0.0007632235;
        } else {
          result[1] += 0.0857403;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += -0.1362514;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += 0.0065107928;
            } else {
              result[1] += -0.1473346;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[1] += 0.0013197046;
            } else {
              result[1] += 0.06250731;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[1] += -0.021393115;
            } else {
              result[1] += 0.002514603;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00012418855;
    } else {
      result[2] += 0.0006248785;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
      result[2] += 0.026638253;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        result[2] += -0.040844396;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            result[2] += 0.015344089;
          } else {
            result[2] += 0.03967498;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            result[2] += -0.036663506;
          } else {
            result[2] += 0.018146332;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.023843708;
  } else {
    result[3] += 0.0075957635;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += 0.00018233772;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.048491977;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        result[4] += -0.015814526;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.045368444;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += -0.008057086;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[4] += 0.034233812;
            } else {
              result[4] += 0.0037652268;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += -0.00048972876;
        } else {
          result[5] += 0.0024851938;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          result[5] += 0.0028537535;
        } else {
          result[5] += 0.012436214;
        }
      }
    } else {
      result[5] += -0.0880543;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        result[5] += 0.027126962;
      } else {
        result[5] += 0.009717383;
      }
    } else {
      result[5] += -0.0039999518;
    }
  }
  result[6] += -4.2356438e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.00012864325;
            } else {
              result[7] += -0.004201747;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51738)) {
              result[7] += 0.0181137;
            } else {
              result[7] += 0.0003423974;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.0024464;
            } else {
              result[7] += -0.005295377;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += -0.12015574;
            } else {
              result[7] += 0.04874931;
            }
          }
        }
      } else {
        result[7] += 0.036858983;
      }
    } else {
      result[7] += -0.06919995;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        result[7] += 0.072666585;
      } else {
        result[7] += 0.018284539;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        result[7] += -0.084717475;
      } else {
        result[7] += 0.015419781;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[8] += -0.008397125;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.00031836797;
            } else {
              result[8] += -0.0039336476;
            }
          }
        } else {
          result[8] += -0.10417793;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.04034216;
            } else {
              result[8] += -0.021441136;
            }
          } else {
            result[8] += -0.14886951;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[8] += 0.13246371;
            } else {
              result[8] += 0.0025591163;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[8] += -0.09874145;
            } else {
              result[8] += 0.03625639;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.10231877;
      } else {
        result[8] += 0.011662476;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[8] += -0.0914782;
            } else {
              result[8] += -0.030080162;
            }
          } else {
            result[8] += 0.039329126;
          }
        } else {
          result[8] += -0.17784008;
        }
      } else {
        result[8] += 0.025964929;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        result[8] += 0.084347196;
      } else {
        result[8] += -0.0433719;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -5.2310854e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      result[9] += -0.0011741718;
    } else {
      result[9] += 0.0036999632;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[10] += -0.00014318254;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
              result[10] += 0.0017378238;
            } else {
              result[10] += 0.008196487;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[10] += -0.0003318743;
            } else {
              result[10] += 0.00045710945;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
          result[10] += 0.061973885;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
            result[10] += 0.025144996;
          } else {
            result[10] += -0.022998929;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.0036920574;
      } else {
        result[10] += -0.016512752;
      }
    }
  } else {
    result[10] += -0.025166439;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[11] += -0.004329695;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[11] += -0.0003126598;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.00020514015;
            } else {
              result[11] += 0.006285362;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.12302106;
            } else {
              result[11] += -0.0002489451;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[11] += -0.09904398;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[11] += 0.0016075774;
            } else {
              result[11] += -0.00091695494;
            }
          } else {
            result[11] += 0.016885756;
          }
        } else {
          result[11] += -0.08201179;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      result[11] += -0.13791354;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[11] += 0.006031791;
        } else {
          result[11] += 0.0559324;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[11] += -0.008861979;
            } else {
              result[11] += 0.004771974;
            }
          } else {
            result[11] += -0.1174188;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[11] += 0.0056721703;
          } else {
            result[11] += -0.018754445;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[12] += -0.0056257863;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[12] += 0.00042338631;
            } else {
              result[12] += 0.04830241;
            }
          } else {
            result[12] += -0.10675806;
          }
        } else {
          result[12] += -0.112574786;
        }
      } else {
        result[12] += 0.119631276;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        result[12] += -0.1344553;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += -0.0021480534;
            } else {
              result[12] += 0.06832716;
            }
          } else {
            result[12] += -0.13245626;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[12] += 0.001083218;
            } else {
              result[12] += 0.016974242;
            }
          } else {
            result[12] += -0.0057501663;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[13] += -0.0061113974;
            } else {
              result[13] += -0.0018715988;
            }
          } else {
            result[13] += -0.115478046;
          }
        } else {
          result[13] += 0.0032374552;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
          result[13] += -0.044476915;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            result[13] += 0.020028256;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
              result[13] += -0.013968013;
            } else {
              result[13] += 0.00465426;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.0048813517;
            } else {
              result[13] += -0.018100562;
            }
          } else {
            result[13] += -0.13397793;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[13] += 0.1742581;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[13] += 0.016029723;
            } else {
              result[13] += 0.18163325;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[13] += -0.14119747;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
              result[13] += -0.0059796683;
            } else {
              result[13] += 0.032409206;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[13] += -0.111303024;
            } else {
              result[13] += 0.0019568987;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += 0.095578074;
            } else {
              result[13] += 0.0027329053;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[13] += -0.05238301;
        } else {
          result[13] += 0.003981056;
        }
      } else {
        result[13] += -0.109740056;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[13] += -0.017909415;
          } else {
            result[13] += -0.07476639;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += 0.01305011;
            } else {
              result[13] += 0.05528935;
            }
          } else {
            result[13] += -0.08168775;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.012282118;
            } else {
              result[13] += -0.23081163;
            }
          } else {
            result[13] += 0.14580691;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[13] += 0.12106948;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.10076252;
            } else {
              result[13] += 0.008223232;
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[14] += 0.00079027226;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.00080115447;
            } else {
              result[14] += -0.024154523;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[14] += 0.0041783466;
            } else {
              result[14] += -0.00027092954;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.0009921154;
            } else {
              result[14] += 0.008767703;
            }
          } else {
            result[14] += -0.092237785;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.07874045;
            } else {
              result[14] += 0.01085369;
            }
          } else {
            result[14] += 0.13164648;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          result[14] += 0.007751808;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.10585704;
          } else {
            result[14] += -0.03231713;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.15538001;
            } else {
              result[14] += -0.013133799;
            }
          } else {
            result[14] += -0.08103509;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += -0.0036695057;
            } else {
              result[14] += -0.09172924;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.104189105;
            } else {
              result[14] += -0.047073625;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        result[14] += -0.07692021;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[14] += -0.005913908;
        } else {
          result[14] += -0.050460074;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        result[14] += 0.021508688;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[14] += -0.0797326;
        } else {
          result[14] += 0.015541466;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[0] += -0.00018083403;
          } else {
            result[0] += -0.08253673;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[0] += 0.0016596613;
            } else {
              result[0] += 0.07433683;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
              result[0] += -0.059742447;
            } else {
              result[0] += 0.00021600403;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += -0.0429726;
        } else {
          result[0] += -0.000534265;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += 0.032637015;
        } else {
          result[0] += 0.011469366;
        }
      } else {
        result[0] += -0.013657791;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.05436255;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[0] += 0.108364634;
        } else {
          result[0] += -0.014382892;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        result[0] += -0.08012365;
      } else {
        result[0] += -0.020245144;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.00049018464;
            } else {
              result[1] += 0.0026418723;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += 0.00553938;
            } else {
              result[1] += -0.15976337;
            }
          }
        } else {
          result[1] += -0.08397438;
        }
      } else {
        result[1] += -0.08862512;
      }
    } else {
      result[1] += 0.09238647;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
      result[1] += -0.14438783;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          result[1] += -0.00047197213;
        } else {
          result[1] += 0.0790755;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += -0.13434038;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += 0.0047943387;
            } else {
              result[1] += -0.14191467;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.12943599;
            } else {
              result[1] += 0.015757568;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[1] += -0.009447876;
            } else {
              result[1] += 0.00034511523;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00011112563;
    } else {
      result[2] += 0.0008871363;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.030639904;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.028498104;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
              result[2] += 0.03429917;
            } else {
              result[2] += -0.02822738;
            }
          } else {
            result[2] += 0.028002918;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.041716505;
          } else {
            result[2] += 0.019316439;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += 0.009479594;
    } else {
      result[3] += 0.00011884247;
    }
  } else {
    result[3] += -0.031511348;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += 0.00017084804;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.047774296;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
        result[4] += -0.0069408496;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          result[4] += 0.044505883;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.013549683;
            } else {
              result[4] += -0.013255816;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[4] += 0.043693718;
            } else {
              result[4] += 0.0049529322;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += -0.00041992284;
        } else {
          result[5] += 0.0022047996;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[5] += 0.008446121;
          } else {
            result[5] += 0.0035253116;
          }
        } else {
          result[5] += -0.0026274621;
        }
      }
    } else {
      result[5] += -0.08488932;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        result[5] += 0.02408586;
      } else {
        result[5] += 0.010363396;
      }
    } else {
      result[5] += -0.002925173;
    }
  }
  result[6] += -4.1260915e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += -0.00022151745;
            } else {
              result[7] += 0.10226867;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[7] += -0.14590554;
            } else {
              result[7] += 0.016671695;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[7] += 0.005700317;
            } else {
              result[7] += -4.4512475e-05;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[7] += -0.10175189;
            } else {
              result[7] += -0.023845667;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          result[7] += -0.079392664;
        } else {
          result[7] += -0.014247631;
        }
      }
    } else {
      result[7] += 0.11382916;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
      result[7] += -0.1008649;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        result[7] += 0.07048781;
      } else {
        result[7] += -0.0482289;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[8] += 0.00012118161;
            } else {
              result[8] += 0.020832254;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += -0.0091920355;
            } else {
              result[8] += -0.059288405;
            }
          }
        } else {
          result[8] += -0.100785986;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.03495408;
            } else {
              result[8] += -0.017891664;
            }
          } else {
            result[8] += -0.13952851;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += -0.0058921673;
            } else {
              result[8] += 0.13072702;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.034104504;
            } else {
              result[8] += -0.09721267;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[8] += -0.11288245;
        } else {
          result[8] += -0.0033572572;
        }
      } else {
        result[8] += 0.025788547;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[8] += -0.08825181;
            } else {
              result[8] += -0.027170772;
            }
          } else {
            result[8] += 0.03440217;
          }
        } else {
          result[8] += -0.16583443;
        }
      } else {
        result[8] += 0.022496954;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        result[8] += 0.08004944;
      } else {
        result[8] += -0.041611813;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -4.959178e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.004955543;
    } else {
      result[9] += 0.0011203891;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[10] += 9.35329e-05;
            } else {
              result[10] += 0.013155887;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += 0.008419939;
            } else {
              result[10] += 0.037753604;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            result[10] += -0.10372506;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[10] += 0.06226797;
            } else {
              result[10] += -0.045854308;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
            result[10] += 0.0072397944;
          } else {
            result[10] += 0.14216135;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            result[10] += -0.1048091;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
              result[10] += 0.063097216;
            } else {
              result[10] += -0.0031557772;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.0031908834;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
          result[10] += -0.037331484;
        } else {
          result[10] += 0.010863122;
        }
      }
    }
  } else {
    result[10] += -0.022931978;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += -0.00028597502;
            } else {
              result[11] += -0.13500062;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.029948678;
            } else {
              result[11] += -0.0022577862;
            }
          }
        } else {
          result[11] += -0.015411656;
        }
      } else {
        result[11] += -0.095745124;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.00030963868;
            } else {
              result[11] += -0.011477986;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.0042720446;
            } else {
              result[11] += 0.10572299;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.044061907;
            } else {
              result[11] += 0.14713073;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.117977016;
            } else {
              result[11] += -0.0010686863;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.12037971;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += -0.0011606112;
            } else {
              result[11] += 0.005866138;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += -0.004549451;
            } else {
              result[11] += 0.0014126876;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.09572691;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          result[11] += 0.0003177645;
        } else {
          result[11] += -0.10872916;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          result[11] += 0.001669709;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.0032978777;
            } else {
              result[11] += -0.0010839509;
            }
          } else {
            result[11] += 0.019101078;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.00041310317;
            } else {
              result[12] += 0.00090355333;
            }
          } else {
            result[12] += -0.039299894;
          }
        } else {
          result[12] += -0.10929248;
        }
      } else {
        result[12] += 0.1109821;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[12] += -0.14547145;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[12] += 0.09687738;
          } else {
            result[12] += -0.03335778;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[12] += -0.07741824;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += -0.001643595;
            } else {
              result[12] += 0.0008672442;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[12] += 0.08655538;
            } else {
              result[12] += -0.030583303;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.004092951;
            } else {
              result[12] += 0.09108142;
            }
          } else {
            result[12] += 0.00500971;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[12] += -0.015326229;
            } else {
              result[12] += -0.061613474;
            }
          } else {
            result[12] += 0.024908079;
          }
        }
      } else {
        result[12] += 0.050286267;
      }
    } else {
      result[12] += -0.056822386;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[13] += 0.0003716475;
            } else {
              result[13] += -0.07894589;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
              result[13] += 0.05266802;
            } else {
              result[13] += 0.0010219673;
            }
          }
        } else {
          result[13] += 0.08986343;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          result[13] += -0.13790838;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            result[13] += 0.10072098;
          } else {
            result[13] += -0.13616383;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.019390158;
            } else {
              result[13] += 0.0524847;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.0067760707;
            } else {
              result[13] += -0.016322471;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.0094207;
            } else {
              result[13] += 0.031752586;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += -0.13530959;
            } else {
              result[13] += 0.03745798;
            }
          }
        }
      } else {
        result[13] += 0.07146136;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.0015240804;
            } else {
              result[13] += -0.06033793;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += -0.041875686;
            } else {
              result[13] += -0.014682889;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            result[13] += -0.011573009;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += 0.06341009;
            } else {
              result[13] += 0.0022369812;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.0022384236;
            } else {
              result[13] += -0.06466424;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[13] += 0.026589015;
            } else {
              result[13] += -0.029833376;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.005657149;
            } else {
              result[13] += 0.034908067;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
              result[13] += -0.15241924;
            } else {
              result[13] += -0.003573787;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[13] += 0.11706413;
      } else {
        result[13] += 0.023775911;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += -0.0004692637;
            } else {
              result[14] += 0.0014849143;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[14] += -0.004168925;
            } else {
              result[14] += -0.0016156322;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[14] += 0.008320764;
          } else {
            result[14] += 0.0024118528;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.00085255987;
            } else {
              result[14] += 0.0075786817;
            }
          } else {
            result[14] += -0.088873945;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.075412035;
            } else {
              result[14] += 0.009478461;
            }
          } else {
            result[14] += 0.119298376;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          result[14] += 0.004958245;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.10232272;
          } else {
            result[14] += -0.030146927;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[14] += 0.051336024;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += -0.07986356;
            } else {
              result[14] += 0.008668778;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[14] += -0.10215692;
            } else {
              result[14] += 0.006120564;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[14] += 0.031973984;
            } else {
              result[14] += -0.051911186;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      result[14] += -0.03839626;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += 0.017618652;
      } else {
        result[14] += -0.03703481;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.00017432912;
            } else {
              result[0] += -0.015614805;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[0] += 0.035993367;
            } else {
              result[0] += 0.0036993509;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[0] += 0.0098493155;
          } else {
            result[0] += 0.03788665;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[0] += -0.039180256;
        } else {
          result[0] += 0.016178247;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[0] += 0.040753625;
      } else {
        result[0] += 0.00040604247;
      }
    }
  } else {
    result[0] += -0.019528951;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[1] += -0.00016876664;
            } else {
              result[1] += -0.03151095;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.04291558;
            } else {
              result[1] += -0.024535045;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            result[1] += -0.13386779;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.02482115;
            } else {
              result[1] += 0.047160998;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += 0.030925738;
          } else {
            result[1] += 0.0031946825;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.025816245;
            } else {
              result[1] += -0.1037002;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += 0.009146012;
            } else {
              result[1] += 0.045000277;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[1] += -0.03641341;
      } else {
        result[1] += -0.006158635;
      }
    }
  } else {
    result[1] += 0.059692238;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00012006278;
    } else {
      result[2] += 0.0010783331;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.029567676;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.026153104;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            result[2] += 0.011680301;
          } else {
            result[2] += 0.025791286;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.038541257;
          } else {
            result[2] += 0.018584928;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.021674009;
  } else {
    result[3] += 0.0089932345;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += 0.00011303452;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.045879066;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        result[4] += -0.01114294;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.040418975;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += -0.0075249057;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[4] += 0.029036222;
            } else {
              result[4] += 0.0060285325;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[5] += -2.852294e-07;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          result[5] += 0.004130067;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            result[5] += -0.015785472;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
              result[5] += 0.032455873;
            } else {
              result[5] += -0.0011904463;
            }
          }
        }
      }
    } else {
      result[5] += -0.081790686;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        result[5] += 0.020397149;
      } else {
        result[5] += 0.00892657;
      }
    } else {
      result[5] += -0.001804455;
    }
  }
  result[6] += -6.0753056e-05;
}

