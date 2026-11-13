/* f_0x101e2320 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e2320 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e2320(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 psVar3;
    CowU32 psVar4;
    CowU32 psVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    _Bool bVar2;
      
      if (rd32((uint32_t)param_1) != 0) {
        wr16((uint32_t)(param_2 + 2), (short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))));
        wr16((uint32_t)(param_2 + 8), rd16((uint32_t)((int)param_1 + 6)));
        wr16((uint32_t)(param_2 + 6), rd16((uint32_t)((int)param_1 + 0x1a)));
        if ((int16_t)rd16((uint32_t)((int)param_1 + 0x1a)) == 0) {
          wr8((uint32_t)(param_2 + 10), 0);
        }
        else {
          wr8((uint32_t)(param_2 + 10), 1);
        }
        iVar7 = 0;
        psVar3 = (CowU32)(param_2 + 0xc);
        param_1 = param_1 + 4u * (uint32_t)(7);
        do {
          wr16((uint32_t)(psVar3 + 2u * (uint32_t)(1)), (short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(-5))));
          iVar8 = rd32((uint32_t)param_1);
          wr16((uint32_t)psVar3, (short)iVar8);
          wr8((uint32_t)(psVar3 + 2u * (uint32_t)(2)), 0);
          if (rd16((uint32_t)(psVar3 + 2u * (uint32_t)(1))) != 0) {
            if ((short)iVar8 == 0) {
              wr16((uint32_t)psVar3, -1 - (short)iVar7);
            }
            else {
              wr8((uint32_t)(psVar3 + 2u * (uint32_t)(2)), 1);
            }
          }
          iVar7 = iVar7 + 1;
          param_1 = (CowU32)((int)param_1 + 2);
          psVar3 = psVar3 + 2u * (uint32_t)(3);
        } while (iVar7 < 8);
        psVar3 = (CowU32)(param_2 + 0xe);
        psVar5 = psVar3;
        iVar7 = 3;
        do {
          if ((((rd16((uint32_t)psVar5) != 0) && (rd16((uint32_t)(psVar5 + 2u * (uint32_t)(-1))) != 0)) && ((char)rd16((uint32_t)(psVar5 + 2u * (uint32_t)(1))) != '\0')) && (iVar7 < 10)) {
            psVar4 = psVar5 + 2u * (uint32_t)(4);
            iVar8 = 10 - iVar7;
            do {
              if ((rd16((uint32_t)psVar5) == rd16((uint32_t)(psVar4 + 2u * (uint32_t)(-1)))) && (rd16((uint32_t)(psVar5 + 2u * (uint32_t)(-1))) == rd16((uint32_t)(psVar4 + 2u * (uint32_t)(-2))))) {
                wr8((uint32_t)(psVar5 + 2u * (uint32_t)(1)), (char)rd16((uint32_t)(psVar5 + 2u * (uint32_t)(1))) + (char)rd16((uint32_t)psVar4));
                wr16((uint32_t)(psVar4 + 2u * (uint32_t)(-1)), 0);
                wr16((uint32_t)(psVar4 + 2u * (uint32_t)(-2)), 0);
                wr8((uint32_t)psVar4, '\0');
              }
              psVar4 = psVar4 + 2u * (uint32_t)(3);
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          psVar5 = psVar5 + 2u * (uint32_t)(3);
          bVar2 = iVar7 < 9;
          iVar7 = iVar7 + 1;
        } while (bVar2);
        iVar8 = 2;
        iVar7 = 7;
        do {
          if (((rd16((uint32_t)psVar3) == 0) && (rd16((uint32_t)(psVar3 + 2u * (uint32_t)(-1))) == 0)) && ((char)rd16((uint32_t)(psVar3 + 2u * (uint32_t)(1))) == '\0')) {
            iVar9 = iVar8;
            if (iVar8 < 9) {
              iVar6 = 9 - iVar8;
              iVar9 = iVar6 + iVar8;
              psVar5 = psVar3;
              do {
                wr16((uint32_t)psVar5, rd16((uint32_t)(psVar5 + 2u * (uint32_t)(3))));
                wr16((uint32_t)(psVar5 + 2u * (uint32_t)(-1)), rd16((uint32_t)(psVar5 + 2u * (uint32_t)(2))));
                wr8((uint32_t)(psVar5 + 2u * (uint32_t)(1)), (char)rd16((uint32_t)(psVar5 + 2u * (uint32_t)(4))));
                psVar5 = psVar5 + 2u * (uint32_t)(3);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            puVar1 = (CowU32)(param_2 + iVar9 * 6);
            wr16((uint32_t)(puVar1 + 2u * (uint32_t)(1)), 0);
            wr16((uint32_t)puVar1, 0);
            wr8((uint32_t)(puVar1 + 2u * (uint32_t)(2)), 0);
          }
          else {
            iVar8 = iVar8 + 1;
            psVar3 = psVar3 + 2u * (uint32_t)(3);
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx, ebp], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e2320(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    { uint32_t A = (uint32_t)(g->ecx); g->eax = (uint32_t)(rd32(A)); }   /* 0x101e2320: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101e2322: push ebp */
    g->ebp = 0u;   /* 0x101e2323: the value the entry loaded and the decompiler dropped */
    cow_lift_101e2320(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
