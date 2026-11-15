/* f_0x1019e880 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1019e880 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1019e880(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    iVar2 = cow_bridge_1019dff0(g, COW_IMG(COW_ADDR_LIFT_1019E88D), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 4), g->edx, g->eax, 0u);
      if (iVar2 < 0) {
        g->eax = (CowU32)(0xffffffff); return;
      }
      iVar2 = cow_bridge_101c4b40(g, COW_IMG(COW_ADDR_LIFT_1019E8AA), 1u, (const CowU32[]){ 272083064u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 < 0) {
        g->eax = (CowU32)(0xffffffff); return;
      }
      piVar1 = (CowU32)((int)param_1 + 0x2c);
      cow_bridge_101907a0(g, COW_IMG(COW_ADDR_LIFT_1019E8DA), 3u, (const CowU32[]){ piVar1, rd8((uint32_t)((int)param_1 + 0x55)) + 1 +
                          iVar2 + (CowU32)rd8((uint32_t)((int)param_1 + 0x56)), COW_IMG(COW_ADDR_LIFT_1037A868) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x30), (CowU32)rd8((uint32_t)((int)param_1 + 0x56)) + (CowU32)rd8((uint32_t)((int)param_1 + 0x55)) + 1 + iVar2);
      iVar3 = cow_bridge_101c47b0(g, COW_IMG(COW_ADDR_LIFT_1019E908), 4u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037A878), rd32((uint32_t)piVar1) + (CowU32)rd8((uint32_t)((int)param_1 + 0x55)), iVar2, 0 }, g->ecx, g->edx, g->eax, 0u);
      if (iVar3 < iVar2) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1019E914), 1u, (const CowU32[]){ rd32((uint32_t)piVar1) }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)((int)param_1 + 0x30), 0);
        wr32((uint32_t)piVar1, 0);
        g->eax = (CowU32)(0xffffffff); return;
      }
      cow_bridge_1019ea00(g, COW_IMG(COW_ADDR_LIFT_1019E934), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1019e880(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1019e880: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1019e881: push esi */
    g->esi = g->ecx;   /* 0x1019e882: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1019e884: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x4u)); }   /* 0x1019e885: register ecx, replayed as the entry ran it */
    cow_lift_1019e880(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
