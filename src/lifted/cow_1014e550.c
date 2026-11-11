/* f_0x1014e550 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014e550 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014e550(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    short sVar3;
    _Bool bVar2;
      
      if (rd16((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x56)) < 1) {
        sVar1 = rd16((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x4c));
        bVar2 = 0;
        switch(param_2) {
        case 1:
          if ((int)rd16((uint32_t)(param_1 + 0x30)) < rd32((uint32_t)(param_1 + 0x24)) + -1) {
            sVar3 = rd16((uint32_t)(param_1 + 0x30)) + 1;
            wr16((uint32_t)(param_1 + 0x30), sVar3);
            bVar2 = 1;
            if (2 < (int)sVar3 - (int)rd16((uint32_t)(param_1 + 0x32))) {
              wr16((uint32_t)(param_1 + 0x32), rd16((uint32_t)(param_1 + 0x32)) + 1);
            }
          }
          break;
        case 2:
          if (((int16_t)(0) < (int16_t)(rd16((uint32_t)(param_1 + 0x30))))) {
            sVar3 = rd16((uint32_t)(param_1 + 0x30)) + -1;
            wr16((uint32_t)(param_1 + 0x30), sVar3);
            if (((int16_t)(sVar3) < (int16_t)(rd16((uint32_t)(param_1 + 0x32))))) {
              wr16((uint32_t)(param_1 + 0x32), sVar3);
            }
            bVar2 = 1;
          }
          break;
        case 5:
          cow_bridge_1014e1d0(g, COW_IMG(COW_ADDR_LIFT_1014E5CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          break;
        case 6:
          wr16((uint32_t)(param_1 + 0x548), 0xff);
          cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_1014E5DC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        if (rd32((uint32_t)(param_1 + 0x24)) < (int)sVar1) {
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1014E5F2), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x24)), 0 }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        if (bVar2) {
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1014E600), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014e550(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1014e550: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014e551: push esi */
    g->esi = g->ecx;   /* 0x1014e552: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1014e554: register eax, replayed as the entry ran it */
    cow_lift_1014e550(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
