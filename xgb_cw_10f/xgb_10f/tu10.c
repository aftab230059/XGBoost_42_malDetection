
#include "header.h"

void predict_unit10(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.0014718074;
            } else {
              result[5] += 0.0049836165;
            }
          } else {
            result[5] += -0.09576835;
          }
        } else {
          result[5] += -0.11633762;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          result[5] += -0.14818957;
        } else {
          result[5] += 0.08083885;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.12175437;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[5] += 0.033964373;
            } else {
              result[5] += 0.19692267;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[5] += -0.12395031;
            } else {
              result[5] += 0.030578852;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[5] += 0.06549782;
            } else {
              result[5] += 0.26933306;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[5] += -0.10124569;
            } else {
              result[5] += 0.08842017;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.1464711;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0018394893;
        } else {
          result[6] += 0.08467002;
        }
      } else {
        result[6] += -0.10074437;
      }
    } else {
      result[6] += -0.11633796;
    }
  } else {
    result[6] += -0.14887771;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[7] += 0.00033689584;
            } else {
              result[7] += -0.14120232;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
              result[7] += -0.036078155;
            } else {
              result[7] += 0.14878526;
            }
          }
        } else {
          result[7] += 0.14939192;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[7] += -0.15543121;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.11419969;
            } else {
              result[7] += 0.071456574;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 0.0016268238;
            } else {
              result[7] += -0.034786496;
            }
          } else {
            result[7] += 0.13873127;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
        result[7] += -0.26326817;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[7] += 0.015900033;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[7] += -0.1325687;
            } else {
              result[7] += -0.21783943;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[7] += -0.08012781;
            } else {
              result[7] += 0.07205274;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            result[7] += 0.09459701;
          } else {
            result[7] += -0.07945559;
          }
        } else {
          result[7] += 0.14820181;
        }
      } else {
        result[7] += -0.033584945;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.14501008;
        } else {
          result[7] += -0.024581436;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.017536366;
            } else {
              result[7] += -0.07783192;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += 0.15384185;
            } else {
              result[7] += -0.022659115;
            }
          }
        } else {
          result[7] += 0.14670011;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.0022828362;
            } else {
              result[8] += -0.15958202;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[8] += 0.14207065;
            } else {
              result[8] += -0.13786763;
            }
          }
        } else {
          result[8] += -0.15318406;
        }
      } else {
        result[8] += 0.14661093;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        result[8] += -0.15429692;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.13828357;
          } else {
            result[8] += 0.09832345;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[8] += -0.15259762;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[8] += 0.14717062;
            } else {
              result[8] += 0.0032758529;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.15235168;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.11998277;
        } else {
          result[8] += 0.11077767;
        }
      } else {
        result[8] += -0.14710122;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += 0.0020648232;
            } else {
              result[9] += -0.14687566;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += 0.009472577;
            } else {
              result[9] += 0.038003433;
            }
          }
        } else {
          result[9] += 0.13053505;
        }
      } else {
        result[9] += -0.13022701;
      }
    } else {
      result[9] += -0.14252026;
    }
  } else {
    result[9] += -0.14750665;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.0027349447;
            } else {
              result[10] += -0.105632104;
            }
          } else {
            result[10] += -0.11864386;
          }
        } else {
          result[10] += -0.14740746;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[10] += 0.019918429;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[10] += -0.1300237;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[10] += 0.0058310563;
            } else {
              result[10] += -0.09869603;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.14316532;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.120727055;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.059537556;
            } else {
              result[10] += 0.0879157;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.0962967;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[10] += 0.13921137;
          } else {
            result[10] += -0.076371945;
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14623438;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
        result[10] += 0.20755689;
      } else {
        result[10] += -0.12181034;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[11] += -0.0034794186;
            } else {
              result[11] += -0.13612233;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.14250048;
            } else {
              result[11] += -0.0064911786;
            }
          }
        } else {
          result[11] += -0.14988224;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[11] += 0.007054973;
            } else {
              result[11] += -0.016772607;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[11] += 0.11527539;
            } else {
              result[11] += -0.056936074;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[11] += -0.15871686;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += -0.108987704;
            } else {
              result[11] += 0.010548048;
            }
          }
        }
      }
    } else {
      result[11] += -0.1431088;
    }
  } else {
    result[11] += -0.14649902;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.0047581373;
            } else {
              result[12] += -0.022925226;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.14768235;
            } else {
              result[12] += 0.12678063;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[12] += -0.13941956;
            } else {
              result[12] += 0.091848314;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.10968596;
            } else {
              result[12] += -0.14633733;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += 0.019896075;
            } else {
              result[12] += 0.06079131;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += 0.0034860459;
            } else {
              result[12] += -0.023556774;
            }
          }
        } else {
          result[12] += -0.13317128;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.1489941;
        } else {
          result[12] += -0.11041534;
        }
      } else {
        result[12] += -0.12650572;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14757492;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.1243537;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.14234777;
          } else {
            result[12] += -0.1185833;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.12867185;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.1373477;
            } else {
              result[12] += -0.13634495;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.15067823;
            } else {
              result[12] += -0.10407051;
            }
          }
        } else {
          result[12] += -0.124330506;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.0013764118;
            } else {
              result[13] += 0.0442608;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.011684752;
            } else {
              result[13] += -0.13973932;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.03557827;
            } else {
              result[13] += 0.07246294;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.035840213;
            } else {
              result[13] += -0.035800777;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.15111803;
            } else {
              result[13] += 7.74875e-05;
            }
          } else {
            result[13] += 0.024822645;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[13] += -0.019852985;
            } else {
              result[13] += 0.1591993;
            }
          } else {
            result[13] += -0.09839381;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[13] += 0.2976867;
          } else {
            result[13] += 0.15059866;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[13] += -0.0986809;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
              result[13] += 0.10556667;
            } else {
              result[13] += -0.008548079;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
              result[13] += -0.031528763;
            } else {
              result[13] += -0.13452038;
            }
          } else {
            result[13] += 0.1208466;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[13] += 0.1545699;
            } else {
              result[13] += -0.08240545;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.104956344;
            } else {
              result[13] += 0.07248192;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      result[13] += -0.13818732;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[13] += -0.032731287;
          } else {
            result[13] += 0.10658524;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[13] += -0.081252486;
          } else {
            result[13] += -0.021696903;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[13] += -0.13042098;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[13] += 0.09619979;
          } else {
            result[13] += -0.10642627;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 0.0018067308;
            } else {
              result[14] += -0.07148171;
            }
          } else {
            result[14] += -0.14689991;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += 0.03045386;
            } else {
              result[14] += 0.16154121;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.1538317;
            } else {
              result[14] += 0.065494776;
            }
          }
        }
      } else {
        result[14] += -0.14427456;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        result[14] += 0.14220755;
      } else {
        result[14] += -0.104394205;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[14] += -0.12284433;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.1297431;
            } else {
              result[14] += -0.012153471;
            }
          }
        } else {
          result[14] += -0.13575491;
        }
      } else {
        result[14] += -0.32683674;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[14] += 0.046170153;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.15554926;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.013039923;
            } else {
              result[14] += 0.2304021;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[14] += 0.005109271;
            } else {
              result[14] += -0.129875;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[0] += 0.0028756855;
          } else {
            result[0] += -0.1011196;
          }
        } else {
          result[0] += -0.11839526;
        }
      } else {
        result[0] += -0.14767969;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[0] += 0.015765917;
            } else {
              result[0] += 0.05359084;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
              result[0] += 0.004411939;
            } else {
              result[0] += -0.41706702;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
            result[0] += 0.13540408;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[0] += -0.17543808;
            } else {
              result[0] += 0.109768294;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
              result[0] += -0.031912576;
            } else {
              result[0] += -0.18191142;
            }
          } else {
            result[0] += 0.07950043;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[0] += 0.013071236;
            } else {
              result[0] += 0.1182066;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.00036203492;
            } else {
              result[0] += 0.051102526;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.14670086;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.13662653;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[0] += 0.07648884;
            } else {
              result[0] += -0.0692111;
            }
          } else {
            result[0] += 0.17263615;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            result[0] += -0.13448237;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[0] += 0.04224406;
            } else {
              result[0] += -0.12654154;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[1] += -0.0843267;
    } else {
      result[1] += -0.12913263;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.00014086187;
            } else {
              result[1] += -0.15180288;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += -0.15070067;
            } else {
              result[1] += -0.0018746494;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.07678679;
            } else {
              result[1] += -0.049699392;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.12485529;
            } else {
              result[1] += 0.0075114095;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            result[1] += -0.15587509;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += -0.03632144;
            } else {
              result[1] += -0.1815843;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[1] += 0.03431077;
            } else {
              result[1] += -0.13115616;
            }
          } else {
            result[1] += -0.15664919;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.06346912;
            } else {
              result[1] += 0.13583586;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[1] += -0.14771543;
            } else {
              result[1] += 0.13668795;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            result[1] += -0.16384496;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += -0.02212119;
            } else {
              result[1] += 0.14871378;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.12552398;
            } else {
              result[1] += -0.06569275;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[1] += -0.007313196;
            } else {
              result[1] += 0.094044834;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += 0.03207028;
            } else {
              result[1] += -0.0062001934;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[1] += -0.11996688;
            } else {
              result[1] += -0.005238655;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0010653894;
        } else {
          result[2] += 0.0041108094;
        }
      } else {
        result[2] += -0.11059307;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
              result[2] += 0.06343032;
            } else {
              result[2] += 0.12861724;
            }
          } else {
            result[2] += 0.05235003;
          }
        } else {
          result[2] += 0.1287962;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          result[2] += 0.038154;
        } else {
          result[2] += 0.12083131;
        }
      }
    }
  } else {
    result[2] += -0.1486452;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)34651916)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[3] += -0.14548863;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.12930772;
      } else {
        result[3] += 0.13431367;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
      result[3] += -0.08126132;
    } else {
      result[3] += 0.1331459;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)2126)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.11780502;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += 0.000109974484;
            } else {
              result[4] += 0.12864143;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
              result[4] += -0.0032798115;
            } else {
              result[4] += 0.005786454;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          result[4] += 0.09980801;
        } else {
          result[4] += 0.011510801;
        }
      }
    } else {
      result[4] += 0.14596903;
    }
  } else {
    result[4] += -0.14865571;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.0013985523;
            } else {
              result[5] += 0.004728381;
            }
          } else {
            result[5] += -0.08851012;
          }
        } else {
          result[5] += -0.111657254;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          result[5] += -0.1478503;
        } else {
          result[5] += 0.08159138;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.1171787;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[5] += 0.04609093;
            } else {
              result[5] += 0.1283068;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += -0.05959387;
            } else {
              result[5] += 0.045773365;
            }
          }
        } else {
          result[5] += 0.11381635;
        }
      }
    }
  } else {
    result[5] += -0.14572152;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0017044989;
        } else {
          result[6] += 0.08054682;
        }
      } else {
        result[6] += -0.09417166;
      }
    } else {
      result[6] += -0.11165761;
    }
  } else {
    result[6] += -0.14864524;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += -7.624718e-05;
            } else {
              result[7] += -0.044356562;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[7] += 0.14900188;
            } else {
              result[7] += 0.01812028;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[7] += -0.06151375;
          } else {
            result[7] += -0.14609417;
          }
        }
      } else {
        result[7] += 0.14963922;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
        result[7] += -0.21969184;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
          result[7] += 0.13191976;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
            result[7] += -0.23758574;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[7] += 0.008590522;
            } else {
              result[7] += -0.14268765;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[7] += 0.09538207;
          } else {
            result[7] += -0.07639271;
          }
        } else {
          result[7] += 0.14771155;
        }
      } else {
        result[7] += -0.031019276;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.14407256;
        } else {
          result[7] += -0.02627012;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
              result[7] += 0.002130237;
            } else {
              result[7] += -0.11563373;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += 0.13349518;
            } else {
              result[7] += 0.008752591;
            }
          }
        } else {
          result[7] += 0.14581892;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.0019547318;
            } else {
              result[8] += -0.15645699;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[8] += 0.12749554;
            } else {
              result[8] += 0.01733195;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
              result[8] += -0.07966914;
            } else {
              result[8] += 0.039748363;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.086745895;
            } else {
              result[8] += -0.15791495;
            }
          }
        }
      } else {
        result[8] += -0.15234551;
      }
    } else {
      result[8] += 0.14338957;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.1528334;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.14308177;
          } else {
            result[8] += 0.09387511;
          }
        } else {
          result[8] += -0.08106344;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[8] += -0.15244088;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[8] += 0.11452026;
            } else {
              result[8] += -0.17953148;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += 0.12607348;
            } else {
              result[8] += -0.20083232;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += 0.0018923782;
            } else {
              result[9] += -0.14630103;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[9] += 0.043171696;
            } else {
              result[9] += 0.02191874;
            }
          }
        } else {
          result[9] += 0.12593682;
        }
      } else {
        result[9] += -0.12685823;
      }
    } else {
      result[9] += -0.14093617;
    }
  } else {
    result[9] += -0.14703692;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.002449993;
            } else {
              result[10] += -0.09921948;
            }
          } else {
            result[10] += -0.11412632;
          }
        } else {
          result[10] += -0.14690942;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
              result[10] += 0.018394422;
            } else {
              result[10] += 0.22279719;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[10] += -0.061154943;
            } else {
              result[10] += 0.007121515;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.13938701;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.08748778;
            } else {
              result[10] += 0.00035867502;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.14179891;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.11617603;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.029171843;
            } else {
              result[10] += -0.108031765;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[10] += 0.08635991;
        } else {
          result[10] += -0.09480441;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14554788;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[10] += 0.19880338;
      } else {
        result[10] += -0.11727459;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += -0.00014946153;
            } else {
              result[11] += -0.07556942;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.052188534;
            } else {
              result[11] += -0.00459355;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += 0.0061169923;
            } else {
              result[11] += 0.029139971;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.015415133;
            } else {
              result[11] += -0.011956011;
            }
          }
        }
      } else {
        result[11] += -0.14414632;
      }
    } else {
      result[11] += -0.14157946;
    }
  } else {
    result[11] += -0.14584538;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[12] += -0.034451153;
            } else {
              result[12] += -0.13394785;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.004234089;
            } else {
              result[12] += -0.0077849953;
            }
          }
        } else {
          result[12] += -0.13556443;
        }
      } else {
        result[12] += -0.14750141;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.09912512;
            } else {
              result[12] += 0.034279004;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.18707433;
            } else {
              result[12] += 0.010436916;
            }
          }
        } else {
          result[12] += -0.11694795;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.14758128;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            result[12] += -0.007132847;
          } else {
            result[12] += -0.13515624;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14702271;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.1203594;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.13381979;
          } else {
            result[12] += -0.1137984;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.12622468;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
              result[12] += 0.06295682;
            } else {
              result[12] += 0.14462616;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.119745225;
            } else {
              result[12] += 0.065186165;
            }
          }
        } else {
          result[12] += -0.11881424;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[13] += -0.024952328;
        } else {
          result[13] += -0.1319871;
        }
      } else {
        result[13] += -0.13742177;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[13] += 0.0020735767;
            } else {
              result[13] += -0.078317806;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += 0.032360505;
            } else {
              result[13] += -0.015366214;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[13] += -0.14358619;
            } else {
              result[13] += 0.033964224;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.078086235;
            } else {
              result[13] += -0.090980686;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += 0.25082386;
            } else {
              result[13] += 0.06701551;
            }
          } else {
            result[13] += -0.05652965;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[13] += -0.09244684;
            } else {
              result[13] += 0.10221861;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[13] += 0.1412833;
            } else {
              result[13] += 0.028057061;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
      result[13] += -0.13596539;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
        result[13] += -0.14784987;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[13] += 0.16634646;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[13] += -0.08876066;
            } else {
              result[13] += 0.09982718;
            }
          }
        } else {
          result[13] += -0.10936145;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[14] += 0.004384466;
            } else {
              result[14] += -0.007898341;
            }
          } else {
            result[14] += -0.13303314;
          }
        } else {
          result[14] += -0.13393843;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.007513986;
            } else {
              result[14] += -0.15391324;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[14] += 0.13528536;
            } else {
              result[14] += 0.010952397;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += -0.03917913;
            } else {
              result[14] += -0.15466955;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += 0.0013449236;
            } else {
              result[14] += 0.1142957;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[14] += -0.14591442;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
          result[14] += -0.14520586;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[14] += 0.4715814;
            } else {
              result[14] += 0.17206137;
            }
          } else {
            result[14] += -0.11145236;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.010541833;
            } else {
              result[14] += -0.11852006;
            }
          } else {
            result[14] += 0.12630823;
          }
        } else {
          result[14] += -0.11376417;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[14] += 0.06749776;
            } else {
              result[14] += 0.02825044;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.031711943;
            } else {
              result[14] += 0.07540255;
            }
          }
        } else {
          result[14] += -0.0968863;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.0047060247;
            } else {
              result[14] += 0.11009325;
            }
          } else {
            result[14] += -0.13483004;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.13545384;
            } else {
              result[14] += 0.016415615;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[14] += 0.24419422;
            } else {
              result[14] += 0.08362949;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            result[14] += -0.119317144;
          } else {
            result[14] += 0.08207946;
          }
        } else {
          result[14] += -0.12800343;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[0] += 0.0024880152;
          } else {
            result[0] += -0.0948127;
          }
        } else {
          result[0] += -0.11400205;
        }
      } else {
        result[0] += -0.14726396;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[0] += 0.015821429;
            } else {
              result[0] += 0.049736824;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
              result[0] += 0.0021059937;
            } else {
              result[0] += -0.27606994;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
            result[0] += 0.13312504;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[0] += -0.13798234;
            } else {
              result[0] += 0.10481596;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[0] += 0.02511841;
            } else {
              result[0] += -0.3262331;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)689205)) {
              result[0] += 0.06607185;
            } else {
              result[0] += -0.086288616;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[0] += 0.0027437676;
            } else {
              result[0] += 0.11192042;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.00092850585;
            } else {
              result[0] += 0.04531991;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.14604871;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.13485941;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[0] += 0.19605805;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
              result[0] += 0.060593303;
            } else {
              result[0] += -0.07872339;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            result[0] += -0.13190909;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.12311255;
            } else {
              result[0] += 0.03966756;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[1] += -0.07813516;
    } else {
      result[1] += -0.12569837;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.0011374591;
            } else {
              result[1] += -0.01215599;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[1] += -0.14795135;
            } else {
              result[1] += -0.011352148;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[1] += 0.07645773;
          } else {
            result[1] += -0.16195503;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[1] += 0.21445072;
            } else {
              result[1] += 0.113898955;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[1] += -0.13257043;
            } else {
              result[1] += 0.09684257;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += -0.007198144;
            } else {
              result[1] += -0.101378806;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += 0.06616261;
            } else {
              result[1] += -0.06195456;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.064960904;
            } else {
              result[1] += 0.040729485;
            }
          } else {
            result[1] += 0.07494395;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.10728998;
            } else {
              result[1] += -0.13256776;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.044899374;
            } else {
              result[1] += 0.004408395;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.057912942;
            } else {
              result[1] += 0.4711559;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.009932823;
            } else {
              result[1] += -0.05635818;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.013422068;
            } else {
              result[1] += -0.13608743;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[1] += 0.009411189;
            } else {
              result[1] += -0.085622594;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.0009714488;
        } else {
          result[2] += 0.0038803788;
        }
      } else {
        result[2] += -0.10582536;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
              result[2] += 0.05561921;
            } else {
              result[2] += 0.12557606;
            }
          } else {
            result[2] += 0.047041826;
          }
        } else {
          result[2] += 0.13570352;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          result[2] += 0.03508397;
        } else {
          result[2] += 0.10403996;
        }
      }
    }
  } else {
    result[2] += -0.14838432;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[3] += -0.1454123;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.12625809;
      } else {
        result[3] += 0.13061143;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
      result[3] += -0.08159018;
    } else {
      result[3] += 0.12977421;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.11444298;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[4] += -0.008630343;
            } else {
              result[4] += 0.13315277;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.010646684;
            } else {
              result[4] += -0.0010375001;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[4] += 0.106045306;
            } else {
              result[4] += 0.011482657;
            }
          } else {
            result[4] += 0.16128264;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            result[4] += -0.07312422;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[4] += 0.023982216;
            } else {
              result[4] += 0.14233992;
            }
          }
        }
      }
    } else {
      result[4] += 0.14507064;
    }
  } else {
    result[4] += -0.14839658;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.0012512433;
            } else {
              result[5] += 0.0044649104;
            }
          } else {
            result[5] += -0.0815134;
          }
        } else {
          result[5] += -0.106878765;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          result[5] += -0.147494;
        } else {
          result[5] += 0.07842546;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.112401;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[5] += 0.015552624;
            } else {
              result[5] += 0.054633576;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += -0.0550887;
            } else {
              result[5] += 0.037651323;
            }
          }
        } else {
          result[5] += 0.10024207;
        }
      }
    }
  } else {
    result[5] += -0.14478205;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0015043445;
        } else {
          result[6] += 0.07634561;
        }
      } else {
        result[6] += -0.0877758;
      }
    } else {
      result[6] += -0.10687912;
    }
  } else {
    result[6] += -0.14838435;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
              result[7] += 0.0008114799;
            } else {
              result[7] += -0.13380612;
            }
          } else {
            result[7] += -0.13814162;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
              result[7] += -0.029480409;
            } else {
              result[7] += 0.11865464;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[7] += -0.21735904;
            } else {
              result[7] += -0.04675395;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[7] += 0.1498748;
        } else {
          result[7] += -0.0754563;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[7] += -0.15379634;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            result[7] += -0.11079488;
          } else {
            result[7] += 0.20863649;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[7] += -0.02231421;
            } else {
              result[7] += 0.0035101494;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += -0.20954706;
            } else {
              result[7] += 0.027006757;
            }
          }
        } else {
          result[7] += 0.13633446;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += 0.070203364;
            } else {
              result[7] += 0.14715156;
            }
          } else {
            result[7] += -0.10910795;
          }
        } else {
          result[7] += 0.29972932;
        }
      } else {
        result[7] += -0.029517198;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[7] += -0.14238518;
          } else {
            result[7] += -0.01465285;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[7] += 0.04469789;
            } else {
              result[7] += -0.13991599;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
              result[7] += 0.081675485;
            } else {
              result[7] += -0.05944111;
            }
          }
        }
      } else {
        result[7] += 0.14464949;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[8] += -0.0014734168;
            } else {
              result[8] += 0.14351338;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[8] += -0.15163517;
            } else {
              result[8] += 0.0021849312;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.21865597;
            } else {
              result[8] += -0.13545468;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += -0.06682878;
            } else {
              result[8] += -0.12440828;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.07993403;
            } else {
              result[8] += 0.18205301;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[8] += 0.065084085;
            } else {
              result[8] += 0.017407803;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += -0.15100904;
            } else {
              result[8] += -0.069524914;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
              result[8] += 0.013290587;
            } else {
              result[8] += 0.12414827;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[8] += -0.16147368;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.33049873;
            } else {
              result[8] += 0.13882153;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += -0.021168428;
            } else {
              result[8] += -0.14524142;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[8] += -0.06075607;
            } else {
              result[8] += 0.071874276;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[8] += -0.0077119134;
            } else {
              result[8] += -0.06489795;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[8] += -0.009806408;
            } else {
              result[8] += -0.04640062;
            }
          }
        } else {
          result[8] += -0.13518208;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.1523465;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.11239935;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[8] += 0.13264453;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[8] += 0.13878535;
            } else {
              result[8] += 0.0055545243;
            }
          }
        }
      } else {
        result[8] += -0.1444561;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[9] += 0.0017990507;
            } else {
              result[9] += -0.11580619;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
              result[9] += -0.14572507;
            } else {
              result[9] += 0.12112205;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[9] += 0.0010353588;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[9] += 0.074089676;
            } else {
              result[9] += 0.025175897;
            }
          }
        }
      } else {
        result[9] += -0.123206876;
      }
    } else {
      result[9] += -0.13917442;
    }
  } else {
    result[9] += -0.14647718;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[10] += 0.0021227223;
            } else {
              result[10] += -0.09287344;
            }
          } else {
            result[10] += -0.1094755;
          }
        } else {
          result[10] += -0.14640512;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[10] += 0.018396312;
            } else {
              result[10] += -0.11108799;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[10] += 0.36636895;
            } else {
              result[10] += -0.046555895;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[10] += -0.12533298;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
              result[10] += -0.0029721668;
            } else {
              result[10] += 0.008911779;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.14021431;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[10] += -0.1114987;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[10] += 0.022586858;
            } else {
              result[10] += -0.10466544;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.09154409;
          } else {
            result[10] += 0.0038291025;
          }
        } else {
          result[10] += 0.098736905;
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      result[10] += -0.14471927;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        result[10] += 0.16667466;
      } else {
        result[10] += -0.11296058;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += 0.00092234684;
            } else {
              result[11] += 0.12857248;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.27887878;
            } else {
              result[11] += -0.0025501878;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[11] += 0.06318276;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[11] += -0.14205873;
            } else {
              result[11] += 0.034620456;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[11] += -0.101386614;
          } else {
            result[11] += -0.16818805;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            result[11] += 0.16910222;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[11] += 0.015047425;
            } else {
              result[11] += -0.13032952;
            }
          }
        }
      }
    } else {
      result[11] += -0.14003478;
    }
  } else {
    result[11] += -0.14505854;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.0019184878;
            } else {
              result[12] += -0.13596615;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.1465955;
            } else {
              result[12] += 0.11669435;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[12] += -0.13710245;
            } else {
              result[12] += 0.07910864;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.09811912;
            } else {
              result[12] += -0.13998346;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += 0.012455543;
            } else {
              result[12] += 0.06091132;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += -0.0015839783;
            } else {
              result[12] += 0.04545964;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[12] += 0.0030960087;
            } else {
              result[12] += 0.04076687;
            }
          } else {
            result[12] += -0.12697071;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[12] += 0.14790593;
        } else {
          result[12] += -0.096633;
        }
      } else {
        result[12] += -0.118450634;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[12] += -0.14639728;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.11670009;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.12633485;
          } else {
            result[12] += -0.11029804;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.123549044;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.13278905;
            } else {
              result[12] += -0.13241021;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.14451182;
            } else {
              result[12] += -0.10082501;
            }
          }
        } else {
          result[12] += -0.11177408;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.0033432124;
            } else {
              result[13] += 0.034785688;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.12462295;
            } else {
              result[13] += 0.0084272185;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[13] += -0.08557748;
            } else {
              result[13] += 0.19859503;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[13] += -0.022931468;
            } else {
              result[13] += 0.12612589;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.11942333;
            } else {
              result[13] += -0.15323591;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += 0.07713807;
            } else {
              result[13] += -0.073093705;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.22842467;
            } else {
              result[13] += -0.051453773;
            }
          } else {
            result[13] += -0.13892062;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += 0.08380052;
            } else {
              result[13] += -0.04733722;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += 0.013546768;
            } else {
              result[13] += -0.086958155;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.010187108;
            } else {
              result[13] += -0.098836996;
            }
          } else {
            result[13] += 0.142607;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[13] += 0.12476158;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += -0.07882796;
            } else {
              result[13] += 0.10048442;
            }
          }
        } else {
          result[13] += 0.15656221;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
      result[13] += -0.13358562;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
        result[13] += -0.13503505;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[13] += 0.15291685;
          } else {
            result[13] += -0.0025064817;
          }
        } else {
          result[13] += -0.10300173;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.0006117923;
            } else {
              result[14] += 0.052203987;
            }
          } else {
            result[14] += -0.13469625;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.16283864;
            } else {
              result[14] += -0.08091372;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.1506785;
            } else {
              result[14] += 0.0714652;
            }
          }
        }
      } else {
        result[14] += -0.1423817;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[14] += -0.075564295;
        } else {
          result[14] += 0.14627372;
        }
      } else {
        result[14] += -0.10140451;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          result[14] += -0.12988687;
        } else {
          result[14] += -0.27678427;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[14] += 0.15562949;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
              result[14] += -0.106069304;
            } else {
              result[14] += 0.095582135;
            }
          }
        } else {
          result[14] += -0.12282463;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[14] += 0.03787216;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.15280856;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.01399172;
            } else {
              result[14] += 0.102411196;
            }
          } else {
            result[14] += -0.12530333;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[0] += 0.0022468655;
          } else {
            result[0] += -0.08865167;
          }
        } else {
          result[0] += -0.10949615;
        }
      } else {
        result[0] += -0.1467443;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[0] += 0.015491935;
            } else {
              result[0] += 0.046984687;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
              result[0] += -0.002154776;
            } else {
              result[0] += -0.20221847;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
            result[0] += 0.13039741;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)522179)) {
              result[0] += -0.180788;
            } else {
              result[0] += 0.07936638;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
            result[0] += -0.3009161;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[0] += 0.099669434;
            } else {
              result[0] += -0.06275043;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[0] += 0.020600649;
            } else {
              result[0] += -0.16989304;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
              result[0] += 0.10019929;
            } else {
              result[0] += 0.0045114164;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
      result[0] += -0.1452699;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[0] += -0.13280441;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += 0.02285305;
            } else {
              result[0] += -0.22007751;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[0] += 0.2066357;
            } else {
              result[0] += 0.024883492;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[0] += -0.11387964;
          } else {
            result[0] += -0.031134991;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
              result[1] += -0.0017471458;
            } else {
              result[1] += 0.12612802;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.143338;
            } else {
              result[1] += -0.005921959;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[1] += 0.07415842;
            } else {
              result[1] += 0.022791635;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[1] += -0.10821472;
            } else {
              result[1] += 0.16722111;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.07019508;
            } else {
              result[1] += 0.02851004;
            }
          } else {
            result[1] += -0.1694883;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += -0.11773469;
            } else {
              result[1] += -0.19334681;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[1] += -0.10554377;
            } else {
              result[1] += 0.06252898;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        result[1] += -0.15602356;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += -0.1383268;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[1] += 0.04165372;
            } else {
              result[1] += 0.12295777;
            }
          }
        } else {
          result[1] += -0.2017569;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        result[1] += -0.14599574;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
              result[1] += 0.27329123;
            } else {
              result[1] += 0.038097776;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[1] += 0.12734187;
            } else {
              result[1] += -0.118214995;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += -0.10523742;
            } else {
              result[1] += 0.09576464;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[1] += 0.028575605;
            } else {
              result[1] += -0.10928252;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[1] += 0.17596458;
          } else {
            result[1] += -0.12124237;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += -0.009453971;
            } else {
              result[1] += 0.061339833;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[1] += -0.055328127;
            } else {
              result[1] += 0.018709691;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          result[1] += -0.15155639;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            result[1] += -0.20135757;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[1] += 0.04241927;
            } else {
              result[1] += -0.052240502;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.00097330956;
        } else {
          result[2] += 0.0037108061;
        }
      } else {
        result[2] += -0.10104775;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
              result[2] += 0.047917403;
            } else {
              result[2] += 0.12258535;
            }
          } else {
            result[2] += 0.043267034;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[2] += 0.13237575;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)48682)) {
              result[2] += 0.0011813806;
            } else {
              result[2] += 0.110798724;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          result[2] += 0.024357775;
        } else {
          result[2] += 0.112591736;
        }
      }
    }
  } else {
    result[2] += -0.14807197;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)787841)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[3] += -0.14457598;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[3] += -0.12250774;
      } else {
        result[3] += 0.12701936;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
      result[3] += 0.00441854;
    } else {
      result[3] += 0.10541673;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.109893315;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[4] += -0.007351204;
            } else {
              result[4] += 0.13031058;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
              result[4] += -0.0024597025;
            } else {
              result[4] += 0.0047372812;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
              result[4] += 0.10782133;
            } else {
              result[4] += -0.07496309;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.15665811;
            } else {
              result[4] += 0.060477827;
            }
          }
        } else {
          result[4] += 0.005678018;
        }
      }
    } else {
      result[4] += 0.14395891;
    }
  } else {
    result[4] += -0.14808638;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[5] += 0.0015521833;
        } else {
          result[5] += -0.10209166;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
          result[5] += -0.14705573;
        } else {
          result[5] += 0.078473255;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[5] += -0.107251585;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[5] += 0.037828945;
            } else {
              result[5] += -0.09271811;
            }
          } else {
            result[5] += 0.20396279;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[5] += -0.09598128;
          } else {
            result[5] += 0.043040056;
          }
        }
      }
    }
  } else {
    result[5] += -0.14372277;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[6] += 0.0015326329;
      } else {
        result[6] += -0.081659846;
      }
    } else {
      result[6] += -0.102092035;
    }
  } else {
    result[6] += -0.148072;
  }
}

