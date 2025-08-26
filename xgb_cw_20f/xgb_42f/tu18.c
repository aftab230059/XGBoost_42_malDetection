
#include "header.h"

void predict_unit18(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += -0.00032167396;
  } else {
    result[6] += -0.11207237;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)50927)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)40628)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
              result[7] += -0.00010665078;
            } else {
              result[7] += 0.04923405;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
              result[7] += -0.10068898;
            } else {
              result[7] += -0.0035346495;
            }
          }
        } else {
          result[7] += -0.11990418;
        }
      } else {
        result[7] += 0.1646055;
      }
    } else {
      result[7] += -0.1109763;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[7] += 0.024887985;
    } else {
      result[7] += 0.10828767;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)58671)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
              result[8] += 0.00065660186;
            } else {
              result[8] += -0.028174274;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
              result[8] += 0.0068128044;
            } else {
              result[8] += 0.06819206;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[8] += -0.011453118;
            } else {
              result[8] += 0.053665373;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1788612096)) {
              result[8] += -0.025830392;
            } else {
              result[8] += 0.13716795;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2371643392)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[8] += 0.029206479;
            } else {
              result[8] += -0.04975297;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
              result[8] += 0.037441894;
            } else {
              result[8] += 0.19786607;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += -0.058366958;
            } else {
              result[8] += -0.14506257;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
              result[8] += 0.122458376;
            } else {
              result[8] += 0.0025950407;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[8] += -0.14222883;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.09154265;
            } else {
              result[8] += -0.08687821;
            }
          } else {
            result[8] += -0.094260074;
          }
        } else {
          result[8] += -0.104498655;
        }
      }
    }
  } else {
    result[8] += -0.12044957;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += 0.00052954635;
            } else {
              result[9] += -0.045138024;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[9] += 0.08486611;
            } else {
              result[9] += -0.11200025;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
              result[9] += -0.019718166;
            } else {
              result[9] += -0.15120636;
            }
          } else {
            result[9] += 0.108930595;
          }
        }
      } else {
        result[9] += 0.098313004;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
          result[9] += -0.34739572;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[9] += -0.06034575;
            } else {
              result[9] += 0.121907085;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
              result[9] += -0.17522624;
            } else {
              result[9] += 0.046437863;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
            result[9] += -0.008835537;
          } else {
            result[9] += 0.1267947;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
            result[9] += -0.17419547;
          } else {
            result[9] += 0.11393696;
          }
        }
      }
    }
  } else {
    result[9] += -0.09586919;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4274137344)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3994002688)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
              result[10] += 0.0007854384;
            } else {
              result[10] += -0.04790476;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
              result[10] += 0.19419879;
            } else {
              result[10] += -0.10848234;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[10] += -0.15258832;
          } else {
            result[10] += -0.0076701124;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
            result[10] += -0.020077098;
          } else {
            result[10] += 0.1775726;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
            result[10] += -0.16761863;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[10] += 0.09149965;
            } else {
              result[10] += -0.024246579;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)32760)) {
        result[10] += 0.014076156;
      } else {
        result[10] += -0.10281607;
      }
    }
  } else {
    result[10] += -0.08982163;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[11] += -0.0116167255;
            } else {
              result[11] += 0.0007517469;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
              result[11] += 0.07840915;
            } else {
              result[11] += 0.0041668783;
            }
          }
        } else {
          result[11] += -0.14867045;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.14939706;
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
              result[11] += 0.046408962;
            } else {
              result[11] += -0.0031010285;
            }
          } else {
            result[11] += -0.15917622;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)33551)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)29679)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
            result[11] += 0.19494016;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.022542346;
            } else {
              result[11] += -0.14635143;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[11] += 0.228067;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[11] += 0.033756763;
            } else {
              result[11] += -0.03816076;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += -0.06496256;
            } else {
              result[11] += -0.35904276;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43534)) {
              result[11] += 0.21655653;
            } else {
              result[11] += -0.06809444;
            }
          }
        } else {
          result[11] += -0.45178583;
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)16917)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15116)) {
              result[11] += 0.041454732;
            } else {
              result[11] += 0.16910405;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3714417664)) {
              result[11] += -0.18431698;
            } else {
              result[11] += 0.066695325;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[11] += -0.15325406;
            } else {
              result[11] += -0.048635196;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[11] += -0.06250637;
            } else {
              result[11] += 0.10239187;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[11] += 0.19872865;
            } else {
              result[11] += -0.093683094;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
              result[11] += 0.15735097;
            } else {
              result[11] += 0.037971605;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
            result[11] += -0.19076873;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += -0.06702352;
            } else {
              result[11] += 0.12232324;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.0771133;
            } else {
              result[11] += 0.026749829;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += -0.0034326424;
            } else {
              result[11] += 0.017405113;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4100768768)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[11] += 0.013271853;
            } else {
              result[11] += 0.13545561;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46583)) {
              result[11] += -0.054679006;
            } else {
              result[11] += 0.21403714;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
              result[11] += 0.040143814;
            } else {
              result[11] += -0.17199312;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.14632645;
            } else {
              result[11] += -0.07787984;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
              result[11] += -0.11018869;
            } else {
              result[11] += -0.0251427;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[11] += -0.010458389;
            } else {
              result[11] += 0.10634995;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += 0.00045378273;
            } else {
              result[12] += 0.015947644;
            }
          } else {
            result[12] += -0.13155527;
          }
        } else {
          result[12] += -0.13166231;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[12] += 0.14000481;
            } else {
              result[12] += -0.023510607;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.07525468;
            } else {
              result[12] += -0.12488506;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += -0.13907889;
          } else {
            result[12] += 0.031040737;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            result[12] += 0.018733917;
          } else {
            result[12] += -0.13460626;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[12] += -0.0071281143;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.1213567;
            } else {
              result[12] += 0.01821959;
            }
          }
        }
      } else {
        result[12] += -0.14082536;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
      result[12] += -0.14293812;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[12] += -0.00890612;
            } else {
              result[12] += -0.111608036;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.0040253447;
            } else {
              result[12] += -0.13679345;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
              result[12] += 0.0012640951;
            } else {
              result[12] += 0.1418094;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[12] += -0.09467083;
            } else {
              result[12] += -0.0033114625;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[12] += 0.020939713;
            } else {
              result[12] += 0.17337719;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[12] += 0.08816616;
            } else {
              result[12] += -0.067577;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[12] += -0.07962829;
            } else {
              result[12] += 0.08014107;
            }
          } else {
            result[12] += -0.08981924;
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[13] += 0.0009146443;
            } else {
              result[13] += -0.11924491;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
              result[13] += 0.08911386;
            } else {
              result[13] += -0.07536897;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[13] += -0.13349871;
            } else {
              result[13] += 0.20544857;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
              result[13] += 0.15419626;
            } else {
              result[13] += 0.022484679;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
            result[13] += -0.0028960803;
          } else {
            result[13] += -0.15101244;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.009056192;
            } else {
              result[13] += 0.17872457;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[13] += -0.09530043;
            } else {
              result[13] += 0.04302098;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38113)) {
              result[13] += 0.12109586;
            } else {
              result[13] += -0.04452449;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[13] += 0.5747784;
            } else {
              result[13] += 0.11058362;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            result[13] += 0.15786254;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[13] += -0.11148446;
            } else {
              result[13] += 0.0874531;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
          result[13] += 0.0031008665;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            result[13] += -0.22158195;
          } else {
            result[13] += -0.06749646;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)16917)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
              result[13] += 0.024790425;
            } else {
              result[13] += -0.0834389;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.018252218;
            } else {
              result[13] += 0.20303918;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
              result[13] += 0.021043567;
            } else {
              result[13] += 0.21271998;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[13] += -0.04209042;
            } else {
              result[13] += 0.009443706;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[13] += 0.099320315;
          } else {
            result[13] += -0.072707705;
          }
        } else {
          result[13] += 0.11039008;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
              result[13] += -0.020812232;
            } else {
              result[13] += 0.2794663;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
              result[13] += -0.13571857;
            } else {
              result[13] += 0.005072126;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
              result[13] += -0.15247825;
            } else {
              result[13] += -0.026622728;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[13] += 0.1812571;
            } else {
              result[13] += -0.008443587;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[13] += -0.058814045;
            } else {
              result[13] += -0.13755363;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49509)) {
              result[13] += 0.18420343;
            } else {
              result[13] += -0.09506024;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[13] += -0.023927266;
            } else {
              result[13] += 0.08928125;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[13] += -0.046000563;
            } else {
              result[13] += 0.0026345602;
            }
          }
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
              result[14] += -0.0028298101;
            } else {
              result[14] += 0.017112356;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
              result[14] += 0.21116233;
            } else {
              result[14] += -0.054224245;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)215123600)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
              result[14] += 0.014594097;
            } else {
              result[14] += 0.1815977;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
              result[14] += 0.020685283;
            } else {
              result[14] += -0.057327785;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6165)) {
            result[14] += -0.14553688;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13590)) {
              result[14] += 0.028404461;
            } else {
              result[14] += -0.040072683;
            }
          }
        } else {
          result[14] += 0.13222289;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
              result[14] += 0.0034135177;
            } else {
              result[14] += 0.039432667;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
              result[14] += -0.040891994;
            } else {
              result[14] += -0.19804989;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[14] += -0.10793141;
            } else {
              result[14] += 0.058329895;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[14] += 0.18829542;
            } else {
              result[14] += -0.14181206;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
              result[14] += 0.27506754;
            } else {
              result[14] += 0.035065237;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[14] += -0.018276716;
            } else {
              result[14] += -0.07112484;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
              result[14] += 0.02864811;
            } else {
              result[14] += -0.00016101578;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
              result[14] += -0.11194277;
            } else {
              result[14] += 0.05929855;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[14] += -0.13577706;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[14] += 0.06287393;
        } else {
          result[14] += -0.06502077;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
        result[14] += 0.13538544;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)277)) {
            result[14] += -0.120203145;
          } else {
            result[14] += 0.04311158;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
              result[14] += 0.13731971;
            } else {
              result[14] += 0.028252304;
            }
          } else {
            result[14] += -0.05280624;
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[0] += -0.00047743073;
            } else {
              result[0] += 0.0032253908;
            }
          } else {
            result[0] += -0.1417243;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8983)) {
              result[0] += 0.002951658;
            } else {
              result[0] += -0.07437535;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[0] += 0.0956133;
            } else {
              result[0] += 0.0066969343;
            }
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += -0.10945377;
        } else {
          result[0] += 0.008479958;
        }
      }
    } else {
      result[0] += 0.12159119;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      result[0] += -0.022083212;
    } else {
      result[0] += -0.089514025;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
              result[1] += -0.0059335674;
            } else {
              result[1] += -0.073328346;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
              result[1] += 0.10002708;
            } else {
              result[1] += -0.028893553;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.043475676;
            } else {
              result[1] += 0.12553458;
            }
          } else {
            result[1] += -0.1656293;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += -0.082131386;
            } else {
              result[1] += -0.21655123;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
              result[1] += 0.054582737;
            } else {
              result[1] += -0.11944131;
            }
          }
        } else {
          result[1] += 0.10297466;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[1] += 0.0054769474;
            } else {
              result[1] += 0.2527567;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3456480256)) {
              result[1] += 0.03706989;
            } else {
              result[1] += -0.19083378;
            }
          }
        } else {
          result[1] += -0.15048228;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
              result[1] += 0.026597954;
            } else {
              result[1] += 0.20671532;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
              result[1] += 0.14286618;
            } else {
              result[1] += -0.00084043865;
            }
          }
        } else {
          result[1] += -0.11736938;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1143537664)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.038766813;
            } else {
              result[1] += -0.103939585;
            }
          } else {
            result[1] += 0.18389937;
          }
        } else {
          result[1] += 0.31952316;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += -0.10878586;
            } else {
              result[1] += 0.071879715;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
              result[1] += -0.023707053;
            } else {
              result[1] += 0.14574188;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2372315392)) {
              result[1] += 0.00025912328;
            } else {
              result[1] += 0.23710863;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
              result[1] += -0.117242634;
            } else {
              result[1] += 0.08256004;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
              result[1] += -0.023832653;
            } else {
              result[1] += 0.048675295;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
              result[1] += 0.14059567;
            } else {
              result[1] += -0.054077666;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3544269056)) {
              result[1] += 0.014514223;
            } else {
              result[1] += -0.040173747;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12831)) {
              result[1] += -0.015857613;
            } else {
              result[1] += 5.718724e-06;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
              result[1] += 0.09325783;
            } else {
              result[1] += 0.22454786;
            }
          } else {
            result[1] += -0.110897265;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1613070592)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[1] += 0.0027573598;
            } else {
              result[1] += -0.07024265;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[1] += 0.041014258;
            } else {
              result[1] += -0.0047884164;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)36088)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)35330)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)33837)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)33285)) {
              result[2] += 0.0012637675;
            } else {
              result[2] += -0.12669645;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.08158666;
            } else {
              result[2] += -0.046299767;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)35553)) {
            result[2] += -0.14350367;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)35823)) {
              result[2] += 0.045591306;
            } else {
              result[2] += -0.039198395;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)36623)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)36349)) {
            result[2] += 0.15048096;
          } else {
            result[2] += 0.045516614;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)37102)) {
            result[2] += -0.12331385;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)37885)) {
              result[2] += 0.054288235;
            } else {
              result[2] += -0.000645315;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            result[2] += 0.008941809;
          } else {
            result[2] += 0.0864366;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[2] += 0.014584932;
            } else {
              result[2] += -0.018693581;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[2] += 0.09230633;
            } else {
              result[2] += -0.012638214;
            }
          }
        }
      } else {
        result[2] += 0.07911107;
      }
    }
  } else {
    result[2] += -0.10895331;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[3] += -0.11556243;
      } else {
        result[3] += -0.0026734602;
      }
    } else {
      result[3] += 0.0137177305;
    }
  } else {
    result[3] += 0.033713765;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.022250654;
        } else {
          result[4] += 0.00015510108;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[4] += 0.048982512;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
              result[4] += -0.01914997;
            } else {
              result[4] += 0.045820028;
            }
          }
        } else {
          result[4] += -0.007107672;
        }
      }
    } else {
      result[4] += 0.094758414;
    }
  } else {
    result[4] += -0.10946403;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            result[5] += -0.012565052;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
              result[5] += 0.017996624;
            } else {
              result[5] += -0.022068085;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[5] += -0.002170276;
          } else {
            result[5] += -0.00089017797;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1556)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += 0.04556173;
          } else {
            result[5] += -0.0023947943;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
            result[5] += -0.029910501;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)2057)) {
              result[5] += 0.0572141;
            } else {
              result[5] += 0.0046341503;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        result[5] += -0.13367216;
      } else {
        result[5] += -0.03503962;
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
            result[5] += -0.096345074;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)802443328)) {
              result[5] += 0.21469639;
            } else {
              result[5] += 0.042873632;
            }
          }
        } else {
          result[5] += -0.1207477;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          result[5] += 0.041522153;
        } else {
          result[5] += 0.31474212;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
          result[5] += 0.09355334;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[5] += -0.023946766;
            } else {
              result[5] += -0.12788156;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[5] += -0.080918975;
            } else {
              result[5] += 0.18332851;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[5] += 0.31771365;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1205016832)) {
              result[5] += 0.13587382;
            } else {
              result[5] += -0.11263164;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
              result[5] += -0.0038940231;
            } else {
              result[5] += -0.107299246;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[5] += -0.015102699;
            } else {
              result[5] += 0.0584251;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += -0.00029516206;
  } else {
    result[6] += -0.108750045;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)52230)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[7] += -0.0005656141;
            } else {
              result[7] += 0.14810388;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[7] += -0.14274731;
            } else {
              result[7] += 0.00087390066;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[7] += 0.03540734;
            } else {
              result[7] += -0.06327132;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[7] += 0.076740146;
            } else {
              result[7] += -0.4350692;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
              result[7] += 0.009543942;
            } else {
              result[7] += -0.045026526;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61197)) {
              result[7] += -0.011116435;
            } else {
              result[7] += -0.21126796;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
              result[7] += 0.14033017;
            } else {
              result[7] += 0.039712783;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50613)) {
              result[7] += 0.06874407;
            } else {
              result[7] += 0.009490147;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
            result[7] += -0.062006358;
          } else {
            result[7] += 0.14455089;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
              result[7] += -0.008202443;
            } else {
              result[7] += -0.14667812;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[7] += 0.078055926;
            } else {
              result[7] += -0.011448156;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54797)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1963317504)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
              result[7] += -0.10631219;
            } else {
              result[7] += 0.11533307;
            }
          } else {
            result[7] += -0.34771043;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
              result[7] += -0.08076165;
            } else {
              result[7] += 0.01773447;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
              result[7] += -0.096340366;
            } else {
              result[7] += 0.01214424;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)39148)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36306)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34542)) {
              result[7] += 0.005606155;
            } else {
              result[7] += 0.07040617;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
              result[7] += 0.097679175;
            } else {
              result[7] += -0.05939024;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            result[7] += 0.14866832;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
              result[7] += -0.17854354;
            } else {
              result[7] += 0.06734019;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)43291)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[7] += 0.027854994;
            } else {
              result[7] += -0.15512991;
            }
          } else {
            result[7] += -0.21240962;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)526637856)) {
              result[7] += 0.016441628;
            } else {
              result[7] += -0.07229883;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1149980416)) {
              result[7] += 0.08448458;
            } else {
              result[7] += 0.0034173476;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[7] += 0.13288967;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[7] += -0.05316964;
        } else {
          result[7] += 0.077403985;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[8] += -0.020783566;
            } else {
              result[8] += 0.009347942;
            }
          } else {
            result[8] += -0.11728338;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[8] += 0.0008061653;
            } else {
              result[8] += 0.049610917;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[8] += -0.011639385;
            } else {
              result[8] += 0.009087263;
            }
          }
        }
      } else {
        result[8] += -0.12670825;
      }
    } else {
      result[8] += 0.1209571;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
      result[8] += -0.14027889;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[8] += 0.0675615;
            } else {
              result[8] += -0.09948184;
            }
          } else {
            result[8] += 0.12374888;
          }
        } else {
          result[8] += -0.1386806;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[8] += -0.10992849;
            } else {
              result[8] += 0.03580691;
            }
          } else {
            result[8] += -0.1876327;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[8] += -0.07254573;
            } else {
              result[8] += 0.09354563;
            }
          } else {
            result[8] += -0.08312964;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[9] += 0.0010048274;
            } else {
              result[9] += -0.0021105953;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
              result[9] += 0.116296574;
            } else {
              result[9] += -0.03558635;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[9] += -0.036726147;
            } else {
              result[9] += -0.2121366;
            }
          } else {
            result[9] += 0.075468235;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[9] += -0.07591581;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
            result[9] += 0.122720115;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[9] += -0.048400223;
            } else {
              result[9] += 0.09594448;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[9] += -0.03512288;
        } else {
          result[9] += -0.120299906;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1632386176)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[9] += 0.097843684;
            } else {
              result[9] += -0.012722687;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += -0.23936711;
            } else {
              result[9] += 0.094279386;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += -0.074912235;
            } else {
              result[9] += 0.01831443;
            }
          } else {
            result[9] += 0.12510367;
          }
        }
      }
    }
  } else {
    result[9] += -0.09243235;
  }
  if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[10] += 0.0014362414;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[10] += -0.0020599426;
          } else {
            result[10] += -0.0016905145;
          }
        }
      } else {
        result[10] += -0.13896067;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
          result[10] += 0.12347349;
        } else {
          result[10] += -0.015078321;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += 0.012360986;
            } else {
              result[10] += -0.045839876;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.18481997;
            } else {
              result[10] += -0.006184585;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
              result[10] += 0.058244977;
            } else {
              result[10] += -0.00071472867;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)13080)) {
              result[10] += -0.15277047;
            } else {
              result[10] += 0.0026434492;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.08684934;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.00062576134;
            } else {
              result[11] += -0.0069739437;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[11] += 0.002861162;
            } else {
              result[11] += -0.083742514;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
              result[11] += 0.048186395;
            } else {
              result[11] += 0.19355434;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.048562;
            } else {
              result[11] += -0.10595467;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2361869312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.016154887;
            } else {
              result[11] += 0.030238846;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
              result[11] += -0.036563817;
            } else {
              result[11] += -0.14753738;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
              result[11] += 0.2745395;
            } else {
              result[11] += -0.011254696;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[11] += -0.011998256;
            } else {
              result[11] += 0.04557261;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4251954944)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.0025963236;
            } else {
              result[11] += 0.09393576;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1072968960)) {
              result[11] += -0.1520306;
            } else {
              result[11] += -0.022245113;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
              result[11] += 0.0011118546;
            } else {
              result[11] += 0.10707891;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
              result[11] += -0.025234284;
            } else {
              result[11] += 0.036036737;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          result[11] += 0.15902518;
        } else {
          result[11] += -0.00045757848;
        }
      }
    }
  } else {
    result[11] += -0.106346734;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[12] += -0.00960753;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[12] += -0.05694877;
        } else {
          result[12] += -0.017244002;
        }
      }
    } else {
      result[12] += -0.10730326;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)6937)) {
              result[12] += 0.005035157;
            } else {
              result[12] += -0.059390493;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1690263552)) {
              result[12] += -0.014839643;
            } else {
              result[12] += 0.12016224;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[12] += -0.036226857;
            } else {
              result[12] += 0.09884179;
            }
          } else {
            result[12] += -0.13958044;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[12] += 0.070859715;
            } else {
              result[12] += -0.004928763;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
              result[12] += -0.005230187;
            } else {
              result[12] += -0.1166998;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)390465472)) {
            result[12] += 0.35224897;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
              result[12] += 0.04592534;
            } else {
              result[12] += -0.013972688;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)11301)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
              result[12] += -0.022098795;
            } else {
              result[12] += 0.123086;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[12] += -0.09978155;
            } else {
              result[12] += 0.00033361424;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2454180352)) {
              result[12] += 0.20898409;
            } else {
              result[12] += 0.008322272;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
              result[12] += 0.13209642;
            } else {
              result[12] += -0.059964344;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[12] += 0.14666644;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[12] += -0.052283168;
            } else {
              result[12] += 0.109865405;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[12] += -0.0026841853;
            } else {
              result[12] += 0.02262043;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
              result[12] += 0.055935003;
            } else {
              result[12] += 0.0036611417;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
              result[13] += 0.0011556263;
            } else {
              result[13] += -0.034025438;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[13] += 0.044294883;
            } else {
              result[13] += -0.074827865;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.08346934;
            } else {
              result[13] += -0.14234287;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.34718108;
            } else {
              result[13] += 0.080954805;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.01809307;
            } else {
              result[13] += -0.1226724;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
              result[13] += 0.0018640659;
            } else {
              result[13] += -0.120360605;
            }
          }
        } else {
          result[13] += -0.14383891;
        }
      }
    } else {
      result[13] += -0.102992326;
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
      result[13] += -0.108344495;
    } else {
      result[13] += -0.0064600566;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[14] += 0.0001617863;
            } else {
              result[14] += -0.09710818;
            }
          } else {
            result[14] += -0.1292638;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.14644656;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.09778759;
            } else {
              result[14] += 0.12163588;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6686)) {
            result[14] += 0.011517568;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[14] += -0.13824405;
            } else {
              result[14] += -0.039206106;
            }
          }
        } else {
          result[14] += 0.010405588;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
              result[14] += 0.12472632;
            } else {
              result[14] += -0.05272013;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.18016134;
            } else {
              result[14] += 0.08086174;
            }
          }
        } else {
          result[14] += -0.113673694;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62221)) {
              result[14] += 0.0024191928;
            } else {
              result[14] += -0.13971795;
            }
          } else {
            result[14] += 0.108944476;
          }
        } else {
          result[14] += 0.09468029;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      result[14] += -0.13480835;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.10567203;
            } else {
              result[14] += -0.027466903;
            }
          } else {
            result[14] += 0.1631035;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
            result[14] += -0.1574969;
          } else {
            result[14] += 0.09255018;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
          result[14] += -0.12577271;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
            result[14] += 0.16093905;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.07696298;
            } else {
              result[14] += 0.03608787;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)3779156992)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2700765696)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[0] += -0.0004735266;
            } else {
              result[0] += 0.0025085364;
            }
          } else {
            result[0] += -0.14048307;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += 0.0043933885;
            } else {
              result[0] += 0.07663259;
            }
          } else {
            result[0] += -0.07309748;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[0] += -0.10484236;
        } else {
          result[0] += 0.0077909497;
        }
      }
    } else {
      result[0] += 0.11435582;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      result[0] += -0.02050576;
    } else {
      result[0] += -0.08621324;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[1] += -0.00031850662;
            } else {
              result[1] += 0.02244214;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[1] += -0.1261446;
            } else {
              result[1] += -0.00047030472;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
            result[1] += -0.14476228;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[1] += 0.12974554;
            } else {
              result[1] += -0.040398166;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += 0.011742427;
            } else {
              result[1] += -0.086480394;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
              result[1] += 0.041830268;
            } else {
              result[1] += 0.19565837;
            }
          }
        } else {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
              result[1] += -0.094173044;
            } else {
              result[1] += 0.044054925;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[1] += -0.13612357;
            } else {
              result[1] += 0.08035772;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[1] += -0.13801609;
          } else {
            result[1] += 0.021938754;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.08190102;
            } else {
              result[1] += -0.00054238865;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
              result[1] += 0.19232385;
            } else {
              result[1] += -0.020769043;
            }
          }
        }
      } else {
        result[1] += 0.08637088;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[1] += -0.140051;
      } else {
        result[1] += 0.11813572;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
            result[1] += 0.08094002;
          } else {
            result[1] += -0.12867919;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[1] += 0.13042167;
          } else {
            result[1] += -0.0022187529;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          result[1] += -0.13560784;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            result[1] += 0.08664334;
          } else {
            result[1] += -0.037404396;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)41676)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)41154)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)40628)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)37885)) {
              result[2] += 0.0025515426;
            } else {
              result[2] += -0.026594289;
            }
          } else {
            result[2] += 0.04980486;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)41406)) {
            result[2] += -0.1485553;
          } else {
            result[2] += -0.00028369686;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)41951)) {
          result[2] += 0.122869395;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)42212)) {
            result[2] += -0.070459485;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)46100)) {
              result[2] += 0.021719633;
            } else {
              result[2] += -0.0008105155;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[2] += 0.07844638;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += -0.0046411837;
            } else {
              result[2] += 0.053627577;
            }
          } else {
            result[2] += -0.0379235;
          }
        } else {
          result[2] += 0.07812779;
        }
      }
    }
  } else {
    result[2] += -0.10549355;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.10763644;
    } else {
      result[3] += -0.002507816;
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[3] += -0.019049574;
    } else {
      result[3] += 0.037986793;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.020240769;
        } else {
          result[4] += 3.831785e-05;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21042)) {
            result[4] += 0.018508902;
          } else {
            result[4] += 0.055899885;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            result[4] += -0.07103338;
          } else {
            result[4] += 0.03245075;
          }
        }
      }
    } else {
      result[4] += 0.09117833;
    }
  } else {
    result[4] += -0.10601406;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
              result[5] += 0.0013933369;
            } else {
              result[5] += -0.07855553;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[5] += 0.034621358;
            } else {
              result[5] += 0.27687657;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[5] += -0.12365794;
            } else {
              result[5] += 0.049704693;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[5] += -0.1328281;
            } else {
              result[5] += -0.03046851;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27865)) {
            result[5] += -0.12590085;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[5] += 0.21005538;
            } else {
              result[5] += -0.0074535054;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
              result[5] += 0.3742375;
            } else {
              result[5] += -0.04433673;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[5] += -0.07269397;
            } else {
              result[5] += 0.09765443;
            }
          }
        }
      }
    } else {
      result[5] += 0.20586416;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
      result[5] += -0.11893766;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[5] += -0.010818458;
            } else {
              result[5] += 0.28847966;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
              result[5] += 0.064765796;
            } else {
              result[5] += -0.099635154;
            }
          }
        } else {
          result[5] += 0.31016243;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[5] += -0.12949866;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            result[5] += 0.09417244;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
              result[5] += -0.0055522174;
            } else {
              result[5] += -0.10794411;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += -0.00032222277;
  } else {
    result[6] += -0.105286576;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += 6.6464476e-05;
            } else {
              result[7] += -0.09400295;
            }
          } else {
            result[7] += -0.11844884;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
            result[7] += 0.124935254;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += -0.17571044;
            } else {
              result[7] += 0.06638766;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
          result[7] += -0.13483633;
        } else {
          result[7] += 0.06199563;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        result[7] += -0.12203853;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1132690944)) {
          result[7] += -0.088510334;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
              result[7] += 0.0281915;
            } else {
              result[7] += 0.13669051;
            }
          } else {
            result[7] += -0.07440748;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2361869312)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[7] += -0.09702262;
        } else {
          result[7] += -0.012682804;
        }
      } else {
        result[7] += 0.069209084;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
          result[7] += 0.04083304;
        } else {
          result[7] += 0.19077191;
        }
      } else {
        result[7] += 0.0014020714;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 9.790088e-05;
            } else {
              result[8] += -0.07514128;
            }
          } else {
            result[8] += -0.14356232;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[8] += 0.1413729;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[8] += 0.03861715;
            } else {
              result[8] += -0.08304288;
            }
          }
        }
      } else {
        result[8] += -0.15783569;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[8] += -0.08612218;
            } else {
              result[8] += 0.14062876;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[8] += -0.008621279;
            } else {
              result[8] += 0.1486849;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49955)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += 0.015145947;
            } else {
              result[8] += -0.028914915;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[8] += 0.072408125;
            } else {
              result[8] += 0.004015848;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[8] += -0.14639372;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[8] += 0.14510103;
            } else {
              result[8] += 0.027821055;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[8] += -0.12767738;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[8] += 0.015654434;
            } else {
              result[8] += 0.0725173;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.14075145;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
              result[8] += -0.007957513;
            } else {
              result[8] += 0.11540559;
            }
          } else {
            result[8] += -0.08285491;
          }
        } else {
          result[8] += -0.08798113;
        }
      } else {
        result[8] += -0.10074535;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.00039610712;
            } else {
              result[9] += -0.020883854;
            }
          } else {
            result[9] += 0.08658602;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1223297280)) {
              result[9] += 0.0010180132;
            } else {
              result[9] += -0.24046725;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
              result[9] += -0.056427944;
            } else {
              result[9] += 0.1066539;
            }
          }
        }
      } else {
        result[9] += 0.08192971;
      }
    } else {
      result[9] += -0.07659817;
    }
  } else {
    result[9] += -0.08900691;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1168160128)) {
              result[10] += 0.00043485718;
            } else {
              result[10] += 0.17427504;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
              result[10] += -0.058920313;
            } else {
              result[10] += 0.032807864;
            }
          }
        } else {
          result[10] += 0.15426187;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1866412672)) {
              result[10] += -0.0135214925;
            } else {
              result[10] += -0.16897447;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
              result[10] += -0.0041129845;
            } else {
              result[10] += 0.1578206;
            }
          }
        } else {
          result[10] += -0.2115164;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[10] += -0.01157939;
        } else {
          result[10] += -0.1596233;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
              result[10] += 0.1485495;
            } else {
              result[10] += -0.18510576;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
              result[10] += 0.009072588;
            } else {
              result[10] += 0.14003326;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.12676999;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
              result[10] += 0.05677587;
            } else {
              result[10] += -0.0005053694;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.084708646;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
              result[11] += -0.0015427296;
            } else {
              result[11] += 0.0011278262;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[11] += 0.08311493;
            } else {
              result[11] += -0.06390399;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            result[11] += -0.16058527;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[11] += -0.07710723;
            } else {
              result[11] += 0.06445395;
            }
          }
        }
      } else {
        result[11] += -0.10407075;
      }
    } else {
      result[11] += -0.1046991;
    }
  } else {
    result[11] += -0.10899667;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.0023920583;
            } else {
              result[12] += 0.0041669216;
            }
          } else {
            result[12] += -0.12916102;
          }
        } else {
          result[12] += -0.12921491;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[12] += 0.13592777;
            } else {
              result[12] += -0.019813914;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[12] += 0.068387724;
            } else {
              result[12] += -0.11976651;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += -0.1334448;
          } else {
            result[12] += 0.023826545;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            result[12] += 0.015867949;
          } else {
            result[12] += -0.13114946;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[12] += -0.009606973;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.11804152;
            } else {
              result[12] += 0.018541295;
            }
          }
        }
      } else {
        result[12] += -0.13858116;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[12] += -0.14278619;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
            result[12] += -0.10138168;
          } else {
            result[12] += 0.04432169;
          }
        }
      } else {
        result[12] += 0.028244333;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)44552)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
              result[12] += 0.077710986;
            } else {
              result[12] += 0.28030056;
            }
          } else {
            result[12] += -0.030254895;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
              result[12] += -0.20493741;
            } else {
              result[12] += 0.06941905;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[12] += -0.03119359;
            } else {
              result[12] += 0.107494585;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
              result[12] += -0.11124044;
            } else {
              result[12] += 0.0232699;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[12] += 0.0017763689;
            } else {
              result[12] += -0.12929322;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[12] += 0.016016982;
            } else {
              result[12] += -0.010739355;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
              result[12] += 0.0063414504;
            } else {
              result[12] += -0.01747507;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3065045248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
              result[13] += 0.0014943558;
            } else {
              result[13] += 0.058678024;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
              result[13] += -0.022020087;
            } else {
              result[13] += 0.0019806349;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[13] += -0.06681252;
          } else {
            result[13] += 0.026437089;
          }
        }
      } else {
        result[13] += -0.09452725;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[13] += -0.14020327;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2109833344)) {
            result[13] += 0.017631864;
          } else {
            result[13] += -0.03948336;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
              result[13] += 0.158213;
            } else {
              result[13] += 0.068483636;
            }
          } else {
            result[13] += 0.005909476;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61450)) {
              result[13] += -0.08797145;
            } else {
              result[13] += 0.061447848;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.093805455;
            } else {
              result[13] += -0.07858626;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
          result[13] += 0.11580318;
        } else {
          result[13] += -0.08225687;
        }
      } else {
        result[13] += 0.14205985;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
            result[13] += 0.06842014;
          } else {
            result[13] += -0.068222836;
          }
        } else {
          result[13] += 0.104179576;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            result[13] += 0.056867518;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1159214080)) {
              result[13] += -0.15755162;
            } else {
              result[13] += -0.004850986;
            }
          }
        } else {
          result[13] += 0.08023897;
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
              result[14] += 0.004682579;
            } else {
              result[14] += -0.0008091363;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[14] += -0.024721336;
            } else {
              result[14] += -0.0076704337;
            }
          }
        } else {
          result[14] += -0.106577605;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
            result[14] += -0.13368164;
          } else {
            result[14] += -0.016897444;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[14] += 0.18340158;
            } else {
              result[14] += 0.017196344;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
              result[14] += -0.05899657;
            } else {
              result[14] += 0.07695345;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
              result[14] += -0.006404234;
            } else {
              result[14] += 0.2814179;
            }
          } else {
            result[14] += -0.10961412;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
              result[14] += -0.028560942;
            } else {
              result[14] += -0.122551754;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[14] += 0.22439541;
            } else {
              result[14] += -0.084838785;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
              result[14] += 0.12795657;
            } else {
              result[14] += -0.009125302;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
              result[14] += 0.3854321;
            } else {
              result[14] += 0.1232129;
            }
          }
        } else {
          result[14] += -0.123496205;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1177192448)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
              result[14] += -0.0065761083;
            } else {
              result[14] += -0.115866266;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
              result[14] += -0.0885468;
            } else {
              result[14] += 0.27460212;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)62985)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += -0.016273197;
            } else {
              result[14] += 0.22983788;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[14] += -0.07250961;
            } else {
              result[14] += 0.09397537;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[14] += 0.066000976;
            } else {
              result[14] += -0.029214608;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3757889792)) {
              result[14] += 0.006915005;
            } else {
              result[14] += 0.29969564;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            result[14] += -0.14007276;
          } else {
            result[14] += -0.001241175;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
            result[14] += 0.105396405;
          } else {
            result[14] += -0.02002347;
          }
        } else {
          result[14] += -0.091675825;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[14] += 0.021670274;
            } else {
              result[14] += -0.042299464;
            }
          } else {
            result[14] += 0.062335014;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            result[14] += 0.28641403;
          } else {
            result[14] += 0.010884922;
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1353621248)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
              result[0] += 0.00042298596;
            } else {
              result[0] += 0.10680723;
            }
          } else {
            result[0] += -0.100606434;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
              result[0] += -0.053966865;
            } else {
              result[0] += 0.07443443;
            }
          } else {
            result[0] += 0.15634808;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1159214080)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
            result[0] += -0.119211465;
          } else {
            result[0] += 0.06726367;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[0] += 0.07914248;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
              result[0] += 0.04700563;
            } else {
              result[0] += -0.10337616;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32233)) {
            result[0] += 0.015671475;
          } else {
            result[0] += -0.07112746;
          }
        } else {
          result[0] += 0.08297957;
        }
      } else {
        result[0] += 0.11649514;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            result[0] += -0.10390524;
          } else {
            result[0] += 0.053095818;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1905226624)) {
            result[0] += 0.12887906;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41485)) {
              result[0] += 0.02274979;
            } else {
              result[0] += -0.048840854;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.099253096;
            } else {
              result[0] += 0.04635339;
            }
          } else {
            result[0] += 0.039969496;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            result[0] += 0.105245136;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += -0.08365052;
            } else {
              result[0] += 0.0637025;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
        result[0] += -0.16809715;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          result[0] += 0.06891509;
        } else {
          result[0] += -0.0820627;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[1] += -0.01660162;
            } else {
              result[1] += 0.0073505915;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
              result[1] += 0.00036486477;
            } else {
              result[1] += 0.026262505;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30720)) {
              result[1] += 0.12169373;
            } else {
              result[1] += 0.037672643;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += -0.013520895;
            } else {
              result[1] += 0.014569768;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[1] += -0.14153604;
        } else {
          result[1] += 0.11003544;
        }
      }
    } else {
      result[1] += -0.14007641;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
          result[1] += 0.20325026;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[1] += 0.13814203;
            } else {
              result[1] += 0.06952786;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
              result[1] += -0.08829347;
            } else {
              result[1] += 0.115169376;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20245)) {
              result[1] += -0.036828294;
            } else {
              result[1] += 0.08794421;
            }
          } else {
            result[1] += -0.23250347;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += -0.013538324;
            } else {
              result[1] += 0.12667187;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[1] += -0.09755764;
            } else {
              result[1] += 0.01852195;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[1] += -0.04972321;
            } else {
              result[1] += 0.05039076;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5905)) {
              result[1] += -0.19019279;
            } else {
              result[1] += -0.06798787;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
            result[1] += 0.47345686;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)59)) {
              result[1] += -0.0617093;
            } else {
              result[1] += 0.10690237;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
              result[1] += 0.055107813;
            } else {
              result[1] += 0.19599825;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[1] += -0.027109636;
            } else {
              result[1] += 0.11578789;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.063962296;
            } else {
              result[1] += -0.053870615;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
              result[1] += 0.03764571;
            } else {
              result[1] += 0.0016163366;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)50927)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)50669)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50397)) {
              result[2] += 0.0013376321;
            } else {
              result[2] += -0.1358512;
            }
          } else {
            result[2] += 0.057354208;
          }
        } else {
          result[2] += -0.08846894;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)51984)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)51715)) {
            result[2] += 0.12625971;
          } else {
            result[2] += 0.038983952;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)54320)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)53560)) {
              result[2] += 0.01157709;
            } else {
              result[2] += -0.09063161;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)55071)) {
              result[2] += 0.06663595;
            } else {
              result[2] += 0.002602161;
            }
          }
        }
      }
    } else {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += 0.010102231;
            } else {
              result[2] += 0.079271294;
            }
          } else {
            result[2] += -0.015622455;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
            result[2] += 0.090792365;
          } else {
            result[2] += -0.012230702;
          }
        }
      } else {
        result[2] += 0.08587101;
      }
    }
  } else {
    result[2] += -0.10197102;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += -0.104201555;
    } else {
      result[3] += -0.002206024;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      result[3] += 0.03231116;
    } else {
      result[3] += -0.023859598;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.018334117;
        } else {
          result[4] += 4.3121305e-05;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.045374658;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
              result[4] += 0.016899;
            } else {
              result[4] += -0.033956345;
            }
          } else {
            result[4] += 0.04272169;
          }
        }
      }
    } else {
      result[4] += 0.08817297;
    }
  } else {
    result[4] += -0.10249727;
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)523)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[5] += -0.0110143;
            } else {
              result[5] += -0.0015332787;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[5] += -0.002159563;
            } else {
              result[5] += -0.0010370874;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)42986)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)42720)) {
              result[5] += 0.0048075635;
            } else {
              result[5] += 0.170311;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)43775)) {
              result[5] += -0.05823917;
            } else {
              result[5] += 0.003261251;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
          result[5] += -0.1306043;
        } else {
          result[5] += -0.03950937;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
            result[5] += -0.08618687;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[5] += 0.07582465;
            } else {
              result[5] += 0.2926541;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18193)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[5] += 0.04496091;
            } else {
              result[5] += -0.12741105;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[5] += 0.14423941;
            } else {
              result[5] += 0.010040458;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
            result[5] += -0.12684844;
          } else {
            result[5] += 0.015390393;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
              result[5] += -0.020793306;
            } else {
              result[5] += 0.12476475;
            }
          } else {
            result[5] += -0.11627249;
          }
        }
      }
    }
  } else {
    result[5] += -0.09870059;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += -0.00021217669;
  } else {
    result[6] += -0.10176192;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[7] += 0.00021560353;
            } else {
              result[7] += -0.016450282;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += 0.0043874094;
            } else {
              result[7] += 0.10775479;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2256408064)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[7] += -0.035557996;
            } else {
              result[7] += -0.2450892;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
              result[7] += 0.10071734;
            } else {
              result[7] += -0.043181196;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
              result[7] += -0.03699206;
            } else {
              result[7] += 0.0823893;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
              result[7] += 0.11124735;
            } else {
              result[7] += -0.17996538;
            }
          }
        } else {
          result[7] += 0.13079998;
        }
      }
    } else {
      result[7] += -0.10911427;
    }
  } else {
    result[7] += 0.109386496;
  }
}

