
#include "header.h"

void predict_unit22(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.00011181587;
            } else {
              result[14] += 0.007728554;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.07717015;
            } else {
              result[14] += 0.08171129;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[14] += 0.14776424;
          } else {
            result[14] += -0.0797095;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          result[14] += -0.09430413;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[14] += 0.09009508;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.06376469;
            } else {
              result[14] += -0.0029991164;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        result[14] += -0.109764494;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[14] += 0.04988951;
        } else {
          result[14] += -0.039807774;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            result[14] += 0.0033857843;
          } else {
            result[14] += -0.0031662795;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.09830092;
            } else {
              result[14] += -0.027174031;
            }
          } else {
            result[14] += 0.016451105;
          }
        }
      } else {
        result[14] += 0.042074725;
      }
    } else {
      result[14] += -0.032341283;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[0] += -0.00018845825;
    } else {
      result[0] += -0.10725794;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[0] += 0.0032306137;
            } else {
              result[0] += -0.05566039;
            }
          } else {
            result[0] += 0.081587024;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[0] += 0.015184814;
            } else {
              result[0] += -0.15732013;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)28681)) {
              result[0] += -0.09293862;
            } else {
              result[0] += 0.005818044;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          result[0] += 0.090456314;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[0] += 0.007186966;
            } else {
              result[0] += 0.099135935;
            }
          } else {
            result[0] += -0.03685477;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[0] += -0.012698833;
            } else {
              result[0] += -0.040772237;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[0] += 0.08058615;
            } else {
              result[0] += -0.005181534;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            result[0] += -0.0020607978;
          } else {
            result[0] += -0.10105238;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[0] += -0.055317692;
            } else {
              result[0] += 0.0026204353;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[0] += -0.012642231;
            } else {
              result[0] += 0.05324325;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[0] += 0.09029657;
            } else {
              result[0] += 0.0139956465;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[0] += -0.054658197;
            } else {
              result[0] += -0.0010176057;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 6.641185e-05;
            } else {
              result[1] += -0.0043988647;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[1] += 0.019201597;
            } else {
              result[1] += -0.050713804;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.010599488;
            } else {
              result[1] += 0.00013428;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[1] += -0.12773666;
            } else {
              result[1] += 0.04364285;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[1] += 0.08091717;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.01708341;
            } else {
              result[1] += -0.08333193;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.020796642;
            } else {
              result[1] += -0.051847387;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.015628286;
            } else {
              result[1] += -0.0009790036;
            }
          } else {
            result[1] += -0.12108501;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[1] += 0.0002074876;
            } else {
              result[1] += 0.05226587;
            }
          } else {
            result[1] += -0.09920479;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
          result[1] += -0.17865989;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[1] += 0.07494216;
            } else {
              result[1] += -0.026478872;
            }
          } else {
            result[1] += -0.021514777;
          }
        }
      }
    }
  } else {
    result[1] += -0.079539515;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += -6.828298e-05;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.06821984;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.01984023;
            } else {
              result[2] += -0.0732218;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[2] += 0.082081854;
            } else {
              result[2] += 0.010168523;
            }
          }
        }
      } else {
        result[2] += -0.02973114;
      }
    }
  } else {
    result[2] += 0.06863399;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.0039347014;
    } else {
      result[3] += -0.075083315;
    }
  } else {
    result[3] += 0.007102901;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[4] += -0.050935525;
    } else {
      result[4] += -5.100347e-05;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
        result[4] += 0.051220592;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.014551759;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[4] += 0.072351456;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[4] += -0.019257404;
            } else {
              result[4] += 0.037590913;
            }
          }
        }
      }
    } else {
      result[4] += -0.006593715;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      result[5] += 2.393573e-05;
    } else {
      result[5] += -0.080781914;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
        result[5] += 0.0046951966;
      } else {
        result[5] += 0.069072984;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
        result[5] += -0.08998975;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            result[5] += 0.010604172;
          } else {
            result[5] += 0.04946424;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
            result[5] += -0.08122279;
          } else {
            result[5] += 0.0035294942;
          }
        }
      }
    }
  }
  result[6] += -5.6765075e-05;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.0003533521;
            } else {
              result[7] += -0.0078075672;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[7] += 0.010700412;
            } else {
              result[7] += -0.0006395235;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += -0.004466127;
            } else {
              result[7] += 0.12089513;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += -0.12660307;
            } else {
              result[7] += 0.008333864;
            }
          }
        }
      } else {
        result[7] += -0.12059061;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
              result[7] += 0.0017823247;
            } else {
              result[7] += 0.06486242;
            }
          } else {
            result[7] += -0.069279976;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[7] += 0.14108154;
            } else {
              result[7] += 0.031141678;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.0840489;
            } else {
              result[7] += 0.035115846;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.12489198;
        } else {
          result[7] += 0.00016726588;
        }
      }
    }
  } else {
    result[7] += 0.054234527;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54299)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
              result[8] += 0.00046519295;
            } else {
              result[8] += 0.015818741;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[8] += -0.045962915;
            } else {
              result[8] += -0.0010490336;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[8] += 0.014651145;
            } else {
              result[8] += 0.036357887;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[8] += -0.019008117;
            } else {
              result[8] += 0.018198473;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
              result[8] += -0.0144345015;
            } else {
              result[8] += 0.021665;
            }
          } else {
            result[8] += -0.058760535;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
              result[8] += -0.001958234;
            } else {
              result[8] += 0.010886714;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[8] += -0.019512163;
            } else {
              result[8] += -0.0022024359;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.0026087696;
            } else {
              result[8] += 0.008485978;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[8] += -0.083035044;
            } else {
              result[8] += -0.015435522;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[8] += 0.16625464;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.04538588;
            } else {
              result[8] += -0.0063940655;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.068033464;
            } else {
              result[8] += 0.023274735;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += -0.042583153;
            } else {
              result[8] += 0.037298795;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += -0.07797822;
            } else {
              result[8] += 0.06949534;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53824)) {
              result[8] += 0.08748007;
            } else {
              result[8] += -0.0017451452;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.123116486;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[8] += 0.06388558;
        } else {
          result[8] += -0.020914484;
        }
      } else {
        result[8] += -0.078933716;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 2.7911812e-05;
      } else {
        result[9] += -0.008119906;
      }
    } else {
      result[9] += -0.07504346;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.006981236;
    } else {
      result[9] += 0.0019646657;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[10] += 0.00023582697;
            } else {
              result[10] += 0.07480588;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.041118566;
            } else {
              result[10] += -0.073891014;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[10] += -0.014914706;
            } else {
              result[10] += -0.09894896;
            }
          } else {
            result[10] += 0.07189662;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[10] += 0.014535531;
            } else {
              result[10] += -0.038128044;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[10] += 0.012582011;
            } else {
              result[10] += 0.1431162;
            }
          }
        } else {
          result[10] += -0.00044109265;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
        result[10] += 0.08894184;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
          result[10] += 0.011576774;
        } else {
          result[10] += -0.023504546;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.012286364;
      } else {
        result[10] += -0.08027179;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.009569135;
      } else {
        result[10] += 0.032804165;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[11] += -0.009924014;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.00017103452;
            } else {
              result[11] += 0.0019690068;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += -0.15737572;
            } else {
              result[11] += 0.12967992;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[11] += -0.16632332;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.0319537;
            } else {
              result[11] += -0.14518918;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.018210588;
            } else {
              result[11] += -0.042202335;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += -0.14111832;
            } else {
              result[11] += 0.002076831;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[11] += -0.11721418;
          } else {
            result[11] += 0.015838841;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.1317715;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.0037181887;
            } else {
              result[11] += 0.0062170997;
            }
          } else {
            result[11] += -0.00946188;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[11] += 0.013085124;
            } else {
              result[11] += 0.07474802;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[11] += -0.12580873;
            } else {
              result[11] += 0.019712536;
            }
          }
        }
      } else {
        result[11] += -0.08020707;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.00023673495;
            } else {
              result[12] += 0.01042174;
            }
          } else {
            result[12] += -0.047282394;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.02770582;
            } else {
              result[12] += 0.0926114;
            }
          } else {
            result[12] += -0.024119187;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[12] += -0.08871547;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[12] += -0.017224627;
          } else {
            result[12] += 0.020983122;
          }
        }
      }
    } else {
      result[12] += -0.1386308;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            result[12] += 0.002884658;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.09183738;
            } else {
              result[12] += 0.0029943;
            }
          }
        } else {
          result[12] += 0.06477813;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          result[12] += 0.026064435;
        } else {
          result[12] += -0.11062797;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        result[12] += 0.083343856;
      } else {
        result[12] += -0.00553447;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[13] += -0.009344537;
      } else {
        result[13] += -0.0023299325;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.0035207118;
            } else {
              result[13] += -0.06769611;
            }
          } else {
            result[13] += -0.12689385;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.10342108;
            } else {
              result[13] += -0.050592974;
            }
          } else {
            result[13] += -0.12164543;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[13] += -0.030994063;
            } else {
              result[13] += -0.14279523;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.0033582938;
            } else {
              result[13] += 0.13748501;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.004556973;
            } else {
              result[13] += 0.048862655;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.13229603;
            } else {
              result[13] += -0.00035837758;
            }
          }
        }
      }
    }
  } else {
    result[13] += -0.06587851;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[14] += 0.0011380406;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += -0.0016056916;
            } else {
              result[14] += -0.11889197;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.009751948;
            } else {
              result[14] += -0.014736552;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += -0.039795373;
            } else {
              result[14] += -0.12278123;
            }
          } else {
            result[14] += -0.0012337294;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            result[14] += 0.0005799114;
          } else {
            result[14] += 0.013349076;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            result[14] += -0.010857777;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += 0.004396755;
            } else {
              result[14] += -0.0012151628;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[14] += 0.0015116705;
            } else {
              result[14] += -0.090346724;
            }
          } else {
            result[14] += -0.106039554;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.02201368;
            } else {
              result[14] += -0.043533325;
            }
          } else {
            result[14] += 0.09989397;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.12578063;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
            result[14] += -0.098961465;
          } else {
            result[14] += 0.08074837;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[14] += 0.104769826;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[14] += -0.0804511;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.09877572;
            } else {
              result[14] += 0.014243069;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[14] += -0.017441053;
          } else {
            result[14] += -0.07977767;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.00044553666;
            } else {
              result[0] += 0.012587123;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.08584459;
            } else {
              result[0] += 0.009601188;
            }
          }
        } else {
          result[0] += 0.06930944;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            result[0] += -0.084221154;
          } else {
            result[0] += -0.0052022273;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.04409234;
          } else {
            result[0] += -0.015877495;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[0] += 0.08894348;
      } else {
        result[0] += 0.0009834066;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[0] += -0.08299929;
    } else {
      result[0] += 0.027256679;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[1] += -0.0009898454;
            } else {
              result[1] += 0.0010706281;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += 0.04772974;
            } else {
              result[1] += 0.0028099015;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[1] += -0.008963792;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.114645764;
            } else {
              result[1] += -0.06710111;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.021764144;
            } else {
              result[1] += 0.00160888;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.0017963136;
            } else {
              result[1] += -0.08761656;
            }
          }
        } else {
          result[1] += -0.08538549;
        }
      }
    } else {
      result[1] += 0.07899418;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
      result[1] += -0.106379285;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[1] += -0.0026962636;
        } else {
          result[1] += 0.07945861;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          result[1] += -0.09630484;
        } else {
          result[1] += 0.024745783;
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
    result[2] += -3.0498151e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.029129747;
            } else {
              result[2] += -0.06104112;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[2] += 0.07944331;
            } else {
              result[2] += 0.012440307;
            }
          }
        } else {
          result[2] += -0.07070268;
        }
      } else {
        result[2] += 0.08558735;
      }
    } else {
      result[2] += -0.016859991;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.037501927;
  } else {
    result[3] += 0.005884031;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[4] += -0.046876892;
    } else {
      result[4] += 7.717126e-06;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        result[4] += 0.015377649;
      } else {
        result[4] += 0.06645554;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += -0.0152892275;
          } else {
            result[4] += 0.067614794;
          }
        } else {
          result[4] += -0.027585488;
        }
      } else {
        result[4] += 0.031114846;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[5] += 2.899828e-05;
        } else {
          result[5] += -0.07922983;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          result[5] += 0.0039259437;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            result[5] += 0.060703024;
          } else {
            result[5] += -0.0003634478;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[5] += -0.08146596;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[5] += 0.02545674;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            result[5] += -0.07536536;
          } else {
            result[5] += -0.00083599676;
          }
        }
      }
    }
  } else {
    result[5] += 0.018196529;
  }
  result[6] += -2.0151654e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += 7.4276986e-06;
            } else {
              result[7] += -0.017082028;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += -0.091455854;
            } else {
              result[7] += 0.022977397;
            }
          }
        } else {
          result[7] += 0.048996948;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)24)) {
            result[7] += -0.08223334;
          } else {
            result[7] += -0.03902285;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            result[7] += 0.032207765;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[7] += -0.07644666;
            } else {
              result[7] += -0.001917098;
            }
          }
        }
      }
    } else {
      result[7] += 0.10179384;
    }
  } else {
    result[7] += -0.078106254;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[8] += -0.008769857;
        } else {
          result[8] += -0.08055712;
        }
      } else {
        result[8] += -0.085493535;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54003)) {
              result[8] += 0.0010433603;
            } else {
              result[8] += -0.008215867;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[8] += 0.031138292;
            } else {
              result[8] += 0.0036230038;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
              result[8] += -0.0020891095;
            } else {
              result[8] += -0.053310473;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[8] += 0.017290814;
            } else {
              result[8] += -0.003169161;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[8] += -0.0023339528;
            } else {
              result[8] += 0.021469427;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.055898834;
            } else {
              result[8] += -0.001975082;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.06082038;
            } else {
              result[8] += -0.027308064;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[8] += -0.057672787;
            } else {
              result[8] += 0.018726721;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.11986034;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        result[8] += 0.020768095;
      } else {
        result[8] += -0.025786921;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[9] += 5.3792508e-05;
    } else {
      result[9] += -0.043893207;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.006653994;
    } else {
      result[9] += 0.0024353515;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[10] += -4.6496716e-05;
        } else {
          result[10] += -0.08558508;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
            result[10] += 0.0027169276;
          } else {
            result[10] += 0.0063287406;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[10] += 0.00025581472;
            } else {
              result[10] += -0.019161675;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
              result[10] += 0.047727745;
            } else {
              result[10] += -0.0041318713;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        result[10] += -0.08529661;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[10] += 0.030868364;
            } else {
              result[10] += -0.10025705;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += 0.013510155;
            } else {
              result[10] += 0.03797607;
            }
          }
        } else {
          result[10] += -0.07729012;
        }
      }
    }
  } else {
    result[10] += -0.03476165;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += 0.00015405737;
            } else {
              result[11] += -0.11550492;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.12272534;
            } else {
              result[11] += -0.0015165019;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += -0.07653158;
            } else {
              result[11] += -0.1390946;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += 0.03030889;
            } else {
              result[11] += 0.006886683;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[11] += -0.14411022;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += -0.036966447;
            } else {
              result[11] += -0.00027834016;
            }
          } else {
            result[11] += 0.12926875;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[11] += 0.09769543;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += -0.037489925;
            } else {
              result[11] += -0.13121358;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.12369274;
            } else {
              result[11] += 0.0034202456;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.13715373;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += -0.0004773697;
            } else {
              result[11] += 0.007749545;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += -0.005740502;
            } else {
              result[11] += 0.0024082856;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.1295667;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            result[11] += 0.0024804836;
          } else {
            result[11] += -0.1311615;
          }
        } else {
          result[11] += 0.0078105964;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          result[11] += -0.009390647;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            result[11] += 0.0046634143;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.007790341;
            } else {
              result[11] += 0.034703974;
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
              result[12] += -0.0002278104;
            } else {
              result[12] += -0.07207933;
            }
          } else {
            result[12] += -0.13660139;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[12] += 0.002537112;
            } else {
              result[12] += -0.044590194;
            }
          } else {
            result[12] += 0.08136445;
          }
        }
      } else {
        result[12] += 0.063674696;
      }
    } else {
      result[12] += -0.08753447;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.06494489;
            } else {
              result[12] += 0.01105413;
            }
          } else {
            result[12] += -0.027818127;
          }
        } else {
          result[12] += 0.081733726;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            result[12] += -0.078192964;
          } else {
            result[12] += -0.008221829;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[12] += 0.026714876;
            } else {
              result[12] += 0.012165385;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += -0.023986429;
            } else {
              result[12] += 0.010696849;
            }
          }
        }
      }
    } else {
      result[12] += -0.06973898;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.001257409;
            } else {
              result[13] += -0.115146555;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.022046112;
            } else {
              result[13] += -0.00048297734;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
              result[13] += -0.024448501;
            } else {
              result[13] += -4.5907105e-05;
            }
          } else {
            result[13] += 0.11563631;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.0006624307;
            } else {
              result[13] += -0.08771159;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += 0.12501654;
            } else {
              result[13] += -0.014984068;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.009983603;
            } else {
              result[13] += -0.09527936;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += -0.009650172;
            } else {
              result[13] += 0.0629646;
            }
          }
        }
      }
    } else {
      result[13] += -0.09366526;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
      result[13] += 0.102985635;
    } else {
      result[13] += -0.018220596;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += -0.00015789895;
            } else {
              result[14] += -0.09816868;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.069466665;
            } else {
              result[14] += 0.008261246;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.11108673;
          } else {
            result[14] += 0.0112519115;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[14] += -0.10706166;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.06984872;
            } else {
              result[14] += -0.04881082;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.05996622;
            } else {
              result[14] += 0.0033321998;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.0038399685;
            } else {
              result[14] += -0.02026196;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        result[14] += -0.10634378;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[14] += 0.047700714;
        } else {
          result[14] += -0.035217963;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          result[14] += 0.0031956192;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += -0.006433469;
            } else {
              result[14] += -0.093718216;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.00013117661;
            } else {
              result[14] += 0.029576167;
            }
          }
        }
      } else {
        result[14] += 0.06854943;
      }
    } else {
      result[14] += -0.03704761;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[0] += -0.00020423287;
    } else {
      result[0] += -0.103778794;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[0] += 0.0024675499;
            } else {
              result[0] += 0.008436469;
            }
          } else {
            result[0] += 0.039010264;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[0] += -0.09260294;
            } else {
              result[0] += 0.017838404;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.08000957;
            } else {
              result[0] += 0.018703599;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[0] += 0.15522425;
          } else {
            result[0] += -0.019066371;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[0] += 0.007571854;
            } else {
              result[0] += -0.0900285;
            }
          } else {
            result[0] += 0.06601989;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)28681)) {
        result[0] += -0.06158818;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
            result[0] += -0.10053428;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[0] += 0.009436199;
            } else {
              result[0] += -0.019278118;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
              result[0] += 0.11316163;
            } else {
              result[0] += -0.014394113;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[0] += -0.04963525;
            } else {
              result[0] += 0.0008156509;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[1] += -7.3759154e-05;
            } else {
              result[1] += -0.08729373;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[1] += -0.12844557;
            } else {
              result[1] += 0.018326385;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[1] += -0.073308386;
          } else {
            result[1] += 0.0839095;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[1] += -0.09284851;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[1] += 0.07069373;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.07995716;
            } else {
              result[1] += 0.0019352573;
            }
          }
        }
      }
    } else {
      result[1] += 0.074271806;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
      result[1] += -0.10156646;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
        result[1] += -0.018569382;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          result[1] += -0.05065827;
        } else {
          result[1] += 0.057531428;
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
    result[2] += -3.3229833e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += 0.017965613;
      } else {
        result[2] += 0.06892956;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        result[2] += -0.05723829;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          result[2] += 0.0749218;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
            result[2] += -0.07268914;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.0632882;
            } else {
              result[2] += 0.011968297;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += 0.0002723848;
    } else {
      result[3] += 0.0022316806;
    }
  } else {
    result[3] += -0.04231088;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -0.00021242182;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
              result[4] += 0.047854874;
            } else {
              result[4] += -0.0024231493;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
              result[4] += 0.060669947;
            } else {
              result[4] += 0.018394584;
            }
          }
        } else {
          result[4] += -0.022100216;
        }
      } else {
        result[4] += 0.06766884;
      }
    } else {
      result[4] += -0.006988271;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[5] += 1.9803594e-05;
        } else {
          result[5] += -0.0762518;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[5] += 0.01304335;
        } else {
          result[5] += 0.0033645893;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[5] += -0.078431204;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[5] += 0.022047732;
        } else {
          result[5] += -0.018592613;
        }
      }
    }
  } else {
    result[5] += 0.017014503;
  }
  result[6] += -2.0492354e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56842)) {
              result[7] += 0.00030026637;
            } else {
              result[7] += -0.0048383554;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += -0.026679711;
            } else {
              result[7] += 0.0055952845;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += -0.19088076;
            } else {
              result[7] += 0.057076678;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[7] += -0.005800317;
            } else {
              result[7] += 0.0013612008;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[7] += -0.088102855;
        } else {
          result[7] += 0.020260395;
        }
      }
    } else {
      result[7] += 0.044946462;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)24)) {
          result[7] += -0.078845456;
        } else {
          result[7] += -0.0359347;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
          result[7] += 0.027270492;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            result[7] += -0.1313491;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[7] += 0.0033702536;
            } else {
              result[7] += -0.061786596;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
          result[7] += 0.09468586;
        } else {
          result[7] += -0.055346284;
        }
      } else {
        result[7] += 0.09156484;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.00017883243;
            } else {
              result[8] += -0.14301498;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[8] += 0.14208706;
            } else {
              result[8] += -0.020400131;
            }
          }
        } else {
          result[8] += -0.14701785;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[8] += -0.23140682;
          } else {
            result[8] += 0.13982062;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.010782553;
            } else {
              result[8] += 0.08611573;
            }
          } else {
            result[8] += 0.12881048;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.04227622;
            } else {
              result[8] += -0.009430872;
            }
          } else {
            result[8] += 0.003545787;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.028251134;
            } else {
              result[8] += 0.049349524;
            }
          } else {
            result[8] += -0.061235953;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[8] += 0.006563245;
            } else {
              result[8] += -0.057642553;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[8] += 0.07175077;
            } else {
              result[8] += 0.042603217;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
            result[8] += -0.13020658;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[8] += 0.10522085;
            } else {
              result[8] += -0.0042734663;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[8] += -0.22522129;
        } else {
          result[8] += -0.044618003;
        }
      } else {
        result[8] += 0.034565434;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[8] += -0.11137249;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[8] += 0.07957709;
          } else {
            result[8] += -0.19182704;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
              result[8] += -0.03873699;
            } else {
              result[8] += 0.07811427;
            }
          } else {
            result[8] += 0.10291838;
          }
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[9] += 4.0721683e-05;
    } else {
      result[9] += -0.039429672;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.00031228428;
      } else {
        result[9] += 0.0003855288;
      }
    } else {
      result[9] += 0.004606073;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[10] += -4.196598e-05;
        } else {
          result[10] += -0.08243999;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
            result[10] += 0.0023666774;
          } else {
            result[10] += 0.005776001;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[10] += -0.00016612592;
            } else {
              result[10] += -0.029921947;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[10] += -0.071186386;
            } else {
              result[10] += 0.0012978432;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        result[10] += -0.08167701;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[10] += 0.01309692;
          } else {
            result[10] += 0.052611362;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
            result[10] += -0.096378244;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += -0.0068855034;
            } else {
              result[10] += 0.016766712;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.031908803;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += 0.0001475634;
            } else {
              result[11] += -0.06272535;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += 0.14275244;
            } else {
              result[11] += -0.0970738;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[11] += -0.15183571;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[11] += -0.0009892425;
            } else {
              result[11] += 0.015143878;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.11985832;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.008995749;
            } else {
              result[11] += -0.00725346;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.12973633;
            } else {
              result[11] += -0.043464053;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[11] += -0.020814724;
          } else {
            result[11] += 0.01179319;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            result[11] += -0.017478757;
          } else {
            result[11] += -0.06291246;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[11] += 0.012280335;
          } else {
            result[11] += 0.037285496;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.0015277558;
            } else {
              result[11] += -0.017428558;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += 0.02172171;
            } else {
              result[11] += 0.07010681;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.12721783;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            result[11] += 0.0019479789;
          } else {
            result[11] += -0.12758212;
          }
        } else {
          result[11] += 0.0064847227;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          result[11] += -0.008117432;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            result[11] += 0.0038248254;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.0067080767;
            } else {
              result[11] += 0.030285077;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.00026664184;
            } else {
              result[12] += 0.010676628;
            }
          } else {
            result[12] += -0.045701552;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.023669632;
            } else {
              result[12] += 0.08942323;
            }
          } else {
            result[12] += -0.02300538;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[12] += -0.08260383;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[12] += -0.015104445;
          } else {
            result[12] += 0.020123612;
          }
        }
      }
    } else {
      result[12] += -0.13455178;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[12] += 0.0026471566;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[12] += -0.080197416;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            result[12] += 0.046399094;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += 0.008598228;
            } else {
              result[12] += -0.05503832;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[12] += 0.076128915;
      } else {
        result[12] += -0.00012301869;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[13] += 0.0006118043;
            } else {
              result[13] += -0.005496093;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[13] += -0.09043688;
            } else {
              result[13] += 0.006315671;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.089725815;
          } else {
            result[13] += 0.004823061;
          }
        }
      } else {
        result[13] += -0.09057848;
      }
    } else {
      result[13] += 0.22287147;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
      result[13] += -0.07768734;
    } else {
      result[13] += -0.022065587;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 1.550967e-05;
            } else {
              result[14] += -0.107527316;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[14] += 0.017950492;
            } else {
              result[14] += 0.0010701809;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += -0.00759146;
            } else {
              result[14] += -0.022908814;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.0035752996;
            } else {
              result[14] += 0.011733121;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[14] += 0.010874197;
          } else {
            result[14] += 0.033933084;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            result[14] += 0.003236228;
          } else {
            result[14] += -0.00858246;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        result[14] += -0.10308371;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[14] += 0.044233374;
        } else {
          result[14] += -0.032213807;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          result[14] += 0.003071478;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[14] += -0.06889086;
            } else {
              result[14] += 0.005866372;
            }
          } else {
            result[14] += 0.012869131;
          }
        }
      } else {
        result[14] += 0.061877906;
      }
    } else {
      result[14] += -0.033624727;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.00045766347;
            } else {
              result[0] += -0.019432342;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[0] += 0.08071971;
            } else {
              result[0] += 0.0040578167;
            }
          }
        } else {
          result[0] += 0.042569596;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            result[0] += -0.08080358;
          } else {
            result[0] += -0.010261169;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.039926045;
          } else {
            result[0] += -0.012082308;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += 0.11354302;
        } else {
          result[0] += 0.00866592;
        }
      } else {
        result[0] += -0.014892074;
      }
    }
  } else {
    result[0] += -0.029591385;
  }
}

