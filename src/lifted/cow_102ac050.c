/* f_0x102ac050 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102ac050 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102ac050(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    int iVar4;
    if (rd32((uint32_t)(param_1 + 0x34)) == 0) {
        uVar2 = cow_bridge_102a9540(g, COW_IMG(COW_ADDR_LIFT_102AC064), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x34), uVar2);
      }
      iVar1 = rd32((uint32_t)(param_1 + 0x34));
      wr32((uint32_t)(iVar1 + 0x14), param_2);
      cow_bridge_102a9910(g, COW_IMG(COW_ADDR_LIFT_102AC080), 4u, (const CowU32[]){ iVar1, 0, param_3, 3 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102a9910(g, COW_IMG(COW_ADDR_LIFT_102AC08F), 4u, (const CowU32[]){ iVar1, 1, param_4, 3 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102a9910(g, COW_IMG(COW_ADDR_LIFT_102AC09E), 4u, (const CowU32[]){ iVar1, 2, param_5, 2 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x4c), param_6);
      if ((param_7 != (CowU32)0x0) && (0 < (int)param_6)) {
        if (rd32((uint32_t)(param_1 + 0x48)) != 0) {
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_102AC0CB), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x48)), COW_IMG(COW_ADDR_LIFT_103BE980), 0x475 }, g->ecx, g->edx, g->eax, 12u);
        }
        puVar3 = (CowU32)
                 cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_102AC0E3), 4u, (const CowU32[]){ 1, param_6 << 2, COW_IMG(COW_ADDR_LIFT_103BE980), 0x475 }, g->ecx, g->edx, g->eax, 0u);
        param_6 = param_6 & 0x3fffffff;
        wr32((uint32_t)(param_1 + 0x48), puVar3);
        for (; param_6 != 0; param_6 = param_6 - 1) {
          wr32((uint32_t)puVar3, rd32((uint32_t)param_7));
          param_7 = param_7 + 1;
          puVar3 = puVar3 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          wr8((uint32_t)puVar3, rd8((uint32_t)param_7));
          param_7 = (CowU32)((int)param_7 + 1);
          puVar3 = (CowU32)((int)puVar3 + 1);
        }
      }
      cow_bridge_1028da40(g, COW_IMG(COW_ADDR_LIFT_102AC10F), 3u, (const CowU32[]){ param_1 + 0x14, rd32((uint32_t)(iVar1 + 0x54)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102abee0(g, COW_IMG(COW_ADDR_LIFT_102AC11B), 3u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_102AC040), iVar1 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x44), rd32(COW_IMG(COW_ADDR_LIFT_109AAAC0)));
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 7 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 7 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102ac050(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102ac050: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102ac051: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102ac055: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102ac056: push esi */
    { uint32_t A = (uint32_t)(g->ebx + 0x34u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102ac057: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102ac05a: push edi */
    cow_lift_102ac050(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
