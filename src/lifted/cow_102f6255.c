/* f_0x102f6255 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f6255 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f6255(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 piVar2;
    int iVar3;
    int iVar4;
    int local_8;
    iVar1 = rd32((uint32_t)(param_1 + 4));
      iVar4 = 0;
      iVar3 = 0;
      for (piVar2 = rd32((uint32_t)(iVar1 + 0x40)); piVar2 != (CowU32)0x0; piVar2 = (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(9)))) {
        if (rd32((uint32_t)piVar2) == 0) {
          iVar4 = iVar4 + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) * rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2)));
          iVar3 = iVar3 + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) * rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2)));
        }
      }
      for (piVar2 = rd32((uint32_t)(iVar1 + 0x44)); piVar2 != (CowU32)0x0; piVar2 = (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(9)))) {
        if (rd32((uint32_t)piVar2) == 0) {
          iVar4 = iVar4 + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) * rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) * 0x80;
          iVar3 = iVar3 + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) * rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) * 0x80;
        }
      }
      if (0 < iVar4) {
        local_8 = cow_bridge_103028f7(g, COW_IMG(COW_ADDR_LIFT_102F62C9), 4u, (const CowU32[]){ param_1, iVar4, iVar3, rd32((uint32_t)(iVar1 + 0x48)) }, 0u, 0u, param_2, 16u);
        if (local_8 < iVar3) {
          local_8 = local_8 / iVar4;
          if (local_8 < 1) {
            local_8 = 1;
          }
        }
        else {
          local_8 = 1000000000;
        }
        for (piVar2 = rd32((uint32_t)(iVar1 + 0x40)); piVar2 != (CowU32)0x0; piVar2 = (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(9)))) {
          if (rd32((uint32_t)piVar2) == 0) {
            iVar3 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1)));
            if (local_8 < (int)((iVar3 - 1U) / (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) + 1)) {
              wr32((uint32_t)(piVar2 + 4u * (uint32_t)(4)), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) * local_8);
              cow_bridge_103028fc(g, COW_IMG(COW_ADDR_LIFT_102F6326), 3u, (const CowU32[]){ param_1, piVar2 + 10, rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) * iVar3 }, 0u, 0u, param_2, 12u);
              wr8((uint32_t)((int)piVar2 + 0x22), 1);
            }
            else {
              wr32((uint32_t)(piVar2 + 4u * (uint32_t)(4)), iVar3);
            }
            iVar3 = cow_bridge_102f6063(g, COW_IMG(COW_ADDR_LIFT_102F633D), 4u, (const CowU32[]){ param_1, 1, rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(4))) }, 0u, 0u, param_2, 0u);
            wr32((uint32_t)piVar2, iVar3);
            iVar3 = rd32((uint32_t)(iVar1 + 0x4c));
            wr32((uint32_t)(piVar2 + 4u * (uint32_t)(6)), 0);
            wr32((uint32_t)(piVar2 + 4u * (uint32_t)(7)), 0);
            wr8((uint32_t)((int)piVar2 + 0x21), 0);
            wr32((uint32_t)(piVar2 + 4u * (uint32_t)(5)), iVar3);
          }
        }
        for (piVar2 = rd32((uint32_t)(iVar1 + 0x44)); piVar2 != (CowU32)0x0; piVar2 = (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(9)))) {
          if (rd32((uint32_t)piVar2) == 0) {
            iVar3 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1)));
            if (local_8 < (int)((iVar3 - 1U) / (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) + 1)) {
              wr32((uint32_t)(piVar2 + 4u * (uint32_t)(4)), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) * local_8);
              cow_bridge_103028fc(g, COW_IMG(COW_ADDR_LIFT_102F639A), 3u, (const CowU32[]){ param_1, piVar2 + 10, rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) * iVar3 * 0x80 }, 0u, 0u, param_2, 12u);
              wr8((uint32_t)((int)piVar2 + 0x22), 1);
            }
            else {
              wr32((uint32_t)(piVar2 + 4u * (uint32_t)(4)), iVar3);
            }
            iVar3 = cow_bridge_102f60f5(g, COW_IMG(COW_ADDR_LIFT_102F63B1), 4u, (const CowU32[]){ param_1, 1, rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(4))) }, 0u, 0u, param_2, 0u);
            wr32((uint32_t)piVar2, iVar3);
            iVar3 = rd32((uint32_t)(iVar1 + 0x4c));
            wr32((uint32_t)(piVar2 + 4u * (uint32_t)(6)), 0);
            wr32((uint32_t)(piVar2 + 4u * (uint32_t)(7)), 0);
            wr8((uint32_t)((int)piVar2 + 0x21), 0);
            wr32((uint32_t)(piVar2 + 4u * (uint32_t)(5)), iVar3);
          }
        }
      }
      return;
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
void cow_adapter_102f6255(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102f6255: push ebp */
    g->ebp = g->esp;                       /* 0x102f6256: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102f6258: push ecx */
    g->eax = param_2;   /* 0x102f6259: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102f625c: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f625d: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102f625e: push edi */
    cow_lift_102f6255(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
