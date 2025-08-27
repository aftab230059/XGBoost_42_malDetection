
#include "header.h"

void predict_unit15(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[0] += 0.0020684737;
            } else {
              result[0] += -0.02255295;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)522179)) {
              result[0] += -0.013496231;
            } else {
              result[0] += -0.10109842;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            result[0] += 0.11720809;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[0] += -0.086070605;
            } else {
              result[0] += 0.10832701;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            result[0] += 0.13063222;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[0] += -0.07081689;
            } else {
              result[0] += 0.08314133;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += -0.07660137;
            } else {
              result[0] += 0.037902962;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[0] += 0.0634791;
            } else {
              result[0] += -0.0005949983;
            }
          }
        }
      }
    } else {
      result[0] += -0.13322537;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[0] += 0.06479685;
        } else {
          result[0] += -0.09542448;
        }
      } else {
        result[0] += 0.3345519;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[0] += -0.11236229;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[0] += 0.08417186;
        } else {
          result[0] += -0.017766014;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.0007325854;
            } else {
              result[1] += 0.024983296;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += -0.03920556;
            } else {
              result[1] += -0.022037985;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.0075163213;
            } else {
              result[1] += -0.14698426;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.03094366;
            } else {
              result[1] += -0.00091494614;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.053117342;
            } else {
              result[1] += 0.013576952;
            }
          } else {
            result[1] += -0.17565142;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += -0.07396324;
            } else {
              result[1] += -0.010281175;
            }
          } else {
            result[1] += -0.15765671;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        result[1] += -0.15471646;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.02935681;
            } else {
              result[1] += -0.05602106;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.12701876;
            } else {
              result[1] += 0.0035791246;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.19647598;
            } else {
              result[1] += -0.07389211;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[1] += 0.0021896726;
            } else {
              result[1] += -0.06531132;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.116145924;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.00040826967;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += 0.03508821;
            } else {
              result[2] += 0.09499668;
            }
          } else {
            result[2] += -0.0037958922;
          }
        } else {
          result[2] += 0.10103333;
        }
      } else {
        result[2] += -0.020073973;
      }
    }
  } else {
    result[2] += -0.13622399;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.044095814;
    } else {
      result[3] += -0.13500725;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        result[3] += 0.0774575;
      } else {
        result[3] += -0.026338056;
      }
    } else {
      result[3] += -0.08810564;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.051053673;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)44042)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)41722)) {
              result[4] += -0.000827376;
            } else {
              result[4] += 0.021412909;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)46306)) {
              result[4] += -0.017712383;
            } else {
              result[4] += 9.745859e-05;
            }
          }
        }
      } else {
        result[4] += 0.106941424;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[4] += 0.10138966;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.06654832;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            result[4] += 0.084324375;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[4] += -0.032791108;
            } else {
              result[4] += 0.084644035;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.1363089;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[5] += 0.0005574364;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[5] += -0.13227123;
        } else {
          result[5] += 0.030709084;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[5] += 0.0062848926;
            } else {
              result[5] += 0.019261379;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[5] += -0.09031498;
            } else {
              result[5] += -0.016299253;
            }
          }
        } else {
          result[5] += 0.04681109;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          result[5] += -0.11075117;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
            result[5] += 0.17032838;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[5] += -0.10394829;
            } else {
              result[5] += 0.015118236;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.11091749;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.0005348556;
  } else {
    result[6] += -0.13622415;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[7] += -0.00014140186;
            } else {
              result[7] += -0.09458954;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[7] += 0.12103026;
            } else {
              result[7] += -0.08331784;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[7] += -0.12753974;
            } else {
              result[7] += 0.0030667684;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.041262455;
            } else {
              result[7] += 0.03239667;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
          result[7] += 0.11840642;
        } else {
          result[7] += 0.06508419;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
        result[7] += -0.15422752;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
          result[7] += 0.10739679;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[7] += -0.18301985;
            } else {
              result[7] += 0.09386463;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[7] += 0.031317614;
            } else {
              result[7] += -0.035382178;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[7] += 0.014242997;
    } else {
      result[7] += 0.1157458;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[8] += -0.018485287;
        } else {
          result[8] += -0.10870172;
        }
      } else {
        result[8] += -0.12505807;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.00091272127;
            } else {
              result[8] += 0.003933852;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.015933948;
            } else {
              result[8] += -0.049060456;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[8] += 0.04877836;
          } else {
            result[8] += 0.17696156;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[8] += -0.028860874;
            } else {
              result[8] += -0.08635713;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[8] += 0.057079338;
            } else {
              result[8] += -0.011050407;
            }
          }
        } else {
          result[8] += -0.09535701;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      result[8] += -0.13465261;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += 0.118992865;
        } else {
          result[8] += -0.11988995;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          result[8] += -0.1386105;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.092721954;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[8] += -0.11295164;
            } else {
              result[8] += 0.029115375;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[9] += 0.0005363305;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.12494161;
          } else {
            result[9] += 0.046676986;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += 0.004096839;
            } else {
              result[9] += 0.012804207;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[9] += 0.08138312;
            } else {
              result[9] += 0.011698783;
            }
          }
        } else {
          result[9] += 0.007754179;
        }
      }
    } else {
      result[9] += -0.09260673;
    }
  } else {
    result[9] += -0.1245373;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[10] += 0.0015056683;
            } else {
              result[10] += -0.008555171;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[10] += 0.06403204;
            } else {
              result[10] += -0.009328599;
            }
          }
        } else {
          result[10] += -0.11588602;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[10] += 0.06153753;
            } else {
              result[10] += -0.11954311;
            }
          } else {
            result[10] += 0.20135742;
          }
        } else {
          result[10] += -0.09549675;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.08868628;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.007350696;
            } else {
              result[10] += -0.079652116;
            }
          } else {
            result[10] += 0.035956997;
          }
        }
      } else {
        result[10] += -0.099394225;
      }
    }
  } else {
    result[10] += -0.11230759;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.00018214631;
            } else {
              result[11] += 0.14721678;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.16457352;
            } else {
              result[11] += 8.254241e-05;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.15654996;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.009949302;
            } else {
              result[11] += -0.054517902;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
          result[11] += -0.16826211;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[11] += 0.003442431;
            } else {
              result[11] += 0.09676022;
            }
          } else {
            result[11] += -0.10613387;
          }
        }
      }
    } else {
      result[11] += -0.1135942;
    }
  } else {
    result[11] += -0.1169337;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.0024456696;
            } else {
              result[12] += -0.14012879;
            }
          } else {
            result[12] += 0.14521855;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            result[12] += -0.1513595;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.10453036;
            } else {
              result[12] += -0.071772404;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += 0.0074958573;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += -0.1403279;
            } else {
              result[12] += 0.09589741;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[12] += -0.15088575;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += 0.00021079564;
            } else {
              result[12] += -0.07239347;
            }
          }
        }
      }
    } else {
      result[12] += -0.13694319;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.13212915;
            } else {
              result[12] += 0.034399945;
            }
          } else {
            result[12] += 0.12276182;
          }
        } else {
          result[12] += -0.038534958;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.1225891;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += 0.015369422;
            } else {
              result[12] += 0.04440017;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.047497984;
            } else {
              result[12] += 0.014922139;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        result[12] += -0.120174;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.092888206;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.115656875;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.10282051;
            } else {
              result[12] += 0.025175456;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
              result[13] += 0.0007563467;
            } else {
              result[13] += -0.08625419;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.013765814;
            } else {
              result[13] += 0.14193241;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.12826933;
            } else {
              result[13] += -0.0104547795;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)13367)) {
              result[13] += 0.10693939;
            } else {
              result[13] += -0.08467132;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
            result[13] += -0.123259;
          } else {
            result[13] += 0.069822654;
          }
        } else {
          result[13] += 0.13649158;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[13] += 0.11415567;
        } else {
          result[13] += -0.124081545;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          result[13] += 0.15846884;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[13] += -0.11783408;
          } else {
            result[13] += 0.099556156;
          }
        }
      }
    }
  } else {
    result[13] += -0.10794013;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 2.5964415e-05;
            } else {
              result[14] += 0.02243919;
            }
          } else {
            result[14] += -0.13336301;
          }
        } else {
          result[14] += 0.13481148;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[14] += -0.16080618;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += 0.048579015;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[14] += -0.13464676;
            } else {
              result[14] += 0.039721902;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += 0.16477144;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[14] += -0.08285922;
        } else {
          result[14] += 0.123876;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[14] += -0.14152052;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[14] += 0.098865;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[14] += -0.080148466;
            } else {
              result[14] += 0.08302925;
            }
          }
        } else {
          result[14] += -0.10249001;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[14] += -0.010962359;
            } else {
              result[14] += 0.12837133;
            }
          } else {
            result[14] += 0.23192449;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[14] += 0.06545714;
          } else {
            result[14] += -0.121762164;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[14] += -0.16281527;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[14] += 0.019328307;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.14360398;
            } else {
              result[14] += 0.005779975;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -7.254527e-05;
            } else {
              result[0] += -0.13279758;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[0] += 0.0035543048;
            } else {
              result[0] += 0.12645301;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[0] += -0.12899426;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.052811217;
            } else {
              result[0] += -0.07267176;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[0] += -0.09931285;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[0] += -0.0601601;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[0] += 0.021531966;
            } else {
              result[0] += 0.10557472;
            }
          }
        }
      }
    } else {
      result[0] += -0.12637575;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[0] += 0.061129607;
        } else {
          result[0] += -0.09108677;
        }
      } else {
        result[0] += 0.2908284;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += -0.110795945;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[0] += 0.05921407;
        } else {
          result[0] += 0.0025092377;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.00047331266;
            } else {
              result[1] += -0.0052635022;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.0010081386;
            } else {
              result[1] += 0.0805611;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.020803133;
            } else {
              result[1] += -0.15122487;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.0050570276;
            } else {
              result[1] += -0.14594077;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.0071266787;
            } else {
              result[1] += -0.114931695;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.072679535;
            } else {
              result[1] += 0.022299884;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += -0.11490372;
            } else {
              result[1] += 0.086654834;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[1] += 0.1326524;
            } else {
              result[1] += -0.0029772713;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[1] += 0.10321361;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += -0.055137333;
            } else {
              result[1] += -0.041490503;
            }
          } else {
            result[1] += -0.101638526;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += -0.023712277;
            } else {
              result[1] += 0.012538877;
            }
          } else {
            result[1] += -0.10142182;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.039254185;
            } else {
              result[1] += 0.004823923;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.05295888;
            } else {
              result[1] += -0.012036836;
            }
          }
        } else {
          result[1] += -0.11900879;
        }
      } else {
        result[1] += -0.13828012;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.008480678;
            } else {
              result[1] += -0.14805384;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.019493487;
            } else {
              result[1] += -0.0073923287;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.009894655;
            } else {
              result[1] += -0.15038207;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[1] += -0.03403398;
            } else {
              result[1] += 0.111396685;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
            result[1] += -0.13170417;
          } else {
            result[1] += -0.31487754;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[1] += -0.015156954;
            } else {
              result[1] += 0.12756678;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[1] += -0.29096204;
            } else {
              result[1] += 0.05620462;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.00037060387;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[2] += 0.09567112;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[2] += -0.008614989;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
            result[2] += 0.09522311;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
              result[2] += -0.0801274;
            } else {
              result[2] += 0.04189675;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.13434975;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.040319197;
    } else {
      result[3] += -0.1330342;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        result[3] += 0.071161866;
      } else {
        result[3] += -0.024393806;
      }
    } else {
      result[3] += -0.08403354;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.047042098;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[4] += -0.0017093857;
            } else {
              result[4] += 0.11125306;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 6.4746215e-05;
            } else {
              result[4] += -0.004329342;
            }
          }
        }
      } else {
        result[4] += 0.10307003;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[4] += 0.09002461;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.06125932;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            result[4] += 0.07914537;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[4] += -0.030158442;
            } else {
              result[4] += 0.07796482;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.1344437;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[5] += 0.00050059427;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[5] += -0.12996504;
        } else {
          result[5] += 0.024975827;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        result[5] += 0.016552052;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[5] += -0.10523672;
          } else {
            result[5] += -0.029323483;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[5] += 0.038995538;
            } else {
              result[5] += 0.13667962;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[5] += -0.04722318;
            } else {
              result[5] += 0.015610325;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.10717534;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00047867894;
  } else {
    result[6] += -0.13434993;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += 0.00034668946;
            } else {
              result[7] += -0.015530491;
            }
          } else {
            result[7] += 0.14711772;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[7] += -0.14635482;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
              result[7] += 0.0064803506;
            } else {
              result[7] += -0.014597751;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[7] += 0.021806661;
            } else {
              result[7] += -0.007793665;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
              result[7] += 0.06938289;
            } else {
              result[7] += 0.04387924;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
              result[7] += 0.0062523317;
            } else {
              result[7] += -0.066079505;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[7] += 0.0123897735;
            } else {
              result[7] += -0.0013596312;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.010603873;
            } else {
              result[7] += 0.08385721;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
              result[7] += -0.14398019;
            } else {
              result[7] += -0.0026270123;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[7] += 0.14679515;
          } else {
            result[7] += 0.04637312;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[7] += 0.09909643;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += -0.071823336;
            } else {
              result[7] += -0.16213897;
            }
          } else {
            result[7] += 0.0044232546;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[7] += 0.14546241;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.019088332;
            } else {
              result[7] += 0.13789289;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[7] += -0.13769953;
            } else {
              result[7] += -0.027134484;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          result[7] += -0.27440935;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[7] += 0.0021563745;
            } else {
              result[7] += -0.039986428;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[7] += 0.041577633;
            } else {
              result[7] += -0.013893433;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[7] += 0.14353175;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.11594482;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[7] += 0.029430477;
          } else {
            result[7] += 0.10104071;
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[8] += 0.00019392237;
            } else {
              result[8] += -0.030910982;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[8] += 0.029406155;
            } else {
              result[8] += 0.0064202705;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[8] += -0.034272168;
          } else {
            result[8] += -0.13224344;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
              result[8] += 0.018414207;
            } else {
              result[8] += 0.041856654;
            }
          } else {
            result[8] += -0.09173402;
          }
        } else {
          result[8] += 0.22542764;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += -0.020856496;
            } else {
              result[8] += -0.12427018;
            }
          } else {
            result[8] += 0.118203886;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            result[8] += -0.10098151;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[8] += 0.06725777;
            } else {
              result[8] += -0.03122358;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
          result[8] += 0.042101614;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += -0.010345718;
            } else {
              result[8] += -0.1307362;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[8] += 0.08962546;
            } else {
              result[8] += -0.0788854;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.14669958;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[8] += -0.18186115;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          result[8] += 0.115968324;
        } else {
          result[8] += -0.106946126;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[9] += 0.00047110565;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.12215897;
          } else {
            result[9] += 0.04400412;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[9] += 0.003539067;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[9] += 0.010612743;
            } else {
              result[9] += 0.07844847;
            }
          } else {
            result[9] += 0.009498985;
          }
        }
      }
    } else {
      result[9] += -0.08834934;
    }
  } else {
    result[9] += -0.12172721;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[10] += 0.0015554865;
            } else {
              result[10] += -0.10527669;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.11073757;
            } else {
              result[10] += -0.0013492067;
            }
          }
        } else {
          result[10] += -0.11192082;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[10] += 0.05612224;
            } else {
              result[10] += -0.11504094;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += 0.045681003;
            } else {
              result[10] += 0.18085209;
            }
          }
        } else {
          result[10] += -0.09214389;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.08534254;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.0051893718;
            } else {
              result[10] += -0.076704964;
            }
          } else {
            result[10] += 0.026406331;
          }
        }
      } else {
        result[10] += -0.09533356;
      }
    }
  } else {
    result[10] += -0.10903682;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += -0.0019420901;
            } else {
              result[11] += -0.15404834;
            }
          } else {
            result[11] += 0.03849338;
          }
        } else {
          result[11] += -0.08306338;
        }
      } else {
        result[11] += -0.14050372;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.0032921934;
            } else {
              result[11] += -0.041412815;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.03641472;
            } else {
              result[11] += 0.12777886;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += -0.022930501;
            } else {
              result[11] += 0.14080232;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.01551759;
            } else {
              result[11] += -0.0017224653;
            }
          }
        }
      } else {
        result[11] += -0.11074691;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.14657764;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += 0.015249581;
            } else {
              result[11] += -0.018171636;
            }
          } else {
            result[11] += 0.019856784;
          }
        } else {
          result[11] += -0.11383115;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[11] += -0.015077512;
            } else {
              result[11] += -0.05268811;
            }
          } else {
            result[11] += -0.10838958;
          }
        } else {
          result[11] += 0.08881767;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += -0.00056360837;
            } else {
              result[12] += 0.11292174;
            }
          } else {
            result[12] += -0.13475002;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.035413634;
            } else {
              result[12] += 0.13452232;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += -0.10680729;
            } else {
              result[12] += 0.018704494;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.067682244;
        } else {
          result[12] += -0.12830721;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[12] += 0.017375432;
        } else {
          result[12] += 0.12283537;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.09907614;
        } else {
          result[12] += 0.09956849;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      result[12] += -0.13371335;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[12] += 0.10283559;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.119280756;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.005187692;
            } else {
              result[12] += -0.102015756;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[12] += 0.08962862;
            } else {
              result[12] += 0.02607978;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.0036006137;
            } else {
              result[13] += -0.06590963;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.054110624;
            } else {
              result[13] += 0.008300946;
            }
          }
        } else {
          result[13] += 0.12745425;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1263)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.0909411;
            } else {
              result[13] += -0.1484895;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[13] += -0.1303802;
            } else {
              result[13] += 0.0580297;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            result[13] += 0.05730227;
          } else {
            result[13] += -0.101371385;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.04305554;
            } else {
              result[13] += -0.06770995;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.023346815;
            } else {
              result[13] += 0.01561896;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
              result[13] += -0.035215747;
            } else {
              result[13] += 0.0036231861;
            }
          } else {
            result[13] += 0.14553852;
          }
        }
      } else {
        result[13] += 0.12489345;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        result[13] += -0.040961776;
      } else {
        result[13] += -0.13063475;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        result[13] += 0.20361423;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[13] += -0.10480465;
        } else {
          result[13] += 0.0009411157;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 2.4749976e-05;
            } else {
              result[14] += 0.021661067;
            }
          } else {
            result[14] += -0.13088173;
          }
        } else {
          result[14] += 0.12662111;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[14] += -0.1487314;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += 0.04161744;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[14] += -0.13255833;
            } else {
              result[14] += 0.032340463;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += 0.15854555;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[14] += -0.07940427;
        } else {
          result[14] += 0.11935662;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[14] += -0.13923734;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            result[14] += 0.10082431;
          } else {
            result[14] += -0.07745562;
          }
        } else {
          result[14] += -0.099196546;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[14] += -0.006623397;
            } else {
              result[14] += 0.12515669;
            }
          } else {
            result[14] += 0.20041348;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[14] += 0.0580304;
          } else {
            result[14] += -0.118420325;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[14] += -0.15440562;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.011445755;
            } else {
              result[14] += -0.03809963;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[14] += 0.18328854;
            } else {
              result[14] += -0.10182853;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.00077144377;
            } else {
              result[0] += 0.003219404;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.12610854;
            } else {
              result[0] += -0.0137138255;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[0] += -0.09560595;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[0] += 0.0167344;
            } else {
              result[0] += 0.095664196;
            }
          }
        }
      } else {
        result[0] += 0.08122147;
      }
    } else {
      result[0] += -0.11954554;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[0] += 0.05631264;
        } else {
          result[0] += -0.08550126;
        }
      } else {
        result[0] += 0.24238762;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[0] += -0.105779536;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[0] += 0.07809635;
        } else {
          result[0] += -0.0109154545;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[1] += -0.038134743;
      } else {
        result[1] += -0.094184086;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[1] += -0.000894768;
            } else {
              result[1] += 0.0044145077;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.020221151;
            } else {
              result[1] += -0.08992478;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.048881374;
            } else {
              result[1] += 0.002389617;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += -0.014294521;
            } else {
              result[1] += 0.0081341695;
            }
          }
        }
      } else {
        result[1] += -0.10889515;
      }
    }
  } else {
    result[1] += 0.10361585;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.00038437545;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[2] += 0.09431871;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[2] += -0.007005362;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += 0.017112771;
            } else {
              result[2] += 0.09332478;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
              result[2] += -0.0009523988;
            } else {
              result[2] += 0.07774354;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.13218026;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.03677111;
    } else {
      result[3] += -0.13076077;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        result[3] += 0.06680997;
      } else {
        result[3] += -0.021238819;
      }
    } else {
      result[3] += -0.079169124;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.041203693;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[4] += -0.0014183116;
            } else {
              result[4] += 0.10778396;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.006274874;
            } else {
              result[4] += -0.00019005935;
            }
          }
        }
      } else {
        result[4] += 0.09948384;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[4] += 0.08220625;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.058118545;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[4] += 0.023226585;
            } else {
              result[4] += 0.12036792;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[4] += -0.08187096;
            } else {
              result[4] += 0.072344825;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.13228402;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[5] += 0.0004896467;
        } else {
          result[5] += -0.036853533;
        }
      } else {
        result[5] += -0.12298703;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        result[5] += 0.016182294;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[5] += -0.10193151;
          } else {
            result[5] += -0.026950376;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[5] += 0.034528628;
            } else {
              result[5] += 0.11306351;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[5] += -0.04326333;
            } else {
              result[5] += 0.015604745;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.10290253;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00047249856;
  } else {
    result[6] += -0.13218045;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += 3.454452e-05;
            } else {
              result[7] += 0.0897799;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[7] += -0.092993505;
            } else {
              result[7] += -0.009558771;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
            result[7] += -0.13230097;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
              result[7] += 0.09666783;
            } else {
              result[7] += -0.023946375;
            }
          }
        }
      } else {
        result[7] += -0.10971582;
      }
    } else {
      result[7] += 0.11024137;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[7] += 0.005352474;
    } else {
      result[7] += 0.10836931;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.0023008604;
            } else {
              result[8] += -0.0039719027;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.10306502;
            } else {
              result[8] += 0.0019765685;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[8] += -0.12610449;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[8] += -0.022901058;
            } else {
              result[8] += -0.00052363076;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[8] += -0.065167345;
            } else {
              result[8] += 0.05942234;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)472)) {
              result[8] += -0.14220467;
            } else {
              result[8] += 0.078852236;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            result[8] += 0.13221784;
          } else {
            result[8] += -0.12245456;
          }
        }
      }
    } else {
      result[8] += -0.122014776;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.14264336;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.077664696;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[8] += 0.12730446;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[8] += 0.09731578;
            } else {
              result[8] += -0.013803597;
            }
          }
        }
      } else {
        result[8] += -0.10246443;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[9] += 0.00046334675;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.119118005;
          } else {
            result[9] += 0.04308763;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[9] += 0.0045186346;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[9] += 0.011421761;
            } else {
              result[9] += 0.07582696;
            }
          } else {
            result[9] += 0.009261542;
          }
        }
      }
    } else {
      result[9] += -0.08440701;
    }
  } else {
    result[9] += -0.11846766;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[10] += 5.5087618e-05;
        } else {
          result[10] += -0.13012232;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += 0.005755365;
            } else {
              result[10] += 0.02395365;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
              result[10] += -0.07576211;
            } else {
              result[10] += 0.0030488498;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.10915235;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.07710304;
            } else {
              result[10] += -0.0010558456;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.08815186;
          } else {
            result[10] += 0.07009303;
          }
        } else {
          result[10] += -0.09668914;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.028231112;
          } else {
            result[10] += 0.015742214;
          }
        } else {
          result[10] += 0.04644789;
        }
      }
    }
  } else {
    result[10] += -0.10510478;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.0014093233;
            } else {
              result[11] += -0.13730158;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.0018802623;
            } else {
              result[11] += -0.007209094;
            }
          }
        } else {
          result[11] += -0.10692405;
        }
      } else {
        result[11] += -0.10965959;
      }
    } else {
      result[11] += -0.11167921;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.14588489;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[11] += 0.010751554;
            } else {
              result[11] += -0.14662357;
            }
          } else {
            result[11] += 0.025972784;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.016224261;
            } else {
              result[11] += -0.0018558757;
            }
          } else {
            result[11] += 0.086618945;
          }
        }
      } else {
        result[11] += -0.108690806;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[12] += -0.015475992;
      } else {
        result[12] += -0.09262605;
      }
    } else {
      result[12] += -0.109558724;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.00220456;
            } else {
              result[12] += 0.0039972584;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[12] += 0.07356054;
            } else {
              result[12] += -0.039816964;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            result[12] += -0.13395;
          } else {
            result[12] += 0.028995648;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[12] += -0.14038824;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.021829477;
            } else {
              result[12] += 0.08500437;
            }
          } else {
            result[12] += -0.09176633;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[12] += -0.14593151;
        } else {
          result[12] += -0.00029233663;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[12] += -0.11003638;
            } else {
              result[12] += 0.060280137;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += 0.09525741;
            } else {
              result[12] += 0.005029196;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.004997036;
            } else {
              result[12] += -0.067764826;
            }
          } else {
            result[12] += -0.018251887;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[13] += -0.011102356;
            } else {
              result[13] += -0.0034616762;
            }
          } else {
            result[13] += -0.09486587;
          }
        } else {
          result[13] += -0.102723025;
        }
      } else {
        result[13] += -0.110783495;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.006151139;
            } else {
              result[13] += -0.027296107;
            }
          } else {
            result[13] += -0.14030816;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.2985464;
            } else {
              result[13] += 0.097030066;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[13] += 0.04573119;
            } else {
              result[13] += -0.1250203;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14882457;
            } else {
              result[13] += -0.008607711;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.15804434;
            } else {
              result[13] += -0.10999302;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.014794919;
            } else {
              result[13] += -0.013165419;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.11913317;
            } else {
              result[13] += 0.0033644256;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[13] += -0.11205486;
    } else {
      result[13] += -0.0077586495;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[14] += 0.003674329;
          } else {
            result[14] += -0.09282758;
          }
        } else {
          result[14] += -0.09552803;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += -0.0037903697;
            } else {
              result[14] += -0.037205745;
            }
          } else {
            result[14] += -0.13585362;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += 0.00052599324;
            } else {
              result[14] += 0.018365726;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[14] += -0.0057239886;
            } else {
              result[14] += 0.011824154;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.0028502392;
            } else {
              result[14] += 0.11955228;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += -0.13673268;
            } else {
              result[14] += -0.010531115;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.15248348;
            } else {
              result[14] += 0.07232843;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.12894826;
            } else {
              result[14] += 0.091986194;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[14] += -0.12372075;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.008519656;
            } else {
              result[14] += 0.047765277;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.056648638;
            } else {
              result[14] += -0.06108793;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        result[14] += -0.0139865;
      } else {
        result[14] += -0.12251682;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          result[14] += -0.09760318;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[14] += -0.012898361;
            } else {
              result[14] += 0.047495984;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.08755086;
            } else {
              result[14] += -0.017981322;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[14] += 0.10565814;
        } else {
          result[14] += 0.0057494277;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.0006375852;
            } else {
              result[0] += 0.0032170955;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.11694439;
            } else {
              result[0] += 0.0017728321;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
            result[0] += 0.11069805;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[0] += 0.087117106;
            } else {
              result[0] += -0.040183414;
            }
          }
        }
      } else {
        result[0] += 0.07759693;
      }
    } else {
      result[0] += -0.11348143;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[0] += 0.05131539;
        } else {
          result[0] += -0.081790365;
        }
      } else {
        result[0] += 0.22671397;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[0] += -0.10222042;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[0] += 0.0732952;
        } else {
          result[0] += -0.009417476;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += -0.00020771321;
            } else {
              result[1] += -0.13942978;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[1] += 0.14397782;
            } else {
              result[1] += 0.004093095;
            }
          }
        } else {
          result[1] += -0.11870564;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[1] += -0.13575558;
          } else {
            result[1] += 0.0154152075;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.20660578;
            } else {
              result[1] += -0.01960787;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += -0.10314254;
            } else {
              result[1] += 0.0034698602;
            }
          }
        }
      }
    } else {
      result[1] += 0.09843374;
    }
  } else {
    result[1] += -0.110178776;
  }
}

