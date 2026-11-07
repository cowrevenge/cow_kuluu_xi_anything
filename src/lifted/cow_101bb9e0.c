/* f_0x101bb9e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101bb9e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101bb9e0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if (rd8((uint32_t)param_1) != '\0') {
        iVar1 = rd32((uint32_t)(param_1 + 0x208));
        if (iVar1 != 0) {
          cow_bridge_101bca30(g, COW_IMG(COW_ADDR_LIFT_101BB9FD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_101BBA03), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 4u);
        }
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x208)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x209)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x20a)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x20b)), '\0');
        cow_bridge_101bc720(g, COW_IMG(COW_ADDR_LIFT_101BBA13), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)param_1, '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x224)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x225)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x226)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x227)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x228)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x229)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x22a)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x22b)), '\0');
      }
      iVar1 = rd32((uint32_t)(param_1 + 0x210));
      if (iVar1 != 0) {
        cow_bridge_101bca30(g, COW_IMG(COW_ADDR_LIFT_101BBA35), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_101BBA3B), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 4u);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x210)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x211)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x212)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x213)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x218)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x219)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x21a)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x21b)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x21c)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x21d)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x21e)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x21f)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x220)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x221)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x222)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x223)), -1);
      }
      iVar1 = rd32((uint32_t)(param_1 + 0x20c));
      if (iVar1 != 0) {
        cow_bridge_101bca30(g, COW_IMG(COW_ADDR_LIFT_101BBA67), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_101BBA6D), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 4u);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x20c)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x20d)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x20e)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x20f)), '\0');
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x214)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x215)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x216)), -1);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(0x217)), -1);
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101bb9e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101bb9e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101bb9e1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101bb9e2: push esi */
    g->esi = g->ecx;   /* 0x101bb9e3: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x101bb9e5: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101bb9e7: push edi */
    cow_lift_101bb9e0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
