/* f_0x1023daa0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1023daa0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1023daa0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    CowU32 pcVar3;
    CowU32 pbVar4;
    int iVar5;
    CowU32 pbVar6;
    CowU32 pcVar7;
    _Bool bVar8;
      
      iVar5 = 0;
      do {
        iVar2 = cow_bridge_100db6e0(g, COW_IMG(COW_ADDR_LIFT_1023DAB6), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar2 != 0) && ((iVar2 == 1 || (iVar2 == 2)))) {
          pcVar3 = (CowU32)cow_bridge_100db6d0(g, COW_IMG(COW_ADDR_LIFT_1023DAD5), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->eax, 0u);
          iVar2 = 2;
          bVar8 = 1;
          pcVar7 = (CowU32)COW_IMG(COW_ADDR_LIFT_1034F2B8);
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar8 = rd8((uint32_t)pcVar3) == rd8((uint32_t)pcVar7);
            pcVar3 = pcVar3 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar8);
          if (!bVar8) {
            pbVar4 = (CowU32)cow_bridge_100db7a0(g, COW_IMG(COW_ADDR_LIFT_1023DAF0), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, 0u, 0u);
            pbVar6 = param_1;
            do {
              bVar1 = rd8((uint32_t)pbVar4);
              bVar8 = bVar1 < rd8((uint32_t)pbVar6);
              if (bVar1 != rd8((uint32_t)pbVar6)) {
    L_1023db14:
                iVar2 = (1 - (CowU32)bVar8) - (CowU32)(bVar8 != 0);
                goto L_1023db19;
              }
              if (bVar1 == 0) break;
              bVar1 = rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(1)));
              bVar8 = bVar1 < rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)));
              if (bVar1 != rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)))) goto L_1023db14;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            iVar2 = 0;
    L_1023db19:
            if (iVar2 == 0) {
              g->eax = (CowU32)(0); return;
            }
          }
        }
        iVar5 = iVar5 + 1;
        if (0xf < iVar5) {
          g->eax = (CowU32)(0xffffffff); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1023daa0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1023daa0: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1023daa1: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1023daa5: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1023daa6: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1023daa7: push edi */
    g->ebp = 0u;   /* 0x1023daa8: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_103601BC));   /* 0x1023daaa: the value the entry loaded and the decompiler dropped */
    cow_lift_1023daa0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
