
#include "header.h"

void predict_unit9(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14929907;
    } else {
      result[3] += -0.052353352;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[3] += -0.13592464;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
              result[3] += -0.080124855;
            } else {
              result[3] += 0.14333786;
            }
          }
        } else {
          result[3] += 0.14498629;
        }
      } else {
        result[3] += -0.13535093;
      }
    } else {
      result[3] += -0.14508943;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.1481741;
      } else {
        result[4] += -0.030886415;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[4] += 0.03174296;
            } else {
              result[4] += 0.1021086;
            }
          } else {
            result[4] += -0.08184403;
          }
        } else {
          result[4] += 0.088658564;
        }
      } else {
        result[4] += -0.1119375;
      }
    }
  } else {
    result[4] += 0.14590834;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[5] += 0.0019552473;
            } else {
              result[5] += -0.1444492;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[5] += -0.13074607;
            } else {
              result[5] += 0.057987552;
            }
          }
        } else {
          result[5] += -0.14201863;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[5] += -0.14599673;
        } else {
          result[5] += 0.08599848;
        }
      }
    } else {
      result[5] += -0.1464853;
    }
  } else {
    result[5] += -0.14841458;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[6] += 0.0035320956;
          } else {
            result[6] += -0.1181993;
          }
        } else {
          result[6] += 0.12278159;
        }
      } else {
        result[6] += -0.123781115;
      }
    } else {
      result[6] += -0.1311285;
    }
  } else {
    result[6] += -0.14936717;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[7] += -0.0024204643;
            } else {
              result[7] += 0.13556792;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += 0.038563363;
            } else {
              result[7] += -0.111151196;
            }
          }
        } else {
          result[7] += -0.14889;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += -0.14276585;
        } else {
          result[7] += -0.0028439532;
        }
      }
    } else {
      result[7] += 0.14868882;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.13008134;
            } else {
              result[7] += -0.09557582;
            }
          } else {
            result[7] += 0.14913815;
          }
        } else {
          result[7] += -0.044287667;
        }
      } else {
        result[7] += -0.090409905;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            result[7] += -0.14915684;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[7] += 0.01721077;
            } else {
              result[7] += -0.11215333;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += 0.031171469;
            } else {
              result[7] += 0.5277403;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.15602067;
            } else {
              result[7] += 0.14175212;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[7] += -0.1127617;
        } else {
          result[7] += 0.14900962;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[8] += -0.0020713848;
            } else {
              result[8] += 0.10583643;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
              result[8] += -0.09566189;
            } else {
              result[8] += 0.014725162;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.041330576;
            } else {
              result[8] += -0.0019072752;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.0387974;
            } else {
              result[8] += 0.06029459;
            }
          }
        }
      } else {
        result[8] += -0.15052709;
      }
    } else {
      result[8] += 0.1655493;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15852648;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.14978895;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.17253129;
            } else {
              result[8] += 0.1356959;
            }
          }
        } else {
          result[8] += -0.08047576;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += -0.14971411;
          } else {
            result[8] += -1.0760357;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.15341295;
            } else {
              result[8] += 0.03121275;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.07282718;
            } else {
              result[8] += -0.17444506;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[9] += 0.0054760594;
            } else {
              result[9] += -0.14370094;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[9] += -0.022928588;
            } else {
              result[9] += 0.061302487;
            }
          }
        } else {
          result[9] += -0.14298093;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          result[9] += -0.1472681;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[9] += 0.14069067;
          } else {
            result[9] += -0.09245579;
          }
        }
      }
    } else {
      result[9] += -0.1459557;
    }
  } else {
    result[9] += -0.14852741;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.005128863;
            } else {
              result[10] += -0.12226205;
            }
          } else {
            result[10] += -0.13224024;
          }
        } else {
          result[10] += -0.14858522;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40194)) {
              result[10] += 0.008429865;
            } else {
              result[10] += -0.114051744;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[10] += 0.025763547;
            } else {
              result[10] += -0.16840477;
            }
          }
        } else {
          result[10] += -0.13427408;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.1226501;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
              result[10] += 0.046389237;
            } else {
              result[10] += 0.20315482;
            }
          }
        } else {
          result[10] += -0.1469311;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.10957782;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[10] += -0.040063627;
            } else {
              result[10] += 0.10268613;
            }
          } else {
            result[10] += 0.23668781;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14783442;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
        result[10] += 0.14017287;
      } else {
        result[10] += -0.12671283;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.030104721;
            } else {
              result[11] += -0.1347681;
            }
          } else {
            result[11] += -0.13639438;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
              result[11] += -0.0027190545;
            } else {
              result[11] += 0.006076295;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
              result[11] += -0.044539478;
            } else {
              result[11] += -0.11216133;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[11] += -0.15120672;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += -0.0128502585;
            } else {
              result[11] += -0.14550966;
            }
          } else {
            result[11] += 0.14319503;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.13317052;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
              result[11] += 0.1612201;
            } else {
              result[11] += 0.060136974;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
              result[11] += 0.15316284;
            } else {
              result[11] += 0.093507886;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[11] += 0.10597073;
            } else {
              result[11] += -0.048607793;
            }
          } else {
            result[11] += 0.14958288;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += -0.0008075449;
            } else {
              result[11] += 0.022489382;
            }
          } else {
            result[11] += -0.14429143;
          }
        }
      }
    }
  } else {
    result[11] += -0.14798175;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.015833918;
            } else {
              result[12] += 0.06155805;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += 0.024973307;
            } else {
              result[12] += -0.00028807315;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
            result[12] += -0.15082982;
          } else {
            result[12] += 0.027217858;
          }
        }
      } else {
        result[12] += -0.1486812;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.13349698;
            } else {
              result[12] += -0.1490127;
            }
          } else {
            result[12] += 0.14964497;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            result[12] += 0.069672994;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.29103628;
            } else {
              result[12] += -0.081989266;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.1697768;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
              result[12] += 0.10127312;
            } else {
              result[12] += 0.03751573;
            }
          } else {
            result[12] += -0.1375841;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += -0.14897855;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.15243328;
            } else {
              result[12] += -0.10703808;
            }
          } else {
            result[12] += -0.14473906;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.13545695;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.14173573;
          } else {
            result[12] += -0.12962486;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        result[12] += 0.15853989;
      } else {
        result[12] += -0.14082554;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[13] += -0.04626388;
            } else {
              result[13] += 0.015368077;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[13] += -0.031634618;
            } else {
              result[13] += 0.18351957;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[13] += -0.14569919;
            } else {
              result[13] += -0.26083523;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[13] += 0.07811205;
            } else {
              result[13] += -0.18254225;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.018170146;
            } else {
              result[13] += 0.10262014;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.09451838;
            } else {
              result[13] += 0.16593689;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            result[13] += 0.16194841;
          } else {
            result[13] += -0.084884964;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.12946485;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[13] += 0.073424704;
            } else {
              result[13] += -0.08397058;
            }
          }
        } else {
          result[13] += 0.1492714;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
            result[13] += -0.11783094;
          } else {
            result[13] += 0.016159331;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
              result[13] += 0.11798813;
            } else {
              result[13] += -0.0009919492;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.052315757;
            } else {
              result[13] += -0.095200606;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.14225788;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[13] += 0.05513054;
        } else {
          result[13] += -0.14946182;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.07848704;
            } else {
              result[13] += 0.07344076;
            }
          } else {
            result[13] += 0.13867052;
          }
        } else {
          result[13] += -0.10421132;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[14] += 0.00014407566;
            } else {
              result[14] += -0.14862673;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += 0.030790124;
            } else {
              result[14] += -0.057244003;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.16525674;
            } else {
              result[14] += -0.10696497;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15024935;
            } else {
              result[14] += 0.08049445;
            }
          }
        }
      } else {
        result[14] += -0.14657302;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.0868628;
        } else {
          result[14] += 0.15001707;
        }
      } else {
        result[14] += -0.12924811;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[14] += -0.14706644;
        } else {
          result[14] += -0.27417368;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
              result[14] += -0.08988452;
            } else {
              result[14] += 0.34736943;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.17228182;
            } else {
              result[14] += -0.12301255;
            }
          }
        } else {
          result[14] += -0.13809744;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
          result[14] += 0.13744268;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
              result[14] += 0.050912376;
            } else {
              result[14] += -0.049413037;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
              result[14] += 0.09143896;
            } else {
              result[14] += 0.010982173;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.16560851;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[14] += -0.06696324;
            } else {
              result[14] += 0.08946088;
            }
          } else {
            result[14] += -0.13926803;
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[0] += 0.0050029047;
            } else {
              result[0] += -0.12109163;
            }
          } else {
            result[0] += -0.12126947;
          }
        } else {
          result[0] += -0.14853102;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.018819403;
            } else {
              result[0] += -0.13751496;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[0] += -0.118537486;
            } else {
              result[0] += 0.11317993;
            }
          }
        } else {
          result[0] += -0.16497761;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.14323242;
          } else {
            result[0] += 0.21534102;
          }
        } else {
          result[0] += -0.14577988;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
          result[0] += -0.13697855;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += -0.12255883;
            } else {
              result[0] += 0.03588019;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[0] += 0.1692492;
            } else {
              result[0] += -0.06334816;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.145596;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[1] += -0.11174446;
    } else {
      result[1] += -0.02979677;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.0036003178;
            } else {
              result[1] += -0.007780624;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += 0.03001407;
            } else {
              result[1] += -0.15000576;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.16098528;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += 0.060978327;
            } else {
              result[1] += -0.22822624;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[1] += 0.118998565;
            } else {
              result[1] += 0.0485169;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[1] += -0.14731018;
            } else {
              result[1] += 0.12575226;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += 0.012737534;
            } else {
              result[1] += 0.07711418;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.15917763;
            } else {
              result[1] += -0.01921235;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[1] += -0.0018606625;
            } else {
              result[1] += 0.1069722;
            }
          } else {
            result[1] += -0.13298704;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
              result[1] += -0.037188478;
            } else {
              result[1] += -0.11936685;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[1] += 0.0771644;
            } else {
              result[1] += -0.043078166;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[1] += -0.15365502;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[1] += -0.24375547;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[1] += 0.0748005;
            } else {
              result[1] += -0.06344589;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[2] += -0.10330346;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.052456826;
          } else {
            result[2] += -0.026441408;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)18398)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)17886)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)15623)) {
              result[2] += 0.0015561483;
            } else {
              result[2] += 0.035981197;
            }
          } else {
            result[2] += -0.102566205;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)23105)) {
              result[2] += 0.016592775;
            } else {
              result[2] += 0.08972409;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)25397)) {
              result[2] += -0.03766583;
            } else {
              result[2] += 0.0058377567;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.036599893;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[2] += 0.0075818216;
            } else {
              result[2] += 0.10918373;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)25002)) {
              result[2] += -0.030959127;
            } else {
              result[2] += 0.033427835;
            }
          }
        }
      } else {
        result[2] += 0.14794548;
      }
    }
  } else {
    result[2] += -0.14922279;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14913698;
    } else {
      result[3] += -0.048087854;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)588311)) {
            result[3] += -0.13274843;
          } else {
            result[3] += 0.12810709;
          }
        } else {
          result[3] += 0.14334093;
        }
      } else {
        result[3] += -0.1330793;
      }
    } else {
      result[3] += -0.14394149;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[4] += -0.14778867;
      } else {
        result[4] += -0.029299723;
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          result[4] += 0.10764889;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[4] += -0.08849816;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[4] += 0.07213439;
            } else {
              result[4] += 0.00025845188;
            }
          }
        }
      } else {
        result[4] += -0.1040882;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14833273;
    } else {
      result[4] += -0.07848422;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[5] += 0.0022816455;
            } else {
              result[5] += -0.14339758;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[5] += -0.12708734;
            } else {
              result[5] += 0.053598195;
            }
          }
        } else {
          result[5] += -0.14086111;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[5] += -0.14536779;
        } else {
          result[5] += 0.086037666;
        }
      }
    } else {
      result[5] += -0.14554918;
    }
  } else {
    result[5] += -0.14806011;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[6] += 0.0027709564;
          } else {
            result[6] += -0.1115961;
          }
        } else {
          result[6] += 0.11945938;
        }
      } else {
        result[6] += -0.11867436;
      }
    } else {
      result[6] += -0.12882547;
    }
  } else {
    result[6] += -0.14921452;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.0078089205;
            } else {
              result[7] += -0.0069444254;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[7] += -0.044240505;
            } else {
              result[7] += 0.1461663;
            }
          }
        } else {
          result[7] += -0.14807542;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          result[7] += -0.14125428;
        } else {
          result[7] += 0.0044532004;
        }
      }
    } else {
      result[7] += 0.14823878;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.12511104;
            } else {
              result[7] += -0.09234652;
            }
          } else {
            result[7] += 0.14887746;
          }
        } else {
          result[7] += -0.043283287;
        }
      } else {
        result[7] += -0.08681054;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            result[7] += -0.14859706;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[7] += 0.015771428;
            } else {
              result[7] += -0.10806936;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += 0.16074744;
            } else {
              result[7] += -0.018441716;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.11376148;
            } else {
              result[7] += 0.13749357;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[7] += -0.10512181;
        } else {
          result[7] += 0.14862111;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.0015129613;
            } else {
              result[8] += -0.16069798;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[8] += 0.09608231;
            } else {
              result[8] += 0.14576484;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[8] += -0.15490055;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.10984658;
            } else {
              result[8] += -0.15234192;
            }
          }
        }
      } else {
        result[8] += -0.14997014;
      }
    } else {
      result[8] += 0.1616266;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15736347;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          result[8] += 0.14512879;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[8] += -0.16571166;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[8] += 0.07935177;
            } else {
              result[8] += 0.14328277;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += -0.14925867;
          } else {
            result[8] += -0.4329049;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[8] += -0.18507093;
            } else {
              result[8] += 0.14147948;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[8] += -0.17286688;
            } else {
              result[8] += 0.10589568;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
              result[9] += 0.0040783137;
            } else {
              result[9] += -0.14199789;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.088642895;
            } else {
              result[9] += 0.024242317;
            }
          }
        } else {
          result[9] += -0.14132233;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          result[9] += -0.14680973;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[9] += 0.13795829;
          } else {
            result[9] += -0.08389994;
          }
        }
      }
    } else {
      result[9] += -0.14511117;
    }
  } else {
    result[9] += -0.1482064;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[10] += 0.0039485595;
            } else {
              result[10] += -0.12875335;
            }
          } else {
            result[10] += -0.14830388;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[10] += 0.01847112;
            } else {
              result[10] += 0.0010924655;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
              result[10] += 0.11615253;
            } else {
              result[10] += -0.03511535;
            }
          }
        }
      } else {
        result[10] += -0.13225636;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.118524306;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32530)) {
              result[10] += 0.037327737;
            } else {
              result[10] += 0.18632913;
            }
          }
        } else {
          result[10] += -0.14621063;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.10555175;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
              result[10] += 0.071317255;
            } else {
              result[10] += 0.26269713;
            }
          } else {
            result[10] += -0.07576595;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14737211;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        result[10] += 0.17597319;
      } else {
        result[10] += -0.12349;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += -0.00097402994;
            } else {
              result[11] += 0.026142795;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.23579444;
            } else {
              result[11] += 0.15133259;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += -0.1991783;
            } else {
              result[11] += -0.46788234;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.087986134;
            } else {
              result[11] += -0.22040975;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.04998251;
            } else {
              result[11] += -0.077047035;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += -0.111915044;
            } else {
              result[11] += -0.20869379;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.15419155;
            } else {
              result[11] += 0.020029522;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
              result[11] += 0.043560944;
            } else {
              result[11] += 0.13090685;
            }
          }
        }
      }
    } else {
      result[11] += -0.15145254;
    }
  } else {
    result[11] += -0.14753734;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.013317379;
            } else {
              result[12] += 0.030825436;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.016885886;
            } else {
              result[12] += -0.006308896;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
            result[12] += -0.14983901;
          } else {
            result[12] += 0.023754591;
          }
        }
      } else {
        result[12] += -0.14833385;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.1297431;
            } else {
              result[12] += -0.14030623;
            }
          } else {
            result[12] += 0.1490743;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += -0.2652556;
          } else {
            result[12] += -0.0066659804;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.16676076;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16917)) {
              result[12] += 0.123591684;
            } else {
              result[12] += 0.048188865;
            }
          } else {
            result[12] += -0.1332017;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)13367)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += -0.1486286;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.14100918;
            } else {
              result[12] += -0.104222514;
            }
          } else {
            result[12] += -0.14395967;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.12964064;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.13835938;
          } else {
            result[12] += -0.12149193;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        result[12] += 0.15466598;
      } else {
        result[12] += -0.13799036;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.011886023;
            } else {
              result[13] += -0.08788087;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.058726624;
            } else {
              result[13] += -0.0013817868;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.14986092;
            } else {
              result[13] += -0.08929421;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[13] += 0.07391404;
            } else {
              result[13] += -0.17934185;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.107554756;
            } else {
              result[13] += 0.008429954;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[13] += -0.114787556;
            } else {
              result[13] += 0.01208658;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
            result[13] += 0.15700702;
          } else {
            result[13] += -0.07681361;
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.12581888;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1186405888)) {
              result[13] += 0.071727924;
            } else {
              result[13] += -0.07340036;
            }
          }
        } else {
          result[13] += 0.14688206;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[13] += -0.09064107;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
              result[13] += 0.123412825;
            } else {
              result[13] += 0.020237286;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40194)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.06395003;
            } else {
              result[13] += -0.07749005;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
              result[13] += -0.14198132;
            } else {
              result[13] += -0.04028404;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.1407201;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[13] += 0.049304534;
        } else {
          result[13] += -0.14729646;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[13] += 0.11961801;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
              result[13] += -0.08600508;
            } else {
              result[13] += 0.10143179;
            }
          }
        } else {
          result[13] += -0.09777339;
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.0036185016;
            } else {
              result[14] += -0.1482219;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.14098656;
            } else {
              result[14] += 0.025380328;
            }
          }
        } else {
          result[14] += -0.14584935;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[14] += -0.08351075;
          } else {
            result[14] += 0.14920448;
          }
        } else {
          result[14] += -0.12656376;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[14] += -0.14496861;
          } else {
            result[14] += -0.239285;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[14] += 0.11823701;
            } else {
              result[14] += -0.03503859;
            }
          } else {
            result[14] += -0.13609436;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
            result[14] += 0.13475497;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[14] += -0.005996661;
            } else {
              result[14] += 0.07728702;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.1628516;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[14] += 0.15869084;
            } else {
              result[14] += -0.026668647;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[14] += -0.06642729;
    } else {
      result[14] += -0.027107708;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[0] += 0.005034285;
            } else {
              result[0] += -0.11480696;
            }
          } else {
            result[0] += -0.115934655;
          }
        } else {
          result[0] += -0.14824753;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.018335836;
            } else {
              result[0] += -0.13545771;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[0] += -0.11279111;
            } else {
              result[0] += 0.100860275;
            }
          }
        } else {
          result[0] += -0.15670992;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[0] += -0.14168155;
          } else {
            result[0] += 0.20234975;
          }
        } else {
          result[0] += -0.14487505;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
          result[0] += -0.13377523;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += -0.117765;
            } else {
              result[0] += 0.030689493;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += 0.056518655;
            } else {
              result[0] += 0.24823485;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.14493114;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += -0.037681103;
            } else {
              result[1] += -0.15101919;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[1] += 0.1464587;
            } else {
              result[1] += 0.005774375;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
              result[1] += 0.0075079235;
            } else {
              result[1] += -0.0025378696;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
              result[1] += 0.020952119;
            } else {
              result[1] += 0.0024324586;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[1] += 0.043373734;
            } else {
              result[1] += 0.15567964;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.14704594;
            } else {
              result[1] += 0.10090177;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += -0.055354096;
            } else {
              result[1] += 0.13825823;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.119301744;
            } else {
              result[1] += 0.00787591;
            }
          }
        }
      }
    } else {
      result[1] += -0.14955361;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[1] += 0.033407163;
            } else {
              result[1] += -0.03355259;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.09963376;
            } else {
              result[1] += -0.06053572;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[1] += 0.15739118;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[1] += -0.058361888;
            } else {
              result[1] += 0.0055353697;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
              result[1] += -0.076533884;
            } else {
              result[1] += -0.15681067;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[1] += 0.059326537;
            } else {
              result[1] += -0.015481495;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.15492862;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
              result[1] += 0.07268428;
            } else {
              result[1] += -0.041055657;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
        result[1] += -0.14804626;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            result[1] += -0.0067829145;
          } else {
            result[1] += 0.14103009;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[1] += -0.013213738;
            } else {
              result[1] += -0.11465788;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
              result[1] += -0.052051157;
            } else {
              result[1] += 0.0892972;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[2] += -0.09708188;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.047241375;
          } else {
            result[2] += -0.023284944;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)11049)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[2] += 0.01187112;
            } else {
              result[2] += -0.06013377;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6956)) {
              result[2] += 0.13238959;
            } else {
              result[2] += 0.016311737;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)11816)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.047510285;
            } else {
              result[2] += -0.12456489;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
              result[2] += 0.01057616;
            } else {
              result[2] += 0.0024248622;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.030337743;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[2] += 0.09260168;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[2] += -0.030969974;
            } else {
              result[2] += 0.037539907;
            }
          }
        }
      } else {
        result[2] += 0.14754425;
      }
    }
  } else {
    result[2] += -0.14905138;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14895202;
    } else {
      result[3] += -0.043933723;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[3] += 0.12302437;
      } else {
        result[3] += -0.14563982;
      }
    } else {
      result[3] += 0.14031683;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)796)) {
      result[4] += -0.14684536;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[4] += 0.019184705;
          } else {
            result[4] += 0.10480382;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21042)) {
            result[4] += -0.083192945;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += 0.01185829;
            } else {
              result[4] += 0.07611489;
            }
          }
        }
      } else {
        result[4] += -0.09788443;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.14801537;
    } else {
      result[4] += -0.075251386;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[5] += 0.0028055226;
            } else {
              result[5] += -0.1422376;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[5] += -0.12346783;
            } else {
              result[5] += 0.047431055;
            }
          }
        } else {
          result[5] += -0.13959101;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[5] += -0.14463408;
        } else {
          result[5] += 0.07983262;
        }
      }
    } else {
      result[5] += -0.14446251;
    }
  } else {
    result[5] += -0.14765891;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[6] += 0.003250243;
          } else {
            result[6] += -0.10433084;
          }
        } else {
          result[6] += -0.11315454;
        }
      } else {
        result[6] += 0.11635028;
      }
    } else {
      result[6] += -0.12626234;
    }
  } else {
    result[6] += -0.14904173;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[7] += -0.00395148;
            } else {
              result[7] += 0.011208633;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += -0.035252392;
            } else {
              result[7] += 0.043583896;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[7] += -0.13872291;
          } else {
            result[7] += 0.0142571945;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += -0.15693495;
            } else {
              result[7] += -0.059938516;
            }
          } else {
            result[7] += 0.10114372;
          }
        } else {
          result[7] += 0.117023185;
        }
      }
    } else {
      result[7] += 0.14768994;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.11962329;
            } else {
              result[7] += -0.089331165;
            }
          } else {
            result[7] += 0.14856197;
          }
        } else {
          result[7] += -0.04150243;
        }
      } else {
        result[7] += -0.08063376;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
            result[7] += -0.14796455;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[7] += 0.01082512;
            } else {
              result[7] += -0.10413522;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[7] += -0.008397513;
            } else {
              result[7] += -0.13960879;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.18129565;
            } else {
              result[7] += -0.007038948;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            result[7] += -0.027521016;
          } else {
            result[7] += 0.07811578;
          }
        } else {
          result[7] += 0.1480636;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.00043036215;
            } else {
              result[8] += 0.06399919;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[8] += -0.1541416;
            } else {
              result[8] += 0.057258025;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += 0.17283753;
            } else {
              result[8] += 0.4664775;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.0023827455;
            } else {
              result[8] += -0.1121358;
            }
          }
        }
      } else {
        result[8] += -0.14938182;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[8] += 0.16133922;
      } else {
        result[8] += -0.09415387;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.15634769;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
          result[8] += 0.13598722;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.10959425;
          } else {
            result[8] += -0.04496973;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[8] += -0.14881122;
          } else {
            result[8] += -0.36169994;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.15003088;
            } else {
              result[8] += 0.010649911;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[8] += -0.12791352;
            } else {
              result[8] += 0.09789327;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[9] += 0.016600717;
            } else {
              result[9] += -0.130903;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[9] += -0.0002869104;
            } else {
              result[9] += -0.004875754;
            }
          }
        } else {
          result[9] += -0.13944498;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          result[9] += -0.14627557;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[9] += 0.13537182;
          } else {
            result[9] += -0.076002136;
          }
        }
      }
    } else {
      result[9] += -0.14417224;
    }
  } else {
    result[9] += -0.14784075;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[10] += 0.0041844975;
            } else {
              result[10] += -0.12490336;
            }
          } else {
            result[10] += -0.14798824;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[10] += 0.17336449;
            } else {
              result[10] += -0.0038035635;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
              result[10] += -0.05108546;
            } else {
              result[10] += 0.011609555;
            }
          }
        }
      } else {
        result[10] += -0.12996306;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.11444368;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32530)) {
              result[10] += 0.033179015;
            } else {
              result[10] += 0.16892718;
            }
          }
        } else {
          result[10] += -0.14536668;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.10143655;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[10] += -0.034975268;
            } else {
              result[10] += 0.09066254;
            }
          } else {
            result[10] += 0.1984396;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14685036;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        result[10] += 0.15968585;
      } else {
        result[10] += -0.11784792;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += 0.00095501804;
            } else {
              result[11] += 0.13424645;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.28221306;
            } else {
              result[11] += -0.00080903206;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[11] += 0.05508896;
            } else {
              result[11] += -0.09493025;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.14994831;
            } else {
              result[11] += 0.04307816;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
          result[11] += -0.14940222;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += 0.0007396419;
            } else {
              result[11] += 0.07882579;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.054786902;
            } else {
              result[11] += 0.0035414945;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[11] += 0.13776466;
            } else {
              result[11] += -0.08548713;
            }
          } else {
            result[11] += -0.1254279;
          }
        } else {
          result[11] += -0.13374119;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[11] += -0.51369375;
          } else {
            result[11] += -0.13479817;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[11] += -0.16634545;
            } else {
              result[11] += 0.13495542;
            }
          } else {
            result[11] += -0.13853332;
          }
        }
      }
    }
  } else {
    result[11] += -0.14703108;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[12] += 0.0033334417;
            } else {
              result[12] += -0.14881104;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.10383959;
            } else {
              result[12] += -0.13787413;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[12] += -0.14816639;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.13091742;
            } else {
              result[12] += -0.08054351;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[12] += -0.14352344;
            } else {
              result[12] += 0.051189635;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
              result[12] += -0.004216618;
            } else {
              result[12] += 0.11853516;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.12414798;
            } else {
              result[12] += -0.123319596;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[12] += -0.16643387;
            } else {
              result[12] += 0.1768323;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
              result[12] += 0.046630327;
            } else {
              result[12] += 0.022268524;
            }
          } else {
            result[12] += -0.12766792;
          }
        } else {
          result[12] += -0.1325209;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          result[12] += -0.14170985;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[12] += 0.10055008;
          } else {
            result[12] += -0.10139807;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)17327)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += -0.14826824;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.13596925;
            } else {
              result[12] += -0.101037316;
            }
          } else {
            result[12] += -0.14283791;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.12542607;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.13491297;
          } else {
            result[12] += -0.11360461;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        result[12] += 0.15119396;
      } else {
        result[12] += -0.13442932;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[13] += -0.022807823;
            } else {
              result[13] += -0.13579339;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[13] += 0.012865757;
            } else {
              result[13] += -0.008998286;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[13] += -0.054169886;
            } else {
              result[13] += -0.12949243;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.11958632;
            } else {
              result[13] += 0.012836783;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[13] += -0.14072764;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
              result[13] += -0.15376967;
            } else {
              result[13] += -0.0035739015;
            }
          }
        } else {
          result[13] += -0.13040149;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
              result[13] += 0.04596671;
            } else {
              result[13] += 0.18446228;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.072712645;
            } else {
              result[13] += 0.0075559802;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25066)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[13] += 0.33871463;
            } else {
              result[13] += -0.054073058;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += 0.010641225;
            } else {
              result[13] += 0.24100977;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.12847146;
            } else {
              result[13] += -0.006284157;
            }
          } else {
            result[13] += 0.40958345;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.06325024;
            } else {
              result[13] += -0.14899373;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += 0.022395454;
            } else {
              result[13] += 0.14879337;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.13898441;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[13] += 0.040826924;
        } else {
          result[13] += -0.14557645;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[13] += -0.03652203;
            } else {
              result[13] += 0.059102718;
            }
          } else {
            result[13] += 0.12756027;
          }
        } else {
          result[13] += -0.092105135;
        }
      }
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[14] += 0.0025745463;
            } else {
              result[14] += -0.11581892;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += 0.02429594;
            } else {
              result[14] += -0.029225107;
            }
          }
        } else {
          result[14] += -0.13979097;
        }
      } else {
        result[14] += -0.14077532;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[14] += -0.06010863;
      } else {
        result[14] += -0.023210537;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        result[14] += -0.14909461;
      } else {
        result[14] += 0.02153939;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.10965323;
            } else {
              result[14] += 0.116289735;
            }
          } else {
            result[14] += 0.14021201;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += -0.1733505;
            } else {
              result[14] += 0.055149224;
            }
          } else {
            result[14] += -0.14854269;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          result[14] += -0.141651;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
            result[14] += -0.087196335;
          } else {
            result[14] += 0.04552919;
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
              result[0] += 0.004472331;
            } else {
              result[0] += -0.022121213;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[0] += -0.044849303;
            } else {
              result[0] += 0.13599832;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
              result[0] += -0.15612115;
            } else {
              result[0] += 0.06541488;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.14074486;
            } else {
              result[0] += 0.062034387;
            }
          }
        }
      } else {
        result[0] += 0.108440705;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
            result[0] += -0.13602465;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[0] += 0.04200141;
            } else {
              result[0] += -0.07561289;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[0] += 0.07635688;
          } else {
            result[0] += -0.1069976;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23300)) {
            result[0] += 0.17499205;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += 0.017818352;
            } else {
              result[0] += 0.10486286;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[0] += -0.13520366;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.29549977;
            } else {
              result[0] += -0.12771821;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.14417402;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += -0.033240113;
            } else {
              result[1] += -0.15025103;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[1] += 0.1433628;
            } else {
              result[1] += 0.0052709063;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[1] += 0.0016704869;
            } else {
              result[1] += -0.0056651253;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[1] += 0.0237785;
            } else {
              result[1] += -0.004412758;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.067921534;
            } else {
              result[1] += -0.13861302;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.049108535;
            } else {
              result[1] += 0.01966771;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += 0.1511335;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
              result[1] += -0.05242584;
            } else {
              result[1] += -0.14854942;
            }
          }
        }
      }
    } else {
      result[1] += -0.14914992;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += 0.012889647;
            } else {
              result[1] += 0.12306794;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += -0.086925365;
            } else {
              result[1] += 0.09450458;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[1] += 0.17921178;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
              result[1] += 0.04375291;
            } else {
              result[1] += -0.09863388;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[1] += -0.07201847;
            } else {
              result[1] += -0.18682621;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.14170793;
            } else {
              result[1] += -0.017386848;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += 0.15154591;
            } else {
              result[1] += -0.06398174;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.20213678;
            } else {
              result[1] += -0.08603281;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
        result[1] += -0.14663677;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            result[1] += 0.00086832145;
          } else {
            result[1] += 0.13500613;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54299)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
              result[1] += -0.063350394;
            } else {
              result[1] += 0.036284383;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[1] += 0.13041745;
            } else {
              result[1] += -0.08844331;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            result[2] += -0.09091534;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.016170437;
            } else {
              result[2] += -0.04358367;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.042166382;
          } else {
            result[2] += -0.020729441;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1051)) {
          result[2] += 0.06475529;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3123)) {
              result[2] += 0.011458345;
            } else {
              result[2] += -0.03749122;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)4908)) {
              result[2] += 0.13610306;
            } else {
              result[2] += 0.0038751392;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[2] += -0.02658859;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[2] += 0.012269081;
            } else {
              result[2] += 0.10722849;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)25002)) {
              result[2] += -0.025940062;
            } else {
              result[2] += 0.03317947;
            }
          }
        }
      } else {
        result[2] += 0.14697064;
      }
    }
  } else {
    result[2] += -0.14884661;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.14873366;
    } else {
      result[3] += -0.040262952;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[3] += 0.11865397;
      } else {
        result[3] += -0.14473626;
      }
    } else {
      result[3] += 0.13734093;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)796)) {
      result[4] += -0.14614101;
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[4] += 0.053817347;
            } else {
              result[4] += -0.069712356;
            }
          } else {
            result[4] += 0.084914334;
          }
        } else {
          result[4] += -0.0005293245;
        }
      } else {
        result[4] += -0.089259885;
      }
    }
  } else {
    result[4] += 0.14326902;
  }
}

