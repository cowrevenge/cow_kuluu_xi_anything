/* f_0x1022dfa0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022dfa0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022dfa0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    CowU32 uVar5;
    int local_4;
    switch((int32_t)rd32((uint32_t)(param_1 + 0x6c))) {
      case 0:
      case 1:
      case 2:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x6c)) != ((((uint64_t)(int)rd32(COW_IMG(COW_ADDR_LIFT_1047FE8C))) << 16) & 0xffu)) {
          g->eax = (CowU32)(0xfffffffd); return;
        }
        if ((rd32(COW_IMG(COW_ADDR_LIFT_1047FE8C)) & 0xffff) == 0xffff) {
          g->eax = (CowU32)(0xfffffffc); return;
        }
        g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1047FE8C)) & 0xffff); return;
      case 3:
        if (rd32(COW_IMG(COW_ADDR_LIFT_1047FE88)) == 0xffff) {
          uVar2 = 0xfffffffc;
        }
        else {
          uVar2 = rd32(COW_IMG(COW_ADDR_LIFT_1047FE88));
          if (3 < (int)rd32(COW_IMG(COW_ADDR_LIFT_1047FE88))) {
            g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1047FE88))); return;
          }
        }
        uVar5 = cow_bridge_10098800(g, COW_IMG(COW_ADDR_LIFT_1022E01A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((uVar5 & 1) == 0) {
          g->eax = (CowU32)(uVar2); return;
        }
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0x3f) & 0xffu)); return;
      case 4:
        cVar1 = cow_bridge_100987d0(g, COW_IMG(COW_ADDR_LIFT_1022E034), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          uVar2 = 0;
          local_4 = 0;
          iVar3 = cow_bridge_100987e0(g, COW_IMG(COW_ADDR_LIFT_1022E057), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((iVar3 == 0) && (uVar5 = cow_bridge_10098800(g, COW_IMG(COW_ADDR_LIFT_1022E062), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (uVar5 & 8) != 0)) {
            iVar3 = 1000;
          }
          uVar5 = 0xfffffffc;
          iVar4 = cow_bridge_1022ee80(g, COW_IMG(COW_ADDR_LIFT_1022E077), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar4 < 1) {
            g->eax = (CowU32)(0xfffffffc); return;
          }
          do {
            iVar4 = cow_bridge_1022f0f0(g, COW_IMG(COW_ADDR_LIFT_1022E087), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
            if (iVar4 <= iVar3) {
              iVar4 = cow_bridge_1022f0f0(g, COW_IMG(COW_ADDR_LIFT_1022E093), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
              if (iVar4 == iVar3) {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar2) & 0xffu)); return;
              }
              iVar4 = cow_bridge_1022f0f0(g, COW_IMG(COW_ADDR_LIFT_1022E09F), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
              if (local_4 <= iVar4) {
                local_4 = cow_bridge_1022f0f0(g, COW_IMG(COW_ADDR_LIFT_1022E0AD), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
                uVar5 = uVar2;
              }
            }
            uVar2 = uVar2 + 1;
            iVar4 = cow_bridge_1022ee80(g, COW_IMG(COW_ADDR_LIFT_1022E0BB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          } while ((int)uVar2 < iVar4);
          g->eax = (CowU32)(uVar5); return;
        }
        break;
      case 5:
        cVar1 = cow_bridge_10098810(g, COW_IMG(COW_ADDR_LIFT_1022E0D6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          param_1 = cow_bridge_10098860(g, COW_IMG(COW_ADDR_LIFT_1022E0DF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        goto L_1022e113;
      case 6:
        cVar1 = cow_bridge_10098810(g, COW_IMG(COW_ADDR_LIFT_1022E0E8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          uVar2 = cow_bridge_10098870(g, COW_IMG(COW_ADDR_LIFT_1022E0F5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(uVar2); return;
        }
        break;
      case 7:
        cVar1 = cow_bridge_10098900(g, COW_IMG(COW_ADDR_LIFT_1022E102), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          param_1 = cow_bridge_100989a0(g, COW_IMG(COW_ADDR_LIFT_1022E10B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
    L_1022e113:
        if (param_1 == 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xfffffffc) & 0xffu)); return;
        }
        g->eax = (CowU32)(param_1); return;
      case 8:
        cVar1 = cow_bridge_10098900(g, COW_IMG(COW_ADDR_LIFT_1022E12D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          uVar2 = cow_bridge_10098950(g, COW_IMG(COW_ADDR_LIFT_1022E13A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(uVar2); return;
        }
        break;
      case 9:
        uVar2 = 0xfffffffc;
        cVar1 = cow_bridge_10098a60(g, COW_IMG(COW_ADDR_LIFT_1022E1DF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          g->eax = (CowU32)(0xfffffffc); return;
        }
        iVar3 = cow_bridge_10098a70(g, COW_IMG(COW_ADDR_LIFT_1022E1EC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == 999) {
          g->eax = (CowU32)(0xfffffffc); return;
        }
        if ((iVar3 == 0) && (uVar5 = cow_bridge_10098800(g, COW_IMG(COW_ADDR_LIFT_1022E164), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (uVar5 & 0x20) != 0)) {
          iVar3 = 1000;
        }
        uVar5 = 0;
        iVar4 = cow_bridge_1022ee80(g, COW_IMG(COW_ADDR_LIFT_1022E229), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar4 < 1) {
          g->eax = (CowU32)(0xfffffffc); return;
        }
        do {
          iVar4 = cow_bridge_1022f0f0(g, COW_IMG(COW_ADDR_LIFT_1022E239), 1u, (const CowU32[]){ uVar5 }, g->ecx, g->edx, g->eax, 0u);
          if (iVar4 <= iVar3) {
            uVar2 = uVar5;
          }
          uVar5 = uVar5 + 1;
          iVar4 = cow_bridge_1022ee80(g, COW_IMG(COW_ADDR_LIFT_1022E247), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        } while ((int)uVar5 < iVar4);
        g->eax = (CowU32)(uVar2); return;
      case 10:
        uVar2 = 0xfffffffc;
        cVar1 = cow_bridge_10098a80(g, COW_IMG(COW_ADDR_LIFT_1022E25D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xfffffffc) & 0xffu)); return;
        }
        iVar3 = cow_bridge_10098a90(g, COW_IMG(COW_ADDR_LIFT_1022E26A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == 999) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xfffffffc) & 0xffu)); return;
        }
        if ((iVar3 == 0) && (uVar5 = cow_bridge_10098800(g, COW_IMG(COW_ADDR_LIFT_1022E1C0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (uVar5 & 0x40) != 0)) {
          iVar3 = 1000;
        }
        uVar5 = 0;
        iVar4 = cow_bridge_1022ee80(g, COW_IMG(COW_ADDR_LIFT_1022E2A7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar4 < 1) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xfffffffc) & 0xffu)); return;
        }
        do {
          iVar4 = cow_bridge_1022f0f0(g, COW_IMG(COW_ADDR_LIFT_1022E2B7), 1u, (const CowU32[]){ uVar5 }, g->ecx, g->edx, g->eax, 0u);
          if (iVar4 <= iVar3) {
            uVar2 = uVar5;
          }
          uVar5 = uVar5 + 1;
          iVar4 = cow_bridge_1022ee80(g, COW_IMG(COW_ADDR_LIFT_1022E2C5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        } while ((int)uVar5 < iVar4);
        g->eax = (CowU32)(uVar2); return;
      case 0xb:
        uVar2 = 0xfffffffc;
        cVar1 = cow_bridge_10098aa0(g, COW_IMG(COW_ADDR_LIFT_1022E2DB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xfffffffc) & 0xffu)); return;
        }
        iVar3 = cow_bridge_10098ab0(g, COW_IMG(COW_ADDR_LIFT_1022E2E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == 999) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xfffffffc) & 0xffu)); return;
        }
        cVar1 = cow_bridge_10098ac0(g, COW_IMG(COW_ADDR_LIFT_1022E2FB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xfffffffc) & 0xffu)); return;
        }
        uVar5 = 0;
        iVar4 = cow_bridge_1022ee80(g, COW_IMG(COW_ADDR_LIFT_1022E325), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar4 < 1) {
          g->eax = (CowU32)(0xfffffffc); return;
        }
        do {
          iVar4 = cow_bridge_1022f0f0(g, COW_IMG(COW_ADDR_LIFT_1022E331), 1u, (const CowU32[]){ uVar5 }, g->ecx, g->edx, g->eax, 0u);
          if (iVar4 <= iVar3) {
            uVar2 = uVar5;
          }
          uVar5 = uVar5 + 1;
          iVar4 = cow_bridge_1022ee80(g, COW_IMG(COW_ADDR_LIFT_1022E33F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        } while ((int)uVar5 < iVar4);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar2) & 0xffu)); return;
      case 0xc:
        cVar1 = cow_bridge_100989f0(g, COW_IMG(COW_ADDR_LIFT_1022E147), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          uVar2 = cow_bridge_10098a00(g, COW_IMG(COW_ADDR_LIFT_1022E154), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((uVar2 & 0xf) != 0) {
            g->eax = (CowU32)(uVar2 & 0xf); return;
          }
          uVar2 = cow_bridge_10098800(g, COW_IMG(COW_ADDR_LIFT_1022E207), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((uVar2 & 2) == 0) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
          }
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xc) & 0xffu)); return;
        }
        break;
      case 0xd:
        cVar1 = cow_bridge_100989f0(g, COW_IMG(COW_ADDR_LIFT_1022E17E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          uVar2 = cow_bridge_10098a00(g, COW_IMG(COW_ADDR_LIFT_1022E18B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(uVar2 >> 4 & 0xf); return;
        }
        break;
      case 0xe:
        cVar1 = cow_bridge_100989f0(g, COW_IMG(COW_ADDR_LIFT_1022E1A0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          uVar2 = cow_bridge_10098a00(g, COW_IMG(COW_ADDR_LIFT_1022E1AD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          uVar2 = uVar2 >> 8 & 0xf;
          if (uVar2 != 0) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar2) & 0xffu)); return;
          }
          uVar2 = cow_bridge_10098800(g, COW_IMG(COW_ADDR_LIFT_1022E285), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((uVar2 & 4) == 0) {
            g->eax = (CowU32)(0); return;
          }
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xf) & 0xffu)); return;
        }
        break;
      default:
        g->eax = (CowU32)(0); return;
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022dfa0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1022dfa0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1022dfa1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1022dfa2: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1022dfa3: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1022dfa4: push edi */
    g->edi = g->ecx;   /* 0x1022dfa5: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x6Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x1022dfa7: register eax, replayed as the entry ran it */
    cow_lift_1022dfa0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
