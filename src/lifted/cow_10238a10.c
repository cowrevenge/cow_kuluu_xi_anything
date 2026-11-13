/* f_0x10238a10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10238a10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10238a10(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) != 1) {
        if (param_2 == 5) {
          piVar1 = (CowU32)cow_bridge_1023da70(g, COW_IMG(COW_ADDR_LIFT_10238A6F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((piVar1 != (CowU32)0x0) && (rd32((uint32_t)piVar1) < 0)) {
            wr32((uint32_t)(param_1 + 0x18), 1);
            g->eax = (CowU32)(1); return;
          }
          wr32((uint32_t)(param_1 + 0x3c), 1);
          wr32((uint32_t)(param_1 + 0x14), 1);
          cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10238A8D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        else if (param_2 == 6) {
          if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668FC4)) + 8)) != 0) {
            cow_bridge_1011a400(g, COW_IMG(COW_ADDR_LIFT_10238A3C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_101192b0(g, COW_IMG(COW_ADDR_LIFT_10238A4E), 2u, (const CowU32[]){ 2u, 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          wr32((uint32_t)(param_1 + 0x3c), 0xffffffff);
          wr32((uint32_t)(param_1 + 0x14), 1);
          cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10238A5D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(1); return;
        }
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10238a10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10238a10: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10238a11: push esi */
    g->esi = g->ecx;   /* 0x10238a12: the value the entry loaded and the decompiler dropped */
    g->ebx = 1u;   /* 0x10238a14: the value the entry loaded and the decompiler dropped */
    cow_lift_10238a10(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
