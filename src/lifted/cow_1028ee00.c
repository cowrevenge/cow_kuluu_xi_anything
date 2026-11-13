/* f_0x1028ee00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028ee00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1028ee00(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, int32_t param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    iVar2 = param_1;
      iVar1 = param_5 + 1;
      if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44))) < (int32_t)(iVar1))) {
        uVar3 = cow_bridge_10275eb0(g, COW_IMG(COW_ADDR_LIFT_1028EE33), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x48)), iVar1 * 0x2c, COW_IMG(COW_ADDR_LIFT_103BA694), 0x1d4 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x48), uVar3);
        param_1 = (int32_t)rd32((uint32_t)(param_1 + 0x44));
        if (param_1 < iVar1) {
          iVar5 = param_1 * 0x2c;
          param_1 = iVar1 - param_1;
          do {
            cow_bridge_1028efd0(g, COW_IMG(COW_ADDR_LIFT_1028EE5C), 1u, (const CowU32[]){ (int32_t)rd32((uint32_t)(iVar2 + 0x48)) + iVar5 }, g->ecx, g->edx, g->eax, 0u);
            iVar5 = iVar5 + 0x2c;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
        }
        wr32((uint32_t)(iVar2 + 0x44), iVar1);
      }
      iVar6 = param_5 * 0x2c;
      iVar1 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 4 + iVar6));
      wr32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 4 + iVar6), iVar1 + 1);
      uVar3 = cow_bridge_10275eb0(g, COW_IMG(COW_ADDR_LIFT_1028EEAE), 4u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)), (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 4 + iVar6)) * 0x90, COW_IMG(COW_ADDR_LIFT_103BA694), 0x1dc }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6), uVar3);
      uVar3 = cow_bridge_10275eb0(g, COW_IMG(COW_ADDR_LIFT_1028EED6), 4u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + iVar6 + 0x24)), (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 4 + iVar6)) << 2, COW_IMG(COW_ADDR_LIFT_103BA694), 0x1dd }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x24 + iVar6), uVar3);
      iVar5 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 4 + iVar6));
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x24 + iVar6)) + -4 + iVar5 * 4), iVar5 + -1);
      iVar5 = iVar1 * 0x90;
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 0xc + iVar5), 0);
      wr32((uint32_t)(iVar5 + (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6))), param_2);
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 0x10 + iVar5), 0);
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 4 + iVar5), param_3);
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 8 + iVar5), 0);
      wr8((uint32_t)(iVar5 + 0x1c + (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6))), 0xff);
      wr8((uint32_t)(iVar5 + 0x1d + (int32_t)rd32((uint32_t)(iVar6 + 0x28 + (int32_t)rd32((uint32_t)(iVar2 + 0x48))))), 0xff);
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 0x18 + iVar5), param_4);
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 0x20 + iVar5), 0);
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 0x44 + iVar5), 0);
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 0x14 + iVar5), 0);
      iVar5 = iVar5 + 0x68;
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 0x20 + iVar5), 0);
      wr32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6)) + 0x24 + iVar5), 0);
      iVar4 = 8;
      do {
        iVar4 = iVar4 + -1;
        wr32((uint32_t)(iVar5 + (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x48)) + 0x28 + iVar6))), 0xffffffff);
        iVar5 = iVar5 + 4;
      } while (iVar4 != 0);
      g->eax = (CowU32)(param_5 * 0x10000 + iVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1028ee00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1028ee00: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1028ee01: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1028ee02: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x20u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1028ee03: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1028ee07: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1028ee08: register edi, replayed as the entry ran it */
    { g->ebp = (uint32_t)((uint32_t)(g->esi + 0x1u)); }   /* 0x1028ee0c: register ebp, replayed as the entry ran it */
    cow_lift_1028ee00(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
