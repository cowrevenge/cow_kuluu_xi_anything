/* f_0x102f7fe0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f7fe0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f7fe0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU8 bVar2;
    int iVar3;
    CowU32 uVar4;
    uVar1 = rd32((uint32_t)(param_1 + 0xa0));
      for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
        cow_bridge_102f7710(g, COW_IMG(COW_ADDR_LIFT_102F8005), 3u, (const CowU32[]){ param_1, rd32((uint32_t)(param_1 + 0x9c)), rd32((uint32_t)(param_1 + 0xa0)) }, g->ecx, g->edx, g->eax, 12u);
      }
      if (param_2 != 0) {
        cow_bridge_102f7710(g, COW_IMG(COW_ADDR_LIFT_102F801F), 3u, (const CowU32[]){ param_1, rd32((uint32_t)(param_1 + 0x9c)), param_2 }, g->ecx, g->edx, g->eax, 12u);
      }
      iVar3 = cow_bridge_102f772a(g, COW_IMG(COW_ADDR_LIFT_102F8028), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        bVar2 = rd8((uint32_t)(param_1 + 0x10c)) & 0x20;
        if (((bVar2 == 0) || ((rd8((uint32_t)(param_1 + 0x5d)) & 2) != 0)) &&
           ((bVar2 != 0 || ((rd8((uint32_t)(param_1 + 0x5d)) & 4) == 0)))) {
          cow_bridge_102ef267(g, COW_IMG(COW_ADDR_LIFT_102F805F), 2u, (const CowU32[]){ param_1, "CRC error" }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          cow_bridge_102ef28c(g, COW_IMG(COW_ADDR_LIFT_102F8052), 2u, (const CowU32[]){ param_1, "CRC error" }, g->ecx, g->edx, g->eax, 0u);
        }
        uVar4 = 1;
      }
      g->eax = (CowU32)(uVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f7fe0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102f7fe0: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102f7fe1: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f7fe5: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102f7fe6: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102f7fea: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0xA0u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102f7feb: register edi, replayed as the entry ran it */
    cow_lift_102f7fe0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
