/* f_0x100a2a20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a2a20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a2a20(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 pcVar2;
    CowU32 pcVar3;
    for (pcVar2 = (CowU32)(param_1 + 0x70); pcVar2 < (CowU32)(param_1 + 0xf0); pcVar2 = pcVar2 + 0x20)
      {
        if (rd8((uint32_t)pcVar2) != '\0') {
          if (rd32((uint32_t)(pcVar2 + 8)) == 0) {
            if (rd8((uint32_t)(pcVar2 + 1u * (uint32_t)(3))) < '\x01') {
              pcVar3 = pcVar2;
              for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
                wr8((uint32_t)(pcVar3 + 1u * (uint32_t)(0)), '\0');
                wr8((uint32_t)(pcVar3 + 1u * (uint32_t)(1)), '\0');
                wr8((uint32_t)(pcVar3 + 1u * (uint32_t)(2)), '\0');
                wr8((uint32_t)(pcVar3 + 1u * (uint32_t)(3)), '\0');
                pcVar3 = pcVar3 + 4;
              }
            }
            else {
              cow_bridge_100a2aa0(g, COW_IMG(COW_ADDR_LIFT_100A2A66), 1u, (const CowU32[]){ pcVar2 }, g->ecx, g->edx, g->eax, 0u);
            }
          }
          else if ((rd32((uint32_t)(pcVar2 + 0xc)) == 0) &&
                  (iVar1 = cow_bridge_100dc080(g, COW_IMG(COW_ADDR_LIFT_100A2A4B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), ((int32_t)(rd32((uint32_t)(param_1 + 0x44))) < (int32_t)(iVar1)) - rd32((uint32_t)(pcVar2 + 8)))) {
            if (rd8((uint32_t)(pcVar2 + 1u * (uint32_t)(3))) < '\x01') {
              wr32((uint32_t)(param_1 + 0x34), rd32((uint32_t)(param_1 + 0x34)) + rd32((uint32_t)(param_1 + 0x3c)));
            }
            else {
              cow_bridge_100a2aa0(g, COW_IMG(COW_ADDR_LIFT_100A2A84), 1u, (const CowU32[]){ pcVar2 }, g->ecx, g->edx, g->eax, 0u);
            }
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a2a20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100a2a20: push ebx */
    g->ebx = g->ecx;   /* 0x100a2a21: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100a2a23: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a2a24: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->ebx + 0x70u)); }   /* 0x100a2a25: register esi, replayed as the entry ran it */
    { g->ebp = (uint32_t)((uint32_t)(g->ebx + 0xF0u)); }   /* 0x100a2a28: register ebp, replayed as the entry ran it */
    cow_lift_100a2a20(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
