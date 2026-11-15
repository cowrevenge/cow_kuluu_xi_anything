/* f_0x102a2c20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a2c20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a2c20(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x40));
      cow_bridge_1028f610(g, COW_IMG(COW_ADDR_LIFT_102A2C44), 3u, (const CowU32[]){ param_1, rd32((uint32_t)(iVar1 + param_3 * 0x30)), 1 }, g->ecx, g->edx, g->eax, 0u);
      if (param_4 == 1) {
        cow_bridge_102a2a70(g, COW_IMG(COW_ADDR_LIFT_102A2C5C), 3u, (const CowU32[]){ param_1, param_3, param_2 }, g->ecx, g->edx, g->eax, 12u);
      }
      else if (param_4 == 0) {
        cow_bridge_102a2a50(g, COW_IMG(COW_ADDR_LIFT_102A2C6C), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
      }
      cow_bridge_10283010(g, COW_IMG(COW_ADDR_LIFT_102A2C74), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283f90(g, COW_IMG(COW_ADDR_LIFT_102A2C7B), 1u, (const CowU32[]){ 20u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10282490(g, COW_IMG(COW_ADDR_LIFT_102A2C82), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283e20(g, COW_IMG(COW_ADDR_LIFT_102A2C8B), 1u, (const CowU32[]){ rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102972f0(g, COW_IMG(COW_ADDR_LIFT_102A2C9F), 1u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24)) + (int32_t)rd32((uint32_t)(iVar1 + param_3 * 0x30)) * 0xc)) + 0x24)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10284b40(g, COW_IMG(COW_ADDR_LIFT_102A2CAB), 2u, (const CowU32[]){ 536870912u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285870(g, COW_IMG(COW_ADDR_LIFT_102A2CB6), 2u, (const CowU32[]){ rd32((uint32_t)param_2), 4 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10281c40(g, COW_IMG(COW_ADDR_LIFT_102A2CBD), 1u, (const CowU32[]){ 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283240(g, COW_IMG(COW_ADDR_LIFT_102A2CC2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283f90(g, COW_IMG(COW_ADDR_LIFT_102A2CC9), 1u, (const CowU32[]){ 0xffffffec }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10282490(g, COW_IMG(COW_ADDR_LIFT_102A2CD0), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 44u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a2c20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102a2c20: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102a2c21: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a2c22: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102a2c23: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102a2c27: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x1Cu); g->edi = (uint32_t)(rd32(A)); }   /* 0x102a2c28: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x40u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102a2c2c: register ecx, replayed as the entry ran it */
    cow_lift_102a2c20(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
