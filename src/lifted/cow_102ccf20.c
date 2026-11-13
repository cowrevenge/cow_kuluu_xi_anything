/* f_0x102ccf20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102ccf20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102ccf20(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 piVar2;
    int iVar3;
    int iVar4;
    iVar3 = param_2;
      cVar1 = -0x60;
      if ((int32_t)rd32((uint32_t)(param_2 + 0x2d64)) != 0) {
        wr8((uint32_t)((int)param_3 + (int32_t)rd32((uint32_t)(param_1 + 0xb58))), ((int8_t)rd8((uint32_t)(param_1 + 0xb88)) * '\x04' + (int8_t)rd8((uint32_t)(param_1 + 0xb68))) * '\x04' +
             (int8_t)rd8((uint32_t)(param_1 + 0xb6c)));
        param_3 = (CowU32)((int)param_3 + 1);
        cVar1 = ((char)rd32((uint32_t)(param_1 + 0xb74)) +
                (char)rd32((uint32_t)(param_1 + 0xb70)) * '\x04') * '\x10' + '\f';
      }
      iVar4 = (int)param_3 * 8 + 8;
      param_2 = 0;
      wr8((uint32_t)((int)param_3 + (int32_t)rd32((uint32_t)(param_1 + 0xb58))), (int8_t)rd8((uint32_t)(param_1 + 0x104)) + cVar1 + -1);
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x104))))) {
        param_3 = (CowU32)(iVar3 + 0x2af0);
        do {
          cow_bridge_102cd100(g, COW_IMG(COW_ADDR_LIFT_102CCFC8), 4u, (const CowU32[]){ rd32((uint32_t)param_3), 3, rd32((uint32_t)(param_1 + 0xb58)), iVar4 }, g->ecx, g->edx, 160u, 0u);
          iVar4 = iVar4 + 3;
          iVar3 = 0;
          if (0 < rd32((uint32_t)param_3)) {
            piVar2 = param_3 + 4u * (uint32_t)(-0x32);
            do {
              cow_bridge_102cd100(g, COW_IMG(COW_ADDR_LIFT_102CCFF6), 4u, (const CowU32[]){ rd32((uint32_t)(piVar2 + 4u * (uint32_t)(8))) * 0x20 + rd32((uint32_t)piVar2), 9, rd32((uint32_t)(param_1 + 0xb58)), iVar4 }, g->ecx, g->edx, 160u, 0u);
              iVar4 = iVar4 + 9;
              iVar3 = iVar3 + 1;
              piVar2 = piVar2 + 4u * (uint32_t)(1);
            } while (iVar3 < rd32((uint32_t)param_3));
          }
          param_2 = param_2 + 1;
          param_3 = param_3 + 4u * (uint32_t)(0x33);
        } while (((int32_t)(param_2) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x104)))));
      }
      cow_bridge_102cd100(g, COW_IMG(COW_ADDR_LIFT_102CD03F), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x10c)), 5, rd32((uint32_t)(param_1 + 0xb58)), iVar4 }, g->ecx, g->edx, 160u, 0u);
      iVar4 = iVar4 + 5;
      if ((int32_t)rd32((uint32_t)(param_1 + 0x10c)) != 0) {
        iVar4 = cow_bridge_102cd140(g, COW_IMG(COW_ADDR_LIFT_102CD056), 2u, (const CowU32[]){ param_1, iVar4 }, g->ecx, g->edx, 160u, 8u);
      }
      cow_bridge_102cd100(g, COW_IMG(COW_ADDR_LIFT_102CD075), 4u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 0x100)) * 2 + -2, 6, rd32((uint32_t)(param_1 + 0xb58)), iVar4 }, g->ecx, g->edx, 160u, 0u);
      iVar4 = iVar4 + 6;
      iVar3 = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x100))))) {
        do {
          cow_bridge_102cd100(g, COW_IMG(COW_ADDR_LIFT_102CD09A), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + iVar3 * 4)), 3, rd32((uint32_t)(param_1 + 0xb58)), iVar4 }, g->ecx, g->edx, 160u, 0u);
          iVar4 = iVar4 + 3;
          iVar3 = iVar3 + 1;
        } while (((int32_t)(iVar3) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x100)))));
      }
      iVar3 = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x100))))) {
        do {
          if ((int32_t)rd32((uint32_t)(param_1 + iVar3 * 4)) != 0) {
            cow_bridge_102cd100(g, COW_IMG(COW_ADDR_LIFT_102CD0D4), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x80 + iVar3 * 4)), 6, rd32((uint32_t)(param_1 + 0xb58)), iVar4 }, g->ecx, g->edx, 160u, 16u);
            iVar4 = iVar4 + 6;
          }
          iVar3 = iVar3 + 1;
        } while (((int32_t)(iVar3) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x100)))));
      }
      cow_bridge_indirect(g, rd32((uint32_t)((param_1 + 0x6778u))), COW_IMG(COW_ADDR_LIFT_102CD0ED), 2u, (const CowU32[]){ param_1, iVar4 }, g->ecx, g->edx, 160u, 8u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102ccf20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102ccf20: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102ccf21: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102ccf22: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102ccf26: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102ccf27: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102ccf2b: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x2D64u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102ccf2c: register ecx, replayed as the entry ran it */
    g->eax = 160u;   /* 0x102ccf32: the value the entry loaded and the decompiler dropped */
    cow_lift_102ccf20(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
