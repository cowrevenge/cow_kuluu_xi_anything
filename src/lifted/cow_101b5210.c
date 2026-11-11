/* f_0x101b5210 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101b5210 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101b5210(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    wr32((uint32_t)(param_1 + 0x8c78), COW_IMG(COW_ADDR_LIFT_101B7E90));
      wr8((uint32_t)(param_1 + 0x8c80), 0);
      iVar2 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if ((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) < '\0') && ((iVar2 == 2 || (iVar2 == 3)))) {
        iVar2 = 1;
      }
      cow_bridge_101bafc0(g, COW_IMG(COW_ADDR_LIFT_101B5252), 1u, (const CowU32[]){ iVar2 + 1 }, g->ecx, g->edx, g->eax, 0u);
      cVar1 = cow_bridge_101bb7a0(g, COW_IMG(COW_ADDR_LIFT_101B5259), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 == '\0') {
        cow_bridge_101908d0(g, COW_IMG(COW_ADDR_LIFT_101B5267), 1u, (const CowU32[]){ 272090940u }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(param_1 + 0xf108), 1);
        g->eax = (CowU32)(0xffffffff); return;
      }
      cow_bridge_101abb40(g, COW_IMG(COW_ADDR_LIFT_101B5287), 1u, (const CowU32[]){ param_1 + 4 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0xf108), 2);
      wr32((uint32_t)(param_1 + 0xf10c), 0);
      wr32((uint32_t)(param_1 + 0xf110), 5);
      wr32((uint32_t)(param_1 + 0xf118), 0x78);
      wr8((uint32_t)(param_1 + 0xf11c), 1);
      wr8((uint32_t)(param_1 + 0x8c81), 0);
      wr32((uint32_t)(param_1 + 0x8c84), 0);
      wr8((uint32_t)(param_1 + 0xec2c), 0);
      wr8((uint32_t)(param_1 + 0xec2d), 0);
      wr8((uint32_t)(param_1 + 0xec2e), 0);
      wr8((uint32_t)(param_1 + 0xec2f), 0);
      wr32((uint32_t)(param_1 + 0xec30), 0);
      wr8((uint32_t)(param_1 + 0xf100), 0);
      wr8((uint32_t)(param_1 + 0xec34), 0);
      wr8((uint32_t)(param_1 + 0xef22), 0);
      wr8((uint32_t)(param_1 + 0xf11d), 0);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101b5210(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101b5210: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101b5211: push esi */
    g->esi = g->ecx;   /* 0x101b5212: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x101b5214: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101b5216: push edi */
    cow_lift_101b5210(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
