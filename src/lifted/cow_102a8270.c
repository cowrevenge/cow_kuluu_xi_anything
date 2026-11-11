/* f_0x102a8270 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a8270 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a8270(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    CowU32 uVar3;
    char cVar4;
    CowU32 uVar5;
    char cVar6;
    char cVar7;
    int iVar8;
    uVar5 = rd32(COW_IMG(COW_ADDR_LIFT_109AAAA8)) & 0xffff;
      if ((int)uVar5 < param_2) {
        param_2 = param_2 - uVar5;
        if ((short)rd32(COW_IMG(COW_ADDR_LIFT_109AAAA8)) == 3) {
          cVar1 = rd8((uint32_t)param_1);
          cVar4 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
          cVar6 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(2)));
          do {
            cVar1 = cVar1 + rd8((uint32_t)(param_1 + 1u * (uint32_t)(3)));
            param_2 = param_2 + -3;
            cVar4 = cVar4 + rd8((uint32_t)(param_1 + 1u * (uint32_t)(4)));
            wr8((uint32_t)(param_1 + 1u * (uint32_t)(3)), cVar1);
            cVar6 = cVar6 + rd8((uint32_t)(param_1 + 1u * (uint32_t)(5)));
            wr8((uint32_t)(param_1 + 1u * (uint32_t)(4)), cVar4);
            wr8((uint32_t)(param_1 + 1u * (uint32_t)(5)), cVar6);
            param_1 = param_1 + 3;
          } while (0 < param_2);
          return;
        }
        uVar3 = rd32(COW_IMG(COW_ADDR_LIFT_109AAAA8));
        if ((short)rd32(COW_IMG(COW_ADDR_LIFT_109AAAA8)) == 4) {
          cVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(2)));
          cVar4 = rd8((uint32_t)param_1);
          cVar6 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
          cVar7 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(3)));
          do {
            cVar4 = cVar4 + rd8((uint32_t)(param_1 + 1u * (uint32_t)(4)));
            param_2 = param_2 + -4;
            cVar6 = cVar6 + rd8((uint32_t)(param_1 + 1u * (uint32_t)(5)));
            wr8((uint32_t)(param_1 + 1u * (uint32_t)(4)), cVar4);
            cVar1 = cVar1 + rd8((uint32_t)(param_1 + 1u * (uint32_t)(6)));
            wr8((uint32_t)(param_1 + 1u * (uint32_t)(5)), cVar6);
            wr8((uint32_t)(param_1 + 1u * (uint32_t)(6)), cVar1);
            cVar7 = cVar7 + rd8((uint32_t)(param_1 + 1u * (uint32_t)(7)));
            wr8((uint32_t)(param_1 + 1u * (uint32_t)(7)), cVar7);
            param_1 = param_1 + 4;
          } while (0 < param_2);
          return;
        }
        do {
          if (uVar5 != 0) {
            if (uVar5 != 1) {
              if ((uVar5 != 2) && (iVar8 = uVar5 - 4, 0 < iVar8)) {
                do {
                  cVar1 = rd8((uint32_t)param_1);
                  pcVar2 = param_1 + (uVar3 & 0xffff);
                  param_1 = param_1 + 1;
                  wr8((uint32_t)pcVar2, rd8((uint32_t)pcVar2) + cVar1);
                  iVar8 = iVar8 + -1;
                  uVar3 = rd32(COW_IMG(COW_ADDR_LIFT_109AAAA8));
                } while (iVar8 != 0);
              }
              cVar1 = rd8((uint32_t)param_1);
              pcVar2 = param_1 + (uVar3 & 0xffff);
              param_1 = param_1 + 1;
              wr8((uint32_t)pcVar2, rd8((uint32_t)pcVar2) + cVar1);
              uVar3 = rd32(COW_IMG(COW_ADDR_LIFT_109AAAA8));
            }
            cVar1 = rd8((uint32_t)param_1);
            pcVar2 = param_1 + (uVar3 & 0xffff);
            param_1 = param_1 + 1;
            wr8((uint32_t)pcVar2, rd8((uint32_t)pcVar2) + cVar1);
            uVar3 = rd32(COW_IMG(COW_ADDR_LIFT_109AAAA8));
          }
          uVar5 = uVar3 & 0xffff;
          param_2 = param_2 - uVar5;
        } while (0 < param_2);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a8270(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_109AAAA8));   /* 0x102a8270: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102a8276: push ebx */
    g->edx = g->ecx;   /* 0x102a8277: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a8279: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102a827a: register esi, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->edx = (uint32_t)(r); }   /* 0x102a827e: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_102a8270(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
