
#include "header.h"

void predict_unit31(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)37885)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)36088)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)32565)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)21231)) {
              result[2] += -0.0012391512;
            } else {
              result[2] += 0.0070331367;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)33084)) {
              result[2] += -0.054382164;
            } else {
              result[2] += -0.0050890883;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)36349)) {
            result[2] += 0.11557398;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)37102)) {
              result[2] += -0.03388828;
            } else {
              result[2] += 0.039036736;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)41406)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.023506239;
            } else {
              result[2] += 0.03610435;
            }
          } else {
            result[2] += -0.126572;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41951)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)41676)) {
              result[2] += 0.0066747586;
            } else {
              result[2] += 0.10654008;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)42448)) {
              result[2] += -0.0355846;
            } else {
              result[2] += 0.0008833798;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[2] += 0.018492723;
      } else {
        result[2] += 0.005148042;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.029454717;
        } else {
          result[2] += -0.016565016;
        }
      } else {
        result[2] += 0.032175194;
      }
    } else {
      result[2] += -0.0022671418;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += 0.0026856516;
    } else {
      result[3] += 0.016494717;
    }
  } else {
    result[3] += -0.020752346;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[4] += -0.006324556;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.027258612;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[4] += -0.013480138;
          } else {
            result[4] += 0.018132996;
          }
        }
      }
    } else {
      result[4] += -0.0173926;
    }
  } else {
    result[4] += 0.029234318;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
              result[5] += 0.00024691556;
            } else {
              result[5] += 0.062356696;
            }
          } else {
            result[5] += -0.09356332;
          }
        } else {
          result[5] += 0.10765472;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[5] += -0.079494886;
            } else {
              result[5] += 0.036106598;
            }
          } else {
            result[5] += 0.046168417;
          }
        } else {
          result[5] += -0.07789631;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[5] += -0.02373921;
        } else {
          result[5] += 0.14479579;
        }
      } else {
        result[5] += -0.051047657;
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        result[5] += 0.059299093;
      } else {
        result[5] += -0.032874107;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
        result[5] += -0.08103728;
      } else {
        result[5] += -0.018184498;
      }
    }
  }
  result[6] += -2.1588981e-05;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
              result[7] += -0.00039061092;
            } else {
              result[7] += -0.11732906;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
              result[7] += -0.11745828;
            } else {
              result[7] += 0.28736803;
            }
          }
        } else {
          result[7] += 0.14531384;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
              result[7] += -0.06960395;
            } else {
              result[7] += -0.1273017;
            }
          } else {
            result[7] += -0.15497267;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
              result[7] += -0.18431059;
            } else {
              result[7] += -0.011120964;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[7] += 0.043425784;
            } else {
              result[7] += -0.005969657;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        result[7] += 0.15348805;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
          result[7] += -0.0908807;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[7] += 0.0048927204;
            } else {
              result[7] += 0.08082935;
            }
          } else {
            result[7] += -0.08961957;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2339238656)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28120)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[7] += 0.012031846;
            } else {
              result[7] += -0.07212373;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
              result[7] += 0.05535479;
            } else {
              result[7] += -0.026134072;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2454180352)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
              result[7] += -0.26334277;
            } else {
              result[7] += -0.065584995;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[7] += 0.016891314;
            } else {
              result[7] += -0.05260669;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23300)) {
              result[7] += 0.049333382;
            } else {
              result[7] += -0.19024767;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[7] += 0.11128581;
            } else {
              result[7] += 0.025024815;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1885973376)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
              result[7] += -0.060572945;
            } else {
              result[7] += -0.43568528;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[7] += 0.121291354;
            } else {
              result[7] += 0.008651235;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54003)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2722185728)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
              result[7] += -0.0757233;
            } else {
              result[7] += -0.34847715;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[7] += -0.00162532;
            } else {
              result[7] += 0.09564652;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
              result[7] += 0.018566268;
            } else {
              result[7] += -0.3469516;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
              result[7] += 0.068315916;
            } else {
              result[7] += -0.0407374;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54154)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14362)) {
              result[7] += -0.18722059;
            } else {
              result[7] += 0.005016369;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
              result[7] += 0.13402654;
            } else {
              result[7] += -0.09112889;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
              result[7] += 0.007274456;
            } else {
              result[7] += -0.0017678825;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
              result[7] += -0.0566171;
            } else {
              result[7] += 0.10324939;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[8] += -9.718724e-05;
            } else {
              result[8] += -0.10187227;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
              result[8] += -0.0733505;
            } else {
              result[8] += 0.08817308;
            }
          }
        } else {
          result[8] += -0.13311237;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
              result[8] += 0.116682984;
            } else {
              result[8] += -0.0374131;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[8] += -0.03938152;
            } else {
              result[8] += 0.08394435;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            result[8] += -0.15097761;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.018627578;
            } else {
              result[8] += -0.0029640235;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[8] += -0.11490341;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[8] += 0.04896191;
            } else {
              result[8] += -0.057436116;
            }
          } else {
            result[8] += 0.0795046;
          }
        } else {
          result[8] += -0.07538769;
        }
      }
    }
  } else {
    result[8] += -0.07903998;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
              result[9] += 0.0001253741;
            } else {
              result[9] += -0.032905295;
            }
          } else {
            result[9] += 0.08923115;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[9] += -0.18279271;
            } else {
              result[9] += -0.0050415453;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[9] += 0.09151227;
            } else {
              result[9] += -0.008007787;
            }
          }
        }
      } else {
        result[9] += 0.086267635;
      }
    } else {
      result[9] += -0.21860528;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
      result[9] += 0.093169644;
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[9] += -0.06380581;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
          result[9] += -0.046520647;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
            result[9] += 0.086768955;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += -0.031363703;
            } else {
              result[9] += 0.017321229;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[10] += -0.00022815731;
            } else {
              result[10] += -0.04406735;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
              result[10] += 0.10251381;
            } else {
              result[10] += -0.048214678;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
              result[10] += -0.109669454;
            } else {
              result[10] += -0.016090719;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29424)) {
              result[10] += -0.05682889;
            } else {
              result[10] += 0.04969723;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[10] += -0.0026814546;
            } else {
              result[10] += 0.036770936;
            }
          } else {
            result[10] += 0.11650265;
          }
        } else {
          result[10] += -0.012046082;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[10] += -0.05168446;
            } else {
              result[10] += 0.0974156;
            }
          } else {
            result[10] += -0.109260514;
          }
        } else {
          result[10] += 0.07138902;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
          result[10] += -0.11838385;
        } else {
          result[10] += 0.012742061;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
              result[10] += 0.0028898676;
            } else {
              result[10] += -0.11239755;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
              result[10] += 0.05583109;
            } else {
              result[10] += 0.010031968;
            }
          }
        } else {
          result[10] += -0.13849634;
        }
      } else {
        result[10] += 0.063730255;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[10] += -0.025197068;
            } else {
              result[10] += -0.07508288;
            }
          } else {
            result[10] += 0.06943301;
          }
        } else {
          result[10] += -0.12926988;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
            result[10] += -0.0021768394;
          } else {
            result[10] += 0.102990665;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
            result[10] += -0.13183905;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[10] += 0.048661336;
            } else {
              result[10] += 0.0016325879;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[11] += 0.0004419719;
            } else {
              result[11] += -0.022779081;
            }
          } else {
            result[11] += -0.14549495;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[11] += -0.005329643;
            } else {
              result[11] += 0.030196037;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[11] += -0.094786935;
            } else {
              result[11] += 0.04183744;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
            result[11] += 0.05275291;
          } else {
            result[11] += 0.29306296;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += -0.015613641;
            } else {
              result[11] += 0.002283279;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += 0.20228857;
            } else {
              result[11] += 0.01651359;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[11] += -0.14355531;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28379)) {
              result[11] += 0.15180698;
            } else {
              result[11] += -0.016661478;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
              result[11] += -0.15435906;
            } else {
              result[11] += -0.009241599;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            result[11] += 0.0042744377;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
              result[11] += -0.12759623;
            } else {
              result[11] += -0.0147403795;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
            result[11] += -0.0329179;
          } else {
            result[11] += 0.08478406;
          }
        } else {
          result[11] += -0.21678267;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[11] += -0.0013828651;
            } else {
              result[11] += 0.069918506;
            }
          } else {
            result[11] += 0.15956031;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
            result[11] += -0.21849933;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
              result[11] += 0.104000635;
            } else {
              result[11] += 0.013578637;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1334709248)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.026765326;
            } else {
              result[11] += 0.05616936;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += 0.0575916;
            } else {
              result[11] += 0.16640645;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[11] += 0.106761955;
            } else {
              result[11] += -0.16154182;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[11] += -0.045574006;
            } else {
              result[11] += 0.0001607266;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.15108086;
            } else {
              result[11] += -0.015044647;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.08907508;
            } else {
              result[11] += 0.0015418708;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58671)) {
              result[11] += 0.0058509945;
            } else {
              result[11] += -0.02931549;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[11] += 0.09755962;
            } else {
              result[11] += 0.009647731;
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
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[12] += 0.00062727527;
            } else {
              result[12] += -0.09007563;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
              result[12] += 0.071922444;
            } else {
              result[12] += -0.028012166;
            }
          }
        } else {
          result[12] += -0.075066015;
        }
      } else {
        result[12] += -0.083410114;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            result[12] += 0.023988433;
          } else {
            result[12] += -0.09694291;
          }
        } else {
          result[12] += 0.0433466;
        }
      } else {
        result[12] += -0.11706386;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
      result[12] += -0.12897576;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1334709248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
              result[12] += -0.0044161854;
            } else {
              result[12] += -0.066601135;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1353621248)) {
              result[12] += 0.13819845;
            } else {
              result[12] += -0.0006630482;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[12] += -0.10121604;
            } else {
              result[12] += 0.02931392;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[12] += -0.06953332;
            } else {
              result[12] += 0.095011674;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
              result[12] += -0.13228785;
            } else {
              result[12] += 0.017380632;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
              result[12] += 0.01640352;
            } else {
              result[12] += 0.095972575;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
              result[12] += -0.0040635327;
            } else {
              result[12] += 0.04203499;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[12] += -0.106138885;
            } else {
              result[12] += -0.015913596;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[13] += 1.867487e-05;
            } else {
              result[13] += 0.04476089;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[13] += -0.044394154;
            } else {
              result[13] += 0.07207758;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.07994072;
            } else {
              result[13] += 0.02056557;
            }
          } else {
            result[13] += 0.0037114688;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[13] += -0.048646454;
        } else {
          result[13] += 0.017667225;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
        result[13] += -0.0058353925;
      } else {
        result[13] += -0.10996563;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
      result[13] += 0.1235435;
    } else {
      result[13] += -0.032699835;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[14] += 5.2644795e-05;
            } else {
              result[14] += -0.0070049902;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[14] += 0.06123556;
            } else {
              result[14] += -0.10718157;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2722185728)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
              result[14] += -0.010940051;
            } else {
              result[14] += -0.18892436;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
              result[14] += 0.106455594;
            } else {
              result[14] += 0.0005277923;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[14] += -0.104090914;
        } else {
          result[14] += 0.03285008;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)29679)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)26842)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25824)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25575)) {
              result[14] += 0.0037902792;
            } else {
              result[14] += 0.16786279;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
              result[14] += 0.06004825;
            } else {
              result[14] += -0.079964206;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
              result[14] += 0.028350964;
            } else {
              result[14] += 0.16710792;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
              result[14] += -0.116451204;
            } else {
              result[14] += 0.1290755;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
              result[14] += -0.004890694;
            } else {
              result[14] += -0.08238271;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34288)) {
              result[14] += -0.064774394;
            } else {
              result[14] += 0.08580658;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[14] += -0.1458334;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
              result[14] += 0.07203521;
            } else {
              result[14] += 0.0063687316;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[14] += -0.10410765;
      } else {
        result[14] += 0.0024539472;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
            result[14] += 0.011984111;
          } else {
            result[14] += 0.04224852;
          }
        } else {
          result[14] += -0.016220078;
        }
      } else {
        result[14] += -0.039234467;
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
              result[0] += -0.00031535391;
            } else {
              result[0] += 0.029604515;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
              result[0] += -0.05236932;
            } else {
              result[0] += -0.012532217;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
            result[0] += 0.050827023;
          } else {
            result[0] += -0.006259894;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
          result[0] += -0.080690674;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11810)) {
            result[0] += 0.0036322915;
          } else {
            result[0] += -0.029078182;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1205016832)) {
        result[0] += -0.10161511;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
          result[0] += 0.041488025;
        } else {
          result[0] += -0.042492278;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
        result[0] += 0.008486399;
      } else {
        result[0] += 0.13260426;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[0] += -0.08185171;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[0] += -0.04664122;
            } else {
              result[0] += 0.014338482;
            }
          } else {
            result[0] += -0.08418206;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14362)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
              result[0] += 0.023214405;
            } else {
              result[0] += 0.121113665;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
              result[0] += -0.031293306;
            } else {
              result[0] += 0.003059222;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51470)) {
              result[1] += 0.00012780918;
            } else {
              result[1] += 0.015781863;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
              result[1] += 0.0086937575;
            } else {
              result[1] += -0.064274244;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
              result[1] += 0.015524725;
            } else {
              result[1] += -0.04846823;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[1] += 0.14284207;
            } else {
              result[1] += 0.02154285;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3151783168)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
              result[1] += -0.02522671;
            } else {
              result[1] += -0.13491058;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
              result[1] += 0.2063366;
            } else {
              result[1] += 0.006511589;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[1] += 0.052995358;
            } else {
              result[1] += -0.14632903;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
              result[1] += -0.015426983;
            } else {
              result[1] += 0.000113136084;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
              result[1] += 0.010665543;
            } else {
              result[1] += -0.1269931;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
              result[1] += -0.0074282754;
            } else {
              result[1] += 0.24168588;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1205016832)) {
              result[1] += -0.09636691;
            } else {
              result[1] += 0.042905014;
            }
          } else {
            result[1] += -0.13314146;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[1] += 0.2691751;
            } else {
              result[1] += 0.0044493685;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2476456192)) {
              result[1] += -0.002874329;
            } else {
              result[1] += 0.19123079;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
            result[1] += -0.11715417;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += -0.10437735;
            } else {
              result[1] += 0.04158456;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
              result[1] += -0.018795054;
            } else {
              result[1] += -0.09734274;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
              result[1] += 0.15638098;
            } else {
              result[1] += -0.013537609;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
              result[1] += 0.00068307394;
            } else {
              result[1] += -0.08450619;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.047645852;
            } else {
              result[1] += -0.11969402;
            }
          }
        }
      } else {
        result[1] += 0.10543748;
      }
    } else {
      result[1] += -0.13405935;
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64235)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)63462)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)62485)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)56653)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)55338)) {
              result[2] += 0.0009855637;
            } else {
              result[2] += -0.02453874;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.0028151078;
            } else {
              result[2] += 0.015932325;
            }
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)62739)) {
              result[2] += -0.05919454;
            } else {
              result[2] += 0.03796934;
            }
          } else {
            result[2] += -0.06578455;
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
            result[2] += 0.1045234;
          } else {
            result[2] += -0.009508191;
          }
        } else {
          result[2] += -0.001143917;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[2] += -0.019916771;
      } else {
        result[2] += 0.00489971;
      }
    }
  } else {
    result[2] += 0.02762638;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.016079038;
  } else {
    result[3] += 0.016124265;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.01183126;
    } else {
      result[4] += -0.024802346;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
      result[4] += 0.028039973;
    } else {
      result[4] += -0.0038415606;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)23105)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)22552)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)21231)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)20961)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[5] += -0.0013747159;
            } else {
              result[5] += 0.029958209;
            }
          } else {
            result[5] += 0.10579196;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)22035)) {
              result[5] += 0.020680048;
            } else {
              result[5] += -0.023424674;
            }
          } else {
            result[5] += -0.10972078;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)22837)) {
          result[5] += 0.08024081;
        } else {
          result[5] += -0.0073502013;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)23354)) {
        result[5] += -0.11091218;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)23602)) {
            result[5] += -0.018170262;
          } else {
            result[5] += 0.016419105;
          }
        } else {
          result[5] += -0.08559093;
        }
      }
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)25397)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)24898)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)24638)) {
            result[5] += 0.052715637;
          } else {
            result[5] += 0.017623078;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)24370)) {
            result[5] += -0.103813305;
          } else {
            result[5] += 0.002156241;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)25150)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += 0.017623078;
          } else {
            result[5] += 0.13136125;
          }
        } else {
          result[5] += 0.01755153;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)25647)) {
        result[5] += -0.076361634;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)26419)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)25901)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += -0.038350828;
            } else {
              result[5] += 0.07948702;
            }
          } else {
            result[5] += 0.051222954;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)27196)) {
              result[5] += 0.014311711;
            } else {
              result[5] += -0.15560412;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)29495)) {
              result[5] += 0.03533131;
            } else {
              result[5] += 0.0014733672;
            }
          }
        }
      }
    }
  }
  result[6] += -5.3318097e-05;
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1250727680)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31746)) {
              result[7] += 0.00042656477;
            } else {
              result[7] += -0.012586392;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[7] += -0.10033891;
            } else {
              result[7] += 0.12769549;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[7] += 0.093130924;
            } else {
              result[7] += -0.1693139;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
              result[7] += -0.24212858;
            } else {
              result[7] += 0.008720636;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
              result[7] += 0.15324089;
            } else {
              result[7] += 0.068775594;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
              result[7] += -0.11671243;
            } else {
              result[7] += 0.043737017;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
              result[7] += 0.0059681083;
            } else {
              result[7] += 0.12029254;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[7] += -0.14856938;
            } else {
              result[7] += 0.07598163;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[7] += -0.03196068;
            } else {
              result[7] += 0.107688494;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
              result[7] += -0.05060329;
            } else {
              result[7] += -0.37232742;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31746)) {
              result[7] += 0.0012616186;
            } else {
              result[7] += 0.13846026;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
              result[7] += 0.13326338;
            } else {
              result[7] += -0.12758927;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
              result[7] += -0.009842813;
            } else {
              result[7] += 0.023440832;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
              result[7] += 0.12769179;
            } else {
              result[7] += -0.039222248;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
            result[7] += 0.1293203;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[7] += -0.06317833;
            } else {
              result[7] += 0.1061595;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[7] += 0.024366943;
            } else {
              result[7] += 0.08190543;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[7] += -0.09917947;
            } else {
              result[7] += 0.088371046;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54299)) {
              result[7] += 0.18675242;
            } else {
              result[7] += -0.28202915;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[7] += -0.084404364;
            } else {
              result[7] += 0.0642646;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
              result[7] += -0.08964099;
            } else {
              result[7] += 0.12335271;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[7] += 0.092123844;
            } else {
              result[7] += -0.090107016;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[7] += 0.049896087;
          } else {
            result[7] += 0.15980552;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
              result[7] += -0.16106722;
            } else {
              result[7] += 0.09417443;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43534)) {
              result[7] += -0.18970716;
            } else {
              result[7] += -0.026956884;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
            result[7] += -0.20806874;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
              result[7] += 0.16217974;
            } else {
              result[7] += -6.395972e-05;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
            result[7] += -0.3086077;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[7] += 0.082363546;
            } else {
              result[7] += -0.09620197;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += -0.002147001;
            } else {
              result[7] += -0.14953846;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
              result[7] += 0.012768892;
            } else {
              result[7] += 2.0909163e-05;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[8] += 0.00017815967;
            } else {
              result[8] += -0.012645958;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
              result[8] += -0.132108;
            } else {
              result[8] += -0.023748038;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.06621241;
            } else {
              result[8] += -0.012623736;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.024523206;
            } else {
              result[8] += 0.16077295;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
              result[8] += -0.052000828;
            } else {
              result[8] += 0.19208744;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
              result[8] += -0.13702838;
            } else {
              result[8] += -0.035607234;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
              result[8] += 0.23514482;
            } else {
              result[8] += 0.009179913;
            }
          } else {
            result[8] += 0.31045073;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
              result[8] += -0.0005735678;
            } else {
              result[8] += 0.14315149;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[8] += 0.05448814;
            } else {
              result[8] += -0.08678799;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56842)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
              result[8] += -0.11947606;
            } else {
              result[8] += 0.1706228;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
              result[8] += 0.24466702;
            } else {
              result[8] += 0.04869627;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12324)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[8] += 0.06761116;
            } else {
              result[8] += -0.11143945;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[8] += -0.09384505;
            } else {
              result[8] += -0.014891779;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
            result[8] += 0.2917374;
          } else {
            result[8] += -0.08297822;
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)16666)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.02035672;
            } else {
              result[8] += 0.13626742;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.15368846;
            } else {
              result[8] += -0.021111364;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[8] += 0.19179438;
            } else {
              result[8] += -0.0012623509;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
              result[8] += -0.013517871;
            } else {
              result[8] += 0.17349711;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[8] += -0.041075233;
            } else {
              result[8] += 0.061122082;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
              result[8] += -0.15158135;
            } else {
              result[8] += -0.01771584;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.0454907;
            } else {
              result[8] += 0.21826276;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += 0.020532561;
            } else {
              result[8] += -0.12911169;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[8] += -0.03929111;
            } else {
              result[8] += 0.04608319;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
              result[8] += 0.32895032;
            } else {
              result[8] += 0.04037688;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.11736981;
            } else {
              result[8] += -0.04359191;
            }
          } else {
            result[8] += 0.08841395;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
              result[8] += 0.012986041;
            } else {
              result[8] += -0.09743994;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
              result[8] += 0.32707712;
            } else {
              result[8] += 0.018843155;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += -0.03929125;
            } else {
              result[8] += 0.014014975;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[8] += 0.00026730524;
            } else {
              result[8] += -0.017657602;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
              result[9] += 7.648596e-05;
            } else {
              result[9] += -0.070141606;
            }
          } else {
            result[9] += 0.08745918;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
              result[9] += -0.009550798;
            } else {
              result[9] += 0.10484842;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
              result[9] += -0.013055241;
            } else {
              result[9] += -0.11469124;
            }
          }
        }
      } else {
        result[9] += 0.069873124;
      }
    } else {
      result[9] += -0.0604515;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
          result[9] += 0.031212132;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[9] += 0.012159345;
          } else {
            result[9] += -0.14053187;
          }
        }
      } else {
        result[9] += 0.05389497;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
        result[9] += 0.07644555;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
          result[9] += -0.037942547;
        } else {
          result[9] += 0.066987745;
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
              result[10] += 0.00015838635;
            } else {
              result[10] += 0.038048983;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.123725146;
            } else {
              result[10] += 0.08391401;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)42257)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
              result[10] += 0.17588809;
            } else {
              result[10] += 0.02236459;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
              result[10] += -0.11501286;
            } else {
              result[10] += 0.002069329;
            }
          }
        }
      } else {
        result[10] += -0.122197635;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)27865)) {
        result[10] += -0.01990573;
      } else {
        result[10] += 0.111523986;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
          result[10] += -0.06305438;
        } else {
          result[10] += -0.17272279;
        }
      } else {
        result[10] += 0.11627769;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
        result[10] += 0.12388445;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[10] += 0.030911522;
            } else {
              result[10] += 0.14308092;
            }
          } else {
            result[10] += 0.0036841729;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.028173272;
            } else {
              result[10] += -0.12653258;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[10] += 0.031598117;
            } else {
              result[10] += -0.012117121;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[11] += -0.00030882438;
            } else {
              result[11] += -0.0140641425;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
              result[11] += 0.07442577;
            } else {
              result[11] += 0.00080852915;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.03548679;
            } else {
              result[11] += -0.1422183;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
              result[11] += -0.1642042;
            } else {
              result[11] += 0.006967991;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[11] += 0.055379603;
            } else {
              result[11] += -0.09326987;
            }
          } else {
            result[11] += -0.07769935;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.1027989;
            } else {
              result[11] += 0.09828086;
            }
          } else {
            result[11] += 0.15032671;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
              result[11] += -0.0104870545;
            } else {
              result[11] += 0.16853511;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[11] += -0.032359365;
            } else {
              result[11] += -0.10875643;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
            result[11] += 0.23528685;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
              result[11] += -0.018967044;
            } else {
              result[11] += 0.1700848;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[11] += 0.06572655;
            } else {
              result[11] += 0.24280372;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[11] += -0.043100525;
            } else {
              result[11] += 0.15138277;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
              result[11] += -0.044940803;
            } else {
              result[11] += 0.055530753;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
              result[11] += -0.10536977;
            } else {
              result[11] += -0.0020349997;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[11] += 0.013729459;
            } else {
              result[11] += 0.10116727;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[11] += -0.0007543654;
            } else {
              result[11] += 0.05163262;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
              result[11] += -0.042504463;
            } else {
              result[11] += -0.26736355;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[11] += 0.087254316;
            } else {
              result[11] += -0.01021391;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
            result[11] += 0.19767992;
          } else {
            result[11] += 0.011443812;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
              result[11] += 0.0367433;
            } else {
              result[11] += -0.12715587;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
              result[11] += 0.13943383;
            } else {
              result[11] += 0.006958133;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
              result[11] += -0.018877096;
            } else {
              result[11] += 0.096545205;
            }
          } else {
            result[11] += -0.16706795;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
              result[11] += 0.0664625;
            } else {
              result[11] += 0.21499215;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
              result[11] += -0.15611331;
            } else {
              result[11] += 0.045236915;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[11] += 0.020583233;
            } else {
              result[11] += -0.13300008;
            }
          } else {
            result[11] += -0.23481865;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[11] += 0.07192245;
            } else {
              result[11] += -0.2072531;
            }
          } else {
            result[11] += 0.14575425;
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[12] += 0.00014678377;
            } else {
              result[12] += -0.007016982;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
              result[12] += -0.003634056;
            } else {
              result[12] += 0.043258667;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += 0.05618445;
            } else {
              result[12] += -0.18702334;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += -0.1209297;
            } else {
              result[12] += 0.0012731275;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
              result[12] += -0.045978732;
            } else {
              result[12] += 0.009806714;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
              result[12] += -0.15199098;
            } else {
              result[12] += -0.032534044;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22283)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[12] += 0.17001656;
            } else {
              result[12] += 0.036664553;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
              result[12] += 0.04272025;
            } else {
              result[12] += -0.0010286195;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)41999)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32233)) {
              result[12] += -0.037390094;
            } else {
              result[12] += 0.033149775;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
              result[12] += -0.19089149;
            } else {
              result[12] += -0.02855228;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
              result[12] += 0.01802262;
            } else {
              result[12] += 0.32235423;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
              result[12] += -0.1905369;
            } else {
              result[12] += -0.015819417;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
          result[12] += 0.17238796;
        } else {
          result[12] += 0.01956845;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
        result[12] += -0.0971066;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
            result[12] += 0.045393236;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[12] += 0.2205181;
            } else {
              result[12] += 0.08424767;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            result[12] += -0.09969757;
          } else {
            result[12] += 0.10809393;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
          result[12] += -0.15795402;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[12] += 0.02083592;
            } else {
              result[12] += -0.043490753;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
              result[12] += -0.14213079;
            } else {
              result[12] += 0.074212566;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35047)) {
              result[12] += -0.017551647;
            } else {
              result[12] += 0.039751083;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
              result[12] += -0.1170948;
            } else {
              result[12] += -0.045087628;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
              result[12] += 0.03410296;
            } else {
              result[12] += 0.2319107;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
              result[12] += -0.08627483;
            } else {
              result[12] += 0.01436563;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.00039004607;
            } else {
              result[13] += -0.06359129;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[13] += 0.07457867;
            } else {
              result[13] += 0.015828894;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            result[13] += 0.096213244;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
              result[13] += -0.13545306;
            } else {
              result[13] += -0.03397212;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
              result[13] += -0.07468877;
            } else {
              result[13] += 0.32053623;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[13] += -0.09417073;
            } else {
              result[13] += 0.13215709;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[13] += 0.00058015063;
            } else {
              result[13] += 0.018288542;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.093820564;
            } else {
              result[13] += -0.056608345;
            }
          }
        }
      }
    } else {
      result[13] += -0.10016045;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
      result[13] += -0.04025978;
    } else {
      result[13] += 0.10340374;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
              result[14] += -0.0008397519;
            } else {
              result[14] += 0.007650405;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
              result[14] += 0.15737481;
            } else {
              result[14] += -0.026786793;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[14] += 0.17858003;
            } else {
              result[14] += -0.008457506;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[14] += -0.079697326;
            } else {
              result[14] += 0.03657063;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[14] += -0.086182594;
            } else {
              result[14] += 0.0676635;
            }
          } else {
            result[14] += -0.11195082;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            result[14] += 0.37568113;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
              result[14] += 0.19633749;
            } else {
              result[14] += -0.109812245;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[14] += 0.03895722;
            } else {
              result[14] += -0.0032066414;
            }
          } else {
            result[14] += -0.15267885;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[14] += 0.12597191;
            } else {
              result[14] += -0.011810041;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
              result[14] += 0.204321;
            } else {
              result[14] += 0.04694372;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
          result[14] += -0.12761988;
        } else {
          result[14] += 0.03150631;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
              result[14] += -0.009734982;
            } else {
              result[14] += -0.047690082;
            }
          } else {
            result[14] += -0.13217294;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[14] += 0.08170847;
            } else {
              result[14] += 0.24901573;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
              result[14] += -0.04337686;
            } else {
              result[14] += 0.05994654;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
          result[14] += -0.13698214;
        } else {
          result[14] += -0.037879843;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += 0.0036907073;
            } else {
              result[14] += -0.10119226;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[14] += 0.18942983;
            } else {
              result[14] += -0.0853324;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[14] += 0.051450115;
            } else {
              result[14] += 0.22247747;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[14] += -0.009290837;
            } else {
              result[14] += 0.13759926;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[14] += 0.0036081562;
            } else {
              result[14] += -0.11349934;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
              result[14] += 0.1456191;
            } else {
              result[14] += -0.006785034;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
              result[14] += 0.010305968;
            } else {
              result[14] += -0.00073831464;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
              result[14] += -0.12225925;
            } else {
              result[14] += 0.013797698;
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
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[0] += 0.0003780462;
            } else {
              result[0] += -0.09917673;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
              result[0] += -0.034465678;
            } else {
              result[0] += 0.071018845;
            }
          }
        } else {
          result[0] += -0.10201394;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
              result[0] += 0.006426001;
            } else {
              result[0] += 0.06544576;
            }
          } else {
            result[0] += -0.078681834;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[0] += 0.028797833;
            } else {
              result[0] += 0.111078955;
            }
          } else {
            result[0] += -0.005290094;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
          result[0] += -0.09930779;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23300)) {
            result[0] += 0.02392007;
          } else {
            result[0] += -0.028368559;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
              result[0] += -0.046823088;
            } else {
              result[0] += 0.07372734;
            }
          } else {
            result[0] += -0.07863444;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43291)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
              result[0] += 0.02699077;
            } else {
              result[0] += -0.049250778;
            }
          } else {
            result[0] += 0.07857856;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += 0.12310694;
      } else {
        result[0] += -0.018649975;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[0] += -0.094380416;
      } else {
        result[0] += 0.06051865;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28379)) {
              result[1] += -0.0003904881;
            } else {
              result[1] += -0.016819796;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
              result[1] += 0.041623835;
            } else {
              result[1] += 0.0004974989;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += 0.008139545;
            } else {
              result[1] += 0.104508355;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[1] += -0.056959786;
            } else {
              result[1] += -0.20325775;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
              result[1] += -0.054161437;
            } else {
              result[1] += 0.109937094;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
              result[1] += 0.29209527;
            } else {
              result[1] += 0.013560375;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += 0.17896473;
            } else {
              result[1] += -0.08789721;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30457)) {
              result[1] += -0.30257106;
            } else {
              result[1] += 0.034838445;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2835)) {
            result[1] += 0.21726273;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
              result[1] += -0.035345208;
            } else {
              result[1] += 0.09039207;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29679)) {
            result[1] += -0.0048939656;
          } else {
            result[1] += -0.18515751;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[1] += -0.011856178;
            } else {
              result[1] += -0.15361604;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
              result[1] += 0.026395757;
            } else {
              result[1] += -0.12538768;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
            result[1] += -0.08457751;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[1] += 0.24837065;
            } else {
              result[1] += -0.07772274;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
              result[1] += -0.17693877;
            } else {
              result[1] += 0.13753536;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
              result[1] += -0.056718245;
            } else {
              result[1] += 0.058984913;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
            result[1] += 0.010294838;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[1] += 0.18805999;
            } else {
              result[1] += 0.02883155;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
              result[1] += -0.104543775;
            } else {
              result[1] += -0.007517586;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3151783168)) {
              result[1] += -0.08301081;
            } else {
              result[1] += 0.119776554;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
            result[1] += 0.23287548;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[1] += -0.12688771;
            } else {
              result[1] += 0.0786189;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += -0.045039017;
            } else {
              result[1] += 0.04236301;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
              result[1] += 0.017313419;
            } else {
              result[1] += -0.04984384;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[1] += 0.0877745;
            } else {
              result[1] += -0.104816325;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += 0.2452852;
            } else {
              result[1] += -0.078316025;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.047095183;
            } else {
              result[1] += -0.17779393;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
              result[1] += 0.020562982;
            } else {
              result[1] += -0.071602546;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[1] += -0.035931863;
            } else {
              result[1] += -9.404131e-05;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24813)) {
              result[1] += 0.018433647;
            } else {
              result[1] += 0.00046699325;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)523)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.031699408;
            } else {
              result[2] += 0.017986523;
            }
          } else {
            result[2] += -0.022963988;
          }
        } else {
          result[2] += 0.0007793652;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)46100)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)45299)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)44284)) {
              result[2] += 0.0014315709;
            } else {
              result[2] += -0.018369224;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)45575)) {
              result[2] += 0.11734864;
            } else {
              result[2] += 0.010800945;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)49419)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)49160)) {
              result[2] += -0.009608567;
            } else {
              result[2] += -0.0658457;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50397)) {
              result[2] += 0.061079834;
            } else {
              result[2] += -0.0026675775;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[2] += 0.018870499;
      } else {
        result[2] += 0.004364015;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          result[2] += 0.02971735;
        } else {
          result[2] += -0.02609089;
        }
      } else {
        result[2] += 0.03738541;
      }
    } else {
      result[2] += -0.0024052204;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += 0.002159411;
    } else {
      result[3] += 0.016464733;
    }
  } else {
    result[3] += -0.021705482;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.0067528673;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.025567237;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[4] += -0.01181573;
          } else {
            result[4] += 0.016915306;
          }
        }
      }
    } else {
      result[4] += -0.016775802;
    }
  } else {
    result[4] += 0.028685883;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
              result[5] += 0.00018140094;
            } else {
              result[5] += 0.052743625;
            }
          } else {
            result[5] += -0.089272;
          }
        } else {
          result[5] += 0.09362908;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
          result[5] += 0.023778325;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
            result[5] += -0.09719501;
          } else {
            result[5] += -0.00079005887;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[5] += -0.019410072;
        } else {
          result[5] += 0.12971815;
        }
      } else {
        result[5] += -0.04638518;
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        result[5] += 0.04875372;
      } else {
        result[5] += -0.031027991;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
        result[5] += -0.07770323;
      } else {
        result[5] += -0.016747577;
      }
    }
  }
  result[6] += -1.2835306e-05;
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
              result[7] += -0.0001642592;
            } else {
              result[7] += 0.008005649;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[7] += 0.19546138;
            } else {
              result[7] += -0.01857053;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[7] += 0.1183678;
            } else {
              result[7] += -0.0057633645;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
              result[7] += 0.006319992;
            } else {
              result[7] += -0.030969094;
            }
          }
        }
      } else {
        result[7] += 0.073297925;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
              result[7] += -0.026041316;
            } else {
              result[7] += -0.13039924;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
              result[7] += 0.10811902;
            } else {
              result[7] += -0.006154996;
            }
          }
        } else {
          result[7] += 0.13744932;
        }
      } else {
        result[7] += -0.10263125;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      result[7] += -0.06755494;
    } else {
      result[7] += -0.0021234113;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
              result[8] += -0.0050514527;
            } else {
              result[8] += -0.032553915;
            }
          } else {
            result[8] += -0.10864586;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
            result[8] += 0.16641252;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53520)) {
              result[8] += 0.13224223;
            } else {
              result[8] += -0.02940639;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
          result[8] += 0.15050566;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
            result[8] += -0.02579048;
          } else {
            result[8] += 0.03485554;
          }
        }
      }
    } else {
      result[8] += -0.1130622;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54003)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53520)) {
              result[8] += 0.012003814;
            } else {
              result[8] += 0.30643493;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[8] += -0.103059225;
            } else {
              result[8] += 0.043380283;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
              result[8] += 0.058916986;
            } else {
              result[8] += 0.14714251;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[8] += -0.054894026;
            } else {
              result[8] += 0.03066035;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
              result[8] += -0.03202969;
            } else {
              result[8] += 0.038699716;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[8] += -0.06453947;
            } else {
              result[8] += -0.14814913;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
            result[8] += 0.23110513;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += -0.006168635;
            } else {
              result[8] += 0.1849079;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
              result[8] += 0.00440623;
            } else {
              result[8] += -0.07824424;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
              result[8] += 0.20742056;
            } else {
              result[8] += 0.043522853;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
              result[8] += 0.06199414;
            } else {
              result[8] += -0.054341976;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
              result[8] += -0.048630837;
            } else {
              result[8] += -0.18219177;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[8] += 2.943915e-05;
            } else {
              result[8] += 0.09385658;
            }
          } else {
            result[8] += -0.1605975;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
            result[8] += 0.06706683;
          } else {
            result[8] += -0.006832248;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += 1.930713e-05;
            } else {
              result[9] += -0.05726364;
            }
          } else {
            result[9] += 0.034521695;
          }
        } else {
          result[9] += -0.07100684;
        }
      } else {
        result[9] += 0.06126595;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
        result[9] += -0.10016168;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
          result[9] += -0.08825429;
        } else {
          result[9] += 0.053586464;
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
            result[9] += -0.057579424;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
              result[9] += -0.021919308;
            } else {
              result[9] += 0.116590016;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
            result[9] += 0.08654386;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[9] += -0.13860275;
            } else {
              result[9] += -0.026202852;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
          result[9] += 0.0007841804;
        } else {
          result[9] += 0.11172152;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
              result[9] += 0.014470179;
            } else {
              result[9] += -0.08445603;
            }
          } else {
            result[9] += 0.09700771;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
            result[9] += -0.14291742;
          } else {
            result[9] += -0.016296105;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
          result[9] += 0.108855166;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
              result[9] += -0.12427677;
            } else {
              result[9] += 0.0085291155;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
              result[9] += 0.047742862;
            } else {
              result[9] += -0.0022156232;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[10] += 0.00036456808;
            } else {
              result[10] += -0.099607654;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
              result[10] += 0.042638108;
            } else {
              result[10] += -0.043130297;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
              result[10] += -0.13482977;
            } else {
              result[10] += -0.030341007;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.023923554;
            } else {
              result[10] += 0.039899416;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[10] += 0.10432714;
          } else {
            result[10] += 0.008928294;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[10] += 0.023310203;
            } else {
              result[10] += -0.1399011;
            }
          } else {
            result[10] += 0.068138726;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)58671)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.022637721;
          } else {
            result[10] += 0.01274276;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
            result[10] += -0.053990457;
          } else {
            result[10] += -0.14017846;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
          result[10] += -0.06662048;
        } else {
          result[10] += 0.08683113;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
            result[10] += -0.000106876374;
          } else {
            result[10] += 0.0777752;
          }
        } else {
          result[10] += 0.15201508;
        }
      } else {
        result[10] += -0.04043713;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
        result[10] += -0.06668972;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[10] += 0.122384645;
            } else {
              result[10] += -0.03476494;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[10] += -0.0031931023;
            } else {
              result[10] += 0.048362166;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[10] += -0.035496388;
            } else {
              result[10] += -0.14154369;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
              result[10] += 0.13095863;
            } else {
              result[10] += -0.0369415;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
              result[11] += 5.7464382e-05;
            } else {
              result[11] += 0.033666864;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.049820546;
            } else {
              result[11] += 0.08114516;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
              result[11] += 0.14012185;
            } else {
              result[11] += 0.031543117;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += -0.069354415;
            } else {
              result[11] += 0.12608528;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
              result[11] += 0.21318978;
            } else {
              result[11] += 0.026043314;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += -0.14213218;
            } else {
              result[11] += 0.053632207;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
              result[11] += -0.16954175;
            } else {
              result[11] += 0.055517532;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.07719542;
            } else {
              result[11] += -0.14826907;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
            result[11] += -0.05809332;
          } else {
            result[11] += 0.14738461;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
              result[11] += -0.046851654;
            } else {
              result[11] += -0.13827035;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[11] += 0.04271768;
            } else {
              result[11] += -0.0328853;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
          result[11] += -0.13517852;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
              result[11] += 0.14319988;
            } else {
              result[11] += -0.18132177;
            }
          } else {
            result[11] += 0.18663394;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
          result[11] += 0.015638908;
        } else {
          result[11] += 0.15555516;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
            result[11] += 0.1388144;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[11] += -0.06016923;
            } else {
              result[11] += -0.20370498;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.00931321;
            } else {
              result[11] += -0.105849005;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += 0.003310263;
            } else {
              result[11] += -0.09125807;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
        result[11] += -0.09642271;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
          result[11] += 0.06318118;
        } else {
          result[11] += 0.26935494;
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[12] += -0.001138589;
            } else {
              result[12] += 0.013191203;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[12] += -0.0353968;
            } else {
              result[12] += 0.13816759;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
              result[12] += 0.045013208;
            } else {
              result[12] += 0.24250133;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[12] += -0.08963691;
            } else {
              result[12] += 0.0039579812;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
              result[12] += -0.05944936;
            } else {
              result[12] += 0.08646877;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.1880171;
            } else {
              result[12] += -0.029956147;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
              result[12] += 0.03317104;
            } else {
              result[12] += 0.24134979;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[12] += -0.12586467;
            } else {
              result[12] += 0.00019322292;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += 0.03135749;
            } else {
              result[12] += -0.09124372;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.13824745;
            } else {
              result[12] += -0.06290232;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
              result[12] += 0.10198464;
            } else {
              result[12] += 0.030629544;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
              result[12] += 0.28445905;
            } else {
              result[12] += -0.07602222;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28379)) {
            result[12] += 0.15258837;
          } else {
            result[12] += -0.034552082;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
              result[12] += -0.028698467;
            } else {
              result[12] += -0.14274615;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[12] += 0.025484225;
            } else {
              result[12] += -0.094899625;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)978331136)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
              result[12] += -0.022031594;
            } else {
              result[12] += -0.09407995;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
              result[12] += 0.04109636;
            } else {
              result[12] += -0.022569211;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
              result[12] += -0.07620744;
            } else {
              result[12] += 0.07944036;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
              result[12] += -0.20497046;
            } else {
              result[12] += -0.05487783;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2433490688)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.44969818;
            } else {
              result[12] += 0.09537321;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
              result[12] += -0.12155613;
            } else {
              result[12] += 0.13707313;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
            result[12] += 0.112058505;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
              result[12] += -0.18065792;
            } else {
              result[12] += 0.0016074546;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
              result[12] += 0.0651296;
            } else {
              result[12] += -0.058003705;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
              result[12] += 0.25054124;
            } else {
              result[12] += 0.05412702;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
            result[12] += -0.11726516;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
              result[12] += 0.0634182;
            } else {
              result[12] += -0.03044728;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)35300)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
              result[12] += -0.008889631;
            } else {
              result[12] += -0.07783657;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35047)) {
              result[12] += 0.0073271254;
            } else {
              result[12] += 0.1276926;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)35552)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[12] += 0.009715061;
            } else {
              result[12] += 0.13404173;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[12] += 0.00048499866;
            } else {
              result[12] += -0.02158875;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.000501184;
            } else {
              result[13] += -0.060961317;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
              result[13] += -0.011271432;
            } else {
              result[13] += -0.12125707;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
              result[13] += 0.06566222;
            } else {
              result[13] += -0.06980359;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
              result[13] += -0.047791567;
            } else {
              result[13] += 0.0013816721;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.045594882;
            } else {
              result[13] += 0.034653317;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
              result[13] += -0.1047546;
            } else {
              result[13] += 0.011662372;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            result[13] += 0.22601672;
          } else {
            result[13] += 0.004211634;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
              result[13] += -0.13541962;
            } else {
              result[13] += -0.056950998;
            }
          } else {
            result[13] += 0.056614496;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
            result[13] += 0.23638579;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
              result[13] += -0.007645182;
            } else {
              result[13] += -0.12910885;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
              result[13] += 0.024759129;
            } else {
              result[13] += -0.11081035;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
              result[13] += 0.20794933;
            } else {
              result[13] += 0.029968785;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
              result[13] += 0.0034058096;
            } else {
              result[13] += -0.055268373;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.010657599;
            } else {
              result[13] += -0.13032317;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
            result[13] += -0.12183214;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29424)) {
              result[13] += 0.029297996;
            } else {
              result[13] += -0.07935804;
            }
          }
        } else {
          result[13] += 0.022143152;
        }
      } else {
        result[13] += 0.059159175;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        result[13] += 0.12901337;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += 0.06695689;
            } else {
              result[13] += -0.019551389;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.1852016;
            } else {
              result[13] += -0.056605052;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.12371359;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[13] += 0.059432518;
            } else {
              result[13] += -0.05483011;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += -5.2225994e-05;
            } else {
              result[14] += -0.09844578;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[14] += 0.0033023783;
            } else {
              result[14] += -0.1133521;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.10779059;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.077495836;
            } else {
              result[14] += 0.093341574;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.12349423;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[14] += 0.069277875;
            } else {
              result[14] += 0.006053473;
            }
          } else {
            result[14] += -0.09802931;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.018337533;
            } else {
              result[14] += 0.112533346;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[14] += -0.10057836;
            } else {
              result[14] += 0.04294893;
            }
          }
        } else {
          result[14] += 0.16175115;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
              result[14] += -0.05818421;
            } else {
              result[14] += -0.29371667;
            }
          } else {
            result[14] += 0.09937986;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
              result[14] += 0.09953976;
            } else {
              result[14] += -0.0016729733;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
              result[14] += -0.20134124;
            } else {
              result[14] += 0.016111115;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
              result[14] += 0.025300479;
            } else {
              result[14] += -0.071727544;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
              result[14] += 0.08619639;
            } else {
              result[14] += 0.014791362;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
              result[14] += 0.21697436;
            } else {
              result[14] += 0.044170722;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.0873405;
            } else {
              result[14] += 0.037477396;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[14] += -0.008065153;
        } else {
          result[14] += -0.08253801;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[14] += -0.13571388;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[14] += -0.12166489;
            } else {
              result[14] += -0.0009544635;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.04816761;
            } else {
              result[14] += -0.086165726;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[14] += 0.1812403;
            } else {
              result[14] += 0.060561668;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += -0.107133575;
            } else {
              result[14] += 0.040524498;
            }
          }
        }
      }
    }
  }
}

