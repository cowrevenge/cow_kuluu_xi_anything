/* f_0x101411a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101411a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101411a0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    if (((((int8_t)rd8((uint32_t)(param_1 + 0x3c)) != '\0') && (((int32_t)(-1) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x18)))))) &&
          (iVar2 = (int32_t)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103701C4) + (int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)) * 4)), -1 < iVar2))
         && (iVar2 < 8)) {
        uVar3 = (CowU32)rd16((uint32_t)(COW_IMG(COW_ADDR_LIFT_103701E8) + iVar2 * 0xc));
        if (uVar3 == 0x1d) {
          cVar1 = cow_bridge_10158470(g, COW_IMG(COW_ADDR_LIFT_101411EE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (cVar1 != '\0') {
            iVar2 = cow_bridge_101598b0(g, COW_IMG(COW_ADDR_LIFT_101411FD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if ((iVar2 != 0) && (((CowU8)rd32((uint32_t)(iVar2 + 0x13c)) & 0x40) == 0x40)) {
              cVar1 = cow_bridge_10133a40(g, COW_IMG(COW_ADDR_LIFT_10141215), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
              uVar3 = (-(CowU32)(cVar1 != '\0') & 0xfffffcf7) + 0x327;
            }
          }
        }
        uVar5 = 0;
        uVar4 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10141232), 3u, (const CowU32[]){ 0xe, uVar3, 0 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_10141241), 1u, (const CowU32[]){ uVar5 }, uVar4, g->edx, g->eax, 0u);
        wr8((uint32_t)(param_1 + 0x3c), 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, edi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101411a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101411a0: push edi */
    g->edi = g->ecx;   /* 0x101411a1: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x3Cu); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101411a3: register eax, replayed as the entry ran it */
    cow_lift_101411a0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
