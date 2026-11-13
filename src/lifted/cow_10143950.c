/* f_0x10143950 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10143950 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10143950(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    int iVar3;
    if (param_2 != '\0') {
        uVar2 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10143967), 2u, (const CowU32[]){ 14u, 702u }, param_1, g->edx, g->eax, 0u);
        cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_10143978), 2u, (const CowU32[]){ uVar2, 1 }, g->ecx, g->edx, g->eax, 0u);
        uVar2 = cow_bridge_10143930(g, COW_IMG(COW_ADDR_LIFT_10143987), 1u, (const CowU32[]){ (((uint32_t)((short)((CowU32)(int32_t)rd32((uint32_t)(param_1 + 8)) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c))) & 0xffffu)) }, param_1, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_10141c20(g, COW_IMG(COW_ADDR_LIFT_1014398D), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
        if (((short)iVar3 == 0) || ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)) == 0)) {
          cow_bridge_1013e2f0(g, COW_IMG(COW_ADDR_LIFT_101439BE), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          cow_bridge_1013e260(g, COW_IMG(COW_ADDR_LIFT_101439B3), 4u, (const CowU32[]){ iVar3 + 0x7400, 0, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      cVar1 = cow_bridge_101420a0(g, COW_IMG(COW_ADDR_LIFT_101439C3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        cow_bridge_101420d0(g, COW_IMG(COW_ADDR_LIFT_101439CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      wr16((uint32_t)(param_1 + 0x46), rd32(COW_IMG(COW_ADDR_LIFT_10485668)));
      wr16((uint32_t)(param_1 + 0x66), rd32(COW_IMG(COW_ADDR_LIFT_1048566A)));
      wr16((uint32_t)(param_1 + 0x86), rd32(COW_IMG(COW_ADDR_LIFT_1048566C)));
      wr16((uint32_t)(param_1 + 0xa6), rd32(COW_IMG(COW_ADDR_LIFT_1048566E)));
      wr16((uint32_t)(param_1 + 0xc6), rd32(COW_IMG(COW_ADDR_LIFT_10485670)));
      wr16((uint32_t)(param_1 + 0xe6), rd32(COW_IMG(COW_ADDR_LIFT_10485672)));
      wr16((uint32_t)(param_1 + 0x106), rd32(COW_IMG(COW_ADDR_LIFT_10485674)));
      wr16((uint32_t)(param_1 + 0x126), rd32(COW_IMG(COW_ADDR_LIFT_10485676)));
      wr16((uint32_t)(param_1 + 0x146), rd32(COW_IMG(COW_ADDR_LIFT_10485664)));
      wr16((uint32_t)(param_1 + 0x166), rd32(COW_IMG(COW_ADDR_LIFT_10485666)));
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10143950(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10143950: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10143954: push esi */
    cow_lift_10143950(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
