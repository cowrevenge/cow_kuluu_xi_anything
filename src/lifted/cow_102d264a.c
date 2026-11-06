/* f_0x102d264a - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102d264a (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102d264a(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 local_8;
    uVar3 = 0;
      if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10345D40) + (rd32((uint32_t)(param_1 + 4)) * 5 + rd32((uint32_t)(param_2 + 4))) * 4)) != 0) {
        local_8 = 0;
        puVar5 = (CowU32)(param_1 + 0xc);
        iVar4 = 5;
        do {
          uVar1 = rd32((uint32_t)puVar5);
          if (uVar1 != 0) {
            local_8 = local_8 + 1;
          }
          uVar2 = rd32((uint32_t)((param_2 - param_1) + (int)puVar5));
          if (uVar1 < uVar2) {
            if (uVar1 == 0) {
              uVar3 = uVar3 + 0x100;
            }
            else {
              uVar3 = uVar3 + (uVar2 - uVar1);
            }
          }
          else if (uVar2 < uVar1) {
            if (uVar2 == 0) {
              uVar3 = uVar3 + 0x1000000;
            }
            else {
              uVar3 = uVar3 + (uVar1 - uVar2) * 0x10000;
            }
          }
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (local_8 != uVar3 >> 0x18) {
          g->eax = (CowU32)(uVar3); return;
        }
      }
      g->eax = (CowU32)(uVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102d264a(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102d264a: push ebp */
    g->ebp = g->esp;                       /* 0x102d264b: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102d264d: push ecx */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102d264e: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102d2651: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x102d2652: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edx + 0x4u); uint32_t a = g->esi; uint32_t b = (uint32_t)rd32(A); uint32_t r = (uint32_t)(a + b); g->esi = (uint32_t)(r); }   /* 0x102d2655: register esi, replayed as the entry ran it */
    g->eax = 0u;   /* 0x102d2658: the value the entry loaded and the decompiler dropped */
    cow_lift_102d264a(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
