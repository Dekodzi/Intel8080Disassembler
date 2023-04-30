#include "translate.h"
#include <iostream>
#include <string>
#include <stdlib.h>


std::string matchHexWithOpcodes(std::string hexes[], int& PC) {
    int temp = std::stoul(hexes[PC], nullptr, 16);
    std::string instruction;
    switch (temp) {
        case 1:
        instruction = "LXI B," + hexes[PC+2] + hexes[PC+1];
        PC += 3;
        break;
        case 2:
        instruction = "STAX B";
        PC++;
        break;
        case 3:
        instruction = "INX B";
        PC++;
        break;
        case 4:
        instruction = "INR B";
        PC++;
        break;
        case 5:
        instruction = "DCR B";
        PC++;
        break;
        case 6:
        instruction = "MVI B," + hexes[PC+1];
        PC += 2;
        break;
        case 7:
        instruction = "RLC";
        PC++;
        break;
        case 9:
        instruction = "DAD B";
        PC++;
        break;
        case 10:
        instruction = "LDAX B";
        PC++;
        break;
        case 11:
        instruction = "DCX B";
        PC++;
        break;
        case 12:
        instruction = "INR C";
        PC++;
        break;
        case 13:
        instruction = "DCR C";
        PC++;
        break;
        case 14:
        instruction = "MVI C," + hexes[PC + 1];
        PC += 2;
        break;
        case 15:
        instruction = "RAL";
        PC++;
        break;
        case 17:
        instruction = "LXI D," + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 18:
        instruction = "STAX D";
        PC++;
        break;
        case 19:
        instruction = "INX D";
        PC++;
        break;
        case 20:
        instruction = "INR D";
        PC++;
        break;
        case 21:
        instruction = "DCR D";
        PC++;
        break;
        case 22:
        instruction = "MVI D," + hexes[PC + 1];
        PC += 2;
        break;
        case 23:
        instruction = "RAL";
        PC++;
        break;
        case 25:
        instruction = "DAD D";
        PC++;
        break;
        case 26:
        instruction = "LDAX D";
        PC++;
        break;
        case 27:
        instruction = "DCX D";
        PC++;
        break;
        case 28:
        instruction = "INR E";
        PC++;
        break;
        case 29:
        instruction = "DCR E";
        PC++;
        break;
        case 30:
        instruction = "MVI E," + hexes[PC + 1];
        PC += 2;
        break;
        case 31:
        instruction = "RAR";
        PC++;
        break;
        case 33:
        instruction = "LXI H," + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 34:
        instruction = "SHLD " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 35:
        instruction = "INX H";
        PC++;
        break;
        case 36:
        instruction = "INR H";
        PC++;
        break;
        case 37:
        instruction = "DCR H";
        PC++;
        break;
        case 38:
        instruction = "MVI H," + hexes[PC + 1];
        PC += 2;
        break;
        case 39:
        instruction = "DAA";
        PC++;
        break;
        case 41:
        instruction = "DAD H";
        PC++;
        break;
        case 42:
        instruction = "LHLD " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 43:
        instruction = "DCX H";
        PC++;
        break;
        case 44:
        instruction = "INR L";
        PC++;
        break;
        case 45:
        instruction = "DCR L";
        PC++;
        break;
        case 46:
        instruction = "MVI M," + hexes[PC + 1];
        PC += 2;
        break;
        case 47:
        instruction = "CMA";
        PC++;
        break;
        case 49:
        instruction = "LXI SP," + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 50:
        instruction = "STA " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 51:
        instruction = "INX SP";
        PC++;
        break;
        case 52:
        instruction = "INR M";
        PC++;
        break;
        case 53:
        instruction = "DCR M";
        PC++;
        break;
        case 54:
        instruction = "MVI M," + hexes[PC + 1];
        PC += 2;
        break;
        case 55:
        instruction = "STC";
        PC++;
        break;
        case 57:
        instruction = "DAD SP";
        PC++;
        break;
        case 58:
        instruction = "LDA " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 59:
        instruction = "DCX SP";
        PC++;
        break;
        case 60:
        instruction = "INR A";
        PC++;
        break;
        case 61:
        instruction = "DCR A";
        PC++;
        break;
        case 62:
        instruction = "MVI A," + hexes[PC + 1];
        PC += 2;
        break;
        case 63:
        instruction = "CMC";
        PC++;
        break;
        case 64:
        instruction = "MOV B,B";
        PC++;
        break;
        case 65:
        instruction = "MOV B,C";
        PC++;
        break;
        case 66:
        instruction = "MOV B,D";
        PC++;
        break;
        case 67:
        instruction = "MOV B,E";
        PC++;
        break;
        case 68:
        instruction = "MOV B,H";
        PC++;
        break;
        case 69:
        instruction = "MOV B,L";
        PC++;
        break;
        case 70:
        instruction = "MOV B,M";
        PC++;
        break;
        case 71:
        instruction = "MOV B,A";
        PC++;
        break;
        case 72:
        instruction = "MOV C,B";
        PC++;
        break;
        case 73:
        instruction = "MOV C,C";
        PC++;
        break;
        case 74:
        instruction = "MOV C,D";
        PC++;
        break;
        case 75:
        instruction = "MOV C,E";
        PC++;
        break;
        case 76:
        instruction = "MOV C,H";
        PC++;
        break;
        case 77:
        instruction = "MOV C,L";
        PC++;
        break;
        case 78:
        instruction = "MOV C,M";
        PC++;
        break;
        case 79:
        instruction = "MOV C,A";
        PC++;
        break;
        case 80:
        instruction = "MOV D,B";
        PC++;
        break;
        case 81:
        instruction = "MOV D,C";
        PC++;
        break;
        case 82:
        instruction = "MOV D,D";
        PC++;
        break;
        case 83:
        instruction = "MOV D,E";
        PC++;
        break;
        case 84:
        instruction = "MOV D,H";
        PC++;
        break;
        case 85:
        instruction = "MOV D,L";
        PC++;
        break;
        case 86:
        instruction = "MOV D,M";
        PC++;
        break;
        case 87:
        instruction = "MOV D,A";
        PC++;
        break;
        case 88:
        instruction = "MOV E,B";
        PC++;
        break;
        case 89:
        instruction = "MOV E,C";
        PC++;
        break;
        case 90:
        instruction = "MOV E,D";
        PC++;
        break;
        case 91:
        instruction = "MOV E,E";
        PC++;
        break;
        case 92:
        instruction = "MOV E,H";
        PC++;
        break;
        case 93:
        instruction = "MOV E,L";
        PC++;
        break;
        case 94:
        instruction = "MOV E,M";
        PC++;
        break;
        case 95:
        instruction = "MOV E,A";
        PC++;
        break;
        case 96:
        instruction = "MOV H,B";
        PC++;
        break;
        case 97:
        instruction = "MOV H,C"; 
        PC++;
        break;
        case 98:
        instruction = "MOV H,D";
        PC++;
        break;
        case 99:
        instruction = "MOV H,E";
        PC++;
        break;
        case 100:
        instruction = "MOV H,H";
        PC++;
        break;
        case 101:
        instruction = "MOV H,L";
        PC++;
        break;
        case 102:
        instruction = "MOV H,M";
        PC++;
        break;
        case 103:
        instruction = "MOV H,A";
        PC++;
        break;
        case 104:
        instruction = "MOV L,B";
        PC++;
        break;
        case 105:
        instruction = "MOV L,C";
        PC++;
        break;
        case 106:
        instruction = "MOV L,D";
        PC++;
        break;
        case 107:
        instruction = "MOV L,E";
        PC++;
        break;
        case 108:
        instruction = "MOV L,H";
        PC++;
        break;
        case 109:
        instruction = "MOV L,L";
        PC++;
        break;
        case 110:
        instruction = "MOV L,M";
        PC++;
        break;
        case 111:
        instruction = "MOV L,A";
        PC++;
        break;
        case 112:
        instruction = "MOV M,B";
        PC++;
        break;
        case 113:
        instruction = "MOV M,C";
        PC++;
        break;
        case 114:
        instruction = "MOV M,D";
        PC++;
        break;
        case 115:
        instruction = "MOV M,E";
        PC++;
        break;
        case 116:
        instruction = "MOV M,H";
        PC++;
        break;
        case 117:
        instruction = "MOV M,L";
        PC++;
        break;
        case 118:
        instruction = "HLT";
        PC++;
        break;
        case 119:
        instruction = "MOV M,A";
        PC++;
        break;
        case 120:
        instruction = "MOV A,B";
        PC++;
        break;
        case 121:
        instruction = "MOV A,C";
        PC++;
        break;
        case 122:
        instruction = "MOV A,D";
        PC++;
        break;
        case 123:
        instruction = "MOV A,E";
        PC++;
        break;
        case 124:
        instruction = "MOV A,H";
        PC++;
        break;
        case 125:
        instruction = "MOV A,L";
        PC++;
        break;
        case 126:
        instruction = "MOV A,M";
        PC++;
        break;
        case 127:
        instruction = "MOV A,A";
        PC++;
        break;
        case 128:
        instruction = "ADD B";
        PC++;
        break;
        case 129:
        instruction = "ADD C";
        PC++;
        break;
        case 130:
        instruction = "ADD D";
        PC++;
        break;
        case 131:
        instruction = "ADD E";
        PC++;
        break;
        case 132:
        instruction = "ADD H";
        PC++;
        break;
        case 133:
        instruction = "ADD L";
        PC++;
        break;
        case 134:
        instruction = "ADD M";
        PC++;
        break;
        case 135:
        instruction = "ADD A";
        PC++;
        break;
        case 136:
        instruction = "ADC B";
        PC++;
        break;
        case 137:
        instruction = "ADC C";
        PC++;
        break;
        case 138:
        instruction = "ADC D";
        PC++;
        break;
        case 139:
        instruction = "ADC E";
        PC++;
        break;
        case 140:
        instruction = "ADC H";
        PC++;
        break;
        case 141:
        instruction = "ADC L";
        PC++;
        break;
        case 142:
        instruction = "ADC M";
        PC++;
        break;
        case 143:
        instruction = "ADC A";
        PC++;
        break;
        case 144:
        instruction = "SUB B";
        PC++;
        break;
        case 145:
        instruction = "SUB C";
        PC++;
        break;
        case 146:
        instruction = "SUB D";
        PC++;
        break;
        case 147:
        instruction = "SUB E";
        PC++;
        break;
        case 148:
        instruction = "SUB H";
        PC++;
        break;
        case 149:
        instruction = "SUB L";
        PC++;
        break;
        case 150:
        instruction = "SUB M";
        PC++;
        break;
        case 151:
        instruction = "SUB A";
        PC++;
        break;
        case 152:
        instruction = "SBB B";
        PC++;
        break;
        case 153:
        instruction = "SBB C";
        PC++;
        break;
        case 154:
        instruction = "SBB D";
        PC++;
        break;
        case 155:
        instruction = "SBB E";
        PC++;
        break;
        case 156:
        instruction = "SBB H";
        PC++;
        break;
        case 157:
        instruction = "SBB L";
        PC++;
        break;
        case 158:
        instruction = "SBB M";
        PC++;
        break;
        case 159:
        instruction = "SBB A";
        PC++;
        break;
        case 160:
        instruction = "ANA B";
        PC++;
        break;
        case 161:
        instruction = "ANA C";
        PC++;
        break;
        case 162:
        instruction = "ANA D";
        PC++;
        break;
        case 163:
        instruction = "ANA E";
        PC++;
        break;
        case 164:
        instruction = "ANA H";
        PC++;
        break;
        case 165:
        instruction = "ANA L";
        PC++;
        break;
        case 166:
        instruction = "ANA M";
        PC++;
        break;
        case 167:
        instruction = "ANA A";
        PC++;
        break;
        case 168:
        instruction = "XRA B";
        PC++;
        break;
        case 169:
        instruction = "XRA C";
        PC++;
        break;
        case 170:
        instruction = "XRA D";
        PC++;
        break;
        case 171:
        instruction = "XRA E";
        PC++;
        break;
        case 172:
        instruction = "XRA H";
        PC++;
        break;
        case 173:
        instruction = "XRA L";
        PC++;
        break;
        case 174:
        instruction = "XRA M";
        PC++;
        break;
        case 175:
        instruction = "XRA A";
        PC++;
        break;
        case 176:
        instruction = "ORA B";
        PC++;
        break;
        case 177:
        instruction = "ORA C";
        PC++;
        break;
        case 178:
        instruction = "ORA D";
        PC++;
        break;
        case 179:
        instruction = "ORA E";
        PC++;
        break;
        case 180:
        instruction = "ORA H";
        PC++;
        break;
        case 181:
        instruction = "ORA L";
        PC++;
        break;
        case 182:
        instruction = "ORA M";
        PC++;
        break;
        case 183:
        instruction = "ORA A";
        PC++;
        break;
        case 184:
        instruction = "CMP B";
        PC++;
        break;
        case 185:
        instruction = "CMP C";
        PC++;
        break;
        case 186:
        instruction = "CMP D";
        PC++;
        break;
        case 187:
        instruction = "CMP E";
        PC++;
        break;
        case 188:
        instruction = "CMP H";
        PC++;
        break;
        case 189:
        instruction = "CMP L";
        PC++;
        break;
        case 190:
        instruction = "CMP M";
        PC++;
        break;
        case 191:
        instruction = "CMP A";
        PC++;
        break;
        case 192:
        instruction = "RNZ";
        PC++;
        break;
        case 193:
        instruction = "POP B";
        PC++;
        break;
        case 194:
        instruction = "JNZ " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 195:
        instruction = "JMP " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 196:
        instruction = "CNZ " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 197:
        instruction = "PUSH B";
        PC++;
        break;
        case 198:
        instruction = "ADI " +  hexes[PC + 1];
        PC += 2;
        break;
        case 199:
        instruction = "RST 0";
        PC++;
        break;
        case 200:
        instruction = "RZ";
        PC++;
        break;
        case 201:
        instruction = "RET";
        PC++;
        break;
        case 202:
        instruction = "JZ " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 203:
        instruction = "JMP " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 204:
        instruction = "CZ " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 205:
        instruction = "CALL " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 206:
        instruction = "ACI " +  hexes[PC + 1];
        PC += 2;
        break;
        case 207:
        instruction = "RST 1";
        PC++;
        break;
        case 208:
        instruction = "RNC";
        PC++;
        break;
        case 209:
        instruction = "POP D";
        PC++;
        break;
        case 210:
        instruction = "JNC " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 211:
        instruction = "OUT " + hexes[PC + 1];
        PC += 2;
        break;
        case 212:
        instruction = "CNC " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 213:
        instruction = "PUSH D";
        PC++;
        break;
        case 214:
        instruction = "SUI " +  hexes[PC + 1];
        PC += 2;
        break;
        case 215:
        instruction = "RST 2";
        PC++;
        break;
        case 216:
        instruction = "RC";
        PC++;
        break;
        case 217:
        instruction = "RET";
        PC++;
        break;
        case 218:
        instruction = "JC " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 219:
        instruction = "IN " + hexes[PC + 1];
        PC += 2;
        break;
        case 220:
        instruction = "CC " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 221:
        instruction = "CALL " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 222:
        instruction = "SBI " +  hexes[PC + 1];
        PC += 2;
        break;
        case 223:
        instruction = "RST 3";
        PC++;
        break;
        case 224:
        instruction = "RPO";
        PC++;
        break;
        case 225:
        instruction = "POP H";
        PC++;
        break;
        case 226:
        instruction = "JPO " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 227:
        instruction = "XHTL";
        PC++;
        break;
        case 228:
        instruction = "CNC " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 229:
        instruction = "PUSH D";
        PC++;
        break;
        case 230:
        instruction = "ANI " +  hexes[PC + 1];
        PC += 2;
        break;
        case 231:
        instruction = "RST 4";
        PC++;
        break;
        case 232:
        instruction = "RPE";
        PC++;
        break;
        case 233:
        instruction = "PCHL";
        PC++;
        break;
        case 234:
        instruction = "JPE " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 235:
        instruction = "XCHG";
        PC++;
        break;
        case 236:
        instruction = "CPE " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 237:
        instruction = "CALL " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 238:
        instruction = "XRI " +  hexes[PC + 1];
        PC += 2;
        break;
        case 239:
        instruction = "RST 5";
        PC++;
        break;
        case 240:
        instruction = "RP";
        PC++;
        break;
        case 241:
        instruction = "POP PSW";
        PC++;
        break;
        case 242:
        instruction = "JP " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 243:
        instruction = "DI";
        PC++;
        break;
        case 244:
        instruction = "CP " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 245:
        instruction = "PUSH PSW";
        PC++;
        break;
        case 246:
        instruction = "ORI " +  hexes[PC + 1];
        PC += 2;
        break;
        case 247:
        instruction = "RST 6";
        PC++;
        break;
        case 248:
        instruction = "RM";
        PC++;
        break;
        case 249:
        instruction = "SPHL";
        PC++;
        break;
        case 250:
        instruction = "JM " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 251:
        instruction = "EI";
        PC++;
        break;
        case 252:
        instruction = "CM " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 253:
        instruction = "CALL " + hexes[PC + 2] + hexes[PC + 1];
        PC += 3;
        break;
        case 254:
        instruction = "CPI " +  hexes[PC + 1];
        PC += 2;
        break;
        case 255:
        instruction = "RST 7";
        PC++;
        break;
        default:
        instruction = "NOP";
        PC++;
        break;
    }
    return instruction;
}