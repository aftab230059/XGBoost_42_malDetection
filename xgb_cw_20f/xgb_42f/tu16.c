
#include "header.h"

void predict_unit16(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)523)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[2] += -0.01804943;
            } else {
              result[2] += 0.0068175234;
            }
          } else {
            result[2] += -0.025980076;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[2] += -0.00335216;
          } else {
            result[2] += 0.0003949714;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)7939)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)7212)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6956)) {
              result[2] += 0.006207541;
            } else {
              result[2] += -0.08392969;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)7454)) {
              result[2] += 0.13224144;
            } else {
              result[2] += 0.030559575;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)8476)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.0018369433;
            } else {
              result[2] += -0.07675268;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)8735)) {
              result[2] += 0.055224333;
            } else {
              result[2] += 0.0017579633;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            result[2] += 0.01628777;
          } else {
            result[2] += 0.09606417;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)25002)) {
            result[2] += -0.03256199;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[2] += 0.08152534;
            } else {
              result[2] += 0.012445482;
            }
          }
        }
      } else {
        result[2] += 0.10638328;
      }
    }
  } else {
    result[2] += -0.12989897;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.13013558;
    } else {
      result[3] += -0.0058300085;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      result[3] += 0.08037673;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[3] += -0.10570721;
      } else {
        result[3] += 0.067140006;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.034701567;
        } else {
          result[4] += 0.008370726;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
              result[4] += 0.055262674;
            } else {
              result[4] += -0.06962665;
            }
          } else {
            result[4] += 0.06499277;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[4] += 0.014291426;
            } else {
              result[4] += -0.08447409;
            }
          } else {
            result[4] += 0.05276452;
          }
        }
      }
    } else {
      result[4] += 0.116455324;
    }
  } else {
    result[4] += -0.13024814;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[5] += -0.012037283;
            } else {
              result[5] += -0.0007945245;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)59216)) {
              result[5] += 0.004581579;
            } else {
              result[5] += 0.015233157;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[5] += -0.13373467;
          } else {
            result[5] += -0.034977794;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[5] += 0.09320852;
            } else {
              result[5] += -0.024999714;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[5] += 0.07335546;
            } else {
              result[5] += 0.33284897;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
              result[5] += -0.11674043;
            } else {
              result[5] += -0.010674188;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
              result[5] += 0.04367712;
            } else {
              result[5] += -0.012780543;
            }
          }
        }
      }
    } else {
      result[5] += -0.100899816;
    }
  } else {
    result[5] += -0.1134516;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00013467918;
  } else {
    result[6] += -0.12975915;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44043)) {
              result[7] += -0.0009822648;
            } else {
              result[7] += -0.0429518;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.14917867;
            } else {
              result[7] += -0.0015359562;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += 0.01246664;
            } else {
              result[7] += -0.13343091;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += 0.10560348;
            } else {
              result[7] += -0.07010795;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
          result[7] += -0.1319528;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)57396)) {
            result[7] += 0.11768252;
          } else {
            result[7] += -0.090567715;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[7] += 0.027845373;
      } else {
        result[7] += 0.120605454;
      }
    }
  } else {
    result[7] += 0.12301057;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[8] += -0.0047091865;
            } else {
              result[8] += -0.12792128;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
              result[8] += 0.053442113;
            } else {
              result[8] += -0.1389201;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
              result[8] += -0.046779774;
            } else {
              result[8] += 0.028887747;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
              result[8] += 0.067076504;
            } else {
              result[8] += 0.32213712;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[8] += 0.02050493;
            } else {
              result[8] += -0.1695832;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
              result[8] += -0.060571603;
            } else {
              result[8] += 0.11705382;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[8] += 0.00027294044;
            } else {
              result[8] += 0.01435201;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[8] += -0.13404925;
            } else {
              result[8] += -0.010840479;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.03317795;
            } else {
              result[8] += -0.048524592;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.13317817;
            } else {
              result[8] += -0.050351862;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[8] += -0.018031886;
            } else {
              result[8] += -0.088631615;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
              result[8] += 0.10834002;
            } else {
              result[8] += -0.0009451366;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
          result[8] += 0.15563495;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
              result[8] += 0.05123346;
            } else {
              result[8] += -0.15496111;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.10405637;
            } else {
              result[8] += -0.017186478;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.14416595;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            result[8] += 0.0076779625;
          } else {
            result[8] += 0.12614603;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
            result[8] += -0.040283803;
          } else {
            result[8] += 0.009916989;
          }
        }
      } else {
        result[8] += -0.103601605;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
              result[9] += 0.0009322826;
            } else {
              result[9] += -0.1126853;
            }
          } else {
            result[9] += 0.09201366;
          }
        } else {
          result[9] += -0.08470169;
        }
      } else {
        result[9] += -0.08494408;
      }
    } else {
      result[9] += -0.09187915;
    }
  } else {
    result[9] += -0.11494326;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)35802)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
              result[10] += 0.0012710968;
            } else {
              result[10] += -0.054491386;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[10] += -0.1337577;
            } else {
              result[10] += 0.008146274;
            }
          }
        } else {
          result[10] += -0.07983799;
        }
      } else {
        result[10] += -0.08059562;
      }
    } else {
      result[10] += -0.103370965;
    }
  } else {
    result[10] += -0.106277026;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[11] += -0.000202061;
            } else {
              result[11] += 0.021135788;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += -0.01721693;
            } else {
              result[11] += 0.084207036;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[11] += 0.007354686;
            } else {
              result[11] += -0.03155798;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += 0.038733143;
            } else {
              result[11] += 0.16344151;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
          result[11] += -0.16882716;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            result[11] += -0.11811552;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[11] += 0.117779434;
            } else {
              result[11] += -0.0908823;
            }
          }
        }
      }
    } else {
      result[11] += -0.11592741;
    }
  } else {
    result[11] += -0.11952444;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 6.0959275e-05;
            } else {
              result[12] += -0.11451223;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[12] += 0.024051795;
            } else {
              result[12] += 0.13905308;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[12] += -0.1340005;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.08811119;
            } else {
              result[12] += 0.034051567;
            }
          }
        }
      } else {
        result[12] += 0.18273227;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        result[12] += -0.13270281;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[12] += -0.054261483;
        } else {
          result[12] += 0.011532641;
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
      result[12] += -0.03512471;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
        result[12] += 0.13032912;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[12] += 0.08737332;
        } else {
          result[12] += -0.112894386;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)5394)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
              result[13] += -0.011469671;
            } else {
              result[13] += 0.036530513;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.13647905;
            } else {
              result[13] += 0.070034645;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[13] += -0.022630947;
            } else {
              result[13] += 0.16092552;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += 0.041189253;
            } else {
              result[13] += -0.09962097;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[13] += -0.0639006;
            } else {
              result[13] += 0.13507678;
            }
          } else {
            result[13] += -0.14245208;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[13] += 0.15098712;
            } else {
              result[13] += -0.036419887;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
              result[13] += 0.23195659;
            } else {
              result[13] += -0.023427239;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[13] += -0.018042587;
            } else {
              result[13] += 0.1908418;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.1499154;
            } else {
              result[13] += -0.051542412;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += 0.040586144;
            } else {
              result[13] += 0.17689446;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[13] += 0.1300043;
            } else {
              result[13] += -0.059236024;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
              result[13] += -0.015083233;
            } else {
              result[13] += -0.1217117;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
              result[13] += -0.091519274;
            } else {
              result[13] += 0.21274686;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
              result[13] += 0.047864955;
            } else {
              result[13] += 0.2542377;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
              result[13] += -0.015078253;
            } else {
              result[13] += 0.0011768218;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
      result[13] += -0.116755694;
    } else {
      result[13] += -0.019114917;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4016157440)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
              result[14] += -0.0012775229;
            } else {
              result[14] += 0.022616334;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += -0.008392628;
            } else {
              result[14] += -0.1329579;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
              result[14] += -0.10996056;
            } else {
              result[14] += 0.007312458;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
              result[14] += 0.05247406;
            } else {
              result[14] += 0.2184669;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
              result[14] += -0.11038174;
            } else {
              result[14] += 0.12577745;
            }
          } else {
            result[14] += -0.12005784;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
            result[14] += -0.04774529;
          } else {
            result[14] += -0.13805944;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
              result[14] += 0.030826407;
            } else {
              result[14] += 0.33436468;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.11344722;
            } else {
              result[14] += 0.040902413;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[14] += 0.0083616935;
            } else {
              result[14] += 0.34843054;
            }
          } else {
            result[14] += -0.014854359;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)58671)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[14] += -0.116323166;
            } else {
              result[14] += 0.1681732;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
              result[14] += -0.1403979;
            } else {
              result[14] += 0.014050134;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
              result[14] += -0.008039138;
            } else {
              result[14] += 0.3517658;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[14] += -0.06898968;
            } else {
              result[14] += 0.08069296;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
          result[14] += -0.119973965;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30457)) {
              result[14] += -0.018720169;
            } else {
              result[14] += 0.10239779;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39668)) {
              result[14] += -0.1350481;
            } else {
              result[14] += -0.031723026;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[14] += 0.040038463;
        } else {
          result[14] += 0.13997498;
        }
      }
    } else {
      result[14] += -0.13080774;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
              result[0] += 0.0006551236;
            } else {
              result[0] += 0.07718788;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
              result[0] += -0.08605315;
            } else {
              result[0] += -0.0051584034;
            }
          }
        } else {
          result[0] += 0.12378373;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)60429)) {
          result[0] += -0.13044068;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
              result[0] += 0.0396048;
            } else {
              result[0] += -0.022773545;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[0] += -0.004133113;
            } else {
              result[0] += -0.113941595;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
        result[0] += 0.034776337;
      } else {
        result[0] += 0.08910253;
      }
    }
  } else {
    result[0] += -0.10039503;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[1] += -0.00042280662;
            } else {
              result[1] += 0.040505283;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += 0.008339021;
            } else {
              result[1] += -0.13065572;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
              result[1] += -0.036560416;
            } else {
              result[1] += -0.11158476;
            }
          } else {
            result[1] += 0.11329771;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[1] += 0.06394641;
            } else {
              result[1] += -0.04760728;
            }
          } else {
            result[1] += -0.11069066;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.2279;
            } else {
              result[1] += -0.14066403;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += 0.0002627604;
            } else {
              result[1] += 0.051948313;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.065259464;
            } else {
              result[1] += 0.060631987;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[1] += -0.0028618113;
            } else {
              result[1] += 0.08975065;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
              result[1] += -0.07665166;
            } else {
              result[1] += -0.14030729;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
              result[1] += -0.114374466;
            } else {
              result[1] += 0.18328477;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[1] += 0.081643805;
            } else {
              result[1] += -0.09910051;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
              result[1] += 0.66921556;
            } else {
              result[1] += 0.058976103;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[1] += -0.011967018;
            } else {
              result[1] += 0.15874201;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[1] += -0.023332559;
            } else {
              result[1] += -0.13269219;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[1] += -0.12758389;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          result[1] += -0.09248796;
        } else {
          result[1] += 0.008274421;
        }
      }
    } else {
      result[1] += 0.005532207;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)18664)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)17886)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)17165)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)16405)) {
              result[2] += 0.0023638639;
            } else {
              result[2] += -0.053646017;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.03151933;
            } else {
              result[2] += 0.115012296;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)18148)) {
            result[2] += -0.08985858;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.10225759;
            } else {
              result[2] += 0.046264835;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)19166)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)18914)) {
            result[2] += 0.0024344586;
          } else {
            result[2] += 0.10889146;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)21231)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)20961)) {
              result[2] += 0.001006101;
            } else {
              result[2] += -0.12774739;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
              result[2] += 0.04746362;
            } else {
              result[2] += 0.0016120189;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.083170496;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[2] += 0.023442535;
            } else {
              result[2] += -0.03125826;
            }
          } else {
            result[2] += 0.07541622;
          }
        }
      } else {
        result[2] += 0.10256622;
      }
    }
  } else {
    result[2] += -0.1274048;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.13074847;
      } else {
        result[3] += -0.0051725605;
      }
    } else {
      result[3] += 0.017082257;
    }
  } else {
    result[3] += 0.041002013;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.032125298;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += 0.012432069;
          } else {
            result[4] += 0.050454292;
          }
        } else {
          result[4] += -0.012796327;
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        result[4] += 0.04397161;
      } else {
        result[4] += 0.11322734;
      }
    }
  } else {
    result[4] += -0.12778324;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[5] += 0.0021695069;
            } else {
              result[5] += -0.02568962;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
              result[5] += 0.13987944;
            } else {
              result[5] += 0.008041233;
            }
          }
        } else {
          result[5] += -0.11720499;
        }
      } else {
        result[5] += 0.18244988;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
        result[5] += -0.1243885;
      } else {
        result[5] += 0.047209553;
      }
    }
  } else {
    result[5] += -0.11007548;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 1.6302994e-05;
  } else {
    result[6] += -0.12725337;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.000111712056;
            } else {
              result[7] += -0.12542431;
            }
          } else {
            result[7] += -0.13038266;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54154)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[7] += -0.1510886;
            } else {
              result[7] += 0.077212244;
            }
          } else {
            result[7] += -0.2904971;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[7] += 0.12507945;
          } else {
            result[7] += -0.05950752;
          }
        } else {
          result[7] += -0.07824457;
        }
      }
    } else {
      result[7] += -0.14180785;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[7] += 0.14621377;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.07702717;
            } else {
              result[7] += -0.09641587;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[7] += -0.1325591;
            } else {
              result[7] += -0.022798274;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1241894144)) {
              result[7] += -0.041830312;
            } else {
              result[7] += 0.07210662;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[7] += -0.32604164;
            } else {
              result[7] += 0.091595314;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
              result[7] += -0.3967923;
            } else {
              result[7] += -0.03319777;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[7] += 0.013267039;
            } else {
              result[7] += -0.03667375;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[7] += 0.14674078;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[7] += -0.10431703;
        } else {
          result[7] += 0.07121184;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
              result[8] += -0.0059857913;
            } else {
              result[8] += 0.0016115623;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[8] += -0.050146453;
            } else {
              result[8] += -0.0077570556;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[8] += -0.008291406;
            } else {
              result[8] += -0.04961337;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[8] += 0.37965617;
            } else {
              result[8] += 0.02928995;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3694567680)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
              result[8] += 0.04113925;
            } else {
              result[8] += 0.23329222;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.11680177;
            } else {
              result[8] += -0.0040707663;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[8] += 0.014860228;
            } else {
              result[8] += -0.08531341;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[8] += 0.27554077;
            } else {
              result[8] += 0.015119201;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
              result[8] += 0.07772279;
            } else {
              result[8] += -0.013529925;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.13871026;
            } else {
              result[8] += -0.009040763;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
              result[8] += -0.036052246;
            } else {
              result[8] += -0.15893947;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[8] += -0.020899098;
            } else {
              result[8] += 0.07523948;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
            result[8] += 0.16465119;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
              result[8] += 0.118006594;
            } else {
              result[8] += 0.033409726;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[8] += -0.0911379;
            } else {
              result[8] += 0.062294558;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.09796874;
            } else {
              result[8] += -0.009908939;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.14286335;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            result[8] += 0.0062894328;
          } else {
            result[8] += 0.12301082;
          }
        } else {
          result[8] += -0.018082943;
        }
      } else {
        result[8] += -0.10068432;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[9] += 0.0031858229;
            } else {
              result[9] += -0.0008440394;
            }
          } else {
            result[9] += -0.081302494;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
              result[9] += -0.13623238;
            } else {
              result[9] += 0.057639297;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
              result[9] += -0.1271992;
            } else {
              result[9] += 0.03988648;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[9] += 0.055812705;
            } else {
              result[9] += -0.11454886;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[9] += 0.038067263;
            } else {
              result[9] += 0.13033232;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
              result[9] += 0.01447521;
            } else {
              result[9] += -0.2982121;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
              result[9] += -0.07288588;
            } else {
              result[9] += 0.03117917;
            }
          }
        }
      }
    } else {
      result[9] += -0.08835946;
    }
  } else {
    result[9] += -0.11168832;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[10] += -0.00024539666;
            } else {
              result[10] += -0.17775339;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
              result[10] += 0.15630081;
            } else {
              result[10] += -0.14430732;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
              result[10] += -0.1661646;
            } else {
              result[10] += 0.08291919;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.09928609;
            } else {
              result[10] += 0.004709604;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[10] += -0.13534153;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
              result[10] += 0.020592956;
            } else {
              result[10] += 0.07310779;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[10] += -0.08348131;
            } else {
              result[10] += 0.008738242;
            }
          }
        }
      }
    } else {
      result[10] += -0.097301304;
    }
  } else {
    result[10] += -0.10314293;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.0025188723;
            } else {
              result[11] += 0.0151798865;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[11] += -0.035909656;
            } else {
              result[11] += -0.1805837;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
              result[11] += -0.02628172;
            } else {
              result[11] += 0.08884756;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58671)) {
              result[11] += -2.1779075e-05;
            } else {
              result[11] += 0.06435612;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += -0.014823364;
            } else {
              result[11] += -0.048845544;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[11] += 0.2178769;
            } else {
              result[11] += 0.0012430209;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
              result[11] += 0.050457075;
            } else {
              result[11] += -0.2456651;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
              result[11] += 0.115471944;
            } else {
              result[11] += -0.06382768;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
              result[11] += -0.0026754497;
            } else {
              result[11] += 0.043469463;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
              result[11] += 0.08114183;
            } else {
              result[11] += -0.014351927;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += -0.20406975;
            } else {
              result[11] += 0.06182187;
            }
          } else {
            result[11] += 0.09680914;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += -0.06612632;
            } else {
              result[11] += -0.18908764;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
              result[11] += -0.100711934;
            } else {
              result[11] += 0.08201272;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1288050432)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
              result[11] += -0.008686582;
            } else {
              result[11] += 0.035672702;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1316757248)) {
              result[11] += -0.042802442;
            } else {
              result[11] += 0.00012389693;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.11627217;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[12] += -0.00055329484;
            } else {
              result[12] += -0.055167757;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1788612096)) {
              result[12] += 0.038428202;
            } else {
              result[12] += 0.15786952;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.060304724;
            } else {
              result[12] += -0.17896046;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
              result[12] += 0.10550723;
            } else {
              result[12] += -0.08827545;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)52230)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28379)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
              result[12] += 0.024202235;
            } else {
              result[12] += 0.18713501;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.0034259083;
            } else {
              result[12] += -0.08264264;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
              result[12] += 0.24276687;
            } else {
              result[12] += -0.03892394;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.01739704;
            } else {
              result[12] += 0.1923839;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
              result[12] += 0.006085996;
            } else {
              result[12] += -0.10293377;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
              result[12] += -0.14610517;
            } else {
              result[12] += 0.086916685;
            }
          }
        } else {
          result[12] += 0.121667385;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[12] += 0.0109743215;
            } else {
              result[12] += 0.21471563;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.1984033;
            } else {
              result[12] += 0.024715288;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
              result[12] += -0.044806916;
            } else {
              result[12] += 0.098403215;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[12] += 0.32000476;
            } else {
              result[12] += -0.0103506725;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
          result[12] += 0.02607523;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.0075352057;
            } else {
              result[12] += -0.17411254;
            }
          } else {
            result[12] += -0.019470997;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[12] += -0.1030505;
            } else {
              result[12] += 0.0052971668;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
              result[12] += 0.30340695;
            } else {
              result[12] += 0.0796764;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27096)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22532)) {
              result[12] += 0.006676342;
            } else {
              result[12] += -0.03787634;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
              result[12] += 0.053734716;
            } else {
              result[12] += 0.0067364215;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
          result[12] += -0.08290568;
        } else {
          result[12] += 0.24664553;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.043504108;
            } else {
              result[12] += 0.16175109;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
              result[12] += -0.15911664;
            } else {
              result[12] += -0.06745578;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[12] += -0.11762194;
            } else {
              result[12] += 0.05602664;
            }
          } else {
            result[12] += -0.17188784;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
              result[13] += -0.0018522443;
            } else {
              result[13] += 0.033274814;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
              result[13] += -0.016344905;
            } else {
              result[13] += -0.08032285;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
              result[13] += -0.02175482;
            } else {
              result[13] += 0.068694495;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
              result[13] += 0.459394;
            } else {
              result[13] += 0.04921486;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[13] += 0.0081046205;
            } else {
              result[13] += 0.10022469;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
              result[13] += -0.048917;
            } else {
              result[13] += 0.0654695;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[13] += -0.11749271;
            } else {
              result[13] += -0.022481;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[13] += 0.18616739;
            } else {
              result[13] += 0.043478105;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.005091859;
            } else {
              result[13] += -0.06631601;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3694567680)) {
              result[13] += 0.0017849718;
            } else {
              result[13] += 0.2570849;
            }
          }
        } else {
          result[13] += -0.12757114;
        }
      } else {
        result[13] += -0.15235579;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
        result[13] += 0.008299096;
      } else {
        result[13] += -0.12891793;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        result[13] += 0.18133812;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
          result[13] += -0.1067326;
        } else {
          result[13] += -0.0096514765;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
              result[14] += 0.0005179986;
            } else {
              result[14] += 0.01737264;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[14] += -0.074538074;
            } else {
              result[14] += -0.0041616387;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[14] += -0.111992545;
            } else {
              result[14] += 0.08119874;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[14] += 0.06904919;
            } else {
              result[14] += -0.110371895;
            }
          }
        }
      } else {
        result[14] += -0.14338736;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2192098560)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[14] += 0.034325577;
            } else {
              result[14] += -0.114252485;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[14] += 0.1326351;
            } else {
              result[14] += 0.3134308;
            }
          }
        } else {
          result[14] += 0.2986306;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29679)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[14] += -0.17822973;
            } else {
              result[14] += 0.030820746;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
              result[14] += 0.052994672;
            } else {
              result[14] += 0.14162739;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
            result[14] += -0.18168817;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[14] += 0.043947063;
            } else {
              result[14] += -0.09717186;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
              result[14] += -0.066907205;
            } else {
              result[14] += 0.020748025;
            }
          } else {
            result[14] += -0.13829523;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38113)) {
              result[14] += 0.019860405;
            } else {
              result[14] += 0.37822255;
            }
          } else {
            result[14] += -0.117829286;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[14] += -0.14696243;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
            result[14] += -0.1291294;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[14] += 0.20312344;
            } else {
              result[14] += 0.07214688;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1613070592)) {
              result[14] += 0.0365421;
            } else {
              result[14] += -0.050587498;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[14] += 0.26409996;
            } else {
              result[14] += -0.038364504;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += 0.12520021;
            } else {
              result[14] += -0.07639335;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
              result[14] += -0.11921141;
            } else {
              result[14] += -0.040729467;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
              result[14] += 0.0042545083;
            } else {
              result[14] += 0.098003544;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
              result[14] += 0.14103356;
            } else {
              result[14] += 0.013611346;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
              result[14] += -0.08532117;
            } else {
              result[14] += -0.0199925;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
              result[14] += 0.06365072;
            } else {
              result[14] += -0.0013937083;
            }
          }
        }
      }
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[0] += 0.0014163487;
          } else {
            result[0] += -0.00430898;
          }
        } else {
          result[0] += 0.0048823357;
        }
      } else {
        result[0] += -0.14418678;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
              result[0] += 0.003708505;
            } else {
              result[0] += -0.027688107;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)683239424)) {
              result[0] += 0.0522519;
            } else {
              result[0] += 0.1391632;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
              result[0] += -0.03054586;
            } else {
              result[0] += -0.108427115;
            }
          } else {
            result[0] += -0.18527578;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += 0.0047039813;
            } else {
              result[0] += 0.06956712;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[0] += 0.15241586;
            } else {
              result[0] += 0.062496405;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24813)) {
              result[0] += -0.08257498;
            } else {
              result[0] += -0.021784969;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
              result[0] += 0.045729138;
            } else {
              result[0] += 0.0040888796;
            }
          }
        }
      }
    }
  } else {
    result[0] += -0.0970095;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[1] += -0.0007651645;
            } else {
              result[1] += -0.042701155;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
              result[1] += 0.18225563;
            } else {
              result[1] += 0.04383097;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[1] += -0.041943353;
            } else {
              result[1] += 0.04801348;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
              result[1] += 0.1413091;
            } else {
              result[1] += -0.026026221;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += -0.008786869;
            } else {
              result[1] += -0.06988207;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += -0.04485803;
            } else {
              result[1] += 0.15445614;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
              result[1] += -0.13047552;
            } else {
              result[1] += -0.042338416;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[1] += -0.077163845;
            } else {
              result[1] += 0.105411045;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22532)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
              result[1] += -0.003206769;
            } else {
              result[1] += 0.06246177;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
              result[1] += -0.08721966;
            } else {
              result[1] += 0.06114738;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[1] += 0.04351642;
            } else {
              result[1] += 0.2629884;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += 0.32186663;
            } else {
              result[1] += 0.09193727;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[1] += -1.0928642e-05;
            } else {
              result[1] += 0.12044065;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.12496578;
            } else {
              result[1] += -0.004469398;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
            result[1] += -0.15640192;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[1] += 0.19620754;
            } else {
              result[1] += 0.017812526;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[1] += -0.13893004;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[1] += 0.16980636;
        } else {
          result[1] += -0.11050627;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
          result[1] += 0.23189417;
        } else {
          result[1] += 0.004867849;
        }
      } else {
        result[1] += -0.09935702;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)29495)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)27196)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.0064745303;
            } else {
              result[2] += 0.0144564435;
            }
          } else {
            result[2] += 0.19920059;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)28740)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)28222)) {
              result[2] += -0.06331534;
            } else {
              result[2] += -0.000767164;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.09586996;
            } else {
              result[2] += 7.080837e-05;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)30252)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[2] += 0.11028377;
          } else {
            result[2] += -0.14735058;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)30522)) {
              result[2] += -0.0050946223;
            } else {
              result[2] += -0.14537634;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)31053)) {
              result[2] += 0.13852428;
            } else {
              result[2] += 0.0031457308;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.08029344;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.02044632;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21042)) {
              result[2] += 0.082091086;
            } else {
              result[2] += 0.018475555;
            }
          }
        }
      } else {
        result[2] += 0.098944694;
      }
    }
  } else {
    result[2] += -0.12470918;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.12539333;
    } else {
      result[3] += -0.0046932194;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      result[3] += 0.07538195;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[3] += -0.09718255;
      } else {
        result[3] += 0.059685234;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
        result[4] += -0.029281938;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.04698;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[4] += -0.03160329;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
              result[4] += 0.057113938;
            } else {
              result[4] += -0.0014851383;
            }
          }
        }
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)34214)) {
          result[4] += 0.051559296;
        } else {
          result[4] += 0.0086070355;
        }
      } else {
        result[4] += 0.10998433;
      }
    }
  } else {
    result[4] += -0.12511607;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
              result[5] += 0.0023627141;
            } else {
              result[5] += -0.04484053;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
              result[5] += 0.15558846;
            } else {
              result[5] += -0.009854072;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
            result[5] += -0.11721007;
          } else {
            result[5] += 0.023485627;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            result[5] += 0.041581027;
          } else {
            result[5] += 0.17190227;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            result[5] += -0.107057676;
          } else {
            result[5] += 0.102275334;
          }
        }
      }
    } else {
      result[5] += -0.10593284;
    }
  } else {
    result[5] += -0.10733858;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 6.563259e-05;
  } else {
    result[6] += -0.124546506;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[7] += -0.003736268;
            } else {
              result[7] += -0.039814904;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.14899506;
            } else {
              result[7] += -0.001543504;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[7] += 0.005742454;
          } else {
            result[7] += 0.002476254;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[7] += 0.02546944;
        } else {
          result[7] += 0.11595132;
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
        result[7] += -0.12940113;
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)57396)) {
          result[7] += 0.0996592;
        } else {
          result[7] += -0.08681491;
        }
      }
    }
  } else {
    result[7] += 0.12026929;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += -1.2241822e-05;
            } else {
              result[8] += -0.087095656;
            }
          } else {
            result[8] += -0.14527926;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += 0.1322469;
            } else {
              result[8] += -0.0343039;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[8] += -0.08485686;
            } else {
              result[8] += 0.054771435;
            }
          }
        }
      } else {
        result[8] += -0.15818304;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[8] += -0.09029182;
            } else {
              result[8] += 0.14674321;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[8] += -0.008447039;
            } else {
              result[8] += 0.15140176;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
              result[8] += 0.14668709;
            } else {
              result[8] += -0.024638476;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[8] += 0.08188098;
            } else {
              result[8] += 0.0026464749;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[8] += -0.13272025;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[8] += 0.14663894;
            } else {
              result[8] += 0.0363267;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[8] += -0.13343082;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[8] += 0.014370134;
            } else {
              result[8] += 0.0845086;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.14569923;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[8] += 0.139359;
            } else {
              result[8] += 0.050213773;
            }
          } else {
            result[8] += -0.09720579;
          }
        } else {
          result[8] += -0.1040818;
        }
      } else {
        result[8] += -0.11554584;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[9] += 0.0004213713;
            } else {
              result[9] += -0.15647618;
            }
          } else {
            result[9] += 0.09871292;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += -0.053039618;
            } else {
              result[9] += -0.2900487;
            }
          } else {
            result[9] += 0.037607737;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[9] += 0.10757995;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
              result[9] += 0.010893865;
            } else {
              result[9] += -0.056573752;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[9] += -0.038155347;
            } else {
              result[9] += 0.09777494;
            }
          } else {
            result[9] += 0.12576851;
          }
        }
      }
    } else {
      result[9] += -0.08461719;
    }
  } else {
    result[9] += -0.108061716;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.00080238614;
            } else {
              result[10] += -0.07075109;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[10] += -0.0054433164;
            } else {
              result[10] += 0.07990362;
            }
          }
        } else {
          result[10] += -0.061698046;
        }
      } else {
        result[10] += -0.077050745;
      }
    } else {
      result[10] += -0.09072744;
    }
  } else {
    result[10] += -0.10059685;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
              result[11] += -0.013630946;
            } else {
              result[11] += 0.0003753753;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.06750028;
            } else {
              result[11] += -0.06458198;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52230)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
              result[11] += -0.041479956;
            } else {
              result[11] += 0.0011319183;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
              result[11] += -0.08453524;
            } else {
              result[11] += -0.0108103175;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43291)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38113)) {
              result[11] += 0.026666798;
            } else {
              result[11] += -0.0892791;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[11] += 0.088585354;
            } else {
              result[11] += -0.08526436;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25575)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[11] += 0.0029060722;
            } else {
              result[11] += 0.044792596;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[11] += -0.060520772;
            } else {
              result[11] += 0.0008014295;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[11] += -0.14754505;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[11] += 0.008912343;
            } else {
              result[11] += -0.058030523;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[11] += 0.19661525;
            } else {
              result[11] += 0.028965073;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
              result[11] += 0.005936629;
            } else {
              result[11] += -0.20858228;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.08496286;
            } else {
              result[11] += 0.020139018;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.1215108;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)44043)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)41745)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += -0.004121666;
            } else {
              result[12] += -0.050411172;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13341)) {
              result[12] += -0.17221086;
            } else {
              result[12] += -0.023003144;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
              result[12] += 0.12064105;
            } else {
              result[12] += 0.058019776;
            }
          } else {
            result[12] += -0.09800769;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.062398423;
            } else {
              result[12] += 0.038175736;
            }
          } else {
            result[12] += -0.1656415;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[12] += -0.15720189;
          } else {
            result[12] += 0.29164377;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[12] += 0.07367183;
            } else {
              result[12] += -0.05077809;
            }
          } else {
            result[12] += 0.1858446;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
            result[12] += 0.14049631;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += 0.001625855;
            } else {
              result[12] += 0.10781266;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
              result[12] += 0.008573116;
            } else {
              result[12] += -0.0059428955;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[12] += 0.081942946;
            } else {
              result[12] += -0.09901174;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[12] += -0.054914918;
          } else {
            result[12] += -0.1217558;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)604431232)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
              result[12] += 0.074312046;
            } else {
              result[12] += -0.25044954;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[12] += 0.21786015;
            } else {
              result[12] += 0.08074853;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += 0.007142635;
            } else {
              result[12] += -0.095736556;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[12] += 0.022234093;
            } else {
              result[12] += -0.05209566;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[12] += -0.0009696617;
            } else {
              result[12] += -0.11824914;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.17088236;
            } else {
              result[12] += -0.09342207;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43291)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.025791025;
            } else {
              result[12] += 0.32544544;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
              result[12] += -0.110303394;
            } else {
              result[12] += 0.058566723;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += -0.13036175;
            } else {
              result[12] += -0.034041066;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[12] += 0.06474394;
            } else {
              result[12] += 0.3826133;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[12] += -0.14703771;
            } else {
              result[12] += -0.2978823;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.12385402;
            } else {
              result[12] += 0.010227829;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
            result[12] += 0.30191272;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[12] += 0.049236655;
            } else {
              result[12] += -0.121855505;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += -0.051232643;
            } else {
              result[12] += 0.16359645;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
              result[12] += 0.015169656;
            } else {
              result[12] += -0.00026490775;
            }
          }
        }
      }
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.0024557933;
            } else {
              result[13] += -0.17328689;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
              result[13] += 0.10482987;
            } else {
              result[13] += -0.08426667;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
              result[13] += -0.062227778;
            } else {
              result[13] += 0.17695104;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34542)) {
              result[13] += -0.15652518;
            } else {
              result[13] += -0.045910455;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[13] += -0.04202456;
            } else {
              result[13] += 0.07754244;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
              result[13] += -0.16783738;
            } else {
              result[13] += -0.027556958;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.48421738;
            } else {
              result[13] += 0.058958985;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[13] += 0.38977373;
            } else {
              result[13] += -0.001243617;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
              result[13] += 0.002855122;
            } else {
              result[13] += -0.0759399;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
              result[13] += -0.039115;
            } else {
              result[13] += -0.1312182;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[13] += 0.21905375;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.049778614;
            } else {
              result[13] += 0.09966723;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[13] += 0.011589022;
            } else {
              result[13] += -0.07312205;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[13] += 0.21285701;
            } else {
              result[13] += -0.029188732;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += -0.011278795;
            } else {
              result[13] += -0.08973936;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
              result[13] += 0.06661319;
            } else {
              result[13] += -0.0062228134;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
          result[13] += -0.1337149;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[13] += -0.030508006;
            } else {
              result[13] += 0.09122591;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[13] += -0.017092582;
            } else {
              result[13] += -0.10926197;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
              result[13] += 0.0022848963;
            } else {
              result[13] += 0.3124745;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2764642816)) {
              result[13] += -0.10106821;
            } else {
              result[13] += 0.004072556;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[13] += 0.11534529;
            } else {
              result[13] += -0.024471497;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
              result[13] += 0.008380589;
            } else {
              result[13] += 0.24669449;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[13] += -0.09397775;
        } else {
          result[13] += 0.14477074;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[13] += -0.1466153;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
            result[13] += -0.00014974634;
          } else {
            result[13] += 0.10122454;
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
              result[14] += 0.004796249;
            } else {
              result[14] += 0.14249285;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
              result[14] += -0.0699356;
            } else {
              result[14] += 0.008460392;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
              result[14] += -0.10314941;
            } else {
              result[14] += 0.019263208;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[14] += 0.49740463;
            } else {
              result[14] += 0.107142605;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
              result[14] += 0.018653968;
            } else {
              result[14] += -0.047558617;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2786661888)) {
              result[14] += -0.13249344;
            } else {
              result[14] += -0.04644488;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += -0.00067829096;
            } else {
              result[14] += -0.023765525;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[14] += 0.024828497;
            } else {
              result[14] += -0.008337208;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[14] += 0.09355681;
            } else {
              result[14] += -0.059559036;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18700)) {
              result[14] += 0.3086637;
            } else {
              result[14] += 0.093737826;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
              result[14] += -0.09281476;
            } else {
              result[14] += 0.107853614;
            }
          } else {
            result[14] += -0.12482516;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
          result[14] += -0.13707004;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[14] += -0.1082893;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
              result[14] += 0.18814021;
            } else {
              result[14] += 0.028104244;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[14] += -0.020298285;
            } else {
              result[14] += -0.117042944;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += -0.034185156;
            } else {
              result[14] += 0.08932389;
            }
          }
        } else {
          result[14] += 0.07553843;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
          result[14] += 0.01786513;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
            result[14] += 0.013936209;
          } else {
            result[14] += 0.15484594;
          }
        }
      }
    } else {
      result[14] += -0.12439602;
    }
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += 0.0005394053;
            } else {
              result[0] += 0.044459045;
            }
          } else {
            result[0] += -0.083635725;
          }
        } else {
          result[0] += 0.107928075;
        }
      } else {
        result[0] += -0.09323754;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
        result[0] += 0.07599147;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
              result[0] += -0.014869638;
            } else {
              result[0] += 0.01534485;
            }
          } else {
            result[0] += -0.04814185;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            result[0] += 0.033206765;
          } else {
            result[0] += 0.08345348;
          }
        }
      }
    }
  } else {
    result[0] += -0.09367145;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1353621248)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[1] += -0.032468908;
            } else {
              result[1] += -0.11367976;
            }
          } else {
            result[1] += 0.0911753;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
            result[1] += 0.4043583;
          } else {
            result[1] += -0.011661837;
          }
        }
      } else {
        result[1] += -0.18804334;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3151783168)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
            result[1] += -0.08194966;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[1] += 0.08601686;
            } else {
              result[1] += -0.039337095;
            }
          }
        } else {
          result[1] += 0.22789882;
        }
      } else {
        result[1] += -0.15729436;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
              result[1] += -0.00021028888;
            } else {
              result[1] += 0.011662792;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
              result[1] += -0.013268325;
            } else {
              result[1] += -0.12182449;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[1] += 0.3363961;
            } else {
              result[1] += 0.110398814;
            }
          } else {
            result[1] += -0.14247738;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
              result[1] += 0.00092243677;
            } else {
              result[1] += -0.041291833;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
              result[1] += -0.12558477;
            } else {
              result[1] += 0.04939924;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
              result[1] += 0.029957218;
            } else {
              result[1] += 0.24867362;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[1] += 0.018165959;
            } else {
              result[1] += -0.088302195;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            result[1] += -0.084218055;
          } else {
            result[1] += 0.031124406;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            result[1] += -0.11899105;
          } else {
            result[1] += -0.027024359;
          }
        }
      } else {
        result[1] += 0.04020934;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)4409)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)3400)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += -0.001179304;
            } else {
              result[2] += -0.057186086;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.05760319;
            } else {
              result[2] += -0.05486922;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)3906)) {
              result[2] += -0.010794448;
            } else {
              result[2] += -0.05903787;
            }
          } else {
            result[2] += -0.0030674583;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)4908)) {
          result[2] += 0.11105936;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6201)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[2] += 0.012917743;
            } else {
              result[2] += -0.14160839;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)6453)) {
              result[2] += 0.10125408;
            } else {
              result[2] += 0.002295319;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            result[2] += 0.01574485;
          } else {
            result[2] += 0.09202617;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)25002)) {
            result[2] += -0.029857518;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[2] += 0.077758506;
            } else {
              result[2] += 0.013761105;
            }
          }
        }
      } else {
        result[2] += 0.09529972;
      }
    }
  } else {
    result[2] += -0.121793225;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.122562796;
    } else {
      result[3] += -0.004085416;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      result[3] += 0.07158006;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        result[3] += -0.09360126;
      } else {
        result[3] += 0.05423477;
      }
    }
  }
}

