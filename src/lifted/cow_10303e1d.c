/* f_0x10303e1d - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10303e1d (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10303e1d(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    int local_8;
    local_8 = (int)param_5;
      if (param_3 < (int)param_5) {
        cVar1 = cow_bridge_10303d33(g, COW_IMG(COW_ADDR_LIFT_10303E3E), 4u, (const CowU32[]){ param_1, param_2, param_3, param_5 }, param_1, g->edx, param_4, 16u);
        if (cVar1 == '\0') {
          g->eax = (CowU32)(0xffffffff); return;
        }
        param_2 = rd32((uint32_t)(param_1 + 0xc));
        param_3 = rd32((uint32_t)(param_1 + 0x18));
      }
      param_3 = param_3 - (int)param_5;
      uVar2 = param_2 >> ((CowU8)param_3 & 0x1f) & (1 << ((CowU8)param_5 & 0x1f)) - 1U;
      param_5 = (CowU32)(param_4 + 0x44 + (int)param_5 * 4);
      if (rd32((uint32_t)param_5) < (int)uVar2) {
        do {
          if (param_3 < 1) {
            cVar1 = cow_bridge_10303d33(g, COW_IMG(COW_ADDR_LIFT_10303E93), 4u, (const CowU32[]){ param_1, param_2, param_3, 1 }, g->ecx, g->edx, param_4, 16u);
            if (cVar1 == '\0') {
              g->eax = (CowU32)(0xffffffff); return;
            }
            param_2 = rd32((uint32_t)(param_1 + 0xc));
            param_3 = rd32((uint32_t)(param_1 + 0x18));
          }
          param_5 = param_5 + 1;
          param_3 = param_3 + -1;
          uVar2 = uVar2 << 1 | param_2 >> ((CowU8)param_3 & 0x1f) & 1U;
          local_8 = local_8 + 1;
        } while (rd32((uint32_t)param_5) < (int)uVar2);
      }
      wr32((uint32_t)(param_1 + 0x18), param_3);
      wr32((uint32_t)(param_1 + 0xc), param_2);
      if (local_8 < 0x11) {
        uVar2 = (CowU32)rd8((uint32_t)((rd32((uint32_t)(param_4 + 0x8c + local_8 * 4)) -
                                rd32((uint32_t)(param_4 + local_8 * 4))) + rd32((uint32_t)(param_4 + 0xd0)) + 0x11 +
                               uVar2));
      }
      else {
        wr32((uint32_t)(rd32((uint32_t)rd32((uint32_t)((param_1 + 0x1c)))) + 0x14), 0x72);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x1cu))))) + 0x4u))), COW_IMG(COW_ADDR_LIFT_10303EE2), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x1c)), 0xffffffff }, g->ecx, g->edx, param_4, 0u);
        uVar2 = 0;
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar2) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, edi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10303e1d(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10303e1d: push ebp */
    g->ebp = g->esp;                       /* 0x10303e1e: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10303e20: push ecx */
    g->eax = param_4;   /* 0x10303e21: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10303e24: push ebx */
    g->ebx = param_6;   /* 0x10303e25: the value the entry loaded and the decompiler dropped */
    cow_lift_10303e1d(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
