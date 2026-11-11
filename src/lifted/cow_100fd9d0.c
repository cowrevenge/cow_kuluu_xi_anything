/* f_0x100fd9d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100fd9d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100fd9d0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    _Bool bVar3;
      
      bVar3 = 0x1f < (CowU8)rd16((uint32_t)param_1);
      if (bVar3) {
        wr16((uint32_t)param_1, rd16((uint32_t)param_1) & 0xff00);
      }
      bVar3 = !bVar3;
      if ((rd8((uint32_t)((int)param_1 + 1)) == 0) || (0x1f < rd8((uint32_t)((int)param_1 + 1)))) {
        wr16((uint32_t)param_1, (CowU8)rd16((uint32_t)param_1) + 0x100);
        bVar3 = 0;
      }
      puVar2 = (CowU32)0x103624b8;
      iVar1 = 8;
      do {
        param_1 = param_1 + 1;
        if (((rd16((uint32_t)param_1) & 0xf000) != rd16((uint32_t)puVar2)) || (rd16((uint32_t)(puVar2 + 2u * (uint32_t)(1))) <= (rd16((uint32_t)param_1) & 0xfff))) {
          wr16((uint32_t)param_1, rd16((uint32_t)puVar2));
          bVar3 = 0;
        }
        puVar2 = puVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(bVar3) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100fd9d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = param_2;   /* 0x100fd9d0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100fd9d4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100fd9d5: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100fd9d6: push esi */
    { uint32_t A = (uint32_t)(g->edx); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100fd9d7: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100fd9da: push edi */
    { g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)((uint8_t)g->ecx); }   /* 0x100fd9db: register ebx, replayed as the entry ran it */
    { g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(0x1u); }   /* 0x100fd9dd: register eax, replayed as the entry ran it */
    { uint32_t a = g->ebx; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->ebx = (uint32_t)(r); }   /* 0x100fd9df: register ebx, replayed as the entry ran it */
    cow_lift_100fd9d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
