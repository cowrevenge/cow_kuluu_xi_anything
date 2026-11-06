/* f_0x102bddd9 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102bddd9 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102bddd9(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    int iVar3;
    int local_c;
    int local_8;
    iVar3 = 0;
      local_8 = 0;
      local_c = 0;
      if (param_1 != (CowU32)0x0) {
        iVar3 = rd32((uint32_t)param_1);
      }
      if (param_2 != (CowU32)0x0) {
        local_8 = rd32((uint32_t)param_2);
      }
      if (param_3 != (CowU32)0x0) {
        local_c = rd32((uint32_t)param_3);
      }
      uVar1 = rd32((uint32_t)(iVar3 + 0x244));
      uVar2 = rd32((uint32_t)(iVar3 + 0x24c));
      cow_bridge_102bde94(g, COW_IMG(COW_ADDR_LIFT_102BDE26), 3u, (const CowU32[]){ iVar3, local_8, local_c }, g->ecx, g->edx, param_1, 12u);
      if (local_8 != 0) {
        cow_bridge_102c379b(g, COW_IMG(COW_ADDR_LIFT_102BDE40), 4u, (const CowU32[]){ iVar3, local_8, 0x4000, 0xffffffff }, g->ecx, g->edx, param_1, 0u);
        cow_bridge_102c43c9(g, COW_IMG(COW_ADDR_LIFT_102BDE4C), 3u, (const CowU32[]){ local_8, uVar2, uVar1 }, g->ecx, g->edx, param_1, 0u);
        wr32((uint32_t)param_2, 0);
      }
      if (local_c != 0) {
        cow_bridge_102c379b(g, COW_IMG(COW_ADDR_LIFT_102BDE67), 4u, (const CowU32[]){ iVar3, local_c, 0x4000, 0xffffffff }, g->ecx, g->edx, param_1, 0u);
        cow_bridge_102c43c9(g, COW_IMG(COW_ADDR_LIFT_102BDE73), 3u, (const CowU32[]){ local_c, uVar2, uVar1 }, g->ecx, g->edx, param_1, 0u);
        wr32((uint32_t)param_3, 0);
      }
      cow_bridge_102c43c9(g, COW_IMG(COW_ADDR_LIFT_102BDE86), 3u, (const CowU32[]){ iVar3, uVar2, uVar1 }, g->ecx, g->edx, param_1, 0u);
      wr32((uint32_t)param_1, 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102bddd9(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102bddd9: push ebp */
    g->ebp = g->esp;                       /* 0x102bddda: mov ebp, esp */
    g->esp -= 0xcu;                      /* 0x102bdddc: 12 bytes of locals */
    g->eax = param_1;   /* 0x102bdddf: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102bdde2: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102bdde3: push esi */
    g->esi = 0u;   /* 0x102bdde4: the value the entry loaded and the decompiler dropped */
    cow_lift_102bddd9(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
