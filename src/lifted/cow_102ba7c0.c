/* f_0x102ba7c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102ba7c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102ba7c0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, CowU32 param_10)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 piVar2;
    int iVar3;
    char cVar4;
    CowU32 piVar5;
    CowU32 piVar6;
    int iVar7;
    int iVar8;
    int iStack_10;
    iVar1 = param_4;
      iVar3 = param_2;
      piVar2 = param_1;
      iStack_10 = param_2 - param_5;
      iVar7 = param_5 + param_2;
      param_2 = param_3 - param_6;
      iVar8 = param_6 + param_3;
      param_5 = param_4 - param_7;
      param_6 = param_7 + param_4;
      if (iStack_10 < 0) {
        iStack_10 = 0;
      }
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (param_5 < 0) {
        param_5 = 0;
      }
      param_7 = iVar7;
      if (0xe < iVar7) {
        param_7 = 0xe;
      }
      param_4 = iVar8;
      if (0xe < iVar8) {
        param_4 = 0xe;
      }
      if (0xe < param_6) {
        param_6 = 0xe;
      }
      iVar1 = param_3 + iVar1 * 0xf;
      while (piVar5 = (CowU32)cow_bridge_102ba9b0(g, COW_IMG(COW_ADDR_LIFT_102BA881), 1u, (const CowU32[]){ rd32((uint32_t)(rd32((uint32_t)piVar2) + (iVar3 + iVar1 * 0xf) * 4)) }, g->ecx, g->edx, g->eax, 0u),
            piVar5 != (CowU32)0x0) {
        wr32((uint32_t)(piVar5 + 4u * (uint32_t)(1)), rd32((uint32_t)param_9));
        for (iVar7 = iStack_10; iVar8 = param_2, iVar7 <= param_7; iVar7 = iVar7 + 1) {
          for (; iVar8 <= param_4; iVar8 = iVar8 + 1) {
            if (param_5 <= param_6) {
              param_3 = (iVar7 + (iVar8 + param_5 * 0xf) * 0xf) * 4;
              param_1 = (CowU32)((param_6 - param_5) + 1);
              do {
                for (piVar6 = (CowU32)cow_bridge_102ba9b0(g, COW_IMG(COW_ADDR_LIFT_102BA8FB), 1u, (const CowU32[]){ rd32((uint32_t)(param_3 + rd32((uint32_t)piVar2))) }, g->ecx, g->edx, g->eax, 0u);
                    piVar6 != (CowU32)0x0; piVar6 = (CowU32)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(2)))) {
                  if ((rd32((uint32_t)(piVar6 + 4u * (uint32_t)(1))) == 0) &&
                     (cVar4 = cow_bridge_102b43d0(g, COW_IMG(COW_ADDR_LIFT_102BA92A), 3u, (const CowU32[]){ rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) + rd32((uint32_t)piVar5) * 0xc, rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) + rd32((uint32_t)piVar6) * 0xc, param_8 }, g->ecx, g->edx, g->eax, 12u),
                     cVar4 != '\0')) {
                    wr32((uint32_t)(piVar6 + 4u * (uint32_t)(1)), -rd32((uint32_t)param_9));
                    wr32((uint32_t)piVar6, rd32((uint32_t)piVar5));
                    wr32((uint32_t)param_10, rd32((uint32_t)param_10) + 1);
                  }
                }
                param_3 = param_3 + 900;
                param_1 = (CowU32)((int)param_1 + -1);
              } while (param_1 != (CowU32)0x0);
            }
          }
        }
        wr32((uint32_t)param_9, rd32((uint32_t)param_9) + 1);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 10 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 16 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 10 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102ba7c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x24u));
    g->esp -= 0x10u;                      /* 0x102ba7c0: 16 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102ba7c3: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102ba7c7: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102ba7c8: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102ba7c9: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102ba7cd: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102ba7ce: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x28u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102ba7cf: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x38u); g->edx = (uint32_t)(rd32(A)); }   /* 0x102ba7d3: register edx, replayed as the entry ran it */
    g->eax = g->edi;   /* 0x102ba7d7: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x3Cu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102ba7d9: register esi, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->ecx; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x102ba7dd: register eax, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)g->edi; uint32_t r = (uint32_t)(a + b); g->ecx = (uint32_t)(r); }   /* 0x102ba7df: register ecx, replayed as the entry ran it */
    cow_lift_102ba7c0(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
