/* f_0x102afda0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102afda0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102afda0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    int local_4;
    local_4 = 0;
      do {
        iVar2 = 0;
        iVar3 = param_1;
        do {
          uVar1 = cow_bridge_102afce0(g, COW_IMG(COW_ADDR_LIFT_102AFDBA), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
          if ((char)uVar1 == '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar1 & 0xffffff00) & 0xffu)); return;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < 4);
        param_1 = param_1 + 0x10;
        local_4 = local_4 + 1;
      } while (local_4 < 4);
      g->eax = (CowU32)((((uint32_t)(((CowU32)local_4 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(0xff) & 0xffu))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102afda0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102afda0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102afda1: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102afda2: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102afda6: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102afda7: push edi */
    cow_lift_102afda0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
