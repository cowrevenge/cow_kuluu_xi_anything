/* f_0x10108b00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10108b00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10108b00(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 piVar2;
    CowU16 uVar3;
    short sVar4;
    uVar3 = 0;
      sVar4 = 0x14;
      for (piVar2 = (CowU32)(param_1 + 0x14); piVar2 != (CowU32)0x0; piVar2 = (CowU32)cow_bridge_10108870(g, COW_IMG(COW_ADDR_LIFT_10108B2E), 1u, (const CowU32[]){ piVar2 }, g->ecx, g->edx, g->eax, 0u))
      {
        uVar1 = rd16((uint32_t)((int)piVar2 + 6));
        sVar4 = sVar4 + uVar1;
        if ((rd32((uint32_t)piVar2) == 0) && (uVar3 < uVar1)) {
          uVar3 = uVar1;
        }
      }
      if (sVar4 != rd16((uint32_t)(param_1 + 10))) {
        cow_bridge_10108b50(g, COW_IMG(COW_ADDR_LIFT_10108B44), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10108b00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10108b00: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10108b01: push esi */
    g->esi = g->ecx;   /* 0x10108b02: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x10108b04: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10108b06: push edi */
    g->edi = 20u;   /* 0x10108b07: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->esi + 0x14u)); }   /* 0x10108b0c: register eax, replayed as the entry ran it */
    cow_lift_10108b00(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
