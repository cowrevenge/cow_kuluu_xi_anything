/* f_0x101011c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101011c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101011c0(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    CowU16 uVar3;
    int iVar4;
    int iVar5;
    CowU32 uVar6;
    int iVar7;
    short sVar8;
    CowU32 local_8;
    int local_4;
    _Bool bVar9;
      
      iVar4 = (int)param_1;
      wr32((uint32_t)((int)param_1 + 0x134), rd8((uint32_t)(param_2 + 2)) & 3);
      wr32((uint32_t)((int)param_1 + 0x138), (rd8((uint32_t)(param_2 + 2)) & 0x7c) >> 2);
      if (((CowU8)rd16((uint32_t)(param_2 + 2)) & 0x7c) == 0x3c) {
        wr32((uint32_t)((int)param_1 + 0x13c), 0);
      }
      else {
        uVar6 = (CowU32)rd16((uint32_t)(COW_IMG(COW_ADDR_LIFT_10331CA8) + (rd16((uint32_t)(param_2 + 2)) >> 2 & 0x1f) * 2)) -
                (CowU32)rd16((uint32_t)(param_2 + 4));
        wr32((uint32_t)((int)param_1 + 0x13c), ((int)uVar6 < 0) - 1 & uVar6);
      }
      iVar7 = 0;
      param_1 = (CowU32)((int)param_1 + 0x128);
      local_8 = (CowU32)(param_2 + 7);
      local_4 = 3;
      do {
        bVar1 = rd8((uint32_t)(local_8 + 1u * (uint32_t)(-1)));
        bVar2 = rd8((uint32_t)local_8);
        sVar8 = bVar2 + 1;
        uVar3 = rd16((uint32_t)(COW_IMG(COW_ADDR_LIFT_10331AA8) + (CowU32)bVar1 * 2));
        bVar9 = (uVar3 & 0x800) == 0;
        if (bVar9) {
          uVar6 = uVar3 & 0x7ff;
        }
        else {
          uVar6 = (CowU8)uVar3 & 0x7f;
        }
        if ((short)uVar6 != 0) {
          if (uVar3 >> 0xe == 1) {
            wr32((uint32_t)(iVar4 + iVar7 * 8), 0x7fd);
    L_101012b7:
            iVar7 = iVar7 + 1;
          }
          else if (uVar3 >> 0xe == 2) {
            wr32((uint32_t)(iVar4 + iVar7 * 8), 0x80);
            goto L_101012b7;
          }
          if (((1 < bVar1) && (bVar1 < 0x60)) && ((bVar1 & 1) != 0)) {
            sVar8 = bVar2 + 0x101;
          }
          if ((uVar3 & 0x1000) != 0) {
            sVar8 = -sVar8;
          }
          if (bVar9) {
            wr32((uint32_t)(iVar4 + 4 + iVar7 * 8), (int)sVar8);
            wr32((uint32_t)(iVar4 + iVar7 * 8), uVar6);
            iVar7 = iVar7 + 1;
          }
          else {
            iVar5 = 0;
            do {
              if ((uVar6 & 1 << ((CowU8)iVar5 & 0x1f)) != 0) {
                wr32((uint32_t)(iVar4 + iVar7 * 8), iVar5 + 0xb);
                iVar7 = iVar7 + 1;
                wr32((uint32_t)(iVar4 + -4 + iVar7 * 8), (int)sVar8);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 7);
          }
          wr32((uint32_t)param_1, iVar7);
        }
        param_1 = param_1 + 4u * (uint32_t)(1);
        local_8 = local_8 + 2;
        local_4 = local_4 + -1;
        if (local_4 == 0) {
          g->eax = (CowU32)(iVar7); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101011c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->ecx = param_3;   /* 0x101011c0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x101011c4: 8 bytes of locals */
    { uint32_t A = (uint32_t)(g->ecx + 0x2u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101011c7: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101011ca: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101011cb: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x101011cc: register ebp, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x3u; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x101011d0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101011d3: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_101011c0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
