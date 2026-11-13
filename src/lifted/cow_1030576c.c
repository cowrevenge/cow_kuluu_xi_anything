/* f_0x1030576c - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1030576c (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1030576c(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    int iVar6;
    iVar2 = rd32((uint32_t)param_4);
      iVar6 = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x110))))) {
        param_4 = param_3;
        do {
          puVar5 = (CowU32)rd32((uint32_t)param_4);
          puVar4 = rd8((uint32_t)(iVar2 + iVar6 * 4));
          puVar3 = puVar4 + (int32_t)rd32((uint32_t)(param_1 + 0x5c));
          for (; puVar4 < puVar3; puVar4 = puVar4 + 2) {
            uVar1 = rd8((uint32_t)puVar5);
            puVar5 = puVar5 + 1;
            wr8((uint32_t)puVar4, uVar1);
            wr8((uint32_t)(puVar4 + 1u * (uint32_t)(1)), uVar1);
          }
          cow_bridge_102f58f5(g, COW_IMG(COW_ADDR_LIFT_103057C0), 6u, (const CowU32[]){ iVar2, iVar6, iVar2, iVar6 + 1, 1, rd32((uint32_t)(param_1 + 0x5c)) }, g->ecx, g->edx, param_5, 0u);
          param_4 = param_4 + 4u * (uint32_t)(1);
          iVar6 = iVar6 + 2;
        } while (((int32_t)(iVar6) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x110)))));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1030576c(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1030576c: push ebp */
    g->ebp = g->esp;                       /* 0x1030576d: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1030576f: push ecx */
    g->eax = param_5;   /* 0x10305770: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10305773: push ebx */
    { uint32_t A = (uint32_t)(g->eax); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10305774: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10305776: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10305777: push edi */
    g->edi = param_2;   /* 0x10305778: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x1030577b: the value the entry loaded and the decompiler dropped */
    cow_lift_1030576c(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
