/* f_0x1018ca40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018ca40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018ca40(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 puVar2;
    CowU32 pvVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    int iVar6;
    CowU32 uVar7;
    CowU32 puVar8;
    CowU32 puVar9;
    cow_bridge_1018c690(g, COW_IMG(COW_ADDR_LIFT_1018CA50), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      puVar2 = (CowU32)cow_bridge_10028640(g, COW_IMG(COW_ADDR_LIFT_1018CA5C), 2u, (const CowU32[]){ 23388u, 4u }, g->ecx, g->edx, g->eax, 0u);
      pvVar3 = (CowU32)cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_1018CA65), 1u, (const CowU32[]){ 104u }, g->ecx, g->edx, g->eax, 12u);
      if (pvVar3 == (CowU32)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = cow_bridge_1018d0d0(g, COW_IMG(COW_ADDR_LIFT_1018CA73), 0u, (const CowU32[]){ 0u }, pvVar3, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)((int)param_1 + 0xc), uVar4);
      cow_bridge_1018cdf0(g, COW_IMG(COW_ADDR_LIFT_1018CA84), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1018c550(g, COW_IMG(COW_ADDR_LIFT_1018CA89), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      uVar4 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CA90), 1u, (const CowU32[]){ 32u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(puVar2 + 4u * (uint32_t)(1)), uVar4);
      uVar4 = cow_bridge_1018c760(g, COW_IMG(COW_ADDR_LIFT_1018CA99), 1u, (const CowU32[]){ uVar4 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)puVar2, uVar4);
      uVar4 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CAA2), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(puVar2 + 4u * (uint32_t)(6)), uVar4);
      uVar4 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CAAC), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(puVar2 + 4u * (uint32_t)(5)), uVar4);
      uVar4 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CAB6), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(puVar2 + 4u * (uint32_t)(2)), uVar4);
      uVar4 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CAC0), 1u, (const CowU32[]){ 32u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(puVar2 + 4u * (uint32_t)(3)), uVar4);
      uVar4 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CACA), 1u, (const CowU32[]){ 32u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(puVar2 + 4u * (uint32_t)(4)), uVar4);
      param_2 = 0;
      if (rd32((uint32_t)(puVar2 + 4u * (uint32_t)(6))) != 0) {
        puVar8 = puVar2 + 4u * (uint32_t)(9);
        do {
          if (0x3f < param_2) break;
          uVar5 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CAF4), 1u, (const CowU32[]){ 32u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(-1)), uVar5);
          uVar5 = cow_bridge_1018c760(g, COW_IMG(COW_ADDR_LIFT_1018CAFD), 1u, (const CowU32[]){ uVar5 }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(-2)), uVar5);
          uVar5 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB07), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 12u);
          uVar7 = 0;
          wr32((uint32_t)puVar8, uVar5);
          if (uVar5 != 0) {
            puVar9 = puVar8 + 4u * (uint32_t)(2);
            do {
              if (7 < uVar7) break;
              uVar5 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB2A), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)(puVar9 + 4u * (uint32_t)(-1)), uVar5);
              uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB34), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
              wr16((uint32_t)puVar9, uVar1);
              uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB3E), 1u, (const CowU32[]){ 12u }, g->ecx, g->edx, g->eax, 0u);
              wr16((uint32_t)((int)puVar9 + 2), uVar1);
              uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB49), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, g->eax, 0u);
              wr16((uint32_t)(puVar9 + 4u * (uint32_t)(1)), uVar1);
              uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB54), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, g->eax, 0u);
              wr16((uint32_t)((int)puVar9 + 6), uVar1);
              uVar5 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB5F), 1u, (const CowU32[]){ 17u }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)(puVar9 + 4u * (uint32_t)(2)), uVar5);
              uVar5 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB69), 1u, (const CowU32[]){ 10u }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)(puVar9 + 4u * (uint32_t)(3)), uVar5);
              uVar5 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB73), 1u, (const CowU32[]){ 31u }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)(puVar9 + 4u * (uint32_t)(4)), uVar5);
              iVar6 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB7D), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 36u);
              if (iVar6 == 0) {
                uVar1 = 0;
                wr16((uint32_t)(puVar9 + 4u * (uint32_t)(5)), 0);
                wr16((uint32_t)((int)puVar9 + 0x16), 0);
                wr32((uint32_t)(puVar9 + 4u * (uint32_t)(6)), 0);
              }
              else {
                uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB8B), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
                wr16((uint32_t)(puVar9 + 4u * (uint32_t)(5)), uVar1);
                uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CB96), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
                wr16((uint32_t)((int)puVar9 + 0x16), uVar1);
                uVar5 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CBA1), 1u, (const CowU32[]){ 17u }, g->ecx, g->edx, g->eax, 0u);
                wr32((uint32_t)(puVar9 + 4u * (uint32_t)(6)), uVar5);
                uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CBAB), 1u, (const CowU32[]){ 10u }, g->ecx, g->edx, g->eax, 16u);
              }
              wr16((uint32_t)(puVar9 + 4u * (uint32_t)(7)), uVar1);
              iVar6 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CBC8), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
              if (iVar6 == 0) {
                uVar1 = 0;
                wr16((uint32_t)((int)puVar9 + 0x1e), 0);
                wr16((uint32_t)(puVar9 + 4u * (uint32_t)(8)), 0);
                wr16((uint32_t)((int)puVar9 + 0x22), 0);
              }
              else {
                uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CBD6), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
                wr16((uint32_t)((int)puVar9 + 0x1e), uVar1);
                uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CBE1), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
                wr16((uint32_t)(puVar9 + 4u * (uint32_t)(8)), uVar1);
                uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CBEC), 1u, (const CowU32[]){ 14u }, g->ecx, g->edx, g->eax, 0u);
                wr16((uint32_t)((int)puVar9 + 0x22), uVar1);
                uVar1 = cow_bridge_1018c570(g, COW_IMG(COW_ADDR_LIFT_1018CBF7), 1u, (const CowU32[]){ 10u }, g->ecx, g->edx, g->eax, 16u);
              }
              wr16((uint32_t)(puVar9 + 4u * (uint32_t)(9)), uVar1);
              uVar7 = uVar7 + 1;
              puVar9 = puVar9 + 4u * (uint32_t)(0xb);
            } while (uVar7 < rd32((uint32_t)puVar8));
          }
          param_2 = param_2 + 1;
          puVar8 = puVar8 + 4u * (uint32_t)(0x5b);
        } while (param_2 < (CowU32)rd32((uint32_t)(puVar2 + 4u * (uint32_t)(6))));
      }
      wr8((uint32_t)((int)param_1 + 2), 1);
      if (puVar2 == (CowU32)0xffffffe4) {
    L_1018cdd9:
        cow_bridge_10028700(g, COW_IMG(COW_ADDR_LIFT_1018CC74), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(param_1); return;
      }
      if (rd32((uint32_t)(puVar2 + 4u * (uint32_t)(6))) == 1) {
        cow_bridge_1018d170(g, COW_IMG(COW_ADDR_LIFT_1018CC63), 0u, (const CowU32[]){ 0u }, rd32((uint32_t)((int)param_1 + 0xc)), puVar2, g->eax, 0u);
        iVar6 = cow_bridge_1018c940(g, COW_IMG(COW_ADDR_LIFT_1018CC6A), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        if (iVar6 == 0) {
          cow_bridge_10028700(g, COW_IMG(COW_ADDR_LIFT_1018CCD8), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, g->eax, 4u);
          pvVar3 = rd32((uint32_t)((int)param_1 + 0xc));
          if (pvVar3 != (CowU32)0x0) {
            cow_bridge_1018d100(g, COW_IMG(COW_ADDR_LIFT_1018CC89), 0u, (const CowU32[]){ 0u }, pvVar3, g->edx, g->eax, 0u);
            cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_1018CC8F), 1u, (const CowU32[]){ pvVar3 }, g->ecx, g->edx, g->eax, 4u);
            wr32((uint32_t)((int)param_1 + 0xc), 0);
            wr8((uint32_t)((int)param_1 + 2), 0);
            g->eax = (CowU32)((CowU32)0x0); return;
          }
        }
        else {
          uVar5 = 0;
          if (rd32((uint32_t)(puVar2 + 4u * (uint32_t)(9))) != 0) {
            do {
              if (7 < uVar5) break;
              cow_bridge_1018d1d0(g, COW_IMG(COW_ADDR_LIFT_1018CCCA), 4u, (const CowU32[]){ uVar5, puVar2, 0, uVar5 }, rd32((uint32_t)((int)param_1 + 0xc)), g->edx, g->eax, 0u);
              uVar5 = uVar5 + 1;
            } while (uVar5 < (CowU32)rd32((uint32_t)(puVar2 + 4u * (uint32_t)(9))));
          }
          iVar6 = cow_bridge_1018ca20(g, COW_IMG(COW_ADDR_LIFT_1018CD54), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar6 != 0) {
            if ((rd32((uint32_t)(puVar2 + 4u * (uint32_t)(9))) != 1) &&
               ((rd8((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 0xc)) + 0x20)) + -0x24 +
                          (int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 0xc)) + 0x1c)) * 0x34)) & 1) != 0)) {
              pvVar3 = (CowU32)cow_bridge_1018ca20(g, COW_IMG(COW_ADDR_LIFT_1018CDB0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10083300(g, COW_IMG(COW_ADDR_LIFT_1018CDB7), 0u, (const CowU32[]){ 0u }, pvVar3, g->edx, g->eax, 0u);
              wr8((uint32_t)((int)param_1 + 2), rd8((uint32_t)((int)param_1 + 2)) | 2);
              iVar6 = cow_bridge_1018c940(g, COW_IMG(COW_ADDR_LIFT_1018CCF1), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
              if (iVar6 != 0) {
                pvVar3 = (CowU32)cow_bridge_1018c940(g, COW_IMG(COW_ADDR_LIFT_1018CDC7), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
                cow_bridge_10083300(g, COW_IMG(COW_ADDR_LIFT_1018CDD9), 0u, (const CowU32[]){ 0u }, pvVar3, g->edx, g->eax, 0u);
              }
            }
            goto L_1018cdd9;
          }
          cow_bridge_10028700(g, COW_IMG(COW_ADDR_LIFT_1018CCFB), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, g->eax, 0u);
          pvVar3 = rd32((uint32_t)((int)param_1 + 0xc));
          if (pvVar3 != (CowU32)0x0) {
            cow_bridge_1018d100(g, COW_IMG(COW_ADDR_LIFT_1018CD0C), 0u, (const CowU32[]){ 0u }, pvVar3, g->edx, g->eax, 0u);
            cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_1018CD12), 1u, (const CowU32[]){ pvVar3 }, g->ecx, g->edx, g->eax, 4u);
          }
        }
      }
      else {
        cow_bridge_1018d170(g, COW_IMG(COW_ADDR_LIFT_1018CCEA), 0u, (const CowU32[]){ 0u }, rd32((uint32_t)((int)param_1 + 0xc)), puVar2, g->eax, 0u);
        iVar6 = cow_bridge_1018c940(g, COW_IMG(COW_ADDR_LIFT_1018CDD2), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        if (iVar6 != 0) {
          uVar5 = 0;
          if (rd32((uint32_t)(puVar2 + 4u * (uint32_t)(6))) != 0) {
            while (uVar5 < 0x40) {
              cow_bridge_1018d1d0(g, COW_IMG(COW_ADDR_LIFT_1018CD45), 4u, (const CowU32[]){ uVar5, puVar2, uVar5, 0 }, rd32((uint32_t)((int)param_1 + 0xc)), g->edx, g->eax, 0u);
              uVar5 = uVar5 + 1;
              if ((CowU32)rd32((uint32_t)(puVar2 + 4u * (uint32_t)(6))) <= uVar5) {
                cow_bridge_10028700(g, COW_IMG(COW_ADDR_LIFT_1018CD5E), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, g->eax, 0u);
                g->eax = (CowU32)(param_1); return;
              }
            }
          }
          goto L_1018cdd9;
        }
        cow_bridge_10028700(g, COW_IMG(COW_ADDR_LIFT_1018CDDF), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, g->eax, 4u);
        pvVar3 = rd32((uint32_t)((int)param_1 + 0xc));
        if (pvVar3 != (CowU32)0x0) {
          cow_bridge_1018d100(g, COW_IMG(COW_ADDR_LIFT_1018CD6F), 0u, (const CowU32[]){ 0u }, pvVar3, g->edx, g->eax, 0u);
          cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_1018CD75), 1u, (const CowU32[]){ pvVar3 }, g->ecx, g->edx, g->eax, 4u);
          wr32((uint32_t)((int)param_1 + 0xc), 0);
          wr8((uint32_t)((int)param_1 + 2), 0);
          g->eax = (CowU32)((CowU32)0x0); return;
        }
      }
      wr32((uint32_t)((int)param_1 + 0xc), 0);
      wr8((uint32_t)((int)param_1 + 2), 0);
      g->eax = (CowU32)((CowU32)0x0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018ca40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1018ca40: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1018ca41: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1018ca42: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018ca43: push esi */
    g->ebx = g->ecx;   /* 0x1018ca44: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1018ca46: push edi */
    cow_lift_1018ca40(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
