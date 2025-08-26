
#include "header.h"

void predict_unit30(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)35802)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
              result[0] += 6.0536917e-05;
            } else {
              result[0] += -0.049845386;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
              result[0] += 0.039306223;
            } else {
              result[0] += 0.004784482;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
              result[0] += -0.02297287;
            } else {
              result[0] += -0.10198149;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
              result[0] += 0.016451037;
            } else {
              result[0] += -0.06372675;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)41485)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)39929)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
              result[0] += 0.08126539;
            } else {
              result[0] += -0.017610015;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
              result[0] += 0.120962925;
            } else {
              result[0] += 0.03244392;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)41745)) {
            result[0] += -0.13318275;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
              result[0] += 0.002925198;
            } else {
              result[0] += -0.03913554;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)18700)) {
          result[0] += -0.020563811;
        } else {
          result[0] += 0.10360637;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[0] += 0.0063538915;
        } else {
          result[0] += -0.03466781;
        }
      }
    }
  } else {
    result[0] += -0.043385737;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2764642816)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2722185728)) {
              result[1] += -1.4199262e-05;
            } else {
              result[1] += -0.06668597;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23300)) {
              result[1] += 0.11771166;
            } else {
              result[1] += 0.0053085415;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[1] += -0.04919877;
            } else {
              result[1] += 0.12762927;
            }
          } else {
            result[1] += 0.24824949;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[1] += 0.02587216;
            } else {
              result[1] += -0.07431615;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[1] += 0.0926757;
            } else {
              result[1] += -0.11010707;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
              result[1] += 0.15687406;
            } else {
              result[1] += -0.047733452;
            }
          } else {
            result[1] += 0.23851189;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            result[1] += -0.08259259;
          } else {
            result[1] += 0.07350792;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[1] += 0.0056758043;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += -0.17476188;
            } else {
              result[1] += -0.060405824;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += -0.008149102;
            } else {
              result[1] += 0.04993099;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += -0.07751943;
            } else {
              result[1] += 0.115551956;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40194)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
              result[1] += 0.198845;
            } else {
              result[1] += -0.0023012187;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += -0.104463555;
            } else {
              result[1] += 0.08199405;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += 0.009927448;
            } else {
              result[1] += 0.16988653;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
              result[1] += 0.02882775;
            } else {
              result[1] += -0.14130223;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
            result[1] += 0.3465882;
          } else {
            result[1] += -0.02520166;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
          result[1] += -0.16302267;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
            result[1] += -0.08863936;
          } else {
            result[1] += -0.016916316;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
              result[1] += 0.018688438;
            } else {
              result[1] += -0.0011995111;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.17112061;
            } else {
              result[1] += 0.019229095;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            result[1] += -0.15844885;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.032073356;
            } else {
              result[1] += -0.087953985;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[1] += 0.032183073;
            } else {
              result[1] += 0.13355821;
            }
          } else {
            result[1] += -0.10597061;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
            result[1] += -0.15006998;
          } else {
            result[1] += -0.010544663;
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)48433)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)53285)) {
              result[2] += 0.0012351122;
            } else {
              result[2] += -0.0038716886;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.034064807;
            } else {
              result[2] += -0.005740116;
            }
          }
        } else {
          result[2] += -0.028956493;
        }
      } else {
        result[2] += 0.033080913;
      }
    } else {
      result[2] += -0.023648582;
    }
  } else {
    result[2] += 0.024901254;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.016558997;
  } else {
    result[3] += 0.018811053;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += -0.006591043;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)48205)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.030113503;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[4] += -0.013567891;
          } else {
            result[4] += 0.012352055;
          }
        }
      } else {
        result[4] += 0.04318318;
      }
    } else {
      result[4] += -0.0043120906;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[5] += 0.00072267104;
            } else {
              result[5] += -0.025963165;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[5] += -0.091199525;
            } else {
              result[5] += 0.07851404;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
              result[5] += -0.08449403;
            } else {
              result[5] += 0.06975281;
            }
          } else {
            result[5] += -0.11447643;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          result[5] += 0.18889455;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[5] += -0.10127129;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
              result[5] += -0.0012276763;
            } else {
              result[5] += 0.13583875;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
        result[5] += -0.108753;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          result[5] += 0.0898426;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
            result[5] += -0.09388495;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[5] += 0.07501784;
            } else {
              result[5] += -0.034826234;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)545895936)) {
      result[5] += -0.020260768;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1353621248)) {
        result[5] += 0.06690701;
      } else {
        result[5] += 0.0046773683;
      }
    }
  }
  result[6] += -0.00011320545;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
              result[7] += -0.0009378551;
            } else {
              result[7] += 0.02446353;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
              result[7] += -0.035499636;
            } else {
              result[7] += -0.16820058;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
              result[7] += 0.00599984;
            } else {
              result[7] += -0.02480985;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[7] += 0.028692197;
            } else {
              result[7] += 0.10707379;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
              result[7] += -0.14733185;
            } else {
              result[7] += 0.0059967637;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
              result[7] += 0.14444889;
            } else {
              result[7] += -0.044294387;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
            result[7] += 0.116393015;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
              result[7] += -0.26562318;
            } else {
              result[7] += 0.10471935;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[7] += 0.007077062;
            } else {
              result[7] += 0.036229916;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += 0.073622875;
            } else {
              result[7] += -0.11683928;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
              result[7] += -0.16146553;
            } else {
              result[7] += -0.044903547;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
              result[7] += 0.033039644;
            } else {
              result[7] += -0.018505927;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
              result[7] += 0.09093976;
            } else {
              result[7] += -0.06845508;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32233)) {
              result[7] += 0.1429531;
            } else {
              result[7] += 0.0601508;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
            result[7] += 0.14580886;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
              result[7] += -0.101222135;
            } else {
              result[7] += 0.0024143416;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1325477248)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[7] += -0.17336842;
            } else {
              result[7] += 0.044179372;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1885973376)) {
              result[7] += -0.26139677;
            } else {
              result[7] += -0.044285618;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[7] += -0.12913224;
            } else {
              result[7] += 0.055440325;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2371643392)) {
              result[7] += -0.026821343;
            } else {
              result[7] += 0.00278909;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[7] += 0.08292406;
            } else {
              result[7] += -0.08331813;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[7] += -0.04426987;
            } else {
              result[7] += 0.03534399;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[7] += -0.21728903;
            } else {
              result[7] += -0.04406029;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
              result[7] += 0.04651973;
            } else {
              result[7] += -0.0003453311;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[7] += 0.12722813;
      } else {
        result[7] += -0.013267311;
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)25575)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)25066)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22283)) {
              result[8] += -4.0984032e-05;
            } else {
              result[8] += -0.023092251;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[8] += 0.0069996812;
            } else {
              result[8] += 0.06270855;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56523)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
              result[8] += -0.011735366;
            } else {
              result[8] += -0.057853714;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[8] += -0.07645138;
            } else {
              result[8] += 0.10258652;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
              result[8] += 0.041245386;
            } else {
              result[8] += 0.11989288;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
              result[8] += -0.008574566;
            } else {
              result[8] += -0.1798156;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
              result[8] += 0.009962363;
            } else {
              result[8] += -0.12969396;
            }
          } else {
            result[8] += 0.04284692;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[8] += -0.026555443;
            } else {
              result[8] += -0.07092582;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.23626871;
            } else {
              result[8] += -0.0030004205;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
            result[8] += -0.19274302;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2433490688)) {
              result[8] += -0.015555543;
            } else {
              result[8] += -0.15257259;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
              result[8] += 0.056988005;
            } else {
              result[8] += 0.2923566;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[8] += 0.053051986;
            } else {
              result[8] += -0.05953394;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[8] += -0.17754994;
            } else {
              result[8] += -0.05139813;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[8] += 0.16933946;
            } else {
              result[8] += -0.036205318;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)29424)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
              result[8] += 0.00031347628;
            } else {
              result[8] += 0.10686588;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
              result[8] += -0.16998777;
            } else {
              result[8] += -0.01568398;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[8] += 0.6742786;
            } else {
              result[8] += 0.098355874;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
              result[8] += 0.06934497;
            } else {
              result[8] += -0.05225295;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
              result[8] += 0.049956653;
            } else {
              result[8] += 0.22604574;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
              result[8] += 0.0204365;
            } else {
              result[8] += -0.106603675;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2454180352)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
              result[8] += 0.62247837;
            } else {
              result[8] += 0.03703275;
            }
          } else {
            result[8] += -0.09148737;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
              result[8] += -0.0013973411;
            } else {
              result[8] += -0.104977556;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[8] += 0.2293277;
            } else {
              result[8] += 0.038122058;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29679)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
              result[8] += 0.09268461;
            } else {
              result[8] += -0.073579565;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[8] += -0.101834476;
            } else {
              result[8] += -0.03879416;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)32233)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
              result[8] += 0.032457534;
            } else {
              result[8] += -0.014109655;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
              result[8] += 0.021591369;
            } else {
              result[8] += 0.36683568;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[8] += -0.0006279735;
            } else {
              result[8] += -0.066366896;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
              result[8] += 0.00803451;
            } else {
              result[8] += 0.12008461;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
              result[9] += 8.116936e-05;
            } else {
              result[9] += -0.03512965;
            }
          } else {
            result[9] += 0.09154908;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
              result[9] += 0.0018572378;
            } else {
              result[9] += 0.08533902;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
              result[9] += -0.20262526;
            } else {
              result[9] += 0.016198989;
            }
          }
        }
      } else {
        result[9] += 0.087657206;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
          result[9] += -0.056487985;
        } else {
          result[9] += 0.086250275;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[9] += -0.067094825;
            } else {
              result[9] += 0.09136215;
            }
          } else {
            result[9] += -0.25265256;
          }
        } else {
          result[9] += 0.0763661;
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
        result[9] += -0.06531755;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
          result[9] += 0.0857531;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
              result[9] += 0.024438763;
            } else {
              result[9] += -0.12881365;
            }
          } else {
            result[9] += 0.017990563;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
          result[9] += 0.060637467;
        } else {
          result[9] += -0.06370894;
        }
      } else {
        result[9] += 0.10990798;
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
              result[10] += 0.00016009143;
            } else {
              result[10] += -0.05781393;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[10] += 0.105060436;
            } else {
              result[10] += -0.0031262203;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            result[10] += 0.17293456;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[10] += -0.055349473;
            } else {
              result[10] += -0.17304745;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)39407)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[10] += -0.018077217;
            } else {
              result[10] += 0.0899625;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
              result[10] += -0.099659234;
            } else {
              result[10] += 0.028801998;
            }
          }
        } else {
          result[10] += 0.14107358;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
          result[10] += -0.02121056;
        } else {
          result[10] += -0.15484455;
        }
      } else {
        result[10] += 0.046078157;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[10] += 0.023298124;
            } else {
              result[10] += 0.14072348;
            }
          } else {
            result[10] += 0.15354726;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
            result[10] += 0.12605055;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2722185728)) {
              result[10] += -0.105629064;
            } else {
              result[10] += 0.03894581;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3694567680)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
              result[10] += 0.0005480827;
            } else {
              result[10] += 0.084195785;
            }
          } else {
            result[10] += -0.10801831;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
            result[10] += 0.14992838;
          } else {
            result[10] += -0.07151261;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
          result[10] += -0.15585954;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
            result[10] += 0.018375546;
          } else {
            result[10] += -0.07889071;
          }
        }
      } else {
        result[10] += 0.055900972;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
              result[11] += 0.00016615987;
            } else {
              result[11] += 0.039421562;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
              result[11] += -0.03827791;
            } else {
              result[11] += 0.001599174;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
              result[11] += -0.013867597;
            } else {
              result[11] += 0.0736373;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27096)) {
              result[11] += 0.21431893;
            } else {
              result[11] += 0.027513435;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
              result[11] += -0.01794368;
            } else {
              result[11] += 0.08564407;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += -0.11682448;
            } else {
              result[11] += 0.18578994;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
              result[11] += -0.12275461;
            } else {
              result[11] += -0.016329532;
            }
          } else {
            result[11] += -0.16172534;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
              result[11] += 0.121107616;
            } else {
              result[11] += -0.008174925;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
              result[11] += -0.05075179;
            } else {
              result[11] += -0.2092771;
            }
          }
        } else {
          result[11] += 0.18418914;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[11] += 0.20758785;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
              result[11] += 0.15685035;
            } else {
              result[11] += -0.070705414;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
            result[11] += 0.042056832;
          } else {
            result[11] += -0.079752415;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[11] += -0.06220812;
            } else {
              result[11] += 0.017868532;
            }
          } else {
            result[11] += 0.057047587;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25824)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
              result[11] += -0.028680444;
            } else {
              result[11] += -0.28102788;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39407)) {
              result[11] += 0.1611585;
            } else {
              result[11] += -0.1487827;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          result[11] += 0.19806775;
        } else {
          result[11] += -0.12529927;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += 0.20516738;
            } else {
              result[11] += 0.00066716125;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[11] += 0.059795547;
            } else {
              result[11] += -0.03740259;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
              result[11] += 0.05873909;
            } else {
              result[11] += -0.1155026;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
              result[11] += 0.16277656;
            } else {
              result[11] += 0.033290453;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[11] += 0.11326663;
            } else {
              result[11] += -0.06609541;
            }
          } else {
            result[11] += 0.09841847;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += 0.022987023;
            } else {
              result[11] += 0.12191435;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
              result[11] += 0.13519965;
            } else {
              result[11] += -0.007319942;
            }
          }
        }
      }
    }
  }
  if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44043)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
              result[12] += -0.0003440209;
            } else {
              result[12] += 0.0356786;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += -0.03202623;
            } else {
              result[12] += 0.09039762;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[12] += 0.048444133;
            } else {
              result[12] += 0.14563984;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += -0.04253014;
            } else {
              result[12] += -0.16067035;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
              result[12] += -0.03530605;
            } else {
              result[12] += 0.22372957;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
              result[12] += -0.09209923;
            } else {
              result[12] += -0.17833523;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[12] += 0.012693021;
            } else {
              result[12] += 0.19974208;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
              result[12] += -0.14196928;
            } else {
              result[12] += 0.05625016;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
              result[12] += 0.05514663;
            } else {
              result[12] += 0.20481575;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1186405888)) {
              result[12] += -0.15510257;
            } else {
              result[12] += 0.003868656;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += -0.1694132;
            } else {
              result[12] += 0.026100362;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += 0.16502307;
            } else {
              result[12] += 0.023320997;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[12] += 0.0017031257;
            } else {
              result[12] += -0.043546915;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
              result[12] += 0.096349925;
            } else {
              result[12] += -0.031959187;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46583)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[12] += 0.073181726;
            } else {
              result[12] += -0.048752353;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
              result[12] += -0.0004907505;
            } else {
              result[12] += 0.0067561255;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      result[12] += -0.10019722;
    } else {
      result[12] += 0.03252869;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
              result[13] += -0.002068866;
            } else {
              result[13] += 0.029471053;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.1005297;
            } else {
              result[13] += 0.07204403;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[13] += -0.11745164;
            } else {
              result[13] += 0.013644674;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.023765499;
            } else {
              result[13] += 0.023375213;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
              result[13] += 0.020878676;
            } else {
              result[13] += -0.11625555;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[13] += 0.18001358;
            } else {
              result[13] += 0.01667593;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
              result[13] += -0.096686564;
            } else {
              result[13] += 0.028424991;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
              result[13] += 0.019300869;
            } else {
              result[13] += 0.00020744083;
            }
          }
        }
      }
    } else {
      result[13] += -0.10609704;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
      result[13] += -0.045406487;
    } else {
      result[13] += 0.11859635;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
              result[14] += 0.00010884724;
            } else {
              result[14] += -0.028918061;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[14] += 0.08648105;
            } else {
              result[14] += 0.0067423848;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
              result[14] += -0.0005125614;
            } else {
              result[14] += -0.05922908;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[14] += -0.0017191555;
            } else {
              result[14] += 0.057228412;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
              result[14] += 0.022955963;
            } else {
              result[14] += 0.17704394;
            }
          } else {
            result[14] += -0.1128552;
          }
        } else {
          result[14] += -0.1028379;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += -0.02402398;
            } else {
              result[14] += -0.08810817;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[14] += 0.07763437;
            } else {
              result[14] += -0.06793125;
            }
          }
        } else {
          result[14] += 0.105462335;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[14] += 0.008065966;
            } else {
              result[14] += -0.1244807;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
              result[14] += 0.08085634;
            } else {
              result[14] += 0.24146046;
            }
          }
        } else {
          result[14] += -0.10647795;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
              result[14] += 0.017058425;
            } else {
              result[14] += -0.15010667;
            }
          } else {
            result[14] += 0.095445886;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
              result[14] += -0.114971384;
            } else {
              result[14] += 0.028546756;
            }
          } else {
            result[14] += -0.15770936;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
          result[14] += -0.0023790072;
        } else {
          result[14] += 0.09793637;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
          result[14] += -0.045200597;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2433490688)) {
              result[14] += 0.12913257;
            } else {
              result[14] += -0.021925714;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[14] += 0.21856628;
            } else {
              result[14] += 0.062040005;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3083)) {
              result[14] += 0.04429333;
            } else {
              result[14] += -0.1253229;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
              result[14] += -0.11877132;
            } else {
              result[14] += -0.039219964;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
              result[14] += 0.12535784;
            } else {
              result[14] += -0.01064006;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
              result[14] += -0.023025502;
            } else {
              result[14] += 0.004240171;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1325477248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
              result[0] += 0.0002519726;
            } else {
              result[0] += -0.031368516;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[0] += 0.00032074266;
            } else {
              result[0] += 0.07314203;
            }
          }
        } else {
          result[0] += -0.056851346;
        }
      } else {
        result[0] += 0.051389422;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        result[0] += -0.096464954;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1159214080)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
              result[0] += -0.039231792;
            } else {
              result[0] += 0.024542557;
            }
          } else {
            result[0] += 0.080645554;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            result[0] += 0.043616038;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
              result[0] += -0.08405642;
            } else {
              result[0] += 0.036072727;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
        result[0] += 0.11233225;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          result[0] += -0.035442114;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
            result[0] += 0.0101487655;
          } else {
            result[0] += 0.044147458;
          }
        }
      }
    } else {
      result[0] += -0.036749557;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
              result[1] += 0.00028466803;
            } else {
              result[1] += -0.01667214;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.011753672;
            } else {
              result[1] += 0.16950895;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[1] += -0.023228956;
            } else {
              result[1] += 0.17082119;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[1] += 0.0447926;
            } else {
              result[1] += -0.002001245;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
              result[1] += 0.016762722;
            } else {
              result[1] += -0.08981095;
            }
          } else {
            result[1] += 0.20392963;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += -0.24133688;
            } else {
              result[1] += 0.023952369;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
              result[1] += 0.13826485;
            } else {
              result[1] += -0.059671745;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
              result[1] += -0.0027591074;
            } else {
              result[1] += -0.14609125;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += -0.019185577;
            } else {
              result[1] += 0.17291838;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += -0.041486207;
            } else {
              result[1] += 0.19222654;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
              result[1] += -0.21855474;
            } else {
              result[1] += -0.012698188;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
              result[1] += 0.24921079;
            } else {
              result[1] += -0.09937348;
            }
          } else {
            result[1] += 0.2626236;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[1] += 0.013116084;
            } else {
              result[1] += 0.06932083;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
              result[1] += -0.06766041;
            } else {
              result[1] += 0.08738107;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1195706368)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.0041710595;
            } else {
              result[1] += -0.10308192;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += 0.021481046;
            } else {
              result[1] += 0.08897198;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
              result[1] += -0.045026198;
            } else {
              result[1] += -0.14652787;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[1] += -0.05662537;
            } else {
              result[1] += 0.095003046;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          result[1] += -0.09351314;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            result[1] += 0.23092082;
          } else {
            result[1] += 0.014953292;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1278356224)) {
        result[1] += -0.21334177;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1325477248)) {
            result[1] += 0.017916385;
          } else {
            result[1] += 0.20068456;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += -0.120916344;
            } else {
              result[1] += 0.04710577;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += -0.13141415;
            } else {
              result[1] += 0.00807251;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)64235)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)63462)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)62485)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)50927)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50669)) {
              result[2] += 0.00081799715;
            } else {
              result[2] += 0.053748745;
            }
          } else {
            result[2] += -0.084865354;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)51715)) {
            result[2] += 0.112954736;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)54320)) {
              result[2] += -0.016219266;
            } else {
              result[2] += 0.008225961;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)62739)) {
            result[2] += -0.06630899;
          } else {
            result[2] += 0.041741528;
          }
        } else {
          result[2] += -0.072280206;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
          result[2] += 0.109761566;
        } else {
          result[2] += -0.01055858;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
          result[2] += -0.084526844;
        } else {
          result[2] += 0.098736525;
        }
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.022497136;
    } else {
      result[2] += 0.0067401184;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.015002446;
  } else {
    result[3] += 0.017734447;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[4] += 0.01129359;
        } else {
          result[4] += -0.023903988;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)25002)) {
          result[4] += 0.02920146;
        } else {
          result[4] += 0.00977483;
        }
      }
    } else {
      result[4] += -0.017233979;
    }
  } else {
    result[4] += 0.029433597;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51470)) {
              result[5] += -3.5908528e-05;
            } else {
              result[5] += 0.08035187;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[5] += 0.08281677;
            } else {
              result[5] += -0.094668336;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
            result[5] += 0.0019383532;
          } else {
            result[5] += 0.14622954;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          result[5] += -0.0892072;
        } else {
          result[5] += -0.0058293333;
        }
      }
    } else {
      result[5] += 0.09156172;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
        result[5] += -0.08468616;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
              result[5] += 0.0015832927;
            } else {
              result[5] += 0.03738832;
            }
          } else {
            result[5] += -0.077381894;
          }
        } else {
          result[5] += 0.05921194;
        }
      }
    } else {
      result[5] += -0.074561566;
    }
  }
  result[6] += -0.00018506432;
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[7] += 0.00039750498;
            } else {
              result[7] += 0.0577796;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
              result[7] += -0.009420458;
            } else {
              result[7] += -0.10601237;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2786661888)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[7] += 0.31919843;
            } else {
              result[7] += 0.09111567;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[7] += 0.025714727;
            } else {
              result[7] += -0.22899327;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[7] += -0.008218388;
            } else {
              result[7] += 0.102284715;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[7] += -0.04924278;
            } else {
              result[7] += -0.20889504;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2192098560)) {
              result[7] += -0.1509583;
            } else {
              result[7] += -0.38682887;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[7] += 0.13752529;
            } else {
              result[7] += -0.14989035;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[7] += -0.07564481;
            } else {
              result[7] += 0.050553676;
            }
          } else {
            result[7] += -0.3707313;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[7] += -0.07827068;
          } else {
            result[7] += 0.1331122;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[7] += 0.13425533;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[7] += 0.06325088;
            } else {
              result[7] += -0.13978592;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
              result[7] += 0.1341628;
            } else {
              result[7] += 0.036101144;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1924085632)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[7] += -0.042402573;
            } else {
              result[7] += -0.16946453;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[7] += 0.0010874575;
            } else {
              result[7] += 0.12631004;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2433490688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
              result[7] += -0.27869052;
            } else {
              result[7] += 0.080541015;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
              result[7] += -0.6076757;
            } else {
              result[7] += -0.18853931;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[7] += 0.042318884;
        } else {
          result[7] += 0.14359409;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
              result[7] += -0.0015995769;
            } else {
              result[7] += -0.039358735;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[7] += -0.06325589;
            } else {
              result[7] += 0.020148642;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
              result[7] += 0.020081278;
            } else {
              result[7] += -0.22959279;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
              result[7] += -0.042400427;
            } else {
              result[7] += 0.017055972;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2380567296)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2339238656)) {
              result[7] += 0.036629435;
            } else {
              result[7] += 0.118409984;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
              result[7] += -0.05026257;
            } else {
              result[7] += 0.073848344;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[7] += 0.15393642;
            } else {
              result[7] += 0.013734622;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52615)) {
              result[7] += -0.023916312;
            } else {
              result[7] += 0.0016956315;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[8] += -2.295374e-05;
            } else {
              result[8] += -0.09618417;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
              result[8] += 0.03897567;
            } else {
              result[8] += 0.1038762;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[8] += -0.0886105;
            } else {
              result[8] += 0.05318867;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.015149944;
            } else {
              result[8] += 0.07400988;
            }
          }
        }
      } else {
        result[8] += 0.097962625;
      }
    } else {
      result[8] += -0.09926879;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.12091484;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          result[8] += 0.0043498976;
        } else {
          result[8] += 0.069165125;
        }
      } else {
        result[8] += -0.013724549;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[9] += -0.00032489892;
          } else {
            result[9] += 0.0003336028;
          }
        } else {
          result[9] += -0.0004957461;
        }
      } else {
        result[9] += -0.022236563;
      }
    } else {
      result[9] += -0.10310436;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[9] += 0.0023815692;
            } else {
              result[9] += 0.06127865;
            }
          } else {
            result[9] += -0.099639624;
          }
        } else {
          result[9] += 0.09297;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[9] += 0.09557736;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
            result[9] += -0.019538525;
          } else {
            result[9] += -0.17279871;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
        result[9] += 0.10028209;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
            result[9] += 0.078284055;
          } else {
            result[9] += -0.13384281;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += -0.012530383;
            } else {
              result[9] += 0.10772937;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
              result[9] += -0.038661197;
            } else {
              result[9] += 0.016448203;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
              result[10] += -0.0006775113;
            } else {
              result[10] += 0.10484427;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
              result[10] += -0.05513243;
            } else {
              result[10] += 0.0033337125;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)34288)) {
            result[10] += -0.00027872468;
          } else {
            result[10] += 0.14671035;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
          result[10] += 0.039206102;
        } else {
          result[10] += -0.16481249;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
          result[10] += 0.0377314;
        } else {
          result[10] += 0.14007287;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[10] += -0.06907841;
            } else {
              result[10] += 0.010569463;
            }
          } else {
            result[10] += -0.17286867;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[10] += 0.020997573;
            } else {
              result[10] += 0.17031485;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[10] += -0.16520971;
            } else {
              result[10] += 0.010264528;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
              result[10] += 0.0039604255;
            } else {
              result[10] += -0.16267888;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43291)) {
              result[10] += 0.14616741;
            } else {
              result[10] += 0.01725486;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
              result[10] += -0.013868094;
            } else {
              result[10] += -0.07472063;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
              result[10] += 0.056792777;
            } else {
              result[10] += -0.004440161;
            }
          }
        }
      } else {
        result[10] += -0.11833581;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
          result[10] += 0.043034747;
        } else {
          result[10] += 0.11210451;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55060)) {
              result[10] += -0.0023891078;
            } else {
              result[10] += 0.076411575;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
              result[10] += -0.13597268;
            } else {
              result[10] += -0.002510366;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
            result[10] += 0.114250325;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
              result[10] += -0.14050975;
            } else {
              result[10] += 0.00849528;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += -0.0008064424;
            } else {
              result[11] += -0.04923158;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
              result[11] += 0.0734712;
            } else {
              result[11] += -0.029902453;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
              result[11] += -0.0033033176;
            } else {
              result[11] += 0.13033152;
            }
          } else {
            result[11] += 0.2621196;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
              result[11] += 0.011097949;
            } else {
              result[11] += -0.24076907;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
              result[11] += 0.18742041;
            } else {
              result[11] += -0.0032409534;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[11] += 0.13429213;
            } else {
              result[11] += -0.11879685;
            }
          } else {
            result[11] += -0.28305334;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
        result[11] += 0.21859093;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
              result[11] += -0.15691513;
            } else {
              result[11] += -0.036918048;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
              result[11] += -0.25927877;
            } else {
              result[11] += 0.013145123;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += 0.1282445;
            } else {
              result[11] += -0.02041374;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[11] += -0.21454868;
            } else {
              result[11] += 0.032634664;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
              result[11] += -0.17211229;
            } else {
              result[11] += -0.013455057;
            }
          } else {
            result[11] += 0.19401112;
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
              result[11] += 0.07775199;
            } else {
              result[11] += 0.17570153;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
              result[11] += 0.042194076;
            } else {
              result[11] += -0.19197488;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
              result[11] += 0.0027273775;
            } else {
              result[11] += -0.1219261;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39929)) {
              result[11] += 0.18867585;
            } else {
              result[11] += -0.008471384;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.12259647;
            } else {
              result[11] += -0.12211846;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
              result[11] += 0.032624744;
            } else {
              result[11] += 0.108317636;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
          result[11] += 0.20354454;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[11] += -0.058007617;
            } else {
              result[11] += 0.059006777;
            }
          } else {
            result[11] += -0.1629995;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += 0.042454734;
            } else {
              result[11] += -0.14770661;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
              result[11] += 0.2222487;
            } else {
              result[11] += 0.09455594;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[11] += -0.010750812;
            } else {
              result[11] += 0.13532618;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
              result[11] += 0.017835844;
            } else {
              result[11] += 0.00038457723;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
              result[12] += -4.5518054e-06;
            } else {
              result[12] += 0.038304746;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
              result[12] += -0.017208194;
            } else {
              result[12] += 0.011209845;
            }
          }
        } else {
          result[12] += -0.05916052;
        }
      } else {
        result[12] += -0.07920872;
      }
    } else {
      result[12] += 0.08938389;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[12] += 0.07891728;
          } else {
            result[12] += -0.046419106;
          }
        } else {
          result[12] += -0.07731113;
        }
      } else {
        result[12] += -0.09978272;
      }
    } else {
      result[12] += 0.025878781;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51039)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2192098560)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
              result[13] += -5.5717057e-05;
            } else {
              result[13] += -0.04968023;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52484)) {
              result[13] += 0.10088469;
            } else {
              result[13] += -0.101816416;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[13] += -0.07049697;
            } else {
              result[13] += 0.039536603;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35300)) {
              result[13] += -0.11011234;
            } else {
              result[13] += -0.02302907;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[13] += 0.15810895;
            } else {
              result[13] += 0.05016168;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.00023863201;
            } else {
              result[13] += -0.20290539;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
              result[13] += -0.0689493;
            } else {
              result[13] += 0.078033544;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
              result[13] += -0.00012642171;
            } else {
              result[13] += 0.043861132;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[13] += -0.08767226;
            } else {
              result[13] += 0.2097338;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[13] += -0.0593307;
            } else {
              result[13] += 0.025726993;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
            result[13] += 0.01718218;
          } else {
            result[13] += 0.2906328;
          }
        }
      } else {
        result[13] += -0.10529715;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
      result[13] += -0.076361135;
    } else {
      result[13] += -0.015911689;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
              result[14] += -0.0010876169;
            } else {
              result[14] += 0.0175148;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[14] += -0.016869582;
            } else {
              result[14] += 0.047532108;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
              result[14] += 0.010165513;
            } else {
              result[14] += 0.06273752;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[14] += -0.108204864;
            } else {
              result[14] += -6.720038e-05;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += -0.05034266;
            } else {
              result[14] += 0.04425066;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
              result[14] += 0.052595284;
            } else {
              result[14] += 0.20977035;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[14] += -0.09263846;
            } else {
              result[14] += 0.024925482;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.035812587;
            } else {
              result[14] += 0.18952034;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[14] += 0.06510367;
            } else {
              result[14] += -0.034591474;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
              result[14] += 0.03349251;
            } else {
              result[14] += 0.13223541;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[14] += -0.050222114;
            } else {
              result[14] += 0.11347945;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[14] += 0.15969609;
            } else {
              result[14] += 0.010358447;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[14] += -0.07096138;
            } else {
              result[14] += -0.13212217;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[14] += 0.06366042;
            } else {
              result[14] += -0.03084615;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.0018001272;
            } else {
              result[14] += 0.049136;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
              result[14] += -0.015454025;
            } else {
              result[14] += -0.1181899;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      result[14] += -0.088381186;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          result[14] += 0.027087625;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[14] += -0.09645243;
          } else {
            result[14] += 0.007164698;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
          result[14] += 0.07545463;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
            result[14] += -0.0039014649;
          } else {
            result[14] += -0.024742378;
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
              result[0] += -0.0005388547;
            } else {
              result[0] += 0.06659287;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
              result[0] += -0.12378683;
            } else {
              result[0] += -0.0050236;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
            result[0] += 0.1317515;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8737)) {
              result[0] += -0.022749823;
            } else {
              result[0] += 0.062165596;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
          result[0] += -0.058534376;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[0] += -4.836876e-05;
            } else {
              result[0] += 0.0017176687;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
              result[0] += -0.06294585;
            } else {
              result[0] += 0.00744977;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1205016832)) {
        result[0] += -0.11010724;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
          result[0] += 0.04054744;
        } else {
          result[0] += -0.042037178;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
      result[0] += 0.05592363;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[0] += -0.08714027;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
            result[0] += -0.0069355927;
          } else {
            result[0] += -0.08255834;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[0] += 0.010073552;
            } else {
              result[0] += 0.11947834;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[0] += -0.037471376;
            } else {
              result[0] += 0.003180382;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
              result[1] += -7.639507e-05;
            } else {
              result[1] += 0.034697954;
            }
          } else {
            result[1] += -0.1575686;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14362)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
              result[1] += 0.096512325;
            } else {
              result[1] += -0.1393578;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29160)) {
              result[1] += 0.14031562;
            } else {
              result[1] += 0.010410789;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
              result[1] += 0.10057169;
            } else {
              result[1] += -0.07230723;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[1] += 0.35423642;
            } else {
              result[1] += 0.064083986;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
            result[1] += -0.1564545;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[1] += 0.16963479;
            } else {
              result[1] += -0.10952666;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
              result[1] += 0.05163027;
            } else {
              result[1] += 0.35574976;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
              result[1] += -0.1223919;
            } else {
              result[1] += 0.12114274;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)370717824)) {
              result[1] += -0.0029681812;
            } else {
              result[1] += -0.13326116;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[1] += 0.16621903;
            } else {
              result[1] += -0.016308563;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[1] += -0.20276512;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
              result[1] += -0.12195059;
            } else {
              result[1] += 0.007062285;
            }
          }
        } else {
          result[1] += 0.002794908;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
              result[1] += -0.048634995;
            } else {
              result[1] += 0.37955567;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[1] += -0.13306788;
            } else {
              result[1] += -0.035758577;
            }
          }
        } else {
          result[1] += -0.12959172;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
            result[1] += 0.13784406;
          } else {
            result[1] += -0.05364269;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
            result[1] += -0.1948959;
          } else {
            result[1] += 0.08780156;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            result[1] += -0.13145532;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[1] += 0.07012173;
            } else {
              result[1] += -0.0940639;
            }
          }
        } else {
          result[1] += 0.035739183;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
            result[1] += -0.0921161;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[1] += 0.058553346;
            } else {
              result[1] += 0.34880492;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[1] += -0.095149346;
            } else {
              result[1] += 0.05015399;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
              result[1] += 0.17749809;
            } else {
              result[1] += 0.0030168018;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)51164)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)46341)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.001820141;
            } else {
              result[2] += 0.0046719075;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)46870)) {
              result[2] += 0.07244595;
            } else {
              result[2] += 0.016998561;
            }
          }
        } else {
          result[2] += -0.021212311;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)51984)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
            result[2] += 0.007867154;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)51715)) {
              result[2] += 0.107265584;
            } else {
              result[2] += 0.02675135;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)52770)) {
            result[2] += -0.04581221;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)53285)) {
              result[2] += 0.059560426;
            } else {
              result[2] += 0.00035594928;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          result[2] += -0.047039915;
        } else {
          result[2] += 0.002612612;
        }
      } else {
        result[2] += 0.005885315;
      }
    }
  } else {
    result[2] += 0.02837252;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += 0.0024460778;
    } else {
      result[3] += 0.018435698;
    }
  } else {
    result[3] += -0.022474911;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += -0.007076493;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        result[4] += 0.0059208386;
      } else {
        result[4] += 0.024275169;
      }
    } else {
      result[4] += -0.00771788;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
              result[5] += 0.00019520607;
            } else {
              result[5] += 0.07355657;
            }
          } else {
            result[5] += -0.09692774;
          }
        } else {
          result[5] += 0.13036439;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[5] += -0.08437124;
            } else {
              result[5] += 0.038932864;
            }
          } else {
            result[5] += 0.056545697;
          }
        } else {
          result[5] += -0.08269046;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[5] += -0.023223449;
        } else {
          result[5] += 0.16081381;
        }
      } else {
        result[5] += -0.054702688;
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
      result[5] += 0.016553825;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
        result[5] += -0.08529307;
      } else {
        result[5] += -0.020491192;
      }
    }
  }
  result[6] += -0.00014019261;
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
              result[7] += 0.0011666485;
            } else {
              result[7] += -0.002604112;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
              result[7] += -0.019388117;
            } else {
              result[7] += 0.014167817;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
              result[7] += -0.011851104;
            } else {
              result[7] += -0.24394815;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
              result[7] += 0.05750288;
            } else {
              result[7] += -0.03944715;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
              result[7] += 0.008379259;
            } else {
              result[7] += 0.10910677;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
              result[7] += -0.116138145;
            } else {
              result[7] += 0.0009831651;
            }
          }
        } else {
          result[7] += 0.12085579;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += 0.05898825;
            } else {
              result[7] += -0.09141808;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
              result[7] += 0.116979785;
            } else {
              result[7] += -0.046352502;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
            result[7] += 0.081094794;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[7] += -0.29586723;
            } else {
              result[7] += -0.05376748;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
              result[7] += 0.009249381;
            } else {
              result[7] += -0.02446865;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
              result[7] += 0.07366872;
            } else {
              result[7] += -0.002042614;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[7] += 0.07820282;
            } else {
              result[7] += -0.04018878;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[7] += -0.014833751;
            } else {
              result[7] += 0.13509259;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[7] += -0.100921616;
            } else {
              result[7] += 0.10237027;
            }
          } else {
            result[7] += 0.1787758;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
            result[7] += -0.12027498;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 0.09565525;
            } else {
              result[7] += -0.1007927;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[7] += -0.07587801;
            } else {
              result[7] += 0.09986328;
            }
          } else {
            result[7] += -0.19022535;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            result[7] += 0.12258765;
          } else {
            result[7] += -0.11166164;
          }
        }
      }
    } else {
      result[7] += 0.09185917;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)58671)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[8] += -3.463281e-05;
            } else {
              result[8] += 0.031409282;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
              result[8] += -0.023684153;
            } else {
              result[8] += 0.08069926;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[8] += 0.051256582;
            } else {
              result[8] += -0.039992955;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[8] += -0.005026524;
            } else {
              result[8] += 0.02385202;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[8] += -0.022265686;
            } else {
              result[8] += -0.115028255;
            }
          } else {
            result[8] += -0.15817657;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += 0.03940783;
            } else {
              result[8] += 0.2615737;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1943717504)) {
              result[8] += -0.11741594;
            } else {
              result[8] += -0.0028827863;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[8] += -0.022819672;
            } else {
              result[8] += -0.11059696;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56523)) {
              result[8] += -0.0042656707;
            } else {
              result[8] += 0.07239953;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
            result[8] += 0.054802734;
          } else {
            result[8] += -0.18445192;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
            result[8] += -0.10640945;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
              result[8] += 0.5898072;
            } else {
              result[8] += -0.007136602;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
            result[8] += -0.126929;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
              result[8] += 0.033858884;
            } else {
              result[8] += -0.059198692;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)53670)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
              result[8] += 0.014907954;
            } else {
              result[8] += -0.014659366;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1334709248)) {
              result[8] += 0.19834633;
            } else {
              result[8] += 0.023504755;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            result[8] += -0.1194702;
          } else {
            result[8] += 0.00016132623;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[8] += 0.068194;
            } else {
              result[8] += 0.008089822;
            }
          } else {
            result[8] += 0.32669646;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[8] += 0.048003636;
            } else {
              result[8] += 0.19930401;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[8] += -0.1101029;
            } else {
              result[8] += 0.016538054;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          result[8] += -0.10418675;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[8] += 0.2798866;
            } else {
              result[8] += 0.025561042;
            }
          } else {
            result[8] += -0.031344082;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
          result[8] += -0.13651352;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3151783168)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[8] += 0.013496424;
            } else {
              result[8] += 0.27287924;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[8] += -0.10931301;
            } else {
              result[8] += 0.06980905;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[9] += -0.00025736424;
            } else {
              result[9] += 0.0003248934;
            }
          } else {
            result[9] += -0.00042835294;
          }
        } else {
          result[9] += -0.10452067;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[9] += -0.033989742;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            result[9] += 0.10870161;
          } else {
            result[9] += -0.005603104;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
        result[9] += -0.11077554;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
          result[9] += -0.09672879;
        } else {
          result[9] += 0.05948;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
        result[9] += 0.11373868;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
          result[9] += 0.0068347724;
        } else {
          result[9] += -0.077351905;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[9] += -0.05819179;
            } else {
              result[9] += 0.007468943;
            }
          } else {
            result[9] += 0.09380909;
          }
        } else {
          result[9] += -0.146257;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
          result[9] += 0.11500021;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[9] += -0.011311036;
            } else {
              result[9] += 0.11451464;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
              result[9] += -0.07553619;
            } else {
              result[9] += 0.07129877;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[10] += -0.00015086944;
            } else {
              result[10] += 0.07187523;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[10] += 0.099117205;
            } else {
              result[10] += -0.09912551;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)39407)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
              result[10] += 0.10526739;
            } else {
              result[10] += -0.010148436;
            }
          } else {
            result[10] += 0.1149256;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
            result[10] += -0.01710003;
          } else {
            result[10] += -0.14441743;
          }
        } else {
          result[10] += 0.040105574;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[10] += 0.07907538;
            } else {
              result[10] += -0.14692444;
            }
          } else {
            result[10] += 0.14967449;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[10] += 0.10192879;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
              result[10] += -0.12074364;
            } else {
              result[10] += -0.0050544823;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2090231168)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.0381168;
            } else {
              result[10] += -0.16007674;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2722185728)) {
              result[10] += 0.06579333;
            } else {
              result[10] += -0.017157128;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
              result[10] += 0.0021451588;
            } else {
              result[10] += 0.096653186;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
              result[10] += -0.08457157;
            } else {
              result[10] += 0.0050303014;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.041790433;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.00022226745;
            } else {
              result[11] += 0.023958163;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33010)) {
              result[11] += 0.0384538;
            } else {
              result[11] += -0.0085027;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[11] += -0.004209644;
            } else {
              result[11] += -0.04835129;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += -0.22519065;
            } else {
              result[11] += 0.0093787005;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
            result[11] += 0.15879521;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += -0.051643763;
            } else {
              result[11] += -0.2793714;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.08630202;
            } else {
              result[11] += -0.119533874;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.0013770612;
            } else {
              result[11] += -0.15135048;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[11] += 0.04206775;
            } else {
              result[11] += -0.1808677;
            }
          } else {
            result[11] += 0.15552993;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[11] += -0.15574992;
            } else {
              result[11] += -0.02609726;
            }
          } else {
            result[11] += 0.09502028;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
              result[11] += -0.016725434;
            } else {
              result[11] += 0.06975596;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += -0.103262134;
            } else {
              result[11] += 0.025273604;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[11] += 0.19174589;
            } else {
              result[11] += 0.008598268;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
              result[11] += -0.049901832;
            } else {
              result[11] += 0.089246035;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2002613632)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.026192008;
            } else {
              result[11] += 0.14372799;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
              result[11] += 0.025116699;
            } else {
              result[11] += -0.14298351;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51470)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[11] += 0.07881074;
            } else {
              result[11] += 0.23184375;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[11] += -0.14299498;
            } else {
              result[11] += 0.02988631;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1924085632)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1885973376)) {
              result[11] += 0.2504134;
            } else {
              result[11] += -0.15897065;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += 0.29383916;
            } else {
              result[11] += 0.07983751;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2051944064)) {
              result[11] += 0.0030604496;
            } else {
              result[11] += 0.08162576;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
              result[11] += 0.10307274;
            } else {
              result[11] += -0.02705109;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += -0.16303691;
            } else {
              result[11] += -0.012722758;
            }
          } else {
            result[11] += 0.1929729;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += -0.03924015;
            } else {
              result[11] += 0.13944875;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
              result[11] += -0.1459914;
            } else {
              result[11] += 0.087707385;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += 0.0011772568;
            } else {
              result[11] += -0.008329621;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
              result[11] += -0.04638529;
            } else {
              result[11] += 0.0102813635;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2497760512)) {
              result[11] += 0.00022317834;
            } else {
              result[11] += 0.047370683;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[11] += -0.06895601;
            } else {
              result[11] += 0.0066972594;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
              result[12] += -0.00010247975;
            } else {
              result[12] += -0.088470586;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[12] += 0.031052997;
            } else {
              result[12] += -0.0064960322;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
              result[12] += -0.07393944;
            } else {
              result[12] += 0.04559359;
            }
          } else {
            result[12] += -0.15806891;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[12] += -0.012275903;
            } else {
              result[12] += 0.18767102;
            }
          } else {
            result[12] += 0.46357557;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
              result[12] += -0.0137863895;
            } else {
              result[12] += -0.12972364;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27096)) {
              result[12] += 0.12038953;
            } else {
              result[12] += 0.010998877;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1278356224)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
              result[12] += -0.037503295;
            } else {
              result[12] += 0.1179546;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += -0.13635412;
            } else {
              result[12] += 0.0019208372;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[12] += 0.013728202;
            } else {
              result[12] += 0.17350766;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += 0.0010651642;
            } else {
              result[12] += -0.09899022;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1353621248)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1334709248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1325477248)) {
              result[12] += 0.057451766;
            } else {
              result[12] += -0.103989206;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.08039996;
            } else {
              result[12] += 0.34762493;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[12] += -0.10375667;
            } else {
              result[12] += 0.020383624;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
              result[12] += 0.009635955;
            } else {
              result[12] += -0.0011044366;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[12] += -0.032097336;
    } else {
      result[12] += -0.007858533;
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)35552)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31746)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[13] += -0.0009263383;
            } else {
              result[13] += 0.10190729;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
              result[13] += -0.024927262;
            } else {
              result[13] += 0.10907424;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
              result[13] += 0.013928776;
            } else {
              result[13] += 0.10507896;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39148)) {
              result[13] += -0.09499891;
            } else {
              result[13] += 0.0005804559;
            }
          }
        }
      } else {
        result[13] += -0.07179268;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          result[13] += -0.13038428;
        } else {
          result[13] += 0.012561794;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[13] += -0.08820444;
            } else {
              result[13] += 0.056143392;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
              result[13] += 0.13379152;
            } else {
              result[13] += -0.049575754;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
            result[13] += -0.14306311;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
              result[13] += 0.09241833;
            } else {
              result[13] += -0.055380236;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
            result[13] += 0.008001282;
          } else {
            result[13] += 0.08195199;
          }
        } else {
          result[13] += -0.02830902;
        }
      } else {
        result[13] += 0.09306295;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
              result[13] += -0.02968418;
            } else {
              result[13] += 0.074644834;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
              result[13] += 0.021482492;
            } else {
              result[13] += -0.10103003;
            }
          }
        } else {
          result[13] += -0.10367382;
        }
      } else {
        result[13] += 0.090383425;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
              result[14] += -0.0006812974;
            } else {
              result[14] += 0.053461127;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[14] += -0.08072915;
            } else {
              result[14] += 0.0025423998;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[14] += 0.0064763227;
            } else {
              result[14] += 0.093989596;
            }
          } else {
            result[14] += -0.13669333;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22532)) {
              result[14] += -0.022891786;
            } else {
              result[14] += 0.20196544;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[14] += 0.023439428;
            } else {
              result[14] += -0.12570007;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
            result[14] += -0.1386686;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[14] += 0.032715105;
            } else {
              result[14] += -0.068203814;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
              result[14] += 0.026596064;
            } else {
              result[14] += -0.041364927;
            }
          } else {
            result[14] += -0.13727479;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
              result[14] += 0.17728269;
            } else {
              result[14] += 0.4978335;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
              result[14] += -0.09337086;
            } else {
              result[14] += 0.152762;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
              result[14] += -0.055591267;
            } else {
              result[14] += 0.10258031;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
              result[14] += -0.1243057;
            } else {
              result[14] += 0.047118306;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
              result[14] += 0.035731394;
            } else {
              result[14] += 0.33237636;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
              result[14] += -0.0957606;
            } else {
              result[14] += 0.057051677;
            }
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1432541440)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)841263296)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
              result[14] += -0.018598603;
            } else {
              result[14] += 0.042569045;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
              result[14] += 0.040537775;
            } else {
              result[14] += -0.051144067;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
            result[14] += -0.116828606;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
              result[14] += 0.47902438;
            } else {
              result[14] += -0.09638811;
            }
          }
        }
      } else {
        result[14] += -0.11762279;
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26842)) {
              result[14] += 0.0040003415;
            } else {
              result[14] += -0.11935424;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
              result[14] += 0.05611252;
            } else {
              result[14] += 0.2581419;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18445)) {
              result[14] += -0.016620629;
            } else {
              result[14] += 0.07043679;
            }
          } else {
            result[14] += -0.1339783;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
              result[14] += 0.023719141;
            } else {
              result[14] += -0.08011745;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
              result[14] += -0.14146434;
            } else {
              result[14] += -0.056085955;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
              result[14] += 0.1706399;
            } else {
              result[14] += 0.018663809;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[14] += 0.12364328;
            } else {
              result[14] += -0.010247779;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[0] += 0.00044475537;
            } else {
              result[0] += -0.046525348;
            }
          } else {
            result[0] += 0.04776967;
          }
        } else {
          result[0] += -0.09316802;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          result[0] += 0.00523526;
        } else {
          result[0] += 0.06492098;
        }
      }
    } else {
      result[0] += -0.08664159;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
      result[0] += -0.075707205;
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
          result[0] += 0.13102536;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
            result[0] += -0.0035730386;
          } else {
            result[0] += 0.060605414;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
            result[0] += -0.090811536;
          } else {
            result[0] += -0.013848996;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1613070592)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[0] += 0.020793272;
            } else {
              result[0] += -0.05381102;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[0] += 0.093966395;
            } else {
              result[0] += 0.023030218;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += -0.007945661;
            } else {
              result[1] += 0.050673284;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[1] += 0.015037203;
            } else {
              result[1] += -0.10392737;
            }
          }
        } else {
          result[1] += 0.16397317;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[1] += -0.13462575;
        } else {
          result[1] += -0.017621748;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
              result[1] += -0.00080098887;
            } else {
              result[1] += 0.17660823;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[1] += -0.17860211;
            } else {
              result[1] += 0.0021601352;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.31098825;
            } else {
              result[1] += 0.012983135;
            }
          } else {
            result[1] += -0.025680851;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -4.931735e-07;
            } else {
              result[1] += -0.02413248;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
              result[1] += -0.008632633;
            } else {
              result[1] += -0.0841658;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
              result[1] += 0.0144037595;
            } else {
              result[1] += -0.13918965;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
              result[1] += -0.10796606;
            } else {
              result[1] += 0.0010693327;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.07782396;
  }
}

