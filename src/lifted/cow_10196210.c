/* f_0x10196210 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10196210 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10196210(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    iVar3 = 0x1fcc;
      do {
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar3;
        if ((int32_t)rd32((uint32_t)(iVar2 + 4)) == 0x43) {
          uVar1 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_1019622F), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        }
        else {
          uVar1 = rd32((uint32_t)(iVar2 + 0x20));
        }
        wr32((uint32_t)(iVar2 + 8), uVar1);
        if ((int32_t)rd32((uint32_t)(iVar2 + 0x24)) != 0) {
          cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_1019624D), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 4)), uVar1 }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar3 = iVar3 + 0x2c;
      } while (iVar3 < 0x2051);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10196210(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10196210: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10196211: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10196212: push edi */
    g->ebx = g->ecx;   /* 0x10196213: the value the entry loaded and the decompiler dropped */
    cow_lift_10196210(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
