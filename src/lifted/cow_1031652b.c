/* f_0x1031652b - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1031652b (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1031652b(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 local_8;
    iVar2 = param_1;
      local_8 = rd32((uint32_t)(param_1 + 0xc));
      iVar1 = rd32((uint32_t)(param_1 + 0x10));
      uVar3 = local_8;
      param_1 = local_8;
      if (-1 < param_2) {
        do {
          if (uVar3 == 0xffffffff) {
            cow_bridge_10321895(g, COW_IMG(COW_ADDR_LIFT_10316553), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          uVar3 = uVar3 - 1;
          if (((((int32_t)(rd32((uint32_t)(iVar1 + 4 + uVar3 * 0x14))) < (int32_t)(param_3))) &&
              (((int32_t)(param_3) <= (int32_t)(rd32((uint32_t)(iVar1 + uVar3 * 0x14 + 8)))))) || (uVar3 == 0xffffffff)) {
            param_2 = param_2 + -1;
            local_8 = param_1;
            param_1 = uVar3;
          }
        } while (-1 < param_2);
      }
      uVar3 = uVar3 + 1;
      wr32((uint32_t)param_4, uVar3);
      wr32((uint32_t)param_5, local_8);
      if ((rd32((uint32_t)(iVar2 + 0xc)) < local_8) || (local_8 < uVar3)) {
        cow_bridge_10321895(g, COW_IMG(COW_ADDR_LIFT_1031659B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(iVar1 + uVar3 * 0x14); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1031652b(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1031652b: push ebp */
    g->ebp = g->esp;                       /* 0x1031652c: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1031652e: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1031652f: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10316530: push esi */
    cow_lift_1031652b(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
