/* f_0x10295740 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10295740 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10295740(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    iVar1 = cow_bridge_1028d9a0(g, COW_IMG(COW_ADDR_LIFT_1029574D), 1u, (const CowU32[]){ g->ebx }, g->ecx, g->edx, g->eax, 0u);
      if (0 < (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x2c)) + 0x1c))) {
        iVar2 = cow_bridge_10295670(g, COW_IMG(COW_ADDR_LIFT_10295766), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 4u);
        if (iVar1 != iVar2) {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10295781), 3u, (const CowU32[]){ 272316316u, 272348788u, 740u }, g->ecx, g->edx, g->eax, 0u);
          uVar3 = cow_bridge_10295670(g, COW_IMG(COW_ADDR_LIFT_10295787), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10295793), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BB8F8), iVar1, uVar3 }, g->ecx, g->edx, g->eax, 28u);
          return;
        }
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0x2c)) == 0) {
        uVar3 = cow_bridge_102a3890(g, COW_IMG(COW_ADDR_LIFT_102957AA), 2u, (const CowU32[]){ 4u, 4u }, g->ecx, g->edx, g->eax, 8u);
        wr32((uint32_t)(param_1 + 0x2c), uVar3);
      }
      cow_bridge_102a3c10(g, COW_IMG(COW_ADDR_LIFT_102957BA), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x2c)), param_2 }, g->ecx, g->edx, g->eax, 8u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10295740(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10295740: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10295741: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10295745: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10295746: push edi */
    cow_lift_10295740(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
