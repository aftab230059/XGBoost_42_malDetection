
#include "header.h"

void predict_unit12(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[9] += 0.0075200778;
            } else {
              result[9] += -0.00125875;
            }
          } else {
            result[9] += -0.113555506;
          }
        } else {
          result[9] += -0.116937235;
        }
      } else {
        result[9] += -0.13258494;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
        result[9] += -0.13979276;
      } else {
        result[9] += 0.07236538;
      }
    }
  } else {
    result[9] += -0.1429742;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[10] += 0.0056828815;
            } else {
              result[10] += -0.0035673357;
            }
          } else {
            result[10] += -0.14607993;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40194)) {
              result[10] += 0.0030394436;
            } else {
              result[10] += -0.1161872;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[10] += 0.027720558;
            } else {
              result[10] += 0.00065134594;
            }
          }
        }
      } else {
        result[10] += -0.10958255;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[10] += -0.090155125;
          } else {
            result[10] += 0.07953788;
          }
        } else {
          result[10] += -0.13479239;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
          result[10] += -0.07739583;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            result[10] += 0.20610262;
          } else {
            result[10] += -0.076311395;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14005406;
    } else {
      result[10] += 0.020471059;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += -5.603023e-07;
            } else {
              result[11] += 0.017395644;
            }
          } else {
            result[11] += -0.14147481;
          }
        } else {
          result[11] += -0.13181055;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[11] += 0.12941134;
          } else {
            result[11] += -0.091802225;
          }
        } else {
          result[11] += -0.10981584;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += -0.3758954;
        } else {
          result[11] += -0.1127529;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
            result[11] += -0.20145288;
          } else {
            result[11] += 0.1245156;
          }
        } else {
          result[11] += -0.12825435;
        }
      }
    }
  } else {
    result[11] += -0.14035815;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[12] += -0.03799907;
            } else {
              result[12] += -0.12781288;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
              result[12] += -0.0057269493;
            } else {
              result[12] += -0.10100496;
            }
          }
        } else {
          result[12] += -0.14638415;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.1487887;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[12] += -0.15733624;
            } else {
              result[12] += -0.009099163;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
              result[12] += 0.08423328;
            } else {
              result[12] += -0.007037614;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[12] += -0.12034304;
            } else {
              result[12] += 0.0074287937;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += -0.04265304;
            } else {
              result[12] += -0.238194;
            }
          }
        } else {
          result[12] += 0.108092695;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[12] += -0.12935103;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += -0.003043188;
            } else {
              result[12] += -0.079422474;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
            result[12] += 0.14415962;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
              result[12] += -0.071113765;
            } else {
              result[12] += 0.0600566;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.009210045;
            } else {
              result[12] += -0.13175474;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += -0.14468426;
            } else {
              result[12] += 0.021705111;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
              result[12] += 0.052003276;
            } else {
              result[12] += 0.008289445;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[12] += -0.12993373;
            } else {
              result[12] += 0.10453027;
            }
          }
        }
      } else {
        result[12] += -0.15042989;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[12] += -0.13568132;
            } else {
              result[12] += 0.014452738;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[12] += -0.12481698;
            } else {
              result[12] += 0.11189413;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[12] += -0.10625024;
            } else {
              result[12] += 0.1237712;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[12] += -0.000102678496;
            } else {
              result[12] += 0.054513477;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)410017792)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
              result[12] += 0.13320747;
            } else {
              result[12] += -0.06614634;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
              result[12] += 0.39392006;
            } else {
              result[12] += 0.09804661;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[12] += -0.08442356;
            } else {
              result[12] += 0.0008063079;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
              result[12] += 0.027192127;
            } else {
              result[12] += 0.0029903238;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.0033137978;
            } else {
              result[13] += -0.110849045;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += -0.046650942;
            } else {
              result[13] += 0.16242142;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.1459457;
            } else {
              result[13] += 0.03127576;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
              result[13] += 0.14439906;
            } else {
              result[13] += -0.0057867086;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.038772956;
            } else {
              result[13] += -0.10670466;
            }
          } else {
            result[13] += -0.15200682;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[13] += -0.02043996;
            } else {
              result[13] += 0.063287266;
            }
          } else {
            result[13] += 0.18220827;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
              result[13] += 0.31534407;
            } else {
              result[13] += 0.04297452;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.07959596;
            } else {
              result[13] += 0.02115019;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.21876027;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += 0.09239552;
            } else {
              result[13] += -0.14886019;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[13] += -0.14738534;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[13] += 0.018720016;
            } else {
              result[13] += 0.20120141;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.13563739;
            } else {
              result[13] += 0.006116713;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[13] += -0.13681778;
    } else {
      result[13] += -0.03329259;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += 0.0011850606;
            } else {
              result[14] += -0.124722995;
            }
          } else {
            result[14] += -0.1448251;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.17769893;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.12488926;
            } else {
              result[14] += 0.14111055;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.14656925;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[14] += -0.034348655;
            } else {
              result[14] += 0.13974842;
            }
          } else {
            result[14] += -0.12739965;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
              result[14] += 0.12955517;
            } else {
              result[14] += 0.21440203;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[14] += -0.11021147;
            } else {
              result[14] += 0.14148058;
            }
          }
        } else {
          result[14] += -0.15384105;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[14] += -0.13836692;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
            result[14] += 0.11685591;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
              result[14] += -0.010667892;
            } else {
              result[14] += 0.09873123;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[14] += -0.030483792;
            } else {
              result[14] += 0.10949065;
            }
          } else {
            result[14] += -0.14206919;
          }
        } else {
          result[14] += -0.15186793;
        }
      } else {
        result[14] += 0.06841734;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[14] += -0.09478472;
        } else {
          result[14] += 0.12590341;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.042768303;
            } else {
              result[14] += -0.19266607;
            }
          } else {
            result[14] += 0.10766322;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            result[14] += 0.33877498;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
              result[14] += -0.07456246;
            } else {
              result[14] += 0.04767992;
            }
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.0009866242;
            } else {
              result[0] += 0.032180753;
            }
          } else {
            result[0] += -0.16500893;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31746)) {
              result[0] += -0.09918248;
            } else {
              result[0] += 0.043813344;
            }
          } else {
            result[0] += 0.13536206;
          }
        }
      } else {
        result[0] += -0.1303655;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
          result[0] += -0.18579659;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[0] += 0.042506415;
            } else {
              result[0] += -0.1620582;
            }
          } else {
            result[0] += 0.08359942;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[0] += -0.13189003;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[0] += 0.13837565;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.1164005;
            } else {
              result[0] += 0.03537333;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.13532366;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += -0.0014284679;
            } else {
              result[1] += 0.010184117;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += 0.030861547;
            } else {
              result[1] += -0.1234185;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.15982583;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += 0.031644527;
            } else {
              result[1] += -0.22536229;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
              result[1] += 0.03818678;
            } else {
              result[1] += 0.16398922;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[1] += -0.08505127;
            } else {
              result[1] += 0.010344658;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56523)) {
              result[1] += 0.09903917;
            } else {
              result[1] += -0.10145265;
            }
          } else {
            result[1] += 0.40879223;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[1] += 0.03138847;
            } else {
              result[1] += -0.09458521;
            }
          } else {
            result[1] += 0.11224367;
          }
        } else {
          result[1] += -0.16885084;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57688)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22532)) {
              result[1] += -0.08194484;
            } else {
              result[1] += 0.20111065;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
              result[1] += 0.00051082845;
            } else {
              result[1] += -0.10070192;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.15023029;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[1] += -0.13910839;
            } else {
              result[1] += 0.016530704;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[1] += -0.1658698;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          result[1] += -0.11056515;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            result[1] += 0.1572951;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[1] += -0.10616279;
            } else {
              result[1] += 0.053610723;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        result[1] += -0.1027778;
      } else {
        result[1] += 0.11839517;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.058529247;
            } else {
              result[2] += 0.009287305;
            }
          } else {
            result[2] += -0.0063624666;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.018301507;
          } else {
            result[2] += -0.008706729;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)55071)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
              result[2] += 0.0036208136;
            } else {
              result[2] += -0.012107928;
            }
          } else {
            result[2] += -0.13540553;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)56134)) {
            result[2] += 0.11292941;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)56394)) {
              result[2] += -0.067286626;
            } else {
              result[2] += 0.0079131555;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
              result[2] += -0.020493396;
            } else {
              result[2] += 0.04306233;
            }
          } else {
            result[2] += -0.05075333;
          }
        } else {
          result[2] += 0.08045737;
        }
      } else {
        result[2] += 0.1404029;
      }
    }
  } else {
    result[2] += -0.14618616;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.14617355;
      } else {
        result[3] += -0.020770786;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.102861255;
      } else {
        result[3] += 0.101962596;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
      result[3] += 0.012516919;
    } else {
      result[3] += 0.088098764;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)796)) {
        result[4] += -0.07664822;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
              result[4] += 0.0067630825;
            } else {
              result[4] += 0.067660786;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.091784924;
            } else {
              result[4] += 0.020494826;
            }
          }
        } else {
          result[4] += 0.06115977;
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[4] += 0.008547175;
        } else {
          result[4] += 0.10003753;
        }
      } else {
        result[4] += 0.14183022;
      }
    }
  } else {
    result[4] += -0.14626962;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)523)) {
              result[5] += -0.00839014;
            } else {
              result[5] += 0.0090323975;
            }
          } else {
            result[5] += -0.14018755;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[5] += 0.1191785;
            } else {
              result[5] += 0.03267274;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += -0.09265836;
            } else {
              result[5] += 0.049432036;
            }
          }
        }
      } else {
        result[5] += -0.12735474;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[5] += -0.13466015;
      } else {
        result[5] += 0.07979792;
      }
    }
  } else {
    result[5] += -0.14104396;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        result[6] += 0.0013773799;
      } else {
        result[6] += 0.08908092;
      }
    } else {
      result[6] += -0.10115291;
    }
  } else {
    result[6] += -0.14615256;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
              result[7] += -0.0008341954;
            } else {
              result[7] += 0.1365788;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
              result[7] += -0.14017269;
            } else {
              result[7] += -0.018340616;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[7] += -0.028667266;
            } else {
              result[7] += 0.14641142;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
              result[7] += -0.050233923;
            } else {
              result[7] += -0.097247794;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          result[7] += 0.14967047;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -0.14960964;
            } else {
              result[7] += -0.25150323;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[7] += 0.011947957;
            } else {
              result[7] += -0.0013525344;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[7] += -0.14585802;
      } else {
        result[7] += 0.10955157;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[7] += 0.14258042;
          } else {
            result[7] += -0.09699435;
          }
        } else {
          result[7] += -0.22445656;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.14665988;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[7] += -0.09113277;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.33582413;
            } else {
              result[7] += -0.08201553;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
          result[7] += -0.13960862;
        } else {
          result[7] += -0.042333245;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.00611997;
            } else {
              result[7] += 0.25214362;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.14149784;
            } else {
              result[7] += 0.09886544;
            }
          }
        } else {
          result[7] += 0.13737035;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[8] += 0.00080216257;
            } else {
              result[8] += -0.022159647;
            }
          } else {
            result[8] += -0.14211352;
          }
        } else {
          result[8] += 0.14163817;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          result[8] += -0.14937302;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
              result[8] += 0.09968525;
            } else {
              result[8] += 0.00076100917;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.16999662;
            } else {
              result[8] += 0.033623353;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24813)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[8] += 0.092964366;
            } else {
              result[8] += -0.055968966;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.15499242;
            } else {
              result[8] += 0.0445724;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[8] += -0.10166899;
            } else {
              result[8] += 0.042188868;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.1432997;
            } else {
              result[8] += -0.009184863;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
              result[8] += 0.11894781;
            } else {
              result[8] += -0.10913167;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[8] += -0.5806086;
            } else {
              result[8] += -0.08070322;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
            result[8] += -0.09881898;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[8] += 0.06828518;
            } else {
              result[8] += -0.06821206;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15137008;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.12427654;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
              result[8] += 0.03679787;
            } else {
              result[8] += 0.13587092;
            }
          } else {
            result[8] += -0.10852667;
          }
        }
      } else {
        result[8] += -0.13957295;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[9] += 0.0023066204;
            } else {
              result[9] += -0.10685227;
            }
          } else {
            result[9] += -0.10861018;
          }
        } else {
          result[9] += -0.112757005;
        }
      } else {
        result[9] += -0.13018641;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
        result[9] += -0.13835351;
      } else {
        result[9] += 0.068079315;
      }
    }
  } else {
    result[9] += -0.1418547;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
              result[10] += 0.0019844403;
            } else {
              result[10] += -0.041045986;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += 0.00056598306;
            } else {
              result[10] += 0.120619014;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
            result[10] += 0.00502742;
          } else {
            result[10] += -0.15392588;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
            result[10] += -0.13357937;
          } else {
            result[10] += 0.02738888;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
              result[10] += -0.013974621;
            } else {
              result[10] += 0.09391515;
            }
          } else {
            result[10] += -0.085316576;
          }
        }
      }
    } else {
      result[10] += -0.1198741;
    }
  } else {
    result[10] += -0.13647126;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
              result[11] += -0.00030640143;
            } else {
              result[11] += 0.014860558;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.019328898;
            } else {
              result[11] += 0.12217883;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[11] += 0.011776145;
            } else {
              result[11] += -0.045008775;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
              result[11] += 0.05061209;
            } else {
              result[11] += 0.20763206;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[11] += 0.084758505;
            } else {
              result[11] += 0.1361569;
            }
          } else {
            result[11] += -0.08864571;
          }
        } else {
          result[11] += -0.10023238;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += -0.30964106;
        } else {
          result[11] += -0.10934972;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          result[11] += -0.18190044;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
            result[11] += 0.13003185;
          } else {
            result[11] += -0.12020304;
          }
        }
      }
    }
  } else {
    result[11] += -0.13886791;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[12] += -0.0058245272;
            } else {
              result[12] += -0.074824736;
            }
          } else {
            result[12] += -0.14579858;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.14825296;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[12] += -0.14109871;
            } else {
              result[12] += 0.005250169;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.1356805;
            } else {
              result[12] += -0.07613285;
            }
          } else {
            result[12] += 0.10254888;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += -0.12574549;
            } else {
              result[12] += -0.03489699;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18700)) {
              result[12] += 0.10838971;
            } else {
              result[12] += -0.0049098274;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[12] += 0.009125361;
            } else {
              result[12] += -0.14350797;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.10003686;
            } else {
              result[12] += -0.14191242;
            }
          }
        } else {
          result[12] += -0.14861946;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          result[12] += -0.14745742;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.06293446;
            } else {
              result[12] += 0.011463146;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)410017792)) {
              result[12] += 0.079511076;
            } else {
              result[12] += 0.008900341;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += -0.14326635;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[12] += 0.029713904;
          } else {
            result[12] += -0.12677103;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.08119534;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
            result[12] += 0.02472855;
          } else {
            result[12] += 0.08749243;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        result[12] += 0.12879623;
      } else {
        result[12] += -0.09842735;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += 0.005990885;
            } else {
              result[13] += -0.1420588;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.054581057;
            } else {
              result[13] += 0.011573732;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[13] += -0.017133467;
            } else {
              result[13] += -0.11428609;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.09930064;
            } else {
              result[13] += -0.0625496;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
            result[13] += -0.1434236;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
              result[13] += 0.044430826;
            } else {
              result[13] += -0.07027772;
            }
          }
        } else {
          result[13] += -0.115878366;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
              result[13] += 0.017490821;
            } else {
              result[13] += 0.08527966;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += -0.10263975;
            } else {
              result[13] += 0.0605516;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[13] += -0.021537792;
            } else {
              result[13] += 0.30648133;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.12678805;
            } else {
              result[13] += -0.053446867;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.106889814;
            } else {
              result[13] += 0.019162225;
            }
          } else {
            result[13] += 0.20465225;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.032180812;
            } else {
              result[13] += -0.05949583;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.15118566;
            } else {
              result[13] += 0.12622544;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.11745615;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[13] += 0.05028497;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
          result[13] += -0.11306033;
        } else {
          result[13] += -0.005278956;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2835)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
              result[14] += 0.0064722956;
            } else {
              result[14] += 0.039594464;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4358)) {
              result[14] += -0.04280539;
            } else {
              result[14] += -0.0011680124;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[14] += -0.042778973;
          } else {
            result[14] += -0.015054318;
          }
        }
      } else {
        result[14] += -0.13030998;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        result[14] += -0.14008075;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          result[14] += 0.15734933;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
              result[14] += -0.11445926;
            } else {
              result[14] += 0.010408328;
            }
          } else {
            result[14] += 0.07090475;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1325477248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
              result[14] += 0.0674759;
            } else {
              result[14] += -0.06782092;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[14] += 0.15599093;
            } else {
              result[14] += 0.02481015;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
            result[14] += 0.3132419;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
              result[14] += 0.26676992;
            } else {
              result[14] += -0.032142736;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)12324)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[14] += -0.018364957;
            } else {
              result[14] += -0.15532438;
            }
          } else {
            result[14] += 0.13039607;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
              result[14] += 0.017551174;
            } else {
              result[14] += 0.13011198;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
              result[14] += -0.028592886;
            } else {
              result[14] += 0.057833623;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.14547545;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[14] += 0.0737983;
          } else {
            result[14] += -0.10476542;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
          result[14] += 0.289708;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[14] += -0.13396578;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.2116462;
            } else {
              result[14] += -0.01891814;
            }
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)29424)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
              result[0] += 0.00079342246;
            } else {
              result[0] += -0.06659221;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27865)) {
              result[0] += 0.16551219;
            } else {
              result[0] += 0.03806421;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
            result[0] += -0.0494825;
          } else {
            result[0] += -0.118405856;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[0] += -0.13849287;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
            result[0] += 0.18515955;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
              result[0] += -0.09634225;
            } else {
              result[0] += 0.03497998;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[0] += -0.13734797;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[0] += -0.08614468;
            } else {
              result[0] += -0.21785639;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
              result[0] += 0.05202043;
            } else {
              result[0] += -0.008655893;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.07084776;
            } else {
              result[0] += -0.06147397;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
              result[0] += -0.1260956;
            } else {
              result[0] += -0.00011039834;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.13339359;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -7.561125e-05;
            } else {
              result[1] += -0.110666305;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += 0.15276381;
            } else {
              result[1] += 0.009455772;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1143537664)) {
              result[1] += -0.019633686;
            } else {
              result[1] += -0.07233801;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
              result[1] += -0.09767017;
            } else {
              result[1] += 0.0052904077;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
              result[1] += -0.052155547;
            } else {
              result[1] += 0.13560954;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[1] += -0.1287421;
            } else {
              result[1] += -0.01932385;
            }
          }
        } else {
          result[1] += 0.1265364;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += 0.052714277;
          } else {
            result[1] += -0.12764993;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
            result[1] += 0.30857202;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
              result[1] += 0.07392224;
            } else {
              result[1] += -0.0498647;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.13031662;
            } else {
              result[1] += 0.01246821;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.07053838;
            } else {
              result[1] += 0.008318572;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            result[1] += -0.138643;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.10573703;
            } else {
              result[1] += -0.055827573;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[1] += -0.16253038;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[1] += 0.102427736;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            result[1] += -0.13184698;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.14188914;
            } else {
              result[1] += -0.10529265;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        result[1] += -0.09687322;
      } else {
        result[1] += 0.09787205;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.053054333;
            } else {
              result[2] += 0.008960864;
            }
          } else {
            result[2] += -0.006221254;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.016242864;
          } else {
            result[2] += -0.0076576015;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)18398)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)17404)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)15623)) {
              result[2] += -0.00093792356;
            } else {
              result[2] += 0.039182056;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.11223371;
            } else {
              result[2] += -0.010877809;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)19410)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)18914)) {
              result[2] += 0.0038086665;
            } else {
              result[2] += 0.07783788;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)21231)) {
              result[2] += -0.029883211;
            } else {
              result[2] += 0.004961192;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
          result[2] += 0.08042763;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.016379073;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21042)) {
              result[2] += 0.09462264;
            } else {
              result[2] += 0.019760784;
            }
          }
        }
      } else {
        result[2] += 0.13871244;
      }
    }
  } else {
    result[2] += -0.1455278;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.14546518;
      } else {
        result[3] += -0.018809758;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.09886434;
      } else {
        result[3] += 0.094438896;
      }
    }
  } else {
    result[3] += 0.0742678;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)796)) {
        result[4] += -0.07083966;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[4] += 0.05556438;
            } else {
              result[4] += -0.038164027;
            }
          } else {
            result[4] += 0.066790886;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
            result[4] += -0.077252954;
          } else {
            result[4] += 0.053346682;
          }
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[4] += 0.013810073;
        } else {
          result[4] += 0.09654108;
        }
      } else {
        result[4] += 0.1405735;
      }
    }
  } else {
    result[4] += -0.1456246;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[5] += 0.0023310573;
            } else {
              result[5] += -0.13412364;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
              result[5] += -0.012111585;
            } else {
              result[5] += 0.037111264;
            }
          }
        } else {
          result[5] += -0.12001685;
        }
      } else {
        result[5] += -0.124312855;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[5] += -0.13242407;
      } else {
        result[5] += 0.076792955;
      }
    }
  } else {
    result[5] += -0.13961966;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        result[6] += 0.001209259;
      } else {
        result[6] += 0.085844144;
      }
    } else {
      result[6] += -0.09777046;
    }
  } else {
    result[6] += -0.14548883;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
              result[7] += -0.00084285636;
            } else {
              result[7] += 0.02285034;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[7] += -0.12154735;
            } else {
              result[7] += 0.05400266;
            }
          }
        } else {
          result[7] += -0.13713233;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[7] += -0.14375639;
        } else {
          result[7] += 0.10546603;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[7] += -0.006097464;
        } else {
          result[7] += 0.08123973;
        }
      } else {
        result[7] += 0.13512647;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
            result[7] += 0.1263209;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
              result[7] += -0.071843155;
            } else {
              result[7] += 0.08185558;
            }
          }
        } else {
          result[7] += -0.095933884;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.14605825;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[7] += -0.08698514;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
              result[7] += 0.19984913;
            } else {
              result[7] += 0.04570321;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.1319244;
        } else {
          result[7] += -0.031252988;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            result[7] += -0.13188112;
          } else {
            result[7] += 0.08256702;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += 0.18166277;
            } else {
              result[7] += -0.12142122;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.0819114;
            } else {
              result[7] += 0.1264066;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[8] += -0.031422053;
            } else {
              result[8] += 0.0039998163;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[8] += -0.0073940554;
            } else {
              result[8] += 0.04022403;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.1480381;
            } else {
              result[8] += -0.08499766;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += -0.14228861;
            } else {
              result[8] += 0.077160574;
            }
          }
        }
      } else {
        result[8] += -0.15047139;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.17165652;
            } else {
              result[8] += -0.1255298;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
              result[8] += -0.107601404;
            } else {
              result[8] += 0.058249053;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[8] += 0.1495654;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[8] += 0.11718832;
            } else {
              result[8] += -0.053435747;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[8] += -0.15242419;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[8] += 0.13483211;
            } else {
              result[8] += -0.10186901;
            }
          } else {
            result[8] += -0.1329035;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15051016;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.12128101;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
              result[8] += 0.035208374;
            } else {
              result[8] += 0.13389117;
            }
          } else {
            result[8] += -0.10397562;
          }
        }
      } else {
        result[8] += -0.13648549;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[9] += 0.006306534;
            } else {
              result[9] += -0.10354648;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[9] += -0.00018206798;
            } else {
              result[9] += -0.0038279973;
            }
          }
        } else {
          result[9] += -0.10858745;
        }
      } else {
        result[9] += -0.12738289;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
        result[9] += -0.13663067;
      } else {
        result[9] += 0.06389282;
      }
    }
  } else {
    result[9] += -0.14060064;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[10] += 0.0011073684;
            } else {
              result[10] += 0.045575447;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[10] += -0.113444634;
            } else {
              result[10] += -0.041609008;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[10] += 0.03458546;
            } else {
              result[10] += 0.17068005;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
              result[10] += -0.041691303;
            } else {
              result[10] += 0.073742345;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
            result[10] += -0.13126266;
          } else {
            result[10] += 0.025891311;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
              result[10] += -0.013885495;
            } else {
              result[10] += 0.08154168;
            }
          } else {
            result[10] += -0.08115952;
          }
        }
      }
    } else {
      result[10] += -0.11674114;
    }
  } else {
    result[10] += -0.13447763;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
              result[11] += -0.024024842;
            } else {
              result[11] += -0.0003398694;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[11] += -0.04500924;
            } else {
              result[11] += 0.18032818;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
              result[11] += 0.006019705;
            } else {
              result[11] += 0.05029283;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
              result[11] += -0.07321038;
            } else {
              result[11] += -0.00069741573;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[11] += 0.0787588;
            } else {
              result[11] += 0.13335179;
            }
          } else {
            result[11] += -0.08434187;
          }
        } else {
          result[11] += -0.09382348;
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[11] += -0.25959533;
          } else {
            result[11] += -0.10590212;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
            result[11] += -0.2487347;
          } else {
            result[11] += 0.0943625;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          result[11] += 0.12632228;
        } else {
          result[11] += -0.119503066;
        }
      }
    }
  } else {
    result[11] += -0.13720031;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[12] += -0.0049983365;
            } else {
              result[12] += -0.06916514;
            }
          } else {
            result[12] += -0.14438953;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.14733668;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[12] += -0.13639233;
            } else {
              result[12] += 0.004081211;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.13116845;
            } else {
              result[12] += -0.06666422;
            }
          } else {
            result[12] += 0.09767317;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += -0.12126252;
            } else {
              result[12] += -0.03298765;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18700)) {
              result[12] += 0.0966365;
            } else {
              result[12] += -0.0039041657;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[12] += 0.0082701715;
            } else {
              result[12] += -0.1432042;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.08931072;
            } else {
              result[12] += -0.12847625;
            }
          }
        } else {
          result[12] += -0.14673291;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          result[12] += -0.14672996;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.11287467;
            } else {
              result[12] += 0.008891562;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.008262063;
            } else {
              result[12] += -0.12374482;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[12] += -0.1421952;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[12] += 0.02610302;
          } else {
            result[12] += -0.12362168;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.076565355;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
            result[12] += 0.02157544;
          } else {
            result[12] += 0.08270456;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        result[12] += 0.12427431;
      } else {
        result[12] += -0.09165907;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.0024677706;
            } else {
              result[13] += -0.06459455;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[13] += 0.2570386;
            } else {
              result[13] += -0.0009055853;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.058997523;
            } else {
              result[13] += 0.11995866;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[13] += -0.22630644;
            } else {
              result[13] += 0.023107175;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[13] += -0.06654306;
            } else {
              result[13] += 0.104467906;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[13] += -0.23281366;
            } else {
              result[13] += 0.025524925;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.14142884;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[13] += -0.099872425;
            } else {
              result[13] += 0.116839595;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
            result[13] += 0.08158974;
          } else {
            result[13] += 0.019653883;
          }
        } else {
          result[13] += 0.14328372;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[13] += -0.10442089;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
              result[13] += 0.0039208694;
            } else {
              result[13] += 0.105912015;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
              result[13] += 0.051212784;
            } else {
              result[13] += -0.06267187;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[13] += -0.13338841;
    } else {
      result[13] += -0.018543858;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
              result[14] += -0.0033865967;
            } else {
              result[14] += 0.020250902;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[14] += 0.06850258;
            } else {
              result[14] += -0.08350487;
            }
          }
        } else {
          result[14] += -0.14374194;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[14] += -0.14414735;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.07873113;
            } else {
              result[14] += -0.03132173;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[14] += -0.07485759;
            } else {
              result[14] += 0.47587684;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
        result[14] += -0.14894792;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
              result[14] += -0.07945127;
            } else {
              result[14] += 0.04211519;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[14] += 0.26069462;
            } else {
              result[14] += -0.087633625;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
            result[14] += -0.15422504;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
              result[14] += 0.14851455;
            } else {
              result[14] += -0.049865313;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)978331136)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[14] += 0.00082775264;
            } else {
              result[14] += 0.25654122;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[14] += 0.08020696;
            } else {
              result[14] += -0.07276951;
            }
          }
        } else {
          result[14] += 0.20663227;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
              result[14] += 0.11283913;
            } else {
              result[14] += -0.050474305;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.2878924;
            } else {
              result[14] += 0.043478865;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
            result[14] += 0.0524924;
          } else {
            result[14] += -0.1456012;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.0057279645;
            } else {
              result[14] += -0.07672745;
            }
          } else {
            result[14] += -0.14193442;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
              result[14] += 0.10357534;
            } else {
              result[14] += -0.08344323;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
              result[14] += 0.20860784;
            } else {
              result[14] += 0.056836642;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
              result[14] += -0.1357089;
            } else {
              result[14] += 0.27695167;
            }
          } else {
            result[14] += -0.14949228;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[14] += 0.05110258;
            } else {
              result[14] += -0.08253347;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
              result[14] += 0.06765378;
            } else {
              result[14] += 0.0060385475;
            }
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[0] += 0.0015150902;
            } else {
              result[0] += -0.11452405;
            }
          } else {
            result[0] += -0.20892455;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31746)) {
              result[0] += -0.09535671;
            } else {
              result[0] += 0.030571932;
            }
          } else {
            result[0] += 0.13238335;
          }
        }
      } else {
        result[0] += -0.12638439;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
          result[0] += -0.1746445;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[0] += 0.03651288;
            } else {
              result[0] += -0.15717924;
            }
          } else {
            result[0] += 0.0807034;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[0] += -0.12772463;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[0] += 0.12985043;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.114247255;
            } else {
              result[0] += 0.029766297;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.13130379;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.00020412836;
            } else {
              result[1] += -0.015556434;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[1] += -0.22608781;
            } else {
              result[1] += 0.016769957;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.15955868;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += 0.02875583;
            } else {
              result[1] += -0.21385138;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[1] += 0.030763218;
            } else {
              result[1] += 0.10301499;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[1] += -0.14447762;
            } else {
              result[1] += -0.0015601437;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
              result[1] += 0.052453067;
            } else {
              result[1] += -0.00051554467;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.15337689;
            } else {
              result[1] += -0.018111458;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[1] += -0.028759457;
            } else {
              result[1] += -0.08465273;
            }
          } else {
            result[1] += -0.13998887;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
              result[1] += 0.15539297;
            } else {
              result[1] += -0.054743934;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
              result[1] += -0.15375598;
            } else {
              result[1] += 0.07831432;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28120)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
              result[1] += 0.031133486;
            } else {
              result[1] += 0.24425954;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[1] += -0.05294802;
            } else {
              result[1] += 0.058621723;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[1] += -0.002325533;
            } else {
              result[1] += 0.17999844;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += -0.03153818;
            } else {
              result[1] += -0.11019428;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[1] += -0.15987366;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[1] += 0.18720129;
        } else {
          result[1] += -0.13216044;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[1] += 0.23696353;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          result[1] += -0.11425014;
        } else {
          result[1] += -0.03136839;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            result[2] += -0.035050616;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)523)) {
              result[2] += 0.011698659;
            } else {
              result[2] += -0.043194585;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.01444401;
          } else {
            result[2] += -0.0070208064;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)11305)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[2] += 0.010176596;
            } else {
              result[2] += -0.05309787;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6956)) {
              result[2] += 0.12418531;
            } else {
              result[2] += 0.013011755;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)11816)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.043541137;
            } else {
              result[2] += -0.11139521;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)18398)) {
              result[2] += -0.006662659;
            } else {
              result[2] += 0.0046185935;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.09241253;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[2] += 0.026819088;
            } else {
              result[2] += -0.043024663;
            }
          } else {
            result[2] += 0.07968707;
          }
        }
      } else {
        result[2] += 0.13595052;
      }
    }
  } else {
    result[2] += -0.14479122;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.14467064;
      } else {
        result[3] += -0.017254952;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.09488595;
      } else {
        result[3] += 0.08951071;
      }
    }
  } else {
    result[3] += 0.07040344;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)796)) {
        result[4] += -0.06558873;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[4] += 0.06204314;
            } else {
              result[4] += -0.08645705;
            }
          } else {
            result[4] += 0.073585734;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            result[4] += -0.08824751;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[4] += 0.094171;
            } else {
              result[4] += -0.009646469;
            }
          }
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[4] += 0.012255263;
        } else {
          result[4] += 0.09299654;
        }
      } else {
        result[4] += 0.13916212;
      }
    }
  } else {
    result[4] += -0.14490266;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[5] += 0.002202044;
            } else {
              result[5] += -0.13474734;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[5] += 0.129652;
            } else {
              result[5] += 0.017283142;
            }
          }
        } else {
          result[5] += -0.11701085;
        }
      } else {
        result[5] += -0.12131218;
      }
    } else {
      result[5] += -0.098710455;
    }
  } else {
    result[5] += -0.13805519;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        result[6] += 0.00095840433;
      } else {
        result[6] += 0.08274194;
      }
    } else {
      result[6] += -0.09443795;
    }
  } else {
    result[6] += -0.14474635;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.003016718;
            } else {
              result[7] += -0.0043161563;
            }
          } else {
            result[7] += 0.13444364;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
            result[7] += -0.1381072;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)57396)) {
              result[7] += 0.084313795;
            } else {
              result[7] += -0.10421389;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
              result[7] += -0.042816672;
            } else {
              result[7] += -0.013651559;
            }
          } else {
            result[7] += 0.10958219;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[7] += -0.18781064;
            } else {
              result[7] += 0.023237748;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[7] += 0.11973598;
            } else {
              result[7] += -0.10821884;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)39407)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
              result[7] += 0.015155013;
            } else {
              result[7] += -0.040295374;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
              result[7] += 0.08950062;
            } else {
              result[7] += -0.013274545;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43291)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
              result[7] += 0.0113929445;
            } else {
              result[7] += -0.18941303;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[7] += -0.0332547;
            } else {
              result[7] += 0.008164146;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          result[7] += 0.14302133;
        } else {
          result[7] += -0.0766445;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[7] += 0.12295422;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
              result[7] += -0.08337851;
            } else {
              result[7] += 0.08367285;
            }
          }
        } else {
          result[7] += -0.093854666;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.14533232;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[7] += -0.081180096;
          } else {
            result[7] += 0.15322705;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
          result[7] += -0.13631222;
        } else {
          result[7] += -0.037550963;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[7] += -0.12696308;
            } else {
              result[7] += 0.074439935;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
              result[7] += 0.041381374;
            } else {
              result[7] += 0.18713231;
            }
          }
        } else {
          result[7] += -0.11861107;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.00012329263;
            } else {
              result[8] += 0.06791123;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.08416417;
            } else {
              result[8] += -0.047180284;
            }
          }
        } else {
          result[8] += -0.14057404;
        }
      } else {
        result[8] += 0.13949734;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        result[8] += -0.14849472;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[8] += 0.085921794;
            } else {
              result[8] += -0.12919573;
            }
          } else {
            result[8] += 0.13423489;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[8] += -0.3038447;
            } else {
              result[8] += -0.13299182;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.045220856;
            } else {
              result[8] += -0.17557006;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.14959599;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.118396856;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
              result[8] += 0.03243565;
            } else {
              result[8] += 0.13121995;
            }
          } else {
            result[8] += -0.104104385;
          }
        }
      } else {
        result[8] += -0.13280614;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[9] += 0.001420924;
            } else {
              result[9] += -0.09126886;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.046215907;
            } else {
              result[9] += -0.0041239616;
            }
          }
        } else {
          result[9] += -0.10671119;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
          result[9] += -0.13484664;
        } else {
          result[9] += 0.05931354;
        }
      }
    } else {
      result[9] += -0.12461644;
    }
  } else {
    result[9] += -0.13914809;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[10] += 0.005131197;
            } else {
              result[10] += -0.0036525463;
            }
          } else {
            result[10] += -0.1016205;
          }
        } else {
          result[10] += -0.14575134;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)35802)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
              result[10] += -0.010875759;
            } else {
              result[10] += 0.013417336;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
              result[10] += -0.05596195;
            } else {
              result[10] += -0.15618546;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
              result[10] += 0.10845451;
            } else {
              result[10] += -0.005331872;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[10] += -0.04953997;
            } else {
              result[10] += 0.014193685;
            }
          }
        }
      }
    } else {
      result[10] += -0.113588214;
    }
  } else {
    result[10] += -0.13222021;
  }
}

