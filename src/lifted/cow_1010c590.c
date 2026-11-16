/* f_0x1010c590 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010c590 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010c590(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU16 uVar3;
    CowU32 uVar2;
    CowU16 extraout_var;
    CowU32 pcVar4;
    _Bool bVar5;
      
      cow_bridge_101094d0(g, COW_IMG(COW_ADDR_LIFT_1010C5A4), 1u, (const CowU32[]){ g->ebx }, (CowU32)((int)param_1 + 0x1010), param_2, g->eax, 0u);
      uVar2 = g->edx;
      if ((int32_t)rd32((uint32_t)param_1) != 0) {
        while( 1 ) {
          uVar3 = (CowU16)((CowU32)uVar2 >> 0x10);
          iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 0x1008));
          bVar5 = 0;
          if (iVar1 == 0) {
            iVar1 = cow_bridge_103121bf(g, COW_IMG(COW_ADDR_LIFT_1010C5C9), 4u, (const CowU32[]){ (int)param_1 + 4, 1, 0x1000, rd32((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 16u);
            wr32((uint32_t)((int)param_1 + 0x1008), iVar1);
            wr32((uint32_t)((int)param_1 + 0x1004), (int)param_1 + 4);
            bVar5 = iVar1 == 0;
            uVar3 = extraout_var;
          }
          if (bVar5 || iVar1 < 0) break;
          if (((int8_t)rd8((uint32_t)((int)param_1 + 0x100c)) != '\0') && (rd8((uint32_t)rd32((uint32_t)(((int)param_1 + 0x1004)))) == '\n')) {
            wr8((uint32_t)((int)param_1 + 0x100c), 0);
            wr8((uint32_t)((int)param_1 + 0x1004), rd8((uint32_t)((int)param_1 + 0x1004)) + 1);
            wr32((uint32_t)((int)param_1 + 0x1008), (int32_t)rd32((uint32_t)((int)param_1 + 0x1008)) + -1);
          }
          pcVar4 = rd8((uint32_t)((int)param_1 + 0x1004));
          for (iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 0x1008)); 0 < iVar1; iVar1 = iVar1 + -1) {
            if (rd8((uint32_t)pcVar4) == '\r') {
    L_1010c66d:
              wr8((uint32_t)pcVar4, '\0');
              if ((iVar1 < 1) || (rd8((uint32_t)(pcVar4 + 1u * (uint32_t)(1))) != '\n')) {
                wr8((uint32_t)((int)param_1 + 0x100c), 1);
              }
              else {
                pcVar4 = pcVar4 + 1;
                iVar1 = iVar1 + -1;
              }
    L_1010c684:
              wr8((uint32_t)pcVar4, '\0');
              cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_1010C69A), 1u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 0x1004)) }, g->ecx, g->edx, g->eax, 0u);
              wr16((uint32_t)((int)param_1 + 0x100e), (int16_t)rd16((uint32_t)((int)param_1 + 0x100e)) + 1);
              wr8((uint32_t)((int)param_1 + 0x1004), pcVar4 + 1);
              wr32((uint32_t)((int)param_1 + 0x1008), iVar1 + -1);
              g->eax = (CowU32)((int)param_1 + 0x1010); return;
            }
            if (rd8((uint32_t)pcVar4) == '\n') {
              if (rd8((uint32_t)pcVar4) != '\r') goto L_1010c684;
              goto L_1010c66d;
            }
            pcVar4 = pcVar4 + 1;
          }
          cow_bridge_10109340(g, COW_IMG(COW_ADDR_LIFT_1010C63F), 2u, (const CowU32[]){ rd8((uint32_t)((int)param_1 + 0x1004)), (((uint32_t)(uVar3) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)((int)param_1 + 0x1008))) & 0xffffu)) }, (CowU32)((int)param_1 + 0x1010), g->edx, g->eax, 0u);
          wr32((uint32_t)((int)param_1 + 0x1008), 0);
          wr32((uint32_t)((int)param_1 + 0x1004), (int)param_1 + 4);
          uVar2 = g->edx;
        }
        if ((((int32_t)rd32((uint32_t)((int)param_1 + 0x1014)) != 0) &&
            (pcVar4 = rd8((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 0x1014)) + 4)), pcVar4 != (CowU32)0x0)) &&
           (rd8((uint32_t)pcVar4) != '\0')) {
          wr16((uint32_t)((int)param_1 + 0x100e), (int16_t)rd16((uint32_t)((int)param_1 + 0x100e)) + 1);
          g->eax = (CowU32)((int)param_1 + 0x1010); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010c590(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010c590: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010c591: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010c592: push esi */
    g->esi = g->ecx;   /* 0x1010c593: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1010c595: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010c597: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x1010u)); }   /* 0x1010c598: register ecx, replayed as the entry ran it */
    cow_lift_1010c590(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
