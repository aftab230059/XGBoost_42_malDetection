
#include "header.h"

void predict_unit24(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.07958122;
    } else {
      result[3] += -0.00046688097;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.06694948;
    } else {
      result[3] += 0.0033495394;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)3172)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2256)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
              result[4] += -0.0027194982;
            } else {
              result[4] += 0.006668389;
            }
          } else {
            result[4] += -0.020909427;
          }
        } else {
          result[4] += 0.03404174;
        }
      } else {
        result[4] += -0.025919713;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)58776)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)57165)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56868)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
              result[4] += 0.0035953384;
            } else {
              result[4] += 0.12681592;
            }
          } else {
            result[4] += -0.080975875;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)57490)) {
            result[4] += 0.11746763;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)57801)) {
              result[4] += -0.038183928;
            } else {
              result[4] += 0.041014932;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)59067)) {
          result[4] += -0.036343187;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)59342)) {
            result[4] += 0.07165962;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)61243)) {
              result[4] += -0.028629078;
            } else {
              result[4] += 0.0074407705;
            }
          }
        }
      }
    }
  } else {
    result[4] += 0.058042094;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[5] += 7.046797e-05;
            } else {
              result[5] += 0.06077033;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += -0.1485991;
            } else {
              result[5] += -0.0022515566;
            }
          }
        } else {
          result[5] += -0.1340582;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28765)) {
            result[5] += 0.1479636;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
              result[5] += -0.24511667;
            } else {
              result[5] += 0.10029755;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
            result[5] += -0.16138904;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[5] += -0.1525664;
            } else {
              result[5] += 0.11408756;
            }
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        result[5] += -0.12742902;
      } else {
        result[5] += 0.14631376;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[5] += 0.14104007;
            } else {
              result[5] += -0.14341936;
            }
          } else {
            result[5] += 0.16054231;
          }
        } else {
          result[5] += -0.13838577;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
          result[5] += -0.1583665;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47457)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[5] += 0.1118244;
            } else {
              result[5] += -0.1551031;
            }
          } else {
            result[5] += -0.15154079;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1664345728)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
              result[5] += -0.0029349288;
            } else {
              result[5] += 0.12510085;
            }
          } else {
            result[5] += -0.17994341;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
            result[5] += 0.16745347;
          } else {
            result[5] += -0.08189106;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
          result[5] += -0.15728723;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
              result[5] += -0.00091863115;
            } else {
              result[5] += 0.13888209;
            }
          } else {
            result[5] += -0.11692483;
          }
        }
      }
    }
  }
  result[6] += 0.0001574674;
  if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4294947072)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[7] += 0.0030499196;
            } else {
              result[7] += -0.0028077974;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)15)) {
              result[7] += -0.05175922;
            } else {
              result[7] += 0.0009204781;
            }
          }
        } else {
          result[7] += -0.107288145;
        }
      } else {
        result[7] += -0.13236769;
      }
    } else {
      result[7] += 0.10849018;
    }
  } else {
    result[7] += 0.10950358;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += -2.838947e-05;
            } else {
              result[8] += -0.1480199;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[8] += 0.14694363;
            } else {
              result[8] += 0.03857106;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[8] += -0.14952785;
          } else {
            result[8] += 0.06362687;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
              result[8] += 0.14704199;
            } else {
              result[8] += -0.18306547;
            }
          } else {
            result[8] += 0.15188085;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
            result[8] += 0.081313305;
          } else {
            result[8] += -0.12219105;
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
        result[8] += -0.15633786;
      } else {
        result[8] += 0.10311009;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)262)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
              result[8] += 0.15963393;
            } else {
              result[8] += -0.33277094;
            }
          } else {
            result[8] += 0.16814214;
          }
        } else {
          result[8] += 0.015469468;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
              result[8] += -0.045867182;
            } else {
              result[8] += -0.2430576;
            }
          } else {
            result[8] += 0.051898066;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            result[8] += 0.16101028;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[8] += -0.229795;
            } else {
              result[8] += 0.12070675;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[8] += 0.1440576;
            } else {
              result[8] += -0.017287573;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[8] += -0.14394596;
            } else {
              result[8] += 0.06613843;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
            result[8] += 0.14533436;
          } else {
            result[8] += -0.115681715;
          }
        }
      } else {
        result[8] += -0.13904572;
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)48198)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)45184)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
              result[9] += -0.00025187206;
            } else {
              result[9] += 0.09683629;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
              result[9] += 0.14694996;
            } else {
              result[9] += -0.1219424;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
            result[9] += -0.18349929;
          } else {
            result[9] += 0.13013576;
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[9] += -0.09822377;
        } else {
          result[9] += 0.16470471;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1280068736)) {
        result[9] += 0.11447273;
      } else {
        result[9] += -0.17598432;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1264832000)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[9] += -0.0821618;
        } else {
          result[9] += 0.15485546;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)576729216)) {
              result[9] += -0.009778897;
            } else {
              result[9] += -0.14767833;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
              result[9] += 0.14430857;
            } else {
              result[9] += -0.05023456;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
            result[9] += -0.15600638;
          } else {
            result[9] += 0.09514813;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.07092163;
      } else {
        result[9] += 0.15366973;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)765019264)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)713554112)) {
              result[10] += 0.00023869275;
            } else {
              result[10] += 0.119106986;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
              result[10] += 0.115742914;
            } else {
              result[10] += -0.27402794;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22857)) {
              result[10] += 0.06696621;
            } else {
              result[10] += 0.0072592082;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
              result[10] += -0.36359477;
            } else {
              result[10] += 0.123691075;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            result[10] += -0.10874117;
          } else {
            result[10] += 0.13403225;
          }
        } else {
          result[10] += -0.45906568;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)32902)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1174624512)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[10] += 0.13289003;
            } else {
              result[10] += -0.30650666;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25904)) {
              result[10] += 0.07581002;
            } else {
              result[10] += 0.16610058;
            }
          }
        } else {
          result[10] += -0.27863404;
        }
      } else {
        result[10] += 0.15283641;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1280068736)) {
      result[10] += -0.27282375;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)156)) {
          result[10] += -0.14611964;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
            result[10] += -0.12612094;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2020837248)) {
              result[10] += 0.1302451;
            } else {
              result[10] += -0.09497971;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
              result[10] += -0.027389525;
            } else {
              result[10] += 0.010476566;
            }
          } else {
            result[10] += -0.47462308;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)26159)) {
            result[10] += 0.19625327;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)27219)) {
              result[10] += -0.19155906;
            } else {
              result[10] += 0.005321968;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
              result[11] += -0.0038502186;
            } else {
              result[11] += 0.0016699872;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.15036204;
            } else {
              result[11] += -0.0002492406;
            }
          }
        } else {
          result[11] += -0.14035779;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)27752)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += 0.008343396;
            } else {
              result[11] += 0.16726448;
            }
          } else {
            result[11] += -0.14889698;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
              result[11] += 0.088573664;
            } else {
              result[11] += 0.21373792;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
              result[11] += -0.06915148;
            } else {
              result[11] += 0.25504956;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)27752)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3172840704)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2718478592)) {
              result[11] += 0.03374913;
            } else {
              result[11] += 0.7220743;
            }
          } else {
            result[11] += -0.13607499;
          }
        } else {
          result[11] += -0.14616738;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)832030464)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[11] += -0.13346246;
            } else {
              result[11] += 0.28294986;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
              result[11] += 0.6687643;
            } else {
              result[11] += 0.22320397;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
              result[11] += -0.14542723;
            } else {
              result[11] += 0.0017876433;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
              result[11] += 0.5646768;
            } else {
              result[11] += 0.06900763;
            }
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
      result[11] += -0.15894529;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)167486704)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
              result[11] += 0.03763443;
            } else {
              result[11] += -0.006999876;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[11] += -0.1308477;
            } else {
              result[11] += 0.045566503;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[11] += 0.0705429;
            } else {
              result[11] += 0.14528091;
            }
          } else {
            result[11] += -0.08105989;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
          result[11] += -0.15196867;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
            result[11] += 0.13892114;
          } else {
            result[11] += -0.14331871;
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)152)) {
              result[12] += -8.3765175e-05;
            } else {
              result[12] += -0.122012496;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
              result[12] += -0.14070076;
            } else {
              result[12] += 0.023324007;
            }
          }
        } else {
          result[12] += -0.13508952;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
            result[12] += 0.0460445;
          } else {
            result[12] += -0.08401764;
          }
        } else {
          result[12] += -0.13902178;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
              result[12] += 0.042961754;
            } else {
              result[12] += -0.092015386;
            }
          } else {
            result[12] += 0.14262564;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.16452849;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[12] += 0.13602723;
            } else {
              result[12] += -0.04244277;
            }
          }
        }
      } else {
        result[12] += -0.09133232;
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
      result[12] += -0.1272142;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)16021)) {
            result[12] += 0.10008041;
          } else {
            result[12] += -0.01803629;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
            result[12] += -0.056382015;
          } else {
            result[12] += 0.062302087;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)17502)) {
          result[12] += -0.10082954;
        } else {
          result[12] += 0.06704179;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
              result[13] += -0.0014737294;
            } else {
              result[13] += 0.051309515;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
              result[13] += -0.05443192;
            } else {
              result[13] += -0.13834423;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2928404992)) {
              result[13] += 0.10885834;
            } else {
              result[13] += -0.056835044;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50702)) {
              result[13] += 0.015470552;
            } else {
              result[13] += -0.17850105;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
              result[13] += -0.037834544;
            } else {
              result[13] += 0.16552612;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
              result[13] += -0.1571278;
            } else {
              result[13] += 0.025329268;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
            result[13] += 0.24172392;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[13] += 0.13870756;
            } else {
              result[13] += -0.15762123;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += 0.003518183;
            } else {
              result[13] += 0.04681334;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
              result[13] += -0.14370234;
            } else {
              result[13] += -0.007164167;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[13] += 0.25268647;
            } else {
              result[13] += 0.0676624;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[13] += -0.014920371;
            } else {
              result[13] += 0.14349665;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)662398464)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)150343280)) {
              result[13] += -0.16390361;
            } else {
              result[13] += 0.21843019;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
              result[13] += -0.024819897;
            } else {
              result[13] += -0.12264339;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17809)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
              result[13] += 0.045770712;
            } else {
              result[13] += -0.07828066;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[13] += -0.115791015;
            } else {
              result[13] += 0.037588894;
            }
          }
        }
      }
    }
  } else {
    result[13] += -0.11281792;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62713)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57147)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
              result[14] += -0.00025920954;
            } else {
              result[14] += -0.08469815;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58400)) {
              result[14] += 0.026855564;
            } else {
              result[14] += 0.0013315816;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[14] += -0.0009313418;
            } else {
              result[14] += -0.067228;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
              result[14] += -0.1715129;
            } else {
              result[14] += 0.04462999;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[14] += 0.033273447;
            } else {
              result[14] += -0.11493013;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
              result[14] += 0.290373;
            } else {
              result[14] += 0.05049856;
            }
          }
        } else {
          result[14] += -0.17768884;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)315034144)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[14] += 0.31361973;
          } else {
            result[14] += 0.1388323;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1174624512)) {
            result[14] += -0.16571137;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2430779136)) {
              result[14] += 0.098050416;
            } else {
              result[14] += -0.08713674;
            }
          }
        }
      } else {
        result[14] += -0.09431025;
      }
    }
  } else {
    result[14] += -0.123960584;
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.00063106103;
            } else {
              result[0] += -0.14425266;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[0] += 0.09143682;
            } else {
              result[0] += -0.017050259;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)16021)) {
            result[0] += -0.14600769;
          } else {
            result[0] += 0.068417765;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3615)) {
              result[0] += 0.12623619;
            } else {
              result[0] += -0.14396435;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41909)) {
              result[0] += 0.14381808;
            } else {
              result[0] += 0.014027258;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
              result[0] += -0.10607554;
            } else {
              result[0] += 0.13723373;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
              result[0] += -0.14833917;
            } else {
              result[0] += -0.002256033;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
        result[0] += -0.13267536;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2694456320)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2677389824)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
              result[0] += 0.04791541;
            } else {
              result[0] += -0.115750834;
            }
          } else {
            result[0] += 0.11909327;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)122)) {
            result[0] += -0.13117357;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[0] += -0.09552235;
            } else {
              result[0] += 0.07374215;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.11690547;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)16531)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[1] += -0.00038829877;
            } else {
              result[1] += -0.08244934;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[1] += -0.0147282425;
            } else {
              result[1] += 0.18085611;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
              result[1] += 0.049578544;
            } else {
              result[1] += 0.19888379;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[1] += -0.13675404;
            } else {
              result[1] += 0.145586;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2580181248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)296821792)) {
              result[1] += -0.09505629;
            } else {
              result[1] += -0.013297954;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2772094208)) {
              result[1] += 0.056425616;
            } else {
              result[1] += 0.00380203;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
              result[1] += -0.021303184;
            } else {
              result[1] += -0.09222577;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
              result[1] += 0.22354265;
            } else {
              result[1] += -0.12274396;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)16270)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
              result[1] += -0.024657449;
            } else {
              result[1] += -0.10553806;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
              result[1] += -0.07311883;
            } else {
              result[1] += 0.29591373;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2800293632)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2430779136)) {
              result[1] += 0.01702241;
            } else {
              result[1] += 0.25766772;
            }
          } else {
            result[1] += -0.122592114;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)14735)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
              result[1] += 0.11928277;
            } else {
              result[1] += -0.096062034;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
              result[1] += 0.048155524;
            } else {
              result[1] += -0.077837974;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.064965606;
            } else {
              result[1] += 0.47871283;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2538908928)) {
              result[1] += -0.2406751;
            } else {
              result[1] += 0.036086105;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)18837)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
              result[1] += 0.008498898;
            } else {
              result[1] += 0.14453825;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
              result[1] += -0.11867411;
            } else {
              result[1] += -0.009685946;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)18597)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
              result[1] += 0.17012715;
            } else {
              result[1] += 0.0009206521;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
              result[1] += 0.50763017;
            } else {
              result[1] += 0.09057389;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)18597)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)14)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[1] += -0.1262147;
            } else {
              result[1] += 0.047579143;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
              result[1] += -0.07325959;
            } else {
              result[1] += 0.17802557;
            }
          }
        } else {
          result[1] += 0.32773837;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
              result[1] += -0.0058284956;
            } else {
              result[1] += -0.06942623;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2100655232)) {
              result[1] += -0.077507384;
            } else {
              result[1] += 0.1960053;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
              result[1] += -0.10094457;
            } else {
              result[1] += -0.022524897;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47076)) {
              result[1] += 0.18094315;
            } else {
              result[1] += -0.04057688;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)24872)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24342)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
              result[1] += 0.0016140547;
            } else {
              result[1] += 0.0701066;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
              result[1] += 0.03233922;
            } else {
              result[1] += 0.23430102;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)25655)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1045826752)) {
              result[1] += -0.03404927;
            } else {
              result[1] += 0.01646523;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
              result[1] += 0.0016559374;
            } else {
              result[1] += -0.0045100288;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        result[2] += -0.062202554;
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[2] += -0.0071752714;
        } else {
          result[2] += -0.013130829;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1947)) {
        result[2] += 0.044808958;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)2117)) {
          result[2] += -0.07337585;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)61104)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)59958)) {
              result[2] += -5.2968822e-05;
            } else {
              result[2] += -0.051251255;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)61706)) {
              result[2] += 0.2820115;
            } else {
              result[2] += -0.009806082;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
      result[2] += 0.024453573;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)64539)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)51884)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)51567)) {
              result[2] += 0.0064337687;
            } else {
              result[2] += -0.07265085;
            }
          } else {
            result[2] += 0.08011392;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)52818)) {
            result[2] += -0.1504438;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)53109)) {
              result[2] += 0.12806314;
            } else {
              result[2] += 0.0017584661;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64882)) {
          result[2] += 0.04951198;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)65213)) {
            result[2] += -0.03073755;
          } else {
            result[2] += 0.025610048;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.07648991;
    } else {
      result[3] += -0.000408905;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.0661082;
    } else {
      result[3] += 0.0042559626;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          result[4] += -0.0020814121;
        } else {
          result[4] += -0.007152111;
        }
      } else {
        result[4] += -0.021945145;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)64539)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)51884)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)51567)) {
              result[4] += 0.0039212285;
            } else {
              result[4] += 0.08278589;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)52221)) {
              result[4] += -0.09991894;
            } else {
              result[4] += -0.039277945;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)52818)) {
            result[4] += 0.15516311;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)53109)) {
              result[4] += -0.12464204;
            } else {
              result[4] += 0.008217923;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64882)) {
          result[4] += -0.04248108;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)65213)) {
            result[4] += 0.03754411;
          } else {
            result[4] += -0.017617017;
          }
        }
      }
    }
  } else {
    result[4] += 0.05667623;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
              result[5] += -2.5356094e-06;
            } else {
              result[5] += -0.14744948;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44233)) {
              result[5] += -0.029974433;
            } else {
              result[5] += 0.061893485;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            result[5] += -0.12478434;
          } else {
            result[5] += 0.14466296;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1893026944)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47076)) {
              result[5] += -0.120415084;
            } else {
              result[5] += -0.0056206263;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
              result[5] += 0.16442665;
            } else {
              result[5] += -0.14868942;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)12714)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
              result[5] += -0.12134534;
            } else {
              result[5] += 0.112844005;
            }
          } else {
            result[5] += -0.16535245;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
        result[5] += 0.120350875;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)63923)) {
              result[5] += -0.1304326;
            } else {
              result[5] += 0.0930973;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21604)) {
              result[5] += 0.15023431;
            } else {
              result[5] += 0.016568009;
            }
          }
        } else {
          result[5] += -0.123533055;
        }
      }
    }
  } else {
    result[5] += -0.13304934;
  }
  result[6] += 0.0001332324;
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
              result[7] += -0.0031427124;
            } else {
              result[7] += 0.0018652524;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[7] += -0.12782174;
            } else {
              result[7] += 0.096650705;
            }
          }
        } else {
          result[7] += -0.12034906;
        }
      } else {
        result[7] += -0.100312956;
      }
    } else {
      result[7] += -0.1273335;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)59)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
        result[7] += 0.1243115;
      } else {
        result[7] += 0.018501163;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1879)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
          result[7] += -0.09320247;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)29570)) {
              result[7] += -0.0014075512;
            } else {
              result[7] += 0.028250212;
            }
          } else {
            result[7] += -0.03674983;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2357014272)) {
          result[7] += -0.009438244;
        } else {
          result[7] += 0.139451;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
              result[8] += -0.00010925033;
            } else {
              result[8] += 0.02450418;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
              result[8] += -0.061288796;
            } else {
              result[8] += -0.0049263733;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
              result[8] += -0.14159152;
            } else {
              result[8] += -0.033781964;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
              result[8] += -0.0043840874;
            } else {
              result[8] += 0.05582022;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61935)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
              result[8] += 0.0072822305;
            } else {
              result[8] += -0.012802868;
            }
          } else {
            result[8] += -0.13638934;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
              result[8] += -0.16762358;
            } else {
              result[8] += 0.11964285;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
              result[8] += -0.024407338;
            } else {
              result[8] += 0.027859936;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3598538240)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3481869312)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10839)) {
              result[8] += 0.012663775;
            } else {
              result[8] += -0.017909711;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
              result[8] += -0.0058593117;
            } else {
              result[8] += 0.13113385;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5661)) {
              result[8] += 0.2005971;
            } else {
              result[8] += -0.13709731;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[8] += 0.44813743;
            } else {
              result[8] += -0.054713007;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28526)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28010)) {
              result[8] += 0.03520159;
            } else {
              result[8] += 0.40281135;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47693)) {
              result[8] += -0.10085774;
            } else {
              result[8] += 0.029110655;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[8] += 0.3052144;
            } else {
              result[8] += -0.0041009025;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[8] += -0.09036584;
            } else {
              result[8] += 0.09505509;
            }
          }
        }
      }
    }
  } else {
    result[8] += -0.12917468;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[9] += 0.00018820196;
            } else {
              result[9] += -0.123747684;
            }
          } else {
            result[9] += -0.12267537;
          }
        } else {
          result[9] += 0.11879941;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)107601)) {
            result[9] += -0.14712709;
          } else {
            result[9] += 0.07880996;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
              result[9] += -0.024921814;
            } else {
              result[9] += -0.15011938;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
              result[9] += 0.15418266;
            } else {
              result[9] += -0.01781624;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
        result[9] += 0.13876314;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          result[9] += 0.13676135;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
              result[9] += 0.15555125;
            } else {
              result[9] += -0.10440936;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[9] += 0.14166217;
            } else {
              result[9] += 0.0035635207;
            }
          }
        }
      }
    }
  } else {
    result[9] += -0.12508255;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32902)) {
              result[10] += 7.966638e-06;
            } else {
              result[10] += -0.025071274;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)365605792)) {
              result[10] += -0.17284404;
            } else {
              result[10] += 0.04065412;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
            result[10] += 0.13187748;
          } else {
            result[10] += -0.29395;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)265767216)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
            result[10] += -0.24432011;
          } else {
            result[10] += 0.11050901;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2578545664)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[10] += -0.044846613;
            } else {
              result[10] += 0.1696688;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
              result[10] += 0.15188567;
            } else {
              result[10] += -0.1447279;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.07189668;
            } else {
              result[10] += 0.12935258;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
              result[10] += -0.15079308;
            } else {
              result[10] += -0.3539972;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2772094208)) {
            result[10] += 0.14801523;
          } else {
            result[10] += -0.23781843;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2407267328)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
              result[10] += -0.0056417333;
            } else {
              result[10] += 0.090863094;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2800293632)) {
              result[10] += -0.25378573;
            } else {
              result[10] += -0.0046294318;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58670)) {
              result[10] += 0.18014239;
            } else {
              result[10] += 0.09410545;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
              result[10] += -0.47329542;
            } else {
              result[10] += 0.014891515;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
      result[10] += -0.14173019;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
        result[10] += 0.1278914;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)14981)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
              result[10] += -0.0026363274;
            } else {
              result[10] += 0.13206562;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
              result[10] += -0.17907664;
            } else {
              result[10] += -0.025152825;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
            result[10] += 0.17074129;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[10] += 0.036710724;
            } else {
              result[10] += 0.002432841;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)479)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[11] += -0.00025033162;
            } else {
              result[11] += 0.048558053;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26696)) {
              result[11] += -0.07077366;
            } else {
              result[11] += 0.009846472;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)40854)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37225)) {
              result[11] += 0.038825255;
            } else {
              result[11] += 0.18425438;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
              result[11] += -0.029506559;
            } else {
              result[11] += 0.25069687;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)19087)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)18837)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
              result[11] += 0.06215279;
            } else {
              result[11] += -0.06981546;
            }
          } else {
            result[11] += 0.30634558;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
              result[11] += -0.06705602;
            } else {
              result[11] += 0.17427412;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2430779136)) {
              result[11] += -0.08925517;
            } else {
              result[11] += -0.15835242;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
        result[11] += -0.14368303;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
              result[11] += 0.02439561;
            } else {
              result[11] += -0.073584974;
            }
          } else {
            result[11] += -0.15328851;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
              result[11] += -0.057375416;
            } else {
              result[11] += 0.13697036;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[11] += 0.24004988;
            } else {
              result[11] += -0.010967111;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.12089572;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
              result[12] += -0.00088280014;
            } else {
              result[12] += -0.037152193;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[12] += 0.3366501;
            } else {
              result[12] += -0.12893556;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9027)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
              result[12] += 0.012601669;
            } else {
              result[12] += -0.011741693;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
              result[12] += -0.0016027807;
            } else {
              result[12] += 0.005678281;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
              result[12] += -0.007291652;
            } else {
              result[12] += 0.11164685;
            }
          } else {
            result[12] += -0.23620193;
          }
        } else {
          result[12] += 0.40198103;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
              result[12] += -0.04611714;
            } else {
              result[12] += 0.19095436;
            }
          } else {
            result[12] += -0.18654303;
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[12] += 0.31771097;
            } else {
              result[12] += -0.14784352;
            }
          } else {
            result[12] += 0.20536265;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2564)) {
            result[12] += -0.15078561;
          } else {
            result[12] += 0.3159202;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
              result[12] += 0.009486171;
            } else {
              result[12] += -0.19078363;
            }
          } else {
            result[12] += 0.12863906;
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
        result[12] += -0.16009368;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
            result[12] += 0.34902504;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[12] += -0.110470414;
            } else {
              result[12] += 0.19617021;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
            result[12] += -0.22146057;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
              result[12] += 0.16947587;
            } else {
              result[12] += 0.021620698;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
          result[12] += -0.19797736;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32920)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[12] += 0.106948294;
            } else {
              result[12] += 0.29759696;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
              result[12] += -0.12148418;
            } else {
              result[12] += 0.23341748;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
            result[12] += -0.1499228;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20105)) {
              result[12] += 0.041809075;
            } else {
              result[12] += -0.022928068;
            }
          }
        } else {
          result[12] += -0.15970506;
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2182743296)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1826348032)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)849185600)) {
              result[13] += -0.0016387056;
            } else {
              result[13] += -0.09284283;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2564)) {
              result[13] += 0.30991346;
            } else {
              result[13] += -0.0969925;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1680521472)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
              result[13] += -0.1537827;
            } else {
              result[13] += -0.043427724;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.12497059;
            } else {
              result[13] += 0.14638701;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += 0.59592813;
            } else {
              result[13] += -0.098239586;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
              result[13] += -0.076634444;
            } else {
              result[13] += 0.22909419;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2136418816)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50108)) {
              result[13] += -0.14271982;
            } else {
              result[13] += 0.08602988;
            }
          } else {
            result[13] += 0.29365644;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
        result[13] += -0.15503314;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)2564)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[13] += 0.011507964;
            } else {
              result[13] += 0.24342184;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[13] += -0.15328345;
            } else {
              result[13] += 0.042182494;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[13] += -0.07970123;
            } else {
              result[13] += 0.17470165;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
              result[13] += -0.18904023;
            } else {
              result[13] += -0.05510321;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2213215232)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
              result[13] += -0.0010287891;
            } else {
              result[13] += 0.036725253;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[13] += -0.09287821;
            } else {
              result[13] += 0.11087534;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52273)) {
              result[13] += 0.059299458;
            } else {
              result[13] += 0.38490546;
            }
          } else {
            result[13] += -0.14013791;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
              result[13] += -0.09116506;
            } else {
              result[13] += 0.23250137;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
              result[13] += -0.09703215;
            } else {
              result[13] += -0.32903388;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)28238)) {
            result[13] += -0.16251002;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
              result[13] += 0.26943555;
            } else {
              result[13] += 0.016588243;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2357014272)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
              result[13] += 0.017393464;
            } else {
              result[13] += 0.21580753;
            }
          } else {
            result[13] += 0.6862864;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2299985664)) {
              result[13] += -0.094945386;
            } else {
              result[13] += 0.037661377;
            }
          } else {
            result[13] += 0.2919747;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2372243968)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45935)) {
            result[13] += -0.17789616;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
              result[13] += 0.37655523;
            } else {
              result[13] += -0.10938852;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62970)) {
              result[13] += 0.004423305;
            } else {
              result[13] += 0.19868752;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[13] += -0.09728947;
            } else {
              result[13] += 0.03258809;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2928404992)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2538908928)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
              result[14] += -0.00204601;
            } else {
              result[14] += 0.0029286481;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1532925184)) {
              result[14] += -0.05789636;
            } else {
              result[14] += 0.011901198;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
            result[14] += -0.1378719;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
              result[14] += -0.123567976;
            } else {
              result[14] += 0.21947546;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
          result[14] += 0.31001008;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[14] += -0.12846118;
            } else {
              result[14] += -0.30840558;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
              result[14] += 0.07600441;
            } else {
              result[14] += -0.1842741;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2579351040)) {
              result[14] += -0.09381989;
            } else {
              result[14] += 0.02516949;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2578545664)) {
              result[14] += 0.51902074;
            } else {
              result[14] += -0.10766942;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2882424576)) {
              result[14] += 0.22645539;
            } else {
              result[14] += -0.0061760624;
            }
          } else {
            result[14] += -0.2328383;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
          result[14] += -0.18430446;
        } else {
          result[14] += 0.1858229;
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59252)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32920)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[14] += 0.0014514369;
            } else {
              result[14] += 0.25996432;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[14] += -0.1138911;
            } else {
              result[14] += -0.31371447;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += -0.1864406;
            } else {
              result[14] += -0.29309985;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50981)) {
              result[14] += 0.03972523;
            } else {
              result[14] += -0.20236234;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
              result[14] += 0.033366382;
            } else {
              result[14] += 0.21518242;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
              result[14] += -0.27233976;
            } else {
              result[14] += 0.2128979;
            }
          }
        } else {
          result[14] += -0.2855038;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3088273664)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[14] += -0.14798217;
            } else {
              result[14] += 0.47413036;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[14] += -0.19486435;
            } else {
              result[14] += -0.014539548;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
              result[14] += 0.16362628;
            } else {
              result[14] += 0.03926563;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[14] += -0.24537681;
            } else {
              result[14] += 0.1485427;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[14] += 0.08877942;
            } else {
              result[14] += 0.36258954;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
              result[14] += -0.17651361;
            } else {
              result[14] += 0.13231619;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += -0.027570143;
            } else {
              result[14] += -0.24815197;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
              result[14] += 0.060449272;
            } else {
              result[14] += -0.00042956087;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)11619)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7995)) {
              result[0] += -0.00014143187;
            } else {
              result[0] += -0.06703162;
            }
          } else {
            result[0] += 0.18279988;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)9027)) {
            result[0] += -0.13390675;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
              result[0] += 0.021952646;
            } else {
              result[0] += -0.06560017;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)10568)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[0] += 0.051781226;
          } else {
            result[0] += 0.27019054;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10839)) {
            result[0] += 0.0814161;
          } else {
            result[0] += 0.04268529;
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)11356)) {
          result[0] += -0.09277685;
        } else {
          result[0] += -0.12583238;
        }
      } else {
        result[0] += 0.057817947;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)12714)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)11906)) {
          result[0] += 0.12839;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
            result[0] += -0.05062659;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[0] += 0.0461989;
            } else {
              result[0] += -0.0887464;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2213215232)) {
            result[0] += -0.018715877;
          } else {
            result[0] += 0.07926444;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)12973)) {
            result[0] += 0.2755736;
          } else {
            result[0] += 0.15370752;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)13961)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)13727)) {
          result[0] += -0.14148451;
        } else {
          result[0] += -0.081179395;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)414614720)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)14245)) {
              result[0] += 0.17361411;
            } else {
              result[0] += 0.12138303;
            }
          } else {
            result[0] += 0.006789145;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
            result[0] += -0.14216888;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[0] += -0.035571106;
            } else {
              result[0] += 0.0045382674;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[1] += -0.00052393175;
            } else {
              result[1] += -0.13745794;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[1] += 0.020871015;
            } else {
              result[1] += 0.14296709;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[1] += -0.14690828;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
              result[1] += 0.14741378;
            } else {
              result[1] += -0.12488547;
            }
          }
        }
      } else {
        result[1] += -0.14710972;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3481869312)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.15068094;
            } else {
              result[1] += -0.018994212;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
              result[1] += -0.031358518;
            } else {
              result[1] += 0.0046637445;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39950)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
              result[1] += 0.36406115;
            } else {
              result[1] += 0.06606162;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
              result[1] += -0.1986777;
            } else {
              result[1] += 0.07014615;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            result[1] += -0.19985752;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
              result[1] += 0.04717641;
            } else {
              result[1] += -0.13974448;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[1] += -0.019381916;
            } else {
              result[1] += 0.016111095;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)42428)) {
              result[1] += 0.03298951;
            } else {
              result[1] += -0.031390853;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.12298091;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)27655)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)21999)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)21683)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)11198)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)9903)) {
              result[2] += 0.0017903937;
            } else {
              result[2] += 0.07424746;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)13222)) {
              result[2] += -0.06956379;
            } else {
              result[2] += -0.00010410986;
            }
          }
        } else {
          result[2] += -0.124460496;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)22590)) {
          result[2] += 0.15019654;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)23202)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.026436573;
            } else {
              result[2] += -0.067507826;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)23587)) {
              result[2] += 0.21958193;
            } else {
              result[2] += 0.009993982;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)28383)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)27786)) {
          result[2] += -0.12766479;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)28195)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += -0.04792548;
            } else {
              result[2] += -0.006250169;
            }
          } else {
            result[2] += -0.11594089;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)29726)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)29481)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)28857)) {
              result[2] += 0.04142839;
            } else {
              result[2] += -0.06594052;
            }
          } else {
            result[2] += 0.3649812;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)29934)) {
            result[2] += -0.12822564;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30467)) {
              result[2] += 0.08268425;
            } else {
              result[2] += -0.0017615444;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.081406645;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.018617405;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.06504563;
    } else {
      result[3] += 0.0067164227;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          result[4] += -0.00090906763;
        } else {
          result[4] += -0.011936139;
        }
      } else {
        result[4] += 0.005463751;
      }
    } else {
      result[4] += -0.01829571;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)48082)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)47005)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)45844)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)43981)) {
              result[4] += 0.006242749;
            } else {
              result[4] += -0.047588967;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)46420)) {
              result[4] += 0.107797645;
            } else {
              result[4] += 0.023756562;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)47554)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)47291)) {
              result[4] += -0.06747944;
            } else {
              result[4] += -0.024929842;
            }
          } else {
            result[4] += 0.008490091;
          }
        }
      } else {
        result[4] += 0.046870872;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)50483)) {
        result[4] += -0.0925631;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)51298)) {
          result[4] += 0.08279092;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)51567)) {
            result[4] += -0.115656786;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)51884)) {
              result[4] += 0.06155108;
            } else {
              result[4] += 0.002773545;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
              result[5] += -2.9655994e-05;
            } else {
              result[5] += 0.1291305;
            }
          } else {
            result[5] += -0.13072714;
          }
        } else {
          result[5] += -0.1321398;
        }
      } else {
        result[5] += -0.1320412;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)36967)) {
          result[5] += 0.09548612;
        } else {
          result[5] += -0.086130105;
        }
      } else {
        result[5] += 0.12910894;
      }
    }
  } else {
    result[5] += -0.13109209;
  }
  result[6] += 6.306257e-05;
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)59439)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)58145)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53290)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
              result[7] += 0.0010126288;
            } else {
              result[7] += -0.016671918;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += -0.053683862;
            } else {
              result[7] += 0.03531378;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1264832000)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[7] += -0.11920286;
            } else {
              result[7] += 0.0043195253;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
              result[7] += 0.09257389;
            } else {
              result[7] += -0.014078464;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49348)) {
              result[7] += 0.0054942244;
            } else {
              result[7] += 0.28531328;
            }
          } else {
            result[7] += -0.012275604;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
              result[7] += 0.112381905;
            } else {
              result[7] += -0.0074085174;
            }
          } else {
            result[7] += 0.19439957;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3399763968)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2248229888)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
              result[7] += 0.09916536;
            } else {
              result[7] += -0.094410576;
            }
          } else {
            result[7] += 0.2153473;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
            result[7] += -0.17704661;
          } else {
            result[7] += -0.08689497;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)695816320)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[7] += 0.0035734703;
            } else {
              result[7] += 0.20613454;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
              result[7] += 0.035808407;
            } else {
              result[7] += -0.045303553;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
              result[7] += 0.24122408;
            } else {
              result[7] += 0.05075198;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2100655232)) {
              result[7] += -0.103123434;
            } else {
              result[7] += 0.003167321;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
              result[7] += 0.13623592;
            } else {
              result[7] += -0.006803657;
            }
          } else {
            result[7] += -0.36404777;
          }
        } else {
          result[7] += 0.15037371;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
          result[7] += -0.28340933;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
            result[7] += 0.13879903;
          } else {
            result[7] += -0.14915231;
          }
        }
      }
    } else {
      result[7] += 0.15844665;
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)63241)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[8] += -0.00013518888;
            } else {
              result[8] += 0.11618788;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[8] += -0.15413931;
            } else {
              result[8] += 0.09858695;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)262)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49475)) {
              result[8] += 0.14405246;
            } else {
              result[8] += 0.03823173;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
              result[8] += -0.014491223;
            } else {
              result[8] += 0.071546726;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)16270)) {
              result[8] += -0.087641485;
            } else {
              result[8] += 0.338872;
            }
          } else {
            result[8] += -0.1481328;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)15468)) {
            result[8] += -0.09304666;
          } else {
            result[8] += 0.32942837;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2100655232)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[8] += -0.09569175;
            } else {
              result[8] += -0.055455822;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)167486704)) {
              result[8] += 0.27067053;
            } else {
              result[8] += -0.022151541;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
              result[8] += -0.18302794;
            } else {
              result[8] += -0.015220605;
            }
          } else {
            result[8] += 0.083534874;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
              result[8] += 0.12493964;
            } else {
              result[8] += 0.34716117;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2882424576)) {
              result[8] += -0.17270464;
            } else {
              result[8] += 0.08586517;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
              result[8] += -0.1134615;
            } else {
              result[8] += 0.13039687;
            }
          } else {
            result[8] += -0.1639908;
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59506)) {
              result[8] += 0.007843298;
            } else {
              result[8] += 0.081079334;
            }
          } else {
            result[8] += -0.16134843;
          }
        } else {
          result[8] += 0.13929;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)43994)) {
              result[8] += 0.318845;
            } else {
              result[8] += -0.12122718;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[8] += -0.031321026;
            } else {
              result[8] += -0.16069609;
            }
          }
        } else {
          result[8] += 0.2799533;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
            result[8] += -0.13839194;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.3140224;
            } else {
              result[8] += -0.10095102;
            }
          }
        } else {
          result[8] += -0.26549765;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35306)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
              result[8] += 0.046529636;
            } else {
              result[8] += -0.12827314;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47076)) {
              result[8] += 0.15181741;
            } else {
              result[8] += -0.04033622;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
            result[8] += -0.13743988;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.26101395;
            } else {
              result[8] += 0.054364067;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)48198)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)45184)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
              result[9] += 0.00023802233;
            } else {
              result[9] += -0.09631526;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
              result[9] += 0.14366318;
            } else {
              result[9] += -0.11102903;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
            result[9] += -0.17530683;
          } else {
            result[9] += 0.12646534;
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[9] += -0.09031868;
        } else {
          result[9] += 0.16353248;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1295143936)) {
        result[9] += 0.11054506;
      } else {
        result[9] += -0.16924138;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1264832000)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          result[9] += -0.07473128;
        } else {
          result[9] += 0.15273204;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)576729216)) {
              result[9] += -0.006381292;
            } else {
              result[9] += -0.14129017;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
              result[9] += 0.14088263;
            } else {
              result[9] += -0.04500476;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
            result[9] += -0.15259399;
          } else {
            result[9] += 0.09125396;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.061661717;
      } else {
        result[9] += 0.1516386;
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3284568832)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2248229888)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2221068800)) {
              result[10] += 9.8485805e-05;
            } else {
              result[10] += -0.49501118;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26159)) {
              result[10] += -0.038777232;
            } else {
              result[10] += 0.05332483;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2882424576)) {
              result[10] += -0.23329674;
            } else {
              result[10] += 0.08272941;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
              result[10] += -0.33818203;
            } else {
              result[10] += -0.04167808;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)38249)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[10] += -0.015863813;
            } else {
              result[10] += -0.47846955;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[10] += 0.09248346;
            } else {
              result[10] += 0.2118996;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
              result[10] += -0.53099334;
            } else {
              result[10] += 0.1390095;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39834)) {
              result[10] += -0.39994657;
            } else {
              result[10] += 0.03881044;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
          result[10] += -0.41058347;
        } else {
          result[10] += 0.15255496;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)27491)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            result[10] += 0.18481739;
          } else {
            result[10] += -0.25445026;
          }
        } else {
          result[10] += 0.18354633;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[10] += 0.16644266;
            } else {
              result[10] += -0.15094003;
            }
          } else {
            result[10] += -0.27825224;
          }
        } else {
          result[10] += 0.17098796;
        }
      } else {
        result[10] += -0.1366433;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
        result[10] += -0.35708943;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)58919)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[10] += -0.22867636;
            } else {
              result[10] += 0.04201678;
            }
          } else {
            result[10] += -0.5253984;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
              result[10] += -0.00901196;
            } else {
              result[10] += -0.39414942;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3541748992)) {
              result[10] += 0.16660431;
            } else {
              result[10] += 0.018438395;
            }
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)365)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)320)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)319)) {
              result[11] += 2.729917e-07;
            } else {
              result[11] += 0.06812112;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
              result[11] += -0.036508925;
            } else {
              result[11] += 0.024725946;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[11] += 0.11934036;
            } else {
              result[11] += -0.0969023;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
              result[11] += -0.122449644;
            } else {
              result[11] += 0.0150315445;
            }
          }
        }
      } else {
        result[11] += -0.16378032;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1860617216)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[11] += 0.119902134;
            } else {
              result[11] += -0.13498035;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
              result[11] += 0.14129652;
            } else {
              result[11] += -0.054619823;
            }
          }
        } else {
          result[11] += -0.2108246;
        }
      } else {
        result[11] += 0.13924478;
      }
    }
  } else {
    result[11] += -0.12449528;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2882424576)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)29022)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24100)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[12] += -0.0034226796;
            } else {
              result[12] += 0.05670395;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
              result[12] += 0.030195506;
            } else {
              result[12] += -0.035072245;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
              result[12] += -0.002771832;
            } else {
              result[12] += 0.039342705;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
              result[12] += -0.06427636;
            } else {
              result[12] += 0.02582773;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[12] += 0.06464081;
            } else {
              result[12] += -0.035487436;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += -0.20724963;
            } else {
              result[12] += 0.08294289;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
            result[12] += 0.4786981;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
              result[12] += 0.06999053;
            } else {
              result[12] += 0.35200328;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2677389824)) {
              result[12] += -0.03736918;
            } else {
              result[12] += -0.16253968;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2564)) {
              result[12] += 0.11164184;
            } else {
              result[12] += -0.15918829;
            }
          }
        } else {
          result[12] += -0.86065656;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
              result[12] += 0.477157;
            } else {
              result[12] += -0.021039452;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[12] += 0.653292;
            } else {
              result[12] += 0.27561456;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)46946)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
              result[12] += -0.037490424;
            } else {
              result[12] += 0.08976364;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
              result[12] += 0.119752735;
            } else {
              result[12] += -0.0070685856;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)58145)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
              result[12] += 0.00334357;
            } else {
              result[12] += -0.1376481;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
              result[12] += 0.10982948;
            } else {
              result[12] += -0.0093583865;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[12] += 0.08788761;
            } else {
              result[12] += -0.18455122;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[12] += -0.1997174;
            } else {
              result[12] += 0.019353421;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)59669)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
              result[12] += 0.12430189;
            } else {
              result[12] += 0.32746992;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[12] += -0.12783389;
            } else {
              result[12] += 0.06896887;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
              result[12] += 0.061690666;
            } else {
              result[12] += -0.101204626;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
              result[12] += -0.09176543;
            } else {
              result[12] += 0.111094855;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
              result[12] += -0.056885436;
            } else {
              result[12] += -0.30247018;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[12] += -0.014779403;
            } else {
              result[12] += 0.0935459;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63476)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61935)) {
              result[12] += -0.075290434;
            } else {
              result[12] += 0.24031416;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60160)) {
              result[12] += -0.08257752;
            } else {
              result[12] += 0.1444259;
            }
          }
        }
      } else {
        result[12] += -0.17898712;
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)705)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
              result[13] += 0.00063338433;
            } else {
              result[13] += -0.04278234;
            }
          } else {
            result[13] += -0.1445731;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45676)) {
              result[13] += -0.007819336;
            } else {
              result[13] += 0.046763174;
            }
          } else {
            result[13] += 0.13641009;
          }
        }
      } else {
        result[13] += -0.14191215;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)414614720)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          result[13] += -0.08857876;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[13] += 0.1392658;
          } else {
            result[13] += 0.0005880117;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
            result[13] += -0.37437677;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
              result[13] += 0.08446329;
            } else {
              result[13] += -0.12686715;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4162893824)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
              result[13] += 0.015612051;
            } else {
              result[13] += -0.22624753;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
              result[13] += 0.1549463;
            } else {
              result[13] += -0.014073681;
            }
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        result[13] += -0.17464417;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2487559424)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2182743296)) {
            result[13] += 0.21233644;
          } else {
            result[13] += 0.07785518;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
            result[13] += -0.16744065;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32405)) {
              result[13] += 0.022924783;
            } else {
              result[13] += 0.104573555;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
            result[13] += -0.18934596;
          } else {
            result[13] += 0.114088;
          }
        } else {
          result[13] += 0.17851938;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)832030464)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)662398464)) {
              result[13] += -0.17014459;
            } else {
              result[13] += 0.20295222;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
              result[13] += -0.12445765;
            } else {
              result[13] += -0.24824905;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58145)) {
              result[13] += 0.148279;
            } else {
              result[13] += -0.09699452;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
              result[13] += 0.05932164;
            } else {
              result[13] += -0.05709565;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
              result[14] += 0.0012374014;
            } else {
              result[14] += 0.03258365;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
              result[14] += -0.07126894;
            } else {
              result[14] += 0.098982476;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
              result[14] += -0.032058813;
            } else {
              result[14] += 0.038272794;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[14] += -0.08664857;
            } else {
              result[14] += -0.039975032;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2800293632)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
            result[14] += 0.17801002;
          } else {
            result[14] += -0.099169455;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
            result[14] += -0.2173035;
          } else {
            result[14] += 0.17198528;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3198206208)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
              result[14] += 0.065920584;
            } else {
              result[14] += -0.09263534;
            }
          } else {
            result[14] += 0.2870801;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
            result[14] += -0.17373766;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
              result[14] += 0.15566409;
            } else {
              result[14] += -0.07459199;
            }
          }
        }
      } else {
        result[14] += -0.21810734;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
              result[14] += -0.023221761;
            } else {
              result[14] += -0.21870568;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
              result[14] += -0.16819364;
            } else {
              result[14] += 0.1620411;
            }
          }
        } else {
          result[14] += -0.18569939;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 0.26391992;
            } else {
              result[14] += 0.028894167;
            }
          } else {
            result[14] += -0.15249373;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
            result[14] += -0.21732587;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[14] += -0.1898002;
            } else {
              result[14] += 0.03080233;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7446)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[14] += -0.13267796;
            } else {
              result[14] += 0.060322866;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[14] += -0.013966403;
            } else {
              result[14] += 0.35054782;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1339201280)) {
              result[14] += -0.08418175;
            } else {
              result[14] += -0.008358385;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
              result[14] += 0.034011804;
            } else {
              result[14] += -0.22391972;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2398005248)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1860617216)) {
              result[14] += -0.056574058;
            } else {
              result[14] += 0.17214888;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
              result[14] += -0.18840991;
            } else {
              result[14] += 0.14064491;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28765)) {
              result[14] += -0.00087856955;
            } else {
              result[14] += -0.024896776;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32405)) {
              result[14] += 0.041374132;
            } else {
              result[14] += -9.714463e-05;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)50734)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
              result[0] += 0.0003847431;
            } else {
              result[0] += 0.07469724;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1565489664)) {
              result[0] += -0.123803906;
            } else {
              result[0] += -0.0120583465;
            }
          }
        } else {
          result[0] += 0.18720919;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
              result[0] += -0.07768019;
            } else {
              result[0] += 0.030286247;
            }
          } else {
            result[0] += -0.16965267;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53290)) {
              result[0] += -0.0128987245;
            } else {
              result[0] += 0.23646137;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
              result[0] += -0.053404573;
            } else {
              result[0] += 0.110231645;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
              result[0] += 0.0051073413;
            } else {
              result[0] += 0.11500778;
            }
          } else {
            result[0] += -0.095702216;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
            result[0] += 0.21210967;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55867)) {
              result[0] += -0.034171805;
            } else {
              result[0] += 0.21903646;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
          result[0] += -0.1750869;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += 0.07252145;
            } else {
              result[0] += 0.23620361;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
              result[0] += -0.048390735;
            } else {
              result[0] += 0.006177568;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
      result[0] += -0.1304542;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2693712896)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2677389824)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[0] += -0.021589132;
            } else {
              result[0] += 0.10167131;
            }
          } else {
            result[0] += -0.1120602;
          }
        } else {
          result[0] += 0.11411042;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)122)) {
          result[0] += -0.12675118;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
            result[0] += -0.09197527;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
              result[0] += 0.09342776;
            } else {
              result[0] += -0.0055078478;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
              result[1] += 7.70707e-05;
            } else {
              result[1] += -0.13085817;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
              result[1] += -0.13518651;
            } else {
              result[1] += -0.029436758;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31372)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
              result[1] += 0.3444712;
            } else {
              result[1] += -0.032818355;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[1] += 0.12310923;
            } else {
              result[1] += -0.07316151;
            }
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
              result[1] += 0.015025443;
            } else {
              result[1] += 0.15541327;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
              result[1] += -0.007477229;
            } else {
              result[1] += -0.11785311;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1747430528)) {
              result[1] += -0.16035053;
            } else {
              result[1] += -0.0015130434;
            }
          } else {
            result[1] += -0.15024975;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1516410240)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)40597)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[1] += 0.058079787;
            } else {
              result[1] += -0.13508663;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
              result[1] += -0.0045080595;
            } else {
              result[1] += -0.12472291;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
              result[1] += 0.1493195;
            } else {
              result[1] += 0.002477686;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61194)) {
              result[1] += 0.15299807;
            } else {
              result[1] += -0.051867556;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)29570)) {
              result[1] += 0.01342938;
            } else {
              result[1] += -0.04657869;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2182743296)) {
              result[1] += 0.21470992;
            } else {
              result[1] += 0.006259395;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38249)) {
              result[1] += 0.009619181;
            } else {
              result[1] += 0.088673145;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3966758144)) {
              result[1] += -0.116731934;
            } else {
              result[1] += 0.052484814;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
              result[1] += 0.14331813;
            } else {
              result[1] += -0.06482485;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
              result[1] += 0.68120635;
            } else {
              result[1] += -0.091958344;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)45184)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.04150251;
            } else {
              result[1] += -0.14650476;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49210)) {
              result[1] += 0.05663248;
            } else {
              result[1] += -0.12705216;
            }
          }
        }
      } else {
        result[1] += 0.18840374;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)113590144)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[1] += -0.143419;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[1] += 0.109942734;
          } else {
            result[1] += -0.09425167;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)23617)) {
            result[1] += -0.13950422;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)25904)) {
              result[1] += 0.87162;
            } else {
              result[1] += 0.09396077;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)432921696)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
              result[1] += -0.11566833;
            } else {
              result[1] += 0.10589367;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[1] += 0.21791865;
            } else {
              result[1] += -0.0009021154;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)6929)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)5849)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)4269)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)3304)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
              result[2] += -0.020007137;
            } else {
              result[2] += 0.05195617;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)4104)) {
              result[2] += -0.058901027;
            } else {
              result[2] += -0.12026647;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)5012)) {
            result[2] += 0.06139385;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)5557)) {
              result[2] += 0.020893365;
            } else {
              result[2] += -0.0036764436;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)6211)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)5976)) {
            result[2] += -0.058415327;
          } else {
            result[2] += -0.1258276;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)6477)) {
            result[2] += 0.09945777;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)6663)) {
              result[2] += -0.09093546;
            } else {
              result[2] += -0.025103861;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)8010)) {
        result[2] += 0.123677135;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)9584)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)8361)) {
            result[2] += 0.031299368;
          } else {
            result[2] += -0.10907743;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)10301)) {
            result[2] += 0.13198458;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)14010)) {
              result[2] += -0.025790911;
            } else {
              result[2] += 8.681444e-05;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)3753)) {
      result[2] += 0.04034146;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4057)) {
        result[2] += -0.03642702;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5213)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)4898)) {
              result[2] += 0.016405541;
            } else {
              result[2] += -0.0146129625;
            }
          } else {
            result[2] += 0.095035255;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)7935)) {
              result[2] += 0.0008961485;
            } else {
              result[2] += -0.0499701;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)8891)) {
              result[2] += 0.098747104;
            } else {
              result[2] += 0.00543889;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2182849)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[3] += -0.08915316;
      } else {
        result[3] += 0.0020600336;
      }
    } else {
      result[3] += 0.048079293;
    }
  } else {
    result[3] += 0.056020837;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)34979)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)34019)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)33431)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)31693)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)29953)) {
              result[4] += 0.0016539225;
            } else {
              result[4] += -0.024951883;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32230)) {
              result[4] += 0.122627236;
            } else {
              result[4] += -0.008855068;
            }
          }
        } else {
          result[4] += -0.1250077;
        }
      } else {
        result[4] += 0.12617198;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)35817)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)35557)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)35254)) {
            result[4] += -0.0772167;
          } else {
            result[4] += 0.018045884;
          }
        } else {
          result[4] += -0.100025214;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)37772)) {
          result[4] += 0.04194331;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)38067)) {
            result[4] += -0.100651555;
          } else {
            result[4] += 0.0016881102;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)39125)) {
      result[4] += 0.058901023;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)41059)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)40237)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)39701)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)39447)) {
              result[4] += 0.017264284;
            } else {
              result[4] += -0.027725829;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)39962)) {
              result[4] += 0.049220104;
            } else {
              result[4] += 0.00011477932;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)40780)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)40516)) {
              result[4] += -0.096431695;
            } else {
              result[4] += 0.044409893;
            }
          } else {
            result[4] += -0.09635223;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)43113)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42189)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)41591)) {
              result[4] += 0.05859531;
            } else {
              result[4] += -0.027759941;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42855)) {
              result[4] += 0.17421465;
            } else {
              result[4] += 0.032533497;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)45055)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)44806)) {
              result[4] += -0.0009781097;
            } else {
              result[4] += -0.11891302;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)47005)) {
              result[4] += 0.04006799;
            } else {
              result[4] += 0.0010740969;
            }
          }
        }
      }
    }
  }
}

