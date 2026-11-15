/* f_0x10257330 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10257330 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10257330(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    CowU16 extraout_var;
    CowU16 extraout_var_00;
    CowU16 extraout_var_01;
    uVar1 = cow_bridge_1000d100(g, COW_IMG(COW_ADDR_LIFT_1025733F), 1u, (const CowU32[]){ g->eax }, param_1, param_2, g->eax, 0u);
      wr16((uint32_t)(param_1 + 10), uVar1);
      uVar1 = cow_bridge_1000d100(g, COW_IMG(COW_ADDR_LIFT_1025734D), 1u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0xc))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)(param_1 + 0xc), uVar1);
      uVar1 = cow_bridge_1000d100(g, COW_IMG(COW_ADDR_LIFT_1025735B), 1u, (const CowU32[]){ (((uint32_t)(extraout_var_00) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0xe))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)(param_1 + 0xe), uVar1);
      uVar2 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_10257368), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x10)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x10), uVar2);
      uVar2 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_10257374), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x28)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x28), uVar2);
      uVar2 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_10257380), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x2c)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x2c), uVar2);
      uVar2 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_1025738C), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x14)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x14), uVar2);
      uVar2 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_10257398), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x18)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x18), uVar2);
      uVar2 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_102573A4), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x1c)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x1c), uVar2);
      uVar2 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_102573B0), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x20)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x20), uVar2);
      uVar2 = cow_bridge_1000d150(g, COW_IMG(COW_ADDR_LIFT_102573BC), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x24)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x24), uVar2);
      uVar1 = cow_bridge_1000d100(g, COW_IMG(COW_ADDR_LIFT_102573C9), 1u, (const CowU32[]){ (((uint32_t)(extraout_var_01) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x32))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 48u);
      wr16((uint32_t)(param_1 + 0x32), uVar1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10257330(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10257330: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10257331: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0xAu); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10257335: register eax, replayed as the entry ran it */
    cow_lift_10257330(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
