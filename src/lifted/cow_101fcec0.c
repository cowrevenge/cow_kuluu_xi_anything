/* f_0x101fcec0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fcec0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fcec0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, CowU32 param_10)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr8((uint32_t)(param_1 + 0x14), param_2);
      wr8((uint32_t)(param_1 + 0x17), param_10);
      wr16((uint32_t)(param_1 + 0x18), param_3);
      wr32((uint32_t)(param_1 + 0x3c), param_4);
      wr32((uint32_t)(param_1 + 0x40), param_5);
      wr32((uint32_t)(param_1 + 0x44), param_6);
      wr32((uint32_t)(param_1 + 0x48), param_7);
      wr16((uint32_t)(param_1 + 0x30), 0);
      wr16((uint32_t)(param_1 + 0x32), 0);
      wr8((uint32_t)(param_1 + 0x34), 0);
      wr8((uint32_t)(param_1 + 0x35), 0);
      wr16((uint32_t)(param_1 + 0x1a), 0x60);
      wr32((uint32_t)(param_1 + 0x4c), param_8);
      wr32((uint32_t)(param_1 + 0x50), param_9);
      wr8((uint32_t)(param_1 + 0x15), 0);
      wr8((uint32_t)(param_1 + 0x16), 0);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101FCF30), 4u, (const CowU32[]){ 272126280u, 1u, 0u, 0u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_101ec220(g, COW_IMG(COW_ADDR_LIFT_101FCF45), 4u, (const CowU32[]){ 16u, 240u, 8u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_101FCF5A), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066369C)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 10 parameter(s), cleanup 36 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 36.
   Arguments: 2 register argument(s) [ecx, edx], 8 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101fcec0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101fcec0: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101fcec4: register edx, replayed as the entry ran it */
    cow_lift_101fcec0(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 36u);
}
/* COW_ADAPTER END */
