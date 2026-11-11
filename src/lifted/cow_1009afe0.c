/* f_0x1009afe0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1009afe0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1009afe0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU8 bVar4;
    short sVar5;
    CowU32 uVar6;
    CowU32 puVar7;
    param_1 = param_1 & 0xffff;
      iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
      if (iVar3 != 0) {
        if (param_3 == '\0') {
          if (rd16((uint32_t)(param_2 + 0x10)) == -1) {
            wr8((uint32_t)(param_2 + 1u * (uint32_t)(0x10)), 0);
            wr8((uint32_t)(param_2 + 1u * (uint32_t)(0x11)), 0);
            wr8((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1))) + 0xee), 2);
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            sVar5 = rd16((uint32_t)param_2);
            if (rd16((uint32_t)(iVar3 + 0xfc)) != sVar5) {
              wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 1);
              wr16((uint32_t)(iVar3 + 0xfc), sVar5);
            }
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            if (rd16((uint32_t)(iVar3 + 0xfe)) != 0) {
              wr16((uint32_t)(iVar3 + 0xf4), rd16((uint32_t)(iVar3 + 0xf4)) | 2);
              wr16((uint32_t)(iVar3 + 0xfe), 0);
            }
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            if (rd16((uint32_t)(iVar3 + 0x100)) != 0) {
              wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 4);
              wr16((uint32_t)(iVar3 + 0x100), 0);
            }
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            if (rd16((uint32_t)(iVar3 + 0x102)) != 0) {
              wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 8);
              wr16((uint32_t)(iVar3 + 0x102), 0);
            }
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            if (rd16((uint32_t)(iVar3 + 0x104)) != 0) {
              wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x10);
              wr16((uint32_t)(iVar3 + 0x104), 0);
            }
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            if (rd16((uint32_t)(iVar3 + 0x106)) != 0) {
              wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x20);
              wr16((uint32_t)(iVar3 + 0x106), 0);
            }
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            if (rd16((uint32_t)(iVar3 + 0x108)) != 0) {
              wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x40);
              wr16((uint32_t)(iVar3 + 0x108), 0);
            }
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            if (rd16((uint32_t)(iVar3 + 0x10a)) != 0) {
              wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x80);
              wr16((uint32_t)(iVar3 + 0x10a), 0);
            }
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            if (rd16((uint32_t)(iVar3 + 0x10c)) == 0) {
              return;
            }
            wr16((uint32_t)(iVar3 + 0x10c), 0);
            wr8((uint32_t)(iVar3 + 0xf5), rd8((uint32_t)(iVar3 + 0xf5)) | 1);
            return;
          }
          if (((rd32((uint32_t)(iVar3 + 0x120)) >> 5 & 1) == 0) && (rd16((uint32_t)(iVar3 + 0x210)) == 0)) {
            wr8((uint32_t)(iVar3 + 0xee), 0);
          }
        }
        iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
        if ((CowU32)rd8((uint32_t)(iVar3 + 0xef)) != (int)(char)rd8((uint32_t)(param_2 + 1u * (uint32_t)(1)))) {
          wr8((uint32_t)(iVar3 + 0xef), rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))));
          wr32((uint32_t)(iVar3 + 0x120), rd32((uint32_t)(iVar3 + 0x120)) | 1);
        }
        uVar2 = 0;
        uVar6 = 0;
        switch(rd8((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1))) + 0xef))) {
        case 1:
        case 3:
        case 5:
        case 8:
          uVar2 = 0;
          uVar6 = 0;
          break;
        case 2:
        case 4:
        case 6:
        case 7:
          uVar2 = 1;
          uVar6 = 1;
        }
        cow_bridge_1008aa80(g, COW_IMG(COW_ADDR_LIFT_1009B1D1), 2u, (const CowU32[]){ param_1, uVar2 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1008aad0(g, COW_IMG(COW_ADDR_LIFT_1009B1D8), 2u, (const CowU32[]){ param_1, uVar6 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1008ab20(g, COW_IMG(COW_ADDR_LIFT_1009B1DF), 2u, (const CowU32[]){ param_1, 0 }, g->ecx, g->edx, g->eax, 0u);
        if ((((param_1 == (int)rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))) ||
             ((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1))) + 0x78)) & 0xff000000) != 0)) ||
            (rd8((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1))) + 0xee)) != '\0')) ||
           (iVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_1009B21B), 1u, (const CowU32[]){ 165u }, g->ecx, g->edx, g->eax, 4u), iVar3 == 0)) {
          bVar4 = rd8((uint32_t)param_2);
          iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
          if (rd16((uint32_t)(iVar3 + 0xfc)) != (CowU16)bVar4) {
            wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 1);
            wr16((uint32_t)(iVar3 + 0xfc), (CowU16)bVar4);
          }
          iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
          sVar5 = rd16((uint32_t)(param_2 + 2));
          if (rd16((uint32_t)(iVar3 + 0xfe)) != sVar5) {
            wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 2);
            wr16((uint32_t)(iVar3 + 0xfe), sVar5);
          }
          iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
          sVar5 = rd16((uint32_t)(param_2 + 4));
          if (rd16((uint32_t)(iVar3 + 0x100)) != sVar5) {
            wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 4);
            wr16((uint32_t)(iVar3 + 0x100), sVar5);
          }
          iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
          sVar5 = rd16((uint32_t)(param_2 + 6));
          if (rd16((uint32_t)(iVar3 + 0x102)) != sVar5) {
            wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 8);
            wr16((uint32_t)(iVar3 + 0x102), sVar5);
          }
          iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
          sVar5 = rd16((uint32_t)(param_2 + 8));
          if (rd16((uint32_t)(iVar3 + 0x104)) != sVar5) {
            wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x10);
            wr16((uint32_t)(iVar3 + 0x104), sVar5);
          }
          iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
          sVar5 = rd16((uint32_t)(param_2 + 10));
          if (rd16((uint32_t)(iVar3 + 0x106)) != sVar5) {
            wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x20);
            wr16((uint32_t)(iVar3 + 0x106), sVar5);
          }
        }
        else {
          sVar5 = 1;
          puVar7 = COW_IMG(COW_ADDR_LIFT_1032D678);
          do {
            iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
            uVar1 = sVar5 << 0xc | rd16((uint32_t)puVar7);
            bVar4 = (CowU8)sVar5;
            if (rd16((uint32_t)(iVar3 + 0xfc + (char)bVar4 * 2)) != uVar1) {
              wr16((uint32_t)(iVar3 + 0xfc + (char)bVar4 * 2), uVar1);
              wr16((uint32_t)(iVar3 + 0xf4), rd16((uint32_t)(iVar3 + 0xf4)) | (CowU16)(1 << (bVar4 & 0x1f)));
            }
            puVar7 = puVar7 + 2;
            sVar5 = sVar5 + 1;
          } while ((int)puVar7 < 0x1032d68c);
          bVar4 = rd8((uint32_t)param_2);
          iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
          if (rd16((uint32_t)(iVar3 + 0xfc)) != (CowU16)bVar4) {
            wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 1);
            wr16((uint32_t)(iVar3 + 0xfc), (CowU16)bVar4);
          }
        }
        iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
        sVar5 = rd16((uint32_t)(param_2 + 0xc));
        if (rd16((uint32_t)(iVar3 + 0x108)) != sVar5) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x40);
          wr16((uint32_t)(iVar3 + 0x108), sVar5);
        }
        iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
        sVar5 = rd16((uint32_t)(param_2 + 0xe));
        if (rd16((uint32_t)(iVar3 + 0x10a)) != sVar5) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x80);
          wr16((uint32_t)(iVar3 + 0x10a), sVar5);
        }
        iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1)));
        if (rd16((uint32_t)(iVar3 + 0x10c)) != rd16((uint32_t)(param_2 + 0x10))) {
          wr16((uint32_t)(iVar3 + 0x10c), rd16((uint32_t)(param_2 + 0x10)));
          wr8((uint32_t)(iVar3 + 0xf5), rd8((uint32_t)(iVar3 + 0xf5)) | 1);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1009afe0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1009afe0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1009afe1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1009afe2: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1009afe3: register esi, replayed as the entry ran it */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->esi = (uint32_t)(r); }   /* 0x1009afe7: register esi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x1009afed: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1009afef: push edi */
    { uint32_t A = (uint32_t)(g->esi * 4 + COW_IMG(COW_ADDR_LIFT_10480AF0) + RD); g->eax = (uint32_t)(rd32(A)); }   /* 0x1009aff0: register eax, replayed as the entry ran it */
    cow_lift_1009afe0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
