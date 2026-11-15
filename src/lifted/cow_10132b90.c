/* f_0x10132b90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10132b90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10132b90(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    short sVar3;
    int iVar4;
    sVar3 = cow_bridge_10131680(g, COW_IMG(COW_ADDR_LIFT_10132BA3), 1u, (const CowU32[]){ (((uint32_t)((short)((CowU32)param_1 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 8)) + 0x4c))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 0u);
      iVar4 = (int)sVar3;
      if (param_2 == 0) {
        g->eax = (CowU32)('\0'); return;
      }
      if (iVar4 < 0) {
        g->eax = (CowU32)('\0'); return;
      }
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663740)) + 0x60)) == (CowU32)0x0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)('\0') & 0xffu)); return;
      }
      iVar1 = rd32((uint32_t)rd32((uint32_t)((rd32(COW_IMG(COW_ADDR_LIFT_10663740)) + 0x60))));
      if (((int8_t)rd8((uint32_t)(param_2 + 2)) == (int8_t)rd8((uint32_t)(iVar4 + 0x22 + (int)param_1))) &&
         (iVar1 == (int32_t)rd32((uint32_t)((int)param_1 + iVar4 * 4 + 0x34)))) {
        param_2 = 0;
      }
      cVar2 = cow_bridge_101327d0(g, COW_IMG(COW_ADDR_LIFT_10132BFC), 4u, (const CowU32[]){ param_2, iVar4, iVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      if (cVar2 != '\0') {
        if (rd32(COW_IMG(COW_ADDR_LIFT_105783E4)) != (CowU32)0x0) {
          cow_bridge_10147000(g, COW_IMG(COW_ADDR_LIFT_10132C11), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_105783E4)), g->edx, g->eax, 0u);
        }
        cow_bridge_indirect(g, rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x4cu))))), COW_IMG(COW_ADDR_LIFT_10132C1A), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(cVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10132b90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10132b90: push esi */
    g->esi = g->ecx;   /* 0x10132b91: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10132b93: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10132b94: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x4Cu); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10132b97: register ecx, replayed as the entry ran it */
    g->ecx = g->esi;   /* 0x10132b9c: the value the entry loaded and the decompiler dropped */
    cow_lift_10132b90(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
