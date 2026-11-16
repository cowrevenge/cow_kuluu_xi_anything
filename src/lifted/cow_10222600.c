/* f_0x10222600 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10222600 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10222600(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, int32_t param_7)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    cow_bridge_102218e0(g, COW_IMG(COW_ADDR_LIFT_10222613), 2u, (const CowU32[]){ g->eax, 2u }, param_1, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x44)) < 1) {
        puVar2 = (CowU32)0x0;
      }
      else {
        puVar2 = rd32((uint32_t)((int)param_1 + 0x20));
      }
      uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1022262A), 2u, (const CowU32[]){ 12u, 43u }, g->ecx, g->edx, g->eax, 0u);
      wr8((uint32_t)(puVar2 + 4u * (uint32_t)(1)), 0);
      wr32((uint32_t)puVar2, uVar1);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x44)) < 2) {
        puVar2 = (CowU32)0x0;
      }
      else {
        puVar2 = (CowU32)((int32_t)rd32((uint32_t)((int)param_1 + 0x20)) + 8);
      }
      uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1022264E), 2u, (const CowU32[]){ 12u, 44u }, g->ecx, g->edx, g->eax, 8u);
      wr8((uint32_t)(puVar2 + 4u * (uint32_t)(1)), 0);
      wr32((uint32_t)puVar2, uVar1);
      cow_bridge_10221a80(g, COW_IMG(COW_ADDR_LIFT_10222662), 2u, (const CowU32[]){ 2u, 0u }, param_1, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x44)) < 3) {
        puVar2 = (CowU32)0x0;
      }
      else {
        puVar2 = (CowU32)((int32_t)rd32((uint32_t)((int)param_1 + 0x20)) + 0x10);
      }
      wr8((uint32_t)(puVar2 + 4u * (uint32_t)(1)), 0);
      wr32((uint32_t)puVar2, param_4);
      wr32((uint32_t)((int)param_1 + 0x68), param_5);
      wr32((uint32_t)((int)param_1 + 0x6c), param_6);
      wr32((uint32_t)((int)param_1 + 100), param_2);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 7 parameter(s), cleanup 24 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 24.
   Arguments: 1 register argument(s) [ecx], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10222600(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = param_7;   /* 0x10222600: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10222604: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10222605: push edi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x3u; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10222606: register eax, replayed as the entry ran it */
    cow_lift_10222600(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->eax = (CowU32)(param_6);   /* what eax holds at every ret of the entry */
    g->edx = (CowU32)(param_5);   /* what edx holds at every ret of the entry */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
