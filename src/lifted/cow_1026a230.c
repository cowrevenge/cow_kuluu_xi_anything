/* f_0x1026a230 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1026a230 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1026a230(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 piVar2;
    CowU32 pcVar3;
    CowU32 piVar4;
    CowU32 pcVar5;
    _Bool bVar6;
      
      iVar1 = 4;
      bVar6 = 1;
      piVar2 = param_1;
      piVar4 = param_2;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = rd32((uint32_t)piVar2) == rd32((uint32_t)piVar4);
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar6);
      if (bVar6) {
        iVar1 = 4;
        bVar6 = 1;
        piVar2 = param_1 + 4;
        piVar4 = param_2 + 4;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar6 = rd32((uint32_t)piVar2) == rd32((uint32_t)piVar4);
          piVar2 = piVar2 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar6);
        if (bVar6) {
          iVar1 = 4;
          bVar6 = 1;
          piVar2 = param_1 + 0xb;
          piVar4 = param_2 + 0xb;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar6 = rd32((uint32_t)piVar2) == rd32((uint32_t)piVar4);
            piVar2 = piVar2 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar6);
          if ((bVar6) && (iVar1 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x10))), iVar1 == rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x10))))) {
            if (iVar1 != 0) {
              bVar6 = 1;
              pcVar3 = (CowU32)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x11)));
              pcVar5 = (CowU32)rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x11)));
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar6 = rd8((uint32_t)pcVar3) == rd8((uint32_t)pcVar5);
                pcVar3 = pcVar3 + 1;
                pcVar5 = pcVar5 + 1;
              } while (bVar6);
              if (!bVar6) {
                g->eax = (CowU32)(0); return;
              }
            }
            g->eax = (CowU32)(1); return;
          }
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1026a230(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = param_2;   /* 0x1026a230: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1026a234: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1026a235: push esi */
    g->eax = g->ecx;   /* 0x1026a236: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1026a238: push edi */
    g->ecx = 4u;   /* 0x1026a239: the value the entry loaded and the decompiler dropped */
    g->edi = g->edx;   /* 0x1026a23e: the value the entry loaded and the decompiler dropped */
    g->esi = g->eax;   /* 0x1026a240: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1026a242: the value the entry loaded and the decompiler dropped */
    cow_lift_1026a230(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
