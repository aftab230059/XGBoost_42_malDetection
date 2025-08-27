
#include "header.h"

void predict_unit27(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[9] += -5.6193083e-05;
    } else {
      result[9] += -0.029039983;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.0014976278;
      } else {
        result[9] += -0.0006160519;
      }
    } else {
      result[9] += 0.0032220655;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[10] += -0.00017598049;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += 0.00171267;
            } else {
              result[10] += -1.1124144e-05;
            }
          }
        } else {
          result[10] += -0.0010518079;
        }
      } else {
        result[10] += 0.019019622;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.0012628483;
      } else {
        result[10] += -0.019852042;
      }
    }
  } else {
    result[10] += -0.021048393;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[11] += -0.0035361515;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[11] += -0.00019523528;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.00071833027;
            } else {
              result[11] += -0.0026563178;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.10756009;
            } else {
              result[11] += -8.439395e-05;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[11] += -0.08155384;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            result[11] += 8.890459e-05;
          } else {
            result[11] += -0.094047464;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.0010369321;
            } else {
              result[11] += 0.0016773237;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.0022235415;
            } else {
              result[11] += 0.016999843;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      result[11] += -0.13257718;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[11] += 0.004059299;
        } else {
          result[11] += 0.042706903;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          result[11] += -0.0066331434;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += 0.0058637136;
            } else {
              result[11] += 0.00024496345;
            }
          } else {
            result[11] += -0.00869234;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += -0.00039236306;
            } else {
              result[12] += -0.115523204;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.0009371557;
            } else {
              result[12] += 0.0015216258;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += -0.0486961;
            } else {
              result[12] += -0.13592803;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += -0.004400334;
            } else {
              result[12] += -0.12175738;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[12] += 0.0011440739;
            } else {
              result[12] += -0.0021375695;
            }
          } else {
            result[12] += 0.022074992;
          }
        } else {
          result[12] += -0.004835654;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[12] += 0.00044430594;
            } else {
              result[12] += 0.08555256;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[12] += -0.0569877;
            } else {
              result[12] += 0.0021806296;
            }
          }
        } else {
          result[12] += 0.06675394;
        }
      } else {
        result[12] += -0.058631483;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[12] += 0.006799452;
        } else {
          result[12] += 0.0798105;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[12] += 0.0055574942;
        } else {
          result[12] += 0.02305888;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[12] += -0.010917731;
        } else {
          result[12] += -0.059983574;
        }
      } else {
        result[12] += 0.010748946;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[13] += -0.00019851718;
            } else {
              result[13] += 0.008906303;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += -0.0025486602;
            } else {
              result[13] += -0.06197082;
            }
          }
        } else {
          result[13] += 0.046987154;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            result[13] += -0.10876135;
          } else {
            result[13] += 0.016158855;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += 0.08480964;
            } else {
              result[13] += -0.03731212;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[13] += -0.012771911;
            } else {
              result[13] += -0.08278238;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
        result[13] += 0.085407585;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            result[13] += -0.0063473284;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
              result[13] += -0.082194455;
            } else {
              result[13] += -0.0010540655;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            result[13] += 0.054981202;
          } else {
            result[13] += 0.010668566;
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
      result[13] += 0.08614895;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[13] += 0.02175706;
      } else {
        result[13] += 0.007287533;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 9.138178e-05;
            } else {
              result[14] += 0.024874205;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[14] += -0.091265485;
            } else {
              result[14] += 0.021174883;
            }
          }
        } else {
          result[14] += -0.07549536;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          result[14] += 0.06118189;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[14] += 0.021020148;
          } else {
            result[14] += 0.0017678615;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += 0.091752246;
      } else {
        result[14] += 0.015136078;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[14] += -0.09335983;
          } else {
            result[14] += 0.055403076;
          }
        } else {
          result[14] += -0.10293517;
        }
      } else {
        result[14] += 0.009827505;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += -0.01596468;
            } else {
              result[14] += 0.060978737;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += 0.041688032;
            } else {
              result[14] += -0.028296584;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += 0.0012358837;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
              result[14] += -0.087312385;
            } else {
              result[14] += -0.0074511254;
            }
          }
        }
      } else {
        result[14] += 0.034295585;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -0.00016091001;
            } else {
              result[0] += 0.00047732558;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[0] += 0.0057516946;
            } else {
              result[0] += -0.00086994615;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
            result[0] += 0.008936429;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[0] += -0.0021237177;
            } else {
              result[0] += -0.06729138;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += -0.03800685;
        } else {
          result[0] += 0.00043698764;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += 0.023836052;
        } else {
          result[0] += 0.009234076;
        }
      } else {
        result[0] += -0.009264744;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.044021294;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[0] += 0.0640014;
        } else {
          result[0] += -0.0051592225;
        }
      }
    } else {
      result[0] += -0.04883748;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.00022295135;
            } else {
              result[1] += -0.0048484057;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += 0.035767402;
            } else {
              result[1] += 0.0023776675;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[1] += -0.13167317;
          } else {
            result[1] += 0.049242992;
          }
        }
      } else {
        result[1] += -0.1241404;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[1] += 0.060260996;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[1] += 0.06386032;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.020169359;
            } else {
              result[1] += -0.07156392;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += -0.0026419978;
            } else {
              result[1] += 0.011803711;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.051050786;
            } else {
              result[1] += 0.0015415462;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += -0.0039573796;
            } else {
              result[1] += -0.013800968;
            }
          } else {
            result[1] += -0.06487542;
          }
        } else {
          result[1] += -0.08772556;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          result[1] += 0.0022773347;
        } else {
          result[1] += 0.014587516;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.058083758;
            } else {
              result[1] += -0.05120251;
            }
          } else {
            result[1] += -0.12720388;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.0016171682;
            } else {
              result[1] += 0.029939367;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.14031883;
            } else {
              result[1] += 7.165756e-05;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56842)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += -0.00932979;
            } else {
              result[1] += 0.01850153;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.13601193;
            } else {
              result[1] += -0.008065969;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
              result[1] += 0.031084564;
            } else {
              result[1] += 0.096305214;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += -0.104097165;
            } else {
              result[1] += 0.004346047;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00014119345;
    } else {
      result[2] += 0.0011088463;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.027202845;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.022665769;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            result[2] += 0.011074742;
          } else {
            result[2] += 0.021946896;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.031203123;
          } else {
            result[2] += 0.01611461;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.020069372;
  } else {
    result[3] += 0.008472118;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -2.7513071e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.03831857;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        result[4] += -0.008438533;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.036095113;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += -0.00734383;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.03358674;
            } else {
              result[4] += 0.010413327;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[5] += 1.288383e-05;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[5] += 0.007678478;
          } else {
            result[5] += 0.0031544757;
          }
        } else {
          result[5] += -0.0024004173;
        }
      }
    } else {
      result[5] += -0.015012394;
    }
  } else {
    result[5] += 0.012884697;
  }
  result[6] += -0.00010622721;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[7] += -6.376761e-05;
            } else {
              result[7] += -0.076450974;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += 0.018416436;
            } else {
              result[7] += 0.08162032;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[7] += -0.10991414;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[7] += 0.05116943;
            } else {
              result[7] += -0.010802043;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[7] += 0.064292796;
          } else {
            result[7] += -0.01954958;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += 0.02328148;
            } else {
              result[7] += -0.08596669;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[7] += -0.105046354;
            } else {
              result[7] += 0.06656141;
            }
          }
        }
      }
    } else {
      result[7] += -0.058995716;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      result[7] += 0.05099779;
    } else {
      result[7] += -0.04191688;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
              result[8] += 0.0002403232;
            } else {
              result[8] += -0.024549918;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.011704872;
            } else {
              result[8] += 0.03557814;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += -0.020248206;
            } else {
              result[8] += 0.026964253;
            }
          } else {
            result[8] += -0.080179155;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
            result[8] += 0.005454947;
          } else {
            result[8] += 0.011867135;
          }
        } else {
          result[8] += 0.14196761;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[8] += -0.094845735;
          } else {
            result[8] += -0.040426254;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            result[8] += 0.00444302;
          } else {
            result[8] += -0.016409911;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += -0.0066248686;
            } else {
              result[8] += 0.0030897954;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += 0.006455153;
            } else {
              result[8] += 0.036198232;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[8] += -0.0022595513;
            } else {
              result[8] += -0.041248094;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[8] += 0.009832833;
            } else {
              result[8] += -0.008604347;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.10668582;
    } else {
      result[8] += 0.0068062935;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[9] += -9.5596195e-05;
    } else {
      result[9] += -0.026963718;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.005159113;
    } else {
      result[9] += 0.00082782353;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
              result[10] += 0.00011789536;
            } else {
              result[10] += -0.013253054;
            }
          } else {
            result[10] += -0.09965586;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.057315953;
            } else {
              result[10] += -0.07185098;
            }
          } else {
            result[10] += 0.08926724;
          }
        }
      } else {
        result[10] += 0.00093110587;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
        result[10] += 0.07318458;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
          result[10] += 0.009263784;
        } else {
          result[10] += -0.022315884;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
      result[10] += -0.02204093;
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += 0.0049633505;
      } else {
        result[10] += 0.017081227;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[11] += -0.0030512067;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 1.8679251e-05;
            } else {
              result[11] += -0.006841548;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.002684405;
            } else {
              result[11] += 0.08958665;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += 0.025367178;
            } else {
              result[11] += -0.00015660498;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += -0.07292893;
            } else {
              result[11] += -0.003022556;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[11] += -0.0010033514;
        } else {
          result[11] += 0.01567529;
        }
      } else {
        result[11] += -0.08170929;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      result[11] += -0.1298612;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[11] += 0.0034573418;
        } else {
          result[11] += 0.03799452;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[11] += -0.0056764763;
            } else {
              result[11] += 0.004958747;
            }
          } else {
            result[11] += -0.10442232;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[11] += 0.0029881082;
          } else {
            result[11] += -0.007569662;
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.00018949756;
            } else {
              result[12] += -0.033320557;
            }
          } else {
            result[12] += -0.09473086;
          }
        } else {
          result[12] += 0.09902125;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[12] += -0.139725;
          } else {
            result[12] += 0.027059192;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += -0.0015293394;
            } else {
              result[12] += 0.00050172216;
            }
          } else {
            result[12] += 0.06508639;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.005105721;
            } else {
              result[12] += 0.077577785;
            }
          } else {
            result[12] += 0.0048623765;
          }
        } else {
          result[12] += 0.062212702;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[12] += -0.009249192;
          } else {
            result[12] += -0.059389777;
          }
        } else {
          result[12] += 0.020993508;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.05844165;
        } else {
          result[12] += 0.033188675;
        }
      } else {
        result[12] += -0.063080706;
      }
    } else {
      result[12] += 0.014458764;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += -9.5999305e-05;
            } else {
              result[13] += -0.023759369;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += -0.07960678;
            } else {
              result[13] += -0.0060868156;
            }
          }
        } else {
          result[13] += 0.082853585;
        }
      } else {
        result[13] += -0.054606162;
      }
    } else {
      result[13] += -0.10536063;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
      result[13] += 0.08966712;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          result[13] += 0.0033740536;
        } else {
          result[13] += -0.074810654;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          result[13] += 0.08709874;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            result[13] += -0.08278622;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.018415928;
            } else {
              result[13] += -0.056921143;
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 8.2254846e-05;
            } else {
              result[14] += 0.0075376933;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.08609295;
            } else {
              result[14] += 0.019529566;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.09179739;
          } else {
            result[14] += 0.009059568;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[14] += 0.083558545;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += 0.0022711495;
          } else {
            result[14] += -0.0067905835;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          result[14] += 0.004100309;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.091063365;
          } else {
            result[14] += -0.023474589;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[14] += 0.051151935;
          } else {
            result[14] += -0.028264556;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += -0.09414172;
            } else {
              result[14] += 0.036954854;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += 0.03775745;
            } else {
              result[14] += -0.0364776;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      result[14] += -0.03481109;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += 0.009165146;
      } else {
        result[14] += -0.029560382;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[0] += 0.00019287132;
            } else {
              result[0] += -0.0024155534;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += -0.021122504;
            } else {
              result[0] += 0.09461893;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[0] += 0.050233632;
            } else {
              result[0] += -0.011839956;
            }
          } else {
            result[0] += 0.07595161;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[0] += -0.034289572;
        } else {
          result[0] += 0.062110472;
        }
      }
    } else {
      result[0] += -0.047862615;
    }
  } else {
    result[0] += 0.016192045;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[1] += -0.00022478699;
            } else {
              result[1] += -0.071922824;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[1] += -0.1291489;
            } else {
              result[1] += 0.04129387;
            }
          }
        } else {
          result[1] += -0.12105183;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[1] += 0.05372902;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.017904734;
            } else {
              result[1] += 0.099866405;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.003197389;
            } else {
              result[1] += -0.016423231;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.009940129;
            } else {
              result[1] += -0.055232175;
            }
          } else {
            result[1] += -0.084521055;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            result[1] += 0.0019437001;
          } else {
            result[1] += 0.012917838;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.04407293;
            } else {
              result[1] += -0.12437138;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
              result[1] += 0.00158019;
            } else {
              result[1] += -0.020906556;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56842)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.0032605391;
            } else {
              result[1] += -0.042078752;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
              result[1] += 0.05357358;
            } else {
              result[1] += -0.0012089855;
            }
          }
        }
      }
    }
  } else {
    result[1] += 0.05311352;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00012940177;
    } else {
      result[2] += 0.0009447798;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.026182542;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.021119248;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.0182394;
            } else {
              result[2] += -0.02817863;
            }
          } else {
            result[2] += 0.031782363;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            result[2] += -0.03366322;
          } else {
            result[2] += 0.021115841;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[3] += 0.009928228;
  } else {
    result[3] += -0.020584978;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      result[4] += -3.3683104e-05;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[4] += 0.035979375;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
            result[4] += -0.003675393;
          } else {
            result[4] += 0.028137997;
          }
        }
      } else {
        result[4] += -0.0064281547;
      }
    }
  } else {
    result[4] += 0.042819005;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[5] += -0.0003679251;
        } else {
          result[5] += 0.0021339583;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[5] += 0.0072962507;
          } else {
            result[5] += 0.0029876286;
          }
        } else {
          result[5] += -0.0050093574;
        }
      }
    } else {
      result[5] += -0.07995001;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        result[5] += 0.021120016;
      } else {
        result[5] += 0.00822144;
      }
    } else {
      result[5] += -0.0021088512;
    }
  }
  result[6] += -9.901252e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[7] += -0.00024923874;
            } else {
              result[7] += 0.020215962;
            }
          } else {
            result[7] += -0.01535499;
          }
        } else {
          result[7] += 0.022349514;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
          result[7] += -0.015037113;
        } else {
          result[7] += -0.008679602;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51738)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[7] += 0.010339739;
          } else {
            result[7] += -0.004153058;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51595)) {
            result[7] += 0.020061186;
          } else {
            result[7] += 0.03210715;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51893)) {
          result[7] += -0.043745443;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[7] += 0.022170957;
            } else {
              result[7] += 0.029588452;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
              result[7] += -0.03694885;
            } else {
              result[7] += 0.00029423943;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        result[7] += -0.018651824;
      } else {
        result[7] += -0.08532486;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        result[7] += -0.0013952923;
      } else {
        result[7] += 0.0427169;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 1.5729411e-07;
            } else {
              result[8] += -0.0056989025;
            }
          } else {
            result[8] += 0.15884086;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
            result[8] += -0.07473123;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[8] += 0.08967246;
            } else {
              result[8] += -0.017855836;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[8] += 0.09660511;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.109429285;
            } else {
              result[8] += 0.03422901;
            }
          }
        } else {
          result[8] += 0.12191374;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            result[8] += -0.05188848;
          } else {
            result[8] += -0.13379236;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[8] += -0.02066568;
            } else {
              result[8] += 0.030997155;
            }
          } else {
            result[8] += -0.13073568;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[8] += 0.028406387;
            } else {
              result[8] += -0.0095115425;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.06616212;
            } else {
              result[8] += 0.013939413;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[8] += -0.010002212;
            } else {
              result[8] += -0.067465134;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[8] += 0.09692383;
            } else {
              result[8] += -0.00089920213;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        result[8] += 0.048756767;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[8] += -0.03721845;
            } else {
              result[8] += 0.0077367756;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.121410154;
            } else {
              result[8] += -0.02707098;
            }
          }
        } else {
          result[8] += -0.08373042;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += -0.018428333;
            } else {
              result[8] += -0.080859505;
            }
          } else {
            result[8] += 0.04459782;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[8] += -0.1395193;
          } else {
            result[8] += 0.019308122;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54003)) {
              result[8] += 0.00079597224;
            } else {
              result[8] += -0.005621702;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[8] += 0.037377797;
            } else {
              result[8] += 0.00923583;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[8] += -0.004922739;
            } else {
              result[8] += -0.023357479;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[8] += 0.011313588;
            } else {
              result[8] += -0.002526245;
            }
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -0.000112446935;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.005053663;
    } else {
      result[9] += 0.0011571671;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += -2.0466683e-05;
            } else {
              result[10] += 0.037977427;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[10] += -0.11571829;
            } else {
              result[10] += 0.070065804;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += 0.008555229;
          } else {
            result[10] += 0.035951093;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.06482765;
            } else {
              result[10] += -0.05973893;
            }
          } else {
            result[10] += 0.12088;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)522179)) {
              result[10] += -0.0017370713;
            } else {
              result[10] += -0.06934972;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)689205)) {
              result[10] += 0.053353257;
            } else {
              result[10] += -0.0009476601;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += 0.001665037;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
          result[10] += -0.037311893;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
            result[10] += -0.016180824;
          } else {
            result[10] += 0.05879997;
          }
        }
      }
    }
  } else {
    result[10] += -0.022854304;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += 0.00018023177;
            } else {
              result[11] += -0.09018083;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.09711374;
            } else {
              result[11] += -0.0013626739;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.11115712;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += 0.010327616;
            } else {
              result[11] += 0.00060322596;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.122304164;
          } else {
            result[11] += -0.06619716;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[11] += -0.0040904796;
          } else {
            result[11] += 0.015187191;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.043468654;
            } else {
              result[11] += 0.009401878;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.10441981;
            } else {
              result[11] += 0.0027040276;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[11] += -0.092029385;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[11] += -0.008834284;
            } else {
              result[11] += 0.010154979;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.002484378;
            } else {
              result[11] += 0.0032594737;
            }
          } else {
            result[11] += 0.11655662;
          }
        } else {
          result[11] += -0.13304733;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.078281924;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          result[11] += -0.00048295222;
        } else {
          result[11] += -0.090703316;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          result[11] += 0.00032491313;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            result[11] += -0.002626588;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[11] += 0.000757361;
            } else {
              result[11] += -0.002087452;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[12] += -0.00396841;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.0002066379;
            } else {
              result[12] += -0.091374815;
            }
          } else {
            result[12] += 0.094744444;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[12] += -0.13727497;
            } else {
              result[12] += 0.024428396;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
              result[12] += -0.00033124385;
            } else {
              result[12] += 0.060785238;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.005823782;
            } else {
              result[12] += 0.07409714;
            }
          } else {
            result[12] += 0.004463103;
          }
        } else {
          result[12] += 0.059184995;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[12] += -0.008500524;
          } else {
            result[12] += -0.057154104;
          }
        } else {
          result[12] += 0.020868866;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.054994725;
        } else {
          result[12] += 0.030556934;
        }
      } else {
        result[12] += -0.06334837;
      }
    } else {
      result[12] += 0.007364294;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
              result[13] += -0.00014477952;
            } else {
              result[13] += -0.04972827;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[13] += -0.09305184;
            } else {
              result[13] += -0.006435108;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += 0.01781154;
            } else {
              result[13] += -0.035173435;
            }
          } else {
            result[13] += 0.06454362;
          }
        }
      } else {
        result[13] += 0.06816065;
      }
    } else {
      result[13] += -0.048695143;
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
      result[13] += 0.08021645;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[13] += 0.022640172;
      } else {
        result[13] += 0.006194091;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 7.3405114e-05;
            } else {
              result[14] += 0.0070833056;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.082972795;
            } else {
              result[14] += 0.0157364;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.08825742;
          } else {
            result[14] += 0.008237957;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[14] += 0.0764117;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[14] += 0.0054148235;
          } else {
            result[14] += -0.0013684005;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          result[14] += 0.0039831325;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.087706126;
          } else {
            result[14] += -0.02274483;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.048567984;
            } else {
              result[14] += 0.009160889;
            }
          } else {
            result[14] += 0.00029314985;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[14] += -0.077217;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.016341366;
            } else {
              result[14] += 0.004698814;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[14] += -0.026631707;
        } else {
          result[14] += 0.011940297;
        }
      } else {
        result[14] += -0.049392194;
      }
    } else {
      result[14] += 0.024746874;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[0] += -0.00020349483;
          } else {
            result[0] += -0.07735218;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
              result[0] += 0.0010631734;
            } else {
              result[0] += 0.06539425;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)28681)) {
              result[0] += -0.049155153;
            } else {
              result[0] += 0.00022749543;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
          result[0] += -0.03403358;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            result[0] += -0.010855937;
          } else {
            result[0] += 0.020327382;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[0] += -0.123622365;
            } else {
              result[0] += -0.02828388;
            }
          } else {
            result[0] += 0.025562132;
          }
        } else {
          result[0] += 0.02255309;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[0] += 0.18100043;
        } else {
          result[0] += -0.039243232;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[0] += -0.034285493;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[0] += 0.003208508;
          } else {
            result[0] += 0.023628332;
          }
        } else {
          result[0] += -0.012388167;
        }
      } else {
        result[0] += 0.0486941;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[1] += -0.00020110574;
            } else {
              result[1] += 0.028942758;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += -0.08094707;
            } else {
              result[1] += 0.104161;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += 0.015623982;
            } else {
              result[1] += -0.056945585;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.10841549;
            } else {
              result[1] += 0.008833855;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[1] += -0.0059750574;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            result[1] += -0.14565586;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += -0.03900493;
            } else {
              result[1] += -0.06955667;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.008121801;
            } else {
              result[1] += 0.00049485493;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += -0.019447353;
            } else {
              result[1] += -0.087467775;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
            result[1] += 0.11782058;
          } else {
            result[1] += 0.007906654;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          result[1] += -0.08856339;
        } else {
          result[1] += 0.023767572;
        }
      }
    }
  } else {
    result[1] += 0.049892303;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00013664814;
    } else {
      result[2] += 0.0011163045;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.025395192;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.019261211;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
            result[2] += 0.009426545;
          } else {
            result[2] += 0.023028819;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.030855425;
          } else {
            result[2] += 0.015693715;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[3] += 0.008917806;
  } else {
    result[3] += -0.019048763;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -6.5303175e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.03603452;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        result[4] += -0.008222358;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.03575605;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.008488851;
            } else {
              result[4] += -0.00998935;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[4] += 0.036304154;
            } else {
              result[4] += 0.0066867988;
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
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += -0.000333944;
          } else {
            result[5] += 0.0019577006;
          }
        } else {
          result[5] += 0.0018542517;
        }
      } else {
        result[5] += 0.011050608;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
        result[5] += -0.025062643;
      } else {
        result[5] += 4.5605484e-05;
      }
    }
  } else {
    result[5] += 0.01873981;
  }
  result[6] += -0.00010958106;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += -0.00010639242;
            } else {
              result[7] += 0.06193808;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[7] += -0.10155583;
            } else {
              result[7] += 0.0139946;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[7] += 0.07527183;
            } else {
              result[7] += -0.008800304;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.06780206;
            } else {
              result[7] += 0.076900184;
            }
          }
        }
      } else {
        result[7] += -0.03200364;
      }
    } else {
      result[7] += -0.05662421;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      result[7] += 0.044554193;
    } else {
      result[7] += -0.037026163;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    result[8] += -0.006389966;
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
              result[8] += 0.00017891737;
            } else {
              result[8] += 0.0121054;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[8] += -0.011541093;
            } else {
              result[8] += -0.0002787996;
            }
          }
        } else {
          result[8] += -0.0888538;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.038313992;
            } else {
              result[8] += -0.018145679;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[8] += -0.14801718;
            } else {
              result[8] += 0.04735541;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[8] += 0.12754071;
            } else {
              result[8] += 0.0076848217;
            }
          } else {
            result[8] += -0.03981717;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[8] += -0.10340773;
      } else {
        result[8] += 0.008384274;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -0.00012498612;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.0052399174;
    } else {
      result[9] += 0.0013126731;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[10] += -0.00024686934;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += 0.0014456033;
            } else {
              result[10] += 5.0722106e-06;
            }
          }
        } else {
          result[10] += -0.0011301365;
        }
      } else {
        result[10] += 0.018461863;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += 0.00070755795;
      } else {
        result[10] += -0.02292128;
      }
    }
  } else {
    result[10] += -0.02302717;
  }
}

