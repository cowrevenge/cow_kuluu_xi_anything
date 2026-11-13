/* f_0x1026a570 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1026a570 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1026a570(Guest* g, CowU32 param_1, CowU32 param_2)
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
      piVar2 = param_2;
      piVar4 = COW_IMG(COW_ADDR_LIFT_1034A118);
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = rd32((uint32_t)piVar2) == rd32((uint32_t)piVar4);
        piVar2 = piVar2 + 4u * (uint32_t)(1);
        piVar4 = piVar4 + 4u * (uint32_t)(1);
      } while (bVar6);
      if (!bVar6) {
        iVar1 = 4;
        bVar6 = 1;
        piVar2 = param_1;
        piVar4 = param_2;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar6 = rd32((uint32_t)piVar2) == rd32((uint32_t)piVar4);
          piVar2 = piVar2 + 4u * (uint32_t)(1);
          piVar4 = piVar4 + 4u * (uint32_t)(1);
        } while (bVar6);
        if (!bVar6) {
          g->eax = (CowU32)(0); return;
        }
      }
      iVar1 = 4;
      bVar6 = 1;
      piVar2 = param_2 + 4u * (uint32_t)(4);
      piVar4 = COW_IMG(COW_ADDR_LIFT_1034A118);
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = rd32((uint32_t)piVar2) == rd32((uint32_t)piVar4);
        piVar2 = piVar2 + 4u * (uint32_t)(1);
        piVar4 = piVar4 + 4u * (uint32_t)(1);
      } while (bVar6);
      if (!bVar6) {
        iVar1 = 4;
        bVar6 = 1;
        piVar2 = param_1 + 4u * (uint32_t)(4);
        piVar4 = param_2 + 4u * (uint32_t)(4);
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar6 = rd32((uint32_t)piVar2) == rd32((uint32_t)piVar4);
          piVar2 = piVar2 + 4u * (uint32_t)(1);
          piVar4 = piVar4 + 4u * (uint32_t)(1);
        } while (bVar6);
        if (!bVar6) {
          g->eax = (CowU32)(0); return;
        }
      }
      iVar1 = 4;
      bVar6 = 1;
      piVar2 = param_2 + 4u * (uint32_t)(0xb);
      piVar4 = COW_IMG(COW_ADDR_LIFT_1034A118);
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = rd32((uint32_t)piVar2) == rd32((uint32_t)piVar4);
        piVar2 = piVar2 + 4u * (uint32_t)(1);
        piVar4 = piVar4 + 4u * (uint32_t)(1);
      } while (bVar6);
      if (!bVar6) {
        iVar1 = 4;
        bVar6 = 1;
        piVar2 = param_1 + 4u * (uint32_t)(0xb);
        piVar4 = param_2 + 4u * (uint32_t)(0xb);
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar6 = rd32((uint32_t)piVar2) == rd32((uint32_t)piVar4);
          piVar2 = piVar2 + 4u * (uint32_t)(1);
          piVar4 = piVar4 + 4u * (uint32_t)(1);
        } while (bVar6);
        if (!bVar6) {
          g->eax = (CowU32)(0); return;
        }
        iVar1 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)));
        if (iVar1 != rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x10)))) {
          g->eax = (CowU32)(0); return;
        }
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
      }
      g->eax = (CowU32)(1); return;
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
void cow_adapter_1026a570(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = param_2;   /* 0x1026a570: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1026a574: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1026a575: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1026a576: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1026a577: push edi */
    g->edx = g->ecx;   /* 0x1026a578: the value the entry loaded and the decompiler dropped */
    g->ecx = 4u;   /* 0x1026a57a: the value the entry loaded and the decompiler dropped */
    g->edi = COW_IMG(COW_ADDR_LIFT_1034A118);   /* 0x1026a57f: the value the entry loaded and the decompiler dropped */
    g->esi = g->eax;   /* 0x1026a584: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1026a586: the value the entry loaded and the decompiler dropped */
    cow_lift_1026a570(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->edx = (CowU32)(param_1);   /* what edx holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
