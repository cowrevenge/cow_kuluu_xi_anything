/* f_0x1024a1b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1024a1b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1024a1b0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103889F0) + 4u * (uint32_t)(param_2 & 0x7f)));
      uVar4 = 0;
      uVar3 = rd32(COW_IMG(COW_ADDR_LIFT_106690C8));
      do {
        iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_103889F4));
        if ((rd32((uint32_t)(uVar3 + 0xc0)) != 0) && ((rd8((uint32_t)(uVar3 + 0xd0)) & 0x40) != 0)) {
          if (rd32((uint32_t)(uVar3 + 0xc4)) == param_1) {
            uVar4 = 1;
            wr32((uint32_t)(uVar3 + 0x78), 0);
            wr32((uint32_t)(uVar3 + 0xc0), param_3);
            iVar2 = iVar1;
          }
          else {
            wr32((uint32_t)(uVar3 + 0x78), 1);
          }
          wr32((uint32_t)(uVar3 + 0x6c), 0x96);
          wr32((uint32_t)(uVar3 + 0x74), (iVar2 * 0x1000 - rd32((uint32_t)(uVar3 + 0x70))) / 0x96);
        }
        uVar3 = uVar3 + 0xf4;
      } while (uVar3 < rd32(COW_IMG(COW_ADDR_LIFT_106690C8)) + 0x1310);
      g->eax = (CowU32)(uVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1024a1b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_2;   /* 0x1024a1b0: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_106690C8));   /* 0x1024a1b4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1024a1ba: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1024a1bb: register ebx, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x7Fu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1024a1bf: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1024a1c2: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1024a1c3: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1024a1c4: push edi */
    { uint32_t A = (uint32_t)(g->eax * 4 + COW_IMG(COW_ADDR_LIFT_103889F0) + RD); g->esi = (uint32_t)(rd32(A)); }   /* 0x1024a1c5: register esi, replayed as the entry ran it */
    g->ebp = 0u;   /* 0x1024a1cc: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0xCu) & 31u; if (c) { uint32_t a = g->esi; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->esi = (uint32_t)(r); } }; }   /* 0x1024a1ce: register esi, replayed as the entry ran it */
    cow_lift_1024a1b0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
