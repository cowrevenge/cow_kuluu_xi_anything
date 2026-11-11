/* f_0x102c80a9 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c80a9 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c80a9(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    if ((param_1 != 0) && (param_2 != (CowU32)0x0)) {
        if ((param_3 == 0) || (param_4 == 0)) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C80DB), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C98A8) }, g->ecx, g->edx, g->eax, 0u);
        }
        if ((0x7fffffff < param_3) || (0x7fffffff < param_4)) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C80F7), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C988C) }, g->ecx, g->edx, g->eax, 0u);
        }
        if ((((param_5 != 1) && (param_5 != 2)) && (param_5 != 4)) &&
           ((param_5 != 8 && (param_5 != 0x10)))) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C8120), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C9870) }, g->ecx, g->edx, g->eax, 0u);
        }
        if ((((int)param_6 < 0) || (param_6 == 1)) || ((param_6 == 5 || (6 < (int)param_6)))) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C8144), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C9854) }, g->ecx, g->edx, g->eax, 0u);
        }
        if (((param_6 == 3) && (8 < param_5)) ||
           (((param_6 == 2 || ((param_6 == 4 || (param_6 == 6)))) && (param_5 < 8)))) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C8171), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C9820) }, g->ecx, g->edx, g->eax, 0u);
        }
        if (1 < param_7) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C8184), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C97FC) }, g->ecx, g->edx, g->eax, 0u);
        }
        if (param_8 != 0) {
          cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C8197), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C97D8) }, g->ecx, g->edx, g->eax, 0u);
        }
        if (((rd32((uint32_t)(param_1 + 0x68)) & 0x1000) != 0) && (rd32((uint32_t)(param_1 + 0x230)) != 0)) {
          cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C81BA), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C97A4) }, g->ecx, g->edx, g->eax, 0u);
        }
        if (param_9 != 0) {
          if (((((rd8((uint32_t)(param_1 + 0x230)) & 4) == 0) || (param_9 != 0x40)) ||
              ((rd32((uint32_t)(param_1 + 0x68)) & 0x1000) != 0)) || ((param_6 != 2 && (param_6 != 6)))) {
            cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C81EE), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C9784) }, g->ecx, g->edx, g->eax, 0u);
          }
          if ((rd32((uint32_t)(param_1 + 0x68)) & 0x1000) != 0) {
            cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C8203), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C9764) }, g->ecx, g->edx, g->eax, 0u);
          }
        }
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(1)), param_4);
        wr8((uint32_t)((int)param_2 + 0x1a), (CowU8)param_8);
        wr8((uint32_t)((int)param_2 + 0x1b), (CowU8)param_9);
        wr32((uint32_t)param_2, param_3);
        wr8((uint32_t)(uint32_t)(param_2 + 4u * (uint32_t)(6)), (char)param_5);
        wr8((uint32_t)((int)param_2 + 0x19), (char)param_6);
        wr8((uint32_t)(uint32_t)(param_2 + 4u * (uint32_t)(7)), (CowU8)param_7);
        if (((char)param_6 == '\x03') || ((param_6 & 2) == 0)) {
          wr8((uint32_t)((int)param_2 + 0x1d), 1);
        }
        else {
          wr8((uint32_t)((int)param_2 + 0x1d), 3);
        }
        if ((param_6 & 4) != 0) {
          wr8((uint32_t)((int)param_2 + 0x1d), rd8((uint32_t)((int)param_2 + 0x1d)) + '\x01');
        }
        bVar1 = rd8((uint32_t)((int)param_2 + 0x1d)) * (char)param_5;
        wr8((uint32_t)((int)param_2 + 0x1e), bVar1);
        if ((int)(0x7fffffff / (uint64_t)(CowU32)((int)(bVar1 + 7) >> 3)) - 0x40U < param_3) {
          cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C8276), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C9724) }, g->ecx, 0u, (2147483647u - 64u), 0u);
          wr32((uint32_t)(param_2 + 4u * (uint32_t)(3)), 0);
        }
        else {
          wr32((uint32_t)(param_2 + 4u * (uint32_t)(3)), bVar1 * param_3 + 7 >> 3);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 9 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 8 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c80a9(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c80a9: push ebp */
    g->ebp = g->esp;                       /* 0x102c80aa: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c80ac: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c80ad: push edi */
    g->edi = param_2;   /* 0x102c80ae: the value the entry loaded and the decompiler dropped */
    cow_lift_102c80a9(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
