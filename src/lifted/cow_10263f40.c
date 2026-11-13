/* f_0x10263f40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10263f40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10263f40(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iStack_4;
    iStack_4 = 0;
      if (3 < param_2) {
        if (param_3 == (CowU32)0x0) {
          g->eax = (CowU32)(0x80004003); return;
        }
        uVar1 = rd32((uint32_t)param_3);
        if (uVar1 < param_2) {
          param_2 = uVar1;
        }
        if ((0x30 < param_2) || (0x30 < uVar1)) {
          g->eax = (CowU32)(0x80070057); return;
        }
        if (0xb < param_2) {
          if ((rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))) & 0xfffffe20) != 0) {
            g->eax = (CowU32)(0x80070057); return;
          }
          if ((((rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))) & 0x10) != 0) && ((rd8((uint32_t)(param_1 + 4)) & 0x10) == 0)) && (param_2 < 0x20)
             ) {
            g->eax = (CowU32)(0x80070057); return;
          }
        }
        if (((0x2b < param_2) && (rd32((uint32_t)(param_3 + 4u * (uint32_t)(10))) != 0)) && (rd32((uint32_t)(param_3 + 4u * (uint32_t)(10))) != rd32((uint32_t)(param_1 + 0xc)))) {
          g->eax = (CowU32)(0x80070057); return;
        }
        if (0x2f < param_2) {
          uVar1 = rd32((uint32_t)(param_3 + 4u * (uint32_t)(0xb)));
          if ((uVar1 != 0) && (uVar1 != rd32((uint32_t)(param_1 + 0x14)))) {
            g->eax = (CowU32)(0x80070057); return;
          }
          if ((0xf < param_2) && ((int)uVar1 < (int)rd32((uint32_t)(param_3 + 4u * (uint32_t)(3))))) {
            g->eax = (CowU32)(0x80070057); return;
          }
        }
        if ((0x27 < param_2) && ((rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))) & 8) != 0)) {
          if (rd32((uint32_t)(param_3 + 4u * (uint32_t)(9))) == 0) {
            g->eax = (CowU32)(0x80004003); return;
          }
          iStack_4 = cow_bridge_1026a660(g, COW_IMG(COW_ADDR_LIFT_10264031), 1u, (const CowU32[]){ rd32((uint32_t)(param_3 + 4u * (uint32_t)(9))) }, g->ecx, g->edx, g->eax, 0u);
          if (iStack_4 == 0) {
            g->eax = (CowU32)(0x8007000e); return;
          }
        }
        if (0x23 < param_2) {
          wr32((uint32_t)(param_1 + 0x40), rd32((uint32_t)(param_3 + 4u * (uint32_t)(8))));
        }
        if (param_2 < 0xc) {
          if (7 < param_2) {
            wr32((uint32_t)(param_1 + 8), rd32((uint32_t)(param_3 + 4u * (uint32_t)(1))));
          }
        }
        else {
          wr32((uint32_t)(param_1 + 4), rd32((uint32_t)(param_1 + 4)) & 0x20 | rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))));
          wr32((uint32_t)(param_1 + 8), rd32((uint32_t)(param_3 + 4u * (uint32_t)(1))));
        }
        if (0xf < param_2) {
          wr32((uint32_t)(param_1 + 0x10), rd32((uint32_t)(param_3 + 4u * (uint32_t)(3))));
        }
        if (0x1f < param_2) {
          wr32((uint32_t)(param_1 + 0x28), rd32((uint32_t)(param_3 + 4u * (uint32_t)(6))));
          wr32((uint32_t)(param_1 + 0x2c), rd32((uint32_t)(param_3 + 4u * (uint32_t)(7))));
        }
        if (0x17 < param_2) {
          wr32((uint32_t)(param_1 + 0x20), rd32((uint32_t)(param_3 + 4u * (uint32_t)(4))));
          wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_3 + 4u * (uint32_t)(5))));
        }
        if ((0x27 < param_2) && ((rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))) & 8) != 0)) {
          if ((int32_t)rd32((uint32_t)(param_1 + 0x3c)) != 0) {
            cow_bridge_1026a640(g, COW_IMG(COW_ADDR_LIFT_102640BB), 1u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 0x3c)) }, g->ecx, g->edx, g->eax, 0u);
          }
          wr32((uint32_t)(param_1 + 0x3c), iStack_4);
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 0x3c)) != 0) {
          wr32((uint32_t)(param_1 + 4), rd32((uint32_t)(param_1 + 4)) | 8);
          g->eax = (CowU32)(0); return;
        }
        wr32((uint32_t)(param_1 + 4), rd32((uint32_t)(param_1 + 4)) & 0xfffffff7);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ecx], ret 12.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10263f40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10263f40: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10263f41: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10263f42: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10263f46: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10263f40(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
